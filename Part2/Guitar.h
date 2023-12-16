class Guitar:
    guitar_collection = []
    guitar_map = {}
    
    def __init__(self, model, brand, year, type):
        self.model = model
        self.brand = brand
        self.year = year
        self.type = type

    @classmethod
    def add_guitar(cls, guitar):
        cls.guitar_collection.append(guitar)
        cls.guitar_map[guitar.model] = guitar

    @classmethod
    def remove_guitar(cls, model):
        cls.guitar_collection = [g for g in cls.guitar_collection if g.model != model]
        if model in cls.guitar_map:
            del cls.guitar_map[model]

    @classmethod
    def sort_by_year(cls):
        cls.guitar_collection.sort(key=lambda g: g.year)

    @classmethod
    def search_by_model(cls, model):
        return next((g for g in cls.guitar_collection if g.model == model), None)

    @classmethod
    def search_by_model_in_map(cls, model):
        return cls.guitar_map.get(model, None)

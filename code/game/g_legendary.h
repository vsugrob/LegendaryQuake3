// Weapon definitions with their respective chances (must sum to 1.0)
typedef struct {
	int weapon;
	float chance;
} weaponChance_t;

typedef struct {
	char *pickup_name;
	float chance;
} itemChance_t;

#define SET_BIT(VAR,BIT)     (VAR |=(1<<BIT))
#define CLR_BIT(VAR,BIT)     (VAR &=~(1<<BIT))
#define TOGGLE_BIT(VAR,BIT)  (VAR ^=(1<<BIT))
#define GET_BIT(VAR,BIT)     ((VAR>>BIT)&1)

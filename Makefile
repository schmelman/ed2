.PHONY: clean All

All:
	@echo "----------Building project:[ Pratica1 - Debug ]----------"
	@cd "Pratica1" && "$(MAKE)" -f  "Pratica1.mk"
clean:
	@echo "----------Cleaning project:[ Pratica1 - Debug ]----------"
	@cd "Pratica1" && "$(MAKE)" -f  "Pratica1.mk" clean

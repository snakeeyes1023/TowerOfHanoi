#pragma once
class Disk
{
public:

	Disk();
	/// <summary>
	/// Créer un disk
	/// </summary>
	/// <param name="Widht">Largeur du disk</param>
	Disk(int);

	/// <summary>
	/// Afficher le disk dans la console
	/// </summary>
	void Show();

	/// <summary>
	/// Obtenir la largeur du disk
	/// </summary>
	/// <returns>Largueur</returns>
	int GetWidth();

private:
	int m_width;
};


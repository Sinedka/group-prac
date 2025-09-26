{
  description = "Qt5 minimal project with CMake";

  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";

  outputs = { self, nixpkgs }: 
    let
      system = "x86_64-linux";
      pkgs = import nixpkgs { inherit system; };
    in
    {
      devShells.${system}.default = pkgs.mkShell {
        buildInputs = with pkgs; [
          qt5.qtbase
          qt5.qtdeclarative
          cmake
          ninja
          gcc
          cmake
          pkg-config
          qt5.qtbase
          qt5.qtdeclarative
          qt5.qtquickcontrols
          qt5.qtquickcontrols2
          qt5.qtmultimedia
          qt5.qtwayland
          qt5.qttools
          ninja
          qt5.qttools
          gnumake

        ];
      };
    };
}

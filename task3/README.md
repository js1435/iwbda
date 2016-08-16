#MULTISBOL extension

This is the readme for the MULTISBOL extension to the SBOL standard.

The purpose of MULTISBOL is to represent multicellular genetic circuits in SBOL 2.0.

The MULTISBOL extension adds four new TopLevel objects: HostDefinition, TransformantDefinition, VesselDefinition and MulticellularSystemDefinition.

The purpose of HostDefinition is to represent the strain of the host organism of a TransformantDefinition object.

The purpose of TransformantDefinition is to represent a cell and all of its Modules, Components, FunctionalComponents and other objects.

The purpose of MulticellularSystemDefinition is to represent a multicellular system, i.e. any number of Transformants, any extracellular FunctionalComponents or any in vitro Modules all in an extracellular medium contained in a Vessel.

The purpose of VesselDefinition is to represent what a MulticellularSystem is contained in. This could be a chamber within microfluidic device, and the user could refer to the design specifications of the microfluidic chip.
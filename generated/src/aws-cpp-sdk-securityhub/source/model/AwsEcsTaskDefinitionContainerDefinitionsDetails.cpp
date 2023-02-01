/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEcsTaskDefinitionContainerDefinitionsDetails::AwsEcsTaskDefinitionContainerDefinitionsDetails() : 
    m_commandHasBeenSet(false),
    m_cpu(0),
    m_cpuHasBeenSet(false),
    m_dependsOnHasBeenSet(false),
    m_disableNetworking(false),
    m_disableNetworkingHasBeenSet(false),
    m_dnsSearchDomainsHasBeenSet(false),
    m_dnsServersHasBeenSet(false),
    m_dockerLabelsHasBeenSet(false),
    m_dockerSecurityOptionsHasBeenSet(false),
    m_entryPointHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_environmentFilesHasBeenSet(false),
    m_essential(false),
    m_essentialHasBeenSet(false),
    m_extraHostsHasBeenSet(false),
    m_firelensConfigurationHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_interactive(false),
    m_interactiveHasBeenSet(false),
    m_linksHasBeenSet(false),
    m_linuxParametersHasBeenSet(false),
    m_logConfigurationHasBeenSet(false),
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_memoryReservation(0),
    m_memoryReservationHasBeenSet(false),
    m_mountPointsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_portMappingsHasBeenSet(false),
    m_privileged(false),
    m_privilegedHasBeenSet(false),
    m_pseudoTerminal(false),
    m_pseudoTerminalHasBeenSet(false),
    m_readonlyRootFilesystem(false),
    m_readonlyRootFilesystemHasBeenSet(false),
    m_repositoryCredentialsHasBeenSet(false),
    m_resourceRequirementsHasBeenSet(false),
    m_secretsHasBeenSet(false),
    m_startTimeout(0),
    m_startTimeoutHasBeenSet(false),
    m_stopTimeout(0),
    m_stopTimeoutHasBeenSet(false),
    m_systemControlsHasBeenSet(false),
    m_ulimitsHasBeenSet(false),
    m_userHasBeenSet(false),
    m_volumesFromHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false)
{
}

AwsEcsTaskDefinitionContainerDefinitionsDetails::AwsEcsTaskDefinitionContainerDefinitionsDetails(JsonView jsonValue) : 
    m_commandHasBeenSet(false),
    m_cpu(0),
    m_cpuHasBeenSet(false),
    m_dependsOnHasBeenSet(false),
    m_disableNetworking(false),
    m_disableNetworkingHasBeenSet(false),
    m_dnsSearchDomainsHasBeenSet(false),
    m_dnsServersHasBeenSet(false),
    m_dockerLabelsHasBeenSet(false),
    m_dockerSecurityOptionsHasBeenSet(false),
    m_entryPointHasBeenSet(false),
    m_environmentHasBeenSet(false),
    m_environmentFilesHasBeenSet(false),
    m_essential(false),
    m_essentialHasBeenSet(false),
    m_extraHostsHasBeenSet(false),
    m_firelensConfigurationHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_interactive(false),
    m_interactiveHasBeenSet(false),
    m_linksHasBeenSet(false),
    m_linuxParametersHasBeenSet(false),
    m_logConfigurationHasBeenSet(false),
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_memoryReservation(0),
    m_memoryReservationHasBeenSet(false),
    m_mountPointsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_portMappingsHasBeenSet(false),
    m_privileged(false),
    m_privilegedHasBeenSet(false),
    m_pseudoTerminal(false),
    m_pseudoTerminalHasBeenSet(false),
    m_readonlyRootFilesystem(false),
    m_readonlyRootFilesystemHasBeenSet(false),
    m_repositoryCredentialsHasBeenSet(false),
    m_resourceRequirementsHasBeenSet(false),
    m_secretsHasBeenSet(false),
    m_startTimeout(0),
    m_startTimeoutHasBeenSet(false),
    m_stopTimeout(0),
    m_stopTimeoutHasBeenSet(false),
    m_systemControlsHasBeenSet(false),
    m_ulimitsHasBeenSet(false),
    m_userHasBeenSet(false),
    m_volumesFromHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcsTaskDefinitionContainerDefinitionsDetails& AwsEcsTaskDefinitionContainerDefinitionsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Command"))
  {
    Aws::Utils::Array<JsonView> commandJsonList = jsonValue.GetArray("Command");
    for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
    {
      m_command.push_back(commandJsonList[commandIndex].AsString());
    }
    m_commandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Cpu"))
  {
    m_cpu = jsonValue.GetInteger("Cpu");

    m_cpuHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DependsOn"))
  {
    Aws::Utils::Array<JsonView> dependsOnJsonList = jsonValue.GetArray("DependsOn");
    for(unsigned dependsOnIndex = 0; dependsOnIndex < dependsOnJsonList.GetLength(); ++dependsOnIndex)
    {
      m_dependsOn.push_back(dependsOnJsonList[dependsOnIndex].AsObject());
    }
    m_dependsOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisableNetworking"))
  {
    m_disableNetworking = jsonValue.GetBool("DisableNetworking");

    m_disableNetworkingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsSearchDomains"))
  {
    Aws::Utils::Array<JsonView> dnsSearchDomainsJsonList = jsonValue.GetArray("DnsSearchDomains");
    for(unsigned dnsSearchDomainsIndex = 0; dnsSearchDomainsIndex < dnsSearchDomainsJsonList.GetLength(); ++dnsSearchDomainsIndex)
    {
      m_dnsSearchDomains.push_back(dnsSearchDomainsJsonList[dnsSearchDomainsIndex].AsString());
    }
    m_dnsSearchDomainsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsServers"))
  {
    Aws::Utils::Array<JsonView> dnsServersJsonList = jsonValue.GetArray("DnsServers");
    for(unsigned dnsServersIndex = 0; dnsServersIndex < dnsServersJsonList.GetLength(); ++dnsServersIndex)
    {
      m_dnsServers.push_back(dnsServersJsonList[dnsServersIndex].AsString());
    }
    m_dnsServersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DockerLabels"))
  {
    Aws::Map<Aws::String, JsonView> dockerLabelsJsonMap = jsonValue.GetObject("DockerLabels").GetAllObjects();
    for(auto& dockerLabelsItem : dockerLabelsJsonMap)
    {
      m_dockerLabels[dockerLabelsItem.first] = dockerLabelsItem.second.AsString();
    }
    m_dockerLabelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DockerSecurityOptions"))
  {
    Aws::Utils::Array<JsonView> dockerSecurityOptionsJsonList = jsonValue.GetArray("DockerSecurityOptions");
    for(unsigned dockerSecurityOptionsIndex = 0; dockerSecurityOptionsIndex < dockerSecurityOptionsJsonList.GetLength(); ++dockerSecurityOptionsIndex)
    {
      m_dockerSecurityOptions.push_back(dockerSecurityOptionsJsonList[dockerSecurityOptionsIndex].AsString());
    }
    m_dockerSecurityOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntryPoint"))
  {
    Aws::Utils::Array<JsonView> entryPointJsonList = jsonValue.GetArray("EntryPoint");
    for(unsigned entryPointIndex = 0; entryPointIndex < entryPointJsonList.GetLength(); ++entryPointIndex)
    {
      m_entryPoint.push_back(entryPointJsonList[entryPointIndex].AsString());
    }
    m_entryPointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Environment"))
  {
    Aws::Utils::Array<JsonView> environmentJsonList = jsonValue.GetArray("Environment");
    for(unsigned environmentIndex = 0; environmentIndex < environmentJsonList.GetLength(); ++environmentIndex)
    {
      m_environment.push_back(environmentJsonList[environmentIndex].AsObject());
    }
    m_environmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnvironmentFiles"))
  {
    Aws::Utils::Array<JsonView> environmentFilesJsonList = jsonValue.GetArray("EnvironmentFiles");
    for(unsigned environmentFilesIndex = 0; environmentFilesIndex < environmentFilesJsonList.GetLength(); ++environmentFilesIndex)
    {
      m_environmentFiles.push_back(environmentFilesJsonList[environmentFilesIndex].AsObject());
    }
    m_environmentFilesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Essential"))
  {
    m_essential = jsonValue.GetBool("Essential");

    m_essentialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExtraHosts"))
  {
    Aws::Utils::Array<JsonView> extraHostsJsonList = jsonValue.GetArray("ExtraHosts");
    for(unsigned extraHostsIndex = 0; extraHostsIndex < extraHostsJsonList.GetLength(); ++extraHostsIndex)
    {
      m_extraHosts.push_back(extraHostsJsonList[extraHostsIndex].AsObject());
    }
    m_extraHostsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirelensConfiguration"))
  {
    m_firelensConfiguration = jsonValue.GetObject("FirelensConfiguration");

    m_firelensConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthCheck"))
  {
    m_healthCheck = jsonValue.GetObject("HealthCheck");

    m_healthCheckHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Hostname"))
  {
    m_hostname = jsonValue.GetString("Hostname");

    m_hostnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Image"))
  {
    m_image = jsonValue.GetString("Image");

    m_imageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Interactive"))
  {
    m_interactive = jsonValue.GetBool("Interactive");

    m_interactiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Links"))
  {
    Aws::Utils::Array<JsonView> linksJsonList = jsonValue.GetArray("Links");
    for(unsigned linksIndex = 0; linksIndex < linksJsonList.GetLength(); ++linksIndex)
    {
      m_links.push_back(linksJsonList[linksIndex].AsString());
    }
    m_linksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LinuxParameters"))
  {
    m_linuxParameters = jsonValue.GetObject("LinuxParameters");

    m_linuxParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogConfiguration"))
  {
    m_logConfiguration = jsonValue.GetObject("LogConfiguration");

    m_logConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Memory"))
  {
    m_memory = jsonValue.GetInteger("Memory");

    m_memoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemoryReservation"))
  {
    m_memoryReservation = jsonValue.GetInteger("MemoryReservation");

    m_memoryReservationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MountPoints"))
  {
    Aws::Utils::Array<JsonView> mountPointsJsonList = jsonValue.GetArray("MountPoints");
    for(unsigned mountPointsIndex = 0; mountPointsIndex < mountPointsJsonList.GetLength(); ++mountPointsIndex)
    {
      m_mountPoints.push_back(mountPointsJsonList[mountPointsIndex].AsObject());
    }
    m_mountPointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PortMappings"))
  {
    Aws::Utils::Array<JsonView> portMappingsJsonList = jsonValue.GetArray("PortMappings");
    for(unsigned portMappingsIndex = 0; portMappingsIndex < portMappingsJsonList.GetLength(); ++portMappingsIndex)
    {
      m_portMappings.push_back(portMappingsJsonList[portMappingsIndex].AsObject());
    }
    m_portMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Privileged"))
  {
    m_privileged = jsonValue.GetBool("Privileged");

    m_privilegedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PseudoTerminal"))
  {
    m_pseudoTerminal = jsonValue.GetBool("PseudoTerminal");

    m_pseudoTerminalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadonlyRootFilesystem"))
  {
    m_readonlyRootFilesystem = jsonValue.GetBool("ReadonlyRootFilesystem");

    m_readonlyRootFilesystemHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RepositoryCredentials"))
  {
    m_repositoryCredentials = jsonValue.GetObject("RepositoryCredentials");

    m_repositoryCredentialsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceRequirements"))
  {
    Aws::Utils::Array<JsonView> resourceRequirementsJsonList = jsonValue.GetArray("ResourceRequirements");
    for(unsigned resourceRequirementsIndex = 0; resourceRequirementsIndex < resourceRequirementsJsonList.GetLength(); ++resourceRequirementsIndex)
    {
      m_resourceRequirements.push_back(resourceRequirementsJsonList[resourceRequirementsIndex].AsObject());
    }
    m_resourceRequirementsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Secrets"))
  {
    Aws::Utils::Array<JsonView> secretsJsonList = jsonValue.GetArray("Secrets");
    for(unsigned secretsIndex = 0; secretsIndex < secretsJsonList.GetLength(); ++secretsIndex)
    {
      m_secrets.push_back(secretsJsonList[secretsIndex].AsObject());
    }
    m_secretsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTimeout"))
  {
    m_startTimeout = jsonValue.GetInteger("StartTimeout");

    m_startTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StopTimeout"))
  {
    m_stopTimeout = jsonValue.GetInteger("StopTimeout");

    m_stopTimeoutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SystemControls"))
  {
    Aws::Utils::Array<JsonView> systemControlsJsonList = jsonValue.GetArray("SystemControls");
    for(unsigned systemControlsIndex = 0; systemControlsIndex < systemControlsJsonList.GetLength(); ++systemControlsIndex)
    {
      m_systemControls.push_back(systemControlsJsonList[systemControlsIndex].AsObject());
    }
    m_systemControlsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ulimits"))
  {
    Aws::Utils::Array<JsonView> ulimitsJsonList = jsonValue.GetArray("Ulimits");
    for(unsigned ulimitsIndex = 0; ulimitsIndex < ulimitsJsonList.GetLength(); ++ulimitsIndex)
    {
      m_ulimits.push_back(ulimitsJsonList[ulimitsIndex].AsObject());
    }
    m_ulimitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("User"))
  {
    m_user = jsonValue.GetString("User");

    m_userHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumesFrom"))
  {
    Aws::Utils::Array<JsonView> volumesFromJsonList = jsonValue.GetArray("VolumesFrom");
    for(unsigned volumesFromIndex = 0; volumesFromIndex < volumesFromJsonList.GetLength(); ++volumesFromIndex)
    {
      m_volumesFrom.push_back(volumesFromJsonList[volumesFromIndex].AsObject());
    }
    m_volumesFromHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkingDirectory"))
  {
    m_workingDirectory = jsonValue.GetString("WorkingDirectory");

    m_workingDirectoryHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcsTaskDefinitionContainerDefinitionsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_commandHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> commandJsonList(m_command.size());
   for(unsigned commandIndex = 0; commandIndex < commandJsonList.GetLength(); ++commandIndex)
   {
     commandJsonList[commandIndex].AsString(m_command[commandIndex]);
   }
   payload.WithArray("Command", std::move(commandJsonList));

  }

  if(m_cpuHasBeenSet)
  {
   payload.WithInteger("Cpu", m_cpu);

  }

  if(m_dependsOnHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dependsOnJsonList(m_dependsOn.size());
   for(unsigned dependsOnIndex = 0; dependsOnIndex < dependsOnJsonList.GetLength(); ++dependsOnIndex)
   {
     dependsOnJsonList[dependsOnIndex].AsObject(m_dependsOn[dependsOnIndex].Jsonize());
   }
   payload.WithArray("DependsOn", std::move(dependsOnJsonList));

  }

  if(m_disableNetworkingHasBeenSet)
  {
   payload.WithBool("DisableNetworking", m_disableNetworking);

  }

  if(m_dnsSearchDomainsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dnsSearchDomainsJsonList(m_dnsSearchDomains.size());
   for(unsigned dnsSearchDomainsIndex = 0; dnsSearchDomainsIndex < dnsSearchDomainsJsonList.GetLength(); ++dnsSearchDomainsIndex)
   {
     dnsSearchDomainsJsonList[dnsSearchDomainsIndex].AsString(m_dnsSearchDomains[dnsSearchDomainsIndex]);
   }
   payload.WithArray("DnsSearchDomains", std::move(dnsSearchDomainsJsonList));

  }

  if(m_dnsServersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dnsServersJsonList(m_dnsServers.size());
   for(unsigned dnsServersIndex = 0; dnsServersIndex < dnsServersJsonList.GetLength(); ++dnsServersIndex)
   {
     dnsServersJsonList[dnsServersIndex].AsString(m_dnsServers[dnsServersIndex]);
   }
   payload.WithArray("DnsServers", std::move(dnsServersJsonList));

  }

  if(m_dockerLabelsHasBeenSet)
  {
   JsonValue dockerLabelsJsonMap;
   for(auto& dockerLabelsItem : m_dockerLabels)
   {
     dockerLabelsJsonMap.WithString(dockerLabelsItem.first, dockerLabelsItem.second);
   }
   payload.WithObject("DockerLabels", std::move(dockerLabelsJsonMap));

  }

  if(m_dockerSecurityOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dockerSecurityOptionsJsonList(m_dockerSecurityOptions.size());
   for(unsigned dockerSecurityOptionsIndex = 0; dockerSecurityOptionsIndex < dockerSecurityOptionsJsonList.GetLength(); ++dockerSecurityOptionsIndex)
   {
     dockerSecurityOptionsJsonList[dockerSecurityOptionsIndex].AsString(m_dockerSecurityOptions[dockerSecurityOptionsIndex]);
   }
   payload.WithArray("DockerSecurityOptions", std::move(dockerSecurityOptionsJsonList));

  }

  if(m_entryPointHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> entryPointJsonList(m_entryPoint.size());
   for(unsigned entryPointIndex = 0; entryPointIndex < entryPointJsonList.GetLength(); ++entryPointIndex)
   {
     entryPointJsonList[entryPointIndex].AsString(m_entryPoint[entryPointIndex]);
   }
   payload.WithArray("EntryPoint", std::move(entryPointJsonList));

  }

  if(m_environmentHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> environmentJsonList(m_environment.size());
   for(unsigned environmentIndex = 0; environmentIndex < environmentJsonList.GetLength(); ++environmentIndex)
   {
     environmentJsonList[environmentIndex].AsObject(m_environment[environmentIndex].Jsonize());
   }
   payload.WithArray("Environment", std::move(environmentJsonList));

  }

  if(m_environmentFilesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> environmentFilesJsonList(m_environmentFiles.size());
   for(unsigned environmentFilesIndex = 0; environmentFilesIndex < environmentFilesJsonList.GetLength(); ++environmentFilesIndex)
   {
     environmentFilesJsonList[environmentFilesIndex].AsObject(m_environmentFiles[environmentFilesIndex].Jsonize());
   }
   payload.WithArray("EnvironmentFiles", std::move(environmentFilesJsonList));

  }

  if(m_essentialHasBeenSet)
  {
   payload.WithBool("Essential", m_essential);

  }

  if(m_extraHostsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> extraHostsJsonList(m_extraHosts.size());
   for(unsigned extraHostsIndex = 0; extraHostsIndex < extraHostsJsonList.GetLength(); ++extraHostsIndex)
   {
     extraHostsJsonList[extraHostsIndex].AsObject(m_extraHosts[extraHostsIndex].Jsonize());
   }
   payload.WithArray("ExtraHosts", std::move(extraHostsJsonList));

  }

  if(m_firelensConfigurationHasBeenSet)
  {
   payload.WithObject("FirelensConfiguration", m_firelensConfiguration.Jsonize());

  }

  if(m_healthCheckHasBeenSet)
  {
   payload.WithObject("HealthCheck", m_healthCheck.Jsonize());

  }

  if(m_hostnameHasBeenSet)
  {
   payload.WithString("Hostname", m_hostname);

  }

  if(m_imageHasBeenSet)
  {
   payload.WithString("Image", m_image);

  }

  if(m_interactiveHasBeenSet)
  {
   payload.WithBool("Interactive", m_interactive);

  }

  if(m_linksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> linksJsonList(m_links.size());
   for(unsigned linksIndex = 0; linksIndex < linksJsonList.GetLength(); ++linksIndex)
   {
     linksJsonList[linksIndex].AsString(m_links[linksIndex]);
   }
   payload.WithArray("Links", std::move(linksJsonList));

  }

  if(m_linuxParametersHasBeenSet)
  {
   payload.WithObject("LinuxParameters", m_linuxParameters.Jsonize());

  }

  if(m_logConfigurationHasBeenSet)
  {
   payload.WithObject("LogConfiguration", m_logConfiguration.Jsonize());

  }

  if(m_memoryHasBeenSet)
  {
   payload.WithInteger("Memory", m_memory);

  }

  if(m_memoryReservationHasBeenSet)
  {
   payload.WithInteger("MemoryReservation", m_memoryReservation);

  }

  if(m_mountPointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mountPointsJsonList(m_mountPoints.size());
   for(unsigned mountPointsIndex = 0; mountPointsIndex < mountPointsJsonList.GetLength(); ++mountPointsIndex)
   {
     mountPointsJsonList[mountPointsIndex].AsObject(m_mountPoints[mountPointsIndex].Jsonize());
   }
   payload.WithArray("MountPoints", std::move(mountPointsJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_portMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> portMappingsJsonList(m_portMappings.size());
   for(unsigned portMappingsIndex = 0; portMappingsIndex < portMappingsJsonList.GetLength(); ++portMappingsIndex)
   {
     portMappingsJsonList[portMappingsIndex].AsObject(m_portMappings[portMappingsIndex].Jsonize());
   }
   payload.WithArray("PortMappings", std::move(portMappingsJsonList));

  }

  if(m_privilegedHasBeenSet)
  {
   payload.WithBool("Privileged", m_privileged);

  }

  if(m_pseudoTerminalHasBeenSet)
  {
   payload.WithBool("PseudoTerminal", m_pseudoTerminal);

  }

  if(m_readonlyRootFilesystemHasBeenSet)
  {
   payload.WithBool("ReadonlyRootFilesystem", m_readonlyRootFilesystem);

  }

  if(m_repositoryCredentialsHasBeenSet)
  {
   payload.WithObject("RepositoryCredentials", m_repositoryCredentials.Jsonize());

  }

  if(m_resourceRequirementsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceRequirementsJsonList(m_resourceRequirements.size());
   for(unsigned resourceRequirementsIndex = 0; resourceRequirementsIndex < resourceRequirementsJsonList.GetLength(); ++resourceRequirementsIndex)
   {
     resourceRequirementsJsonList[resourceRequirementsIndex].AsObject(m_resourceRequirements[resourceRequirementsIndex].Jsonize());
   }
   payload.WithArray("ResourceRequirements", std::move(resourceRequirementsJsonList));

  }

  if(m_secretsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> secretsJsonList(m_secrets.size());
   for(unsigned secretsIndex = 0; secretsIndex < secretsJsonList.GetLength(); ++secretsIndex)
   {
     secretsJsonList[secretsIndex].AsObject(m_secrets[secretsIndex].Jsonize());
   }
   payload.WithArray("Secrets", std::move(secretsJsonList));

  }

  if(m_startTimeoutHasBeenSet)
  {
   payload.WithInteger("StartTimeout", m_startTimeout);

  }

  if(m_stopTimeoutHasBeenSet)
  {
   payload.WithInteger("StopTimeout", m_stopTimeout);

  }

  if(m_systemControlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> systemControlsJsonList(m_systemControls.size());
   for(unsigned systemControlsIndex = 0; systemControlsIndex < systemControlsJsonList.GetLength(); ++systemControlsIndex)
   {
     systemControlsJsonList[systemControlsIndex].AsObject(m_systemControls[systemControlsIndex].Jsonize());
   }
   payload.WithArray("SystemControls", std::move(systemControlsJsonList));

  }

  if(m_ulimitsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ulimitsJsonList(m_ulimits.size());
   for(unsigned ulimitsIndex = 0; ulimitsIndex < ulimitsJsonList.GetLength(); ++ulimitsIndex)
   {
     ulimitsJsonList[ulimitsIndex].AsObject(m_ulimits[ulimitsIndex].Jsonize());
   }
   payload.WithArray("Ulimits", std::move(ulimitsJsonList));

  }

  if(m_userHasBeenSet)
  {
   payload.WithString("User", m_user);

  }

  if(m_volumesFromHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> volumesFromJsonList(m_volumesFrom.size());
   for(unsigned volumesFromIndex = 0; volumesFromIndex < volumesFromJsonList.GetLength(); ++volumesFromIndex)
   {
     volumesFromJsonList[volumesFromIndex].AsObject(m_volumesFrom[volumesFromIndex].Jsonize());
   }
   payload.WithArray("VolumesFrom", std::move(volumesFromJsonList));

  }

  if(m_workingDirectoryHasBeenSet)
  {
   payload.WithString("WorkingDirectory", m_workingDirectory);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

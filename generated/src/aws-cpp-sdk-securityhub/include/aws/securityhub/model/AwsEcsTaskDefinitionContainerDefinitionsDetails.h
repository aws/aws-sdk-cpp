/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsEnvironmentDetails.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails.h>
#include <aws/securityhub/model/AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A container definition that describes a container in the task.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionContainerDefinitionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionContainerDefinitionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsDetails() = default;
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The command that is passed to the container.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const { return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    template<typename CommandT = Aws::Vector<Aws::String>>
    void SetCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command = std::forward<CommandT>(value); }
    template<typename CommandT = Aws::Vector<Aws::String>>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    template<typename CommandT = Aws::String>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& AddCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command.emplace_back(std::forward<CommandT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of CPU units reserved for the container.</p>
     */
    inline int GetCpu() const { return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    inline void SetCpu(int value) { m_cpuHasBeenSet = true; m_cpu = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithCpu(int value) { SetCpu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dependencies that are defined for container startup and shutdown.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails>& GetDependsOn() const { return m_dependsOn; }
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }
    template<typename DependsOnT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails>>
    void SetDependsOn(DependsOnT&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::forward<DependsOnT>(value); }
    template<typename DependsOnT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails>>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithDependsOn(DependsOnT&& value) { SetDependsOn(std::forward<DependsOnT>(value)); return *this;}
    template<typename DependsOnT = AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& AddDependsOn(DependsOnT&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.emplace_back(std::forward<DependsOnT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether to disable networking within the container.</p>
     */
    inline bool GetDisableNetworking() const { return m_disableNetworking; }
    inline bool DisableNetworkingHasBeenSet() const { return m_disableNetworkingHasBeenSet; }
    inline void SetDisableNetworking(bool value) { m_disableNetworkingHasBeenSet = true; m_disableNetworking = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithDisableNetworking(bool value) { SetDisableNetworking(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of DNS search domains that are presented to the container.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsSearchDomains() const { return m_dnsSearchDomains; }
    inline bool DnsSearchDomainsHasBeenSet() const { return m_dnsSearchDomainsHasBeenSet; }
    template<typename DnsSearchDomainsT = Aws::Vector<Aws::String>>
    void SetDnsSearchDomains(DnsSearchDomainsT&& value) { m_dnsSearchDomainsHasBeenSet = true; m_dnsSearchDomains = std::forward<DnsSearchDomainsT>(value); }
    template<typename DnsSearchDomainsT = Aws::Vector<Aws::String>>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithDnsSearchDomains(DnsSearchDomainsT&& value) { SetDnsSearchDomains(std::forward<DnsSearchDomainsT>(value)); return *this;}
    template<typename DnsSearchDomainsT = Aws::String>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& AddDnsSearchDomains(DnsSearchDomainsT&& value) { m_dnsSearchDomainsHasBeenSet = true; m_dnsSearchDomains.emplace_back(std::forward<DnsSearchDomainsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of DNS servers that are presented to the container.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsServers() const { return m_dnsServers; }
    inline bool DnsServersHasBeenSet() const { return m_dnsServersHasBeenSet; }
    template<typename DnsServersT = Aws::Vector<Aws::String>>
    void SetDnsServers(DnsServersT&& value) { m_dnsServersHasBeenSet = true; m_dnsServers = std::forward<DnsServersT>(value); }
    template<typename DnsServersT = Aws::Vector<Aws::String>>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithDnsServers(DnsServersT&& value) { SetDnsServers(std::forward<DnsServersT>(value)); return *this;}
    template<typename DnsServersT = Aws::String>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& AddDnsServers(DnsServersT&& value) { m_dnsServersHasBeenSet = true; m_dnsServers.emplace_back(std::forward<DnsServersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A key-value map of labels to add to the container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDockerLabels() const { return m_dockerLabels; }
    inline bool DockerLabelsHasBeenSet() const { return m_dockerLabelsHasBeenSet; }
    template<typename DockerLabelsT = Aws::Map<Aws::String, Aws::String>>
    void SetDockerLabels(DockerLabelsT&& value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels = std::forward<DockerLabelsT>(value); }
    template<typename DockerLabelsT = Aws::Map<Aws::String, Aws::String>>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithDockerLabels(DockerLabelsT&& value) { SetDockerLabels(std::forward<DockerLabelsT>(value)); return *this;}
    template<typename DockerLabelsKeyT = Aws::String, typename DockerLabelsValueT = Aws::String>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& AddDockerLabels(DockerLabelsKeyT&& key, DockerLabelsValueT&& value) {
      m_dockerLabelsHasBeenSet = true; m_dockerLabels.emplace(std::forward<DockerLabelsKeyT>(key), std::forward<DockerLabelsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of strings to provide custom labels for SELinux and AppArmor
     * multi-level security systems.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDockerSecurityOptions() const { return m_dockerSecurityOptions; }
    inline bool DockerSecurityOptionsHasBeenSet() const { return m_dockerSecurityOptionsHasBeenSet; }
    template<typename DockerSecurityOptionsT = Aws::Vector<Aws::String>>
    void SetDockerSecurityOptions(DockerSecurityOptionsT&& value) { m_dockerSecurityOptionsHasBeenSet = true; m_dockerSecurityOptions = std::forward<DockerSecurityOptionsT>(value); }
    template<typename DockerSecurityOptionsT = Aws::Vector<Aws::String>>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithDockerSecurityOptions(DockerSecurityOptionsT&& value) { SetDockerSecurityOptions(std::forward<DockerSecurityOptionsT>(value)); return *this;}
    template<typename DockerSecurityOptionsT = Aws::String>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& AddDockerSecurityOptions(DockerSecurityOptionsT&& value) { m_dockerSecurityOptionsHasBeenSet = true; m_dockerSecurityOptions.emplace_back(std::forward<DockerSecurityOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The entry point that is passed to the container.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntryPoint() const { return m_entryPoint; }
    inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }
    template<typename EntryPointT = Aws::Vector<Aws::String>>
    void SetEntryPoint(EntryPointT&& value) { m_entryPointHasBeenSet = true; m_entryPoint = std::forward<EntryPointT>(value); }
    template<typename EntryPointT = Aws::Vector<Aws::String>>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithEntryPoint(EntryPointT&& value) { SetEntryPoint(std::forward<EntryPointT>(value)); return *this;}
    template<typename EntryPointT = Aws::String>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& AddEntryPoint(EntryPointT&& value) { m_entryPointHasBeenSet = true; m_entryPoint.emplace_back(std::forward<EntryPointT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The environment variables to pass to a container.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsEnvironmentDetails>& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsEnvironmentDetails>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsEnvironmentDetails>>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentT = AwsEcsTaskDefinitionContainerDefinitionsEnvironmentDetails>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& AddEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment.emplace_back(std::forward<EnvironmentT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of files containing the environment variables to pass to a
     * container.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails>& GetEnvironmentFiles() const { return m_environmentFiles; }
    inline bool EnvironmentFilesHasBeenSet() const { return m_environmentFilesHasBeenSet; }
    template<typename EnvironmentFilesT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails>>
    void SetEnvironmentFiles(EnvironmentFilesT&& value) { m_environmentFilesHasBeenSet = true; m_environmentFiles = std::forward<EnvironmentFilesT>(value); }
    template<typename EnvironmentFilesT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails>>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithEnvironmentFiles(EnvironmentFilesT&& value) { SetEnvironmentFiles(std::forward<EnvironmentFilesT>(value)); return *this;}
    template<typename EnvironmentFilesT = AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& AddEnvironmentFiles(EnvironmentFilesT&& value) { m_environmentFilesHasBeenSet = true; m_environmentFiles.emplace_back(std::forward<EnvironmentFilesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether the container is essential. All tasks must have at least one
     * essential container.</p>
     */
    inline bool GetEssential() const { return m_essential; }
    inline bool EssentialHasBeenSet() const { return m_essentialHasBeenSet; }
    inline void SetEssential(bool value) { m_essentialHasBeenSet = true; m_essential = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithEssential(bool value) { SetEssential(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of hostnames and IP address mappings to append to the
     * <b>/etc/hosts</b> file on the container.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails>& GetExtraHosts() const { return m_extraHosts; }
    inline bool ExtraHostsHasBeenSet() const { return m_extraHostsHasBeenSet; }
    template<typename ExtraHostsT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails>>
    void SetExtraHosts(ExtraHostsT&& value) { m_extraHostsHasBeenSet = true; m_extraHosts = std::forward<ExtraHostsT>(value); }
    template<typename ExtraHostsT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails>>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithExtraHosts(ExtraHostsT&& value) { SetExtraHosts(std::forward<ExtraHostsT>(value)); return *this;}
    template<typename ExtraHostsT = AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& AddExtraHosts(ExtraHostsT&& value) { m_extraHostsHasBeenSet = true; m_extraHosts.emplace_back(std::forward<ExtraHostsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The FireLens configuration for the container. Specifies and configures a log
     * router for container logs.</p>
     */
    inline const AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails& GetFirelensConfiguration() const { return m_firelensConfiguration; }
    inline bool FirelensConfigurationHasBeenSet() const { return m_firelensConfigurationHasBeenSet; }
    template<typename FirelensConfigurationT = AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails>
    void SetFirelensConfiguration(FirelensConfigurationT&& value) { m_firelensConfigurationHasBeenSet = true; m_firelensConfiguration = std::forward<FirelensConfigurationT>(value); }
    template<typename FirelensConfigurationT = AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithFirelensConfiguration(FirelensConfigurationT&& value) { SetFirelensConfiguration(std::forward<FirelensConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container health check command and associated configuration parameters
     * for the container.</p>
     */
    inline const AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails& GetHealthCheck() const { return m_healthCheck; }
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }
    template<typename HealthCheckT = AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails>
    void SetHealthCheck(HealthCheckT&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::forward<HealthCheckT>(value); }
    template<typename HealthCheckT = AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithHealthCheck(HealthCheckT&& value) { SetHealthCheck(std::forward<HealthCheckT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hostname to use for the container.</p>
     */
    inline const Aws::String& GetHostname() const { return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    template<typename HostnameT = Aws::String>
    void SetHostname(HostnameT&& value) { m_hostnameHasBeenSet = true; m_hostname = std::forward<HostnameT>(value); }
    template<typename HostnameT = Aws::String>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithHostname(HostnameT&& value) { SetHostname(std::forward<HostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image used to start the container.</p>
     */
    inline const Aws::String& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = Aws::String>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = Aws::String>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to true, then containerized applications can be deployed that require
     * <code>stdin</code> or a <code>tty</code> to be allocated.</p>
     */
    inline bool GetInteractive() const { return m_interactive; }
    inline bool InteractiveHasBeenSet() const { return m_interactiveHasBeenSet; }
    inline void SetInteractive(bool value) { m_interactiveHasBeenSet = true; m_interactive = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithInteractive(bool value) { SetInteractive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of links for the container in the form <code>
     * <i>container_name</i>:<i>alias</i> </code>. Allows containers to communicate
     * with each other without the need for port mappings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLinks() const { return m_links; }
    inline bool LinksHasBeenSet() const { return m_linksHasBeenSet; }
    template<typename LinksT = Aws::Vector<Aws::String>>
    void SetLinks(LinksT&& value) { m_linksHasBeenSet = true; m_links = std::forward<LinksT>(value); }
    template<typename LinksT = Aws::Vector<Aws::String>>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithLinks(LinksT&& value) { SetLinks(std::forward<LinksT>(value)); return *this;}
    template<typename LinksT = Aws::String>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& AddLinks(LinksT&& value) { m_linksHasBeenSet = true; m_links.emplace_back(std::forward<LinksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Linux-specific modifications that are applied to the container, such as Linux
     * kernel capabilities.</p>
     */
    inline const AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& GetLinuxParameters() const { return m_linuxParameters; }
    inline bool LinuxParametersHasBeenSet() const { return m_linuxParametersHasBeenSet; }
    template<typename LinuxParametersT = AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails>
    void SetLinuxParameters(LinuxParametersT&& value) { m_linuxParametersHasBeenSet = true; m_linuxParameters = std::forward<LinuxParametersT>(value); }
    template<typename LinuxParametersT = AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithLinuxParameters(LinuxParametersT&& value) { SetLinuxParameters(std::forward<LinuxParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log configuration specification for the container.</p>
     */
    inline const AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& GetLogConfiguration() const { return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    template<typename LogConfigurationT = AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails>
    void SetLogConfiguration(LogConfigurationT&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::forward<LogConfigurationT>(value); }
    template<typename LogConfigurationT = AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithLogConfiguration(LogConfigurationT&& value) { SetLogConfiguration(std::forward<LogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount (in MiB) of memory to present to the container. If the container
     * attempts to exceed the memory specified here, the container is shut down. The
     * total amount of memory reserved for all containers within a task must be lower
     * than the task memory value, if one is specified.</p>
     */
    inline int GetMemory() const { return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    inline void SetMemory(int value) { m_memoryHasBeenSet = true; m_memory = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithMemory(int value) { SetMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The soft limit (in MiB) of memory to reserve for the container.</p>
     */
    inline int GetMemoryReservation() const { return m_memoryReservation; }
    inline bool MemoryReservationHasBeenSet() const { return m_memoryReservationHasBeenSet; }
    inline void SetMemoryReservation(int value) { m_memoryReservationHasBeenSet = true; m_memoryReservation = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithMemoryReservation(int value) { SetMemoryReservation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mount points for the data volumes in the container.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails>& GetMountPoints() const { return m_mountPoints; }
    inline bool MountPointsHasBeenSet() const { return m_mountPointsHasBeenSet; }
    template<typename MountPointsT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails>>
    void SetMountPoints(MountPointsT&& value) { m_mountPointsHasBeenSet = true; m_mountPoints = std::forward<MountPointsT>(value); }
    template<typename MountPointsT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails>>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithMountPoints(MountPointsT&& value) { SetMountPoints(std::forward<MountPointsT>(value)); return *this;}
    template<typename MountPointsT = AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& AddMountPoints(MountPointsT&& value) { m_mountPointsHasBeenSet = true; m_mountPoints.emplace_back(std::forward<MountPointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the container.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of port mappings for the container.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails>& GetPortMappings() const { return m_portMappings; }
    inline bool PortMappingsHasBeenSet() const { return m_portMappingsHasBeenSet; }
    template<typename PortMappingsT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails>>
    void SetPortMappings(PortMappingsT&& value) { m_portMappingsHasBeenSet = true; m_portMappings = std::forward<PortMappingsT>(value); }
    template<typename PortMappingsT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails>>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithPortMappings(PortMappingsT&& value) { SetPortMappings(std::forward<PortMappingsT>(value)); return *this;}
    template<typename PortMappingsT = AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& AddPortMappings(PortMappingsT&& value) { m_portMappingsHasBeenSet = true; m_portMappings.emplace_back(std::forward<PortMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether the container is given elevated privileges on the host container
     * instance. The elevated privileges are similar to the root user.</p>
     */
    inline bool GetPrivileged() const { return m_privileged; }
    inline bool PrivilegedHasBeenSet() const { return m_privilegedHasBeenSet; }
    inline void SetPrivileged(bool value) { m_privilegedHasBeenSet = true; m_privileged = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithPrivileged(bool value) { SetPrivileged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to allocate a TTY to the container.</p>
     */
    inline bool GetPseudoTerminal() const { return m_pseudoTerminal; }
    inline bool PseudoTerminalHasBeenSet() const { return m_pseudoTerminalHasBeenSet; }
    inline void SetPseudoTerminal(bool value) { m_pseudoTerminalHasBeenSet = true; m_pseudoTerminal = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithPseudoTerminal(bool value) { SetPseudoTerminal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the container is given read-only access to its root file system.</p>
     */
    inline bool GetReadonlyRootFilesystem() const { return m_readonlyRootFilesystem; }
    inline bool ReadonlyRootFilesystemHasBeenSet() const { return m_readonlyRootFilesystemHasBeenSet; }
    inline void SetReadonlyRootFilesystem(bool value) { m_readonlyRootFilesystemHasBeenSet = true; m_readonlyRootFilesystem = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithReadonlyRootFilesystem(bool value) { SetReadonlyRootFilesystem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private repository authentication credentials to use.</p>
     */
    inline const AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails& GetRepositoryCredentials() const { return m_repositoryCredentials; }
    inline bool RepositoryCredentialsHasBeenSet() const { return m_repositoryCredentialsHasBeenSet; }
    template<typename RepositoryCredentialsT = AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails>
    void SetRepositoryCredentials(RepositoryCredentialsT&& value) { m_repositoryCredentialsHasBeenSet = true; m_repositoryCredentials = std::forward<RepositoryCredentialsT>(value); }
    template<typename RepositoryCredentialsT = AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithRepositoryCredentials(RepositoryCredentialsT&& value) { SetRepositoryCredentials(std::forward<RepositoryCredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type and amount of a resource to assign to a container. The only
     * supported resource is a GPU.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails>& GetResourceRequirements() const { return m_resourceRequirements; }
    inline bool ResourceRequirementsHasBeenSet() const { return m_resourceRequirementsHasBeenSet; }
    template<typename ResourceRequirementsT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails>>
    void SetResourceRequirements(ResourceRequirementsT&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = std::forward<ResourceRequirementsT>(value); }
    template<typename ResourceRequirementsT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails>>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithResourceRequirements(ResourceRequirementsT&& value) { SetResourceRequirements(std::forward<ResourceRequirementsT>(value)); return *this;}
    template<typename ResourceRequirementsT = AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& AddResourceRequirements(ResourceRequirementsT&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.emplace_back(std::forward<ResourceRequirementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The secrets to pass to the container.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails>& GetSecrets() const { return m_secrets; }
    inline bool SecretsHasBeenSet() const { return m_secretsHasBeenSet; }
    template<typename SecretsT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails>>
    void SetSecrets(SecretsT&& value) { m_secretsHasBeenSet = true; m_secrets = std::forward<SecretsT>(value); }
    template<typename SecretsT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails>>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithSecrets(SecretsT&& value) { SetSecrets(std::forward<SecretsT>(value)); return *this;}
    template<typename SecretsT = AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& AddSecrets(SecretsT&& value) { m_secretsHasBeenSet = true; m_secrets.emplace_back(std::forward<SecretsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of seconds to wait before giving up on resolving dependencies for
     * a container. </p>
     */
    inline int GetStartTimeout() const { return m_startTimeout; }
    inline bool StartTimeoutHasBeenSet() const { return m_startTimeoutHasBeenSet; }
    inline void SetStartTimeout(int value) { m_startTimeoutHasBeenSet = true; m_startTimeout = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithStartTimeout(int value) { SetStartTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds to wait before the container is stopped if it doesn't
     * shut down normally on its own.</p>
     */
    inline int GetStopTimeout() const { return m_stopTimeout; }
    inline bool StopTimeoutHasBeenSet() const { return m_stopTimeoutHasBeenSet; }
    inline void SetStopTimeout(int value) { m_stopTimeoutHasBeenSet = true; m_stopTimeout = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithStopTimeout(int value) { SetStopTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of namespaced kernel parameters to set in the container.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails>& GetSystemControls() const { return m_systemControls; }
    inline bool SystemControlsHasBeenSet() const { return m_systemControlsHasBeenSet; }
    template<typename SystemControlsT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails>>
    void SetSystemControls(SystemControlsT&& value) { m_systemControlsHasBeenSet = true; m_systemControls = std::forward<SystemControlsT>(value); }
    template<typename SystemControlsT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails>>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithSystemControls(SystemControlsT&& value) { SetSystemControls(std::forward<SystemControlsT>(value)); return *this;}
    template<typename SystemControlsT = AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& AddSystemControls(SystemControlsT&& value) { m_systemControlsHasBeenSet = true; m_systemControls.emplace_back(std::forward<SystemControlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of ulimits to set in the container. </p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails>& GetUlimits() const { return m_ulimits; }
    inline bool UlimitsHasBeenSet() const { return m_ulimitsHasBeenSet; }
    template<typename UlimitsT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails>>
    void SetUlimits(UlimitsT&& value) { m_ulimitsHasBeenSet = true; m_ulimits = std::forward<UlimitsT>(value); }
    template<typename UlimitsT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails>>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithUlimits(UlimitsT&& value) { SetUlimits(std::forward<UlimitsT>(value)); return *this;}
    template<typename UlimitsT = AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& AddUlimits(UlimitsT&& value) { m_ulimitsHasBeenSet = true; m_ulimits.emplace_back(std::forward<UlimitsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user to use inside the container.</p> <p>The value can use one of the
     * following formats.</p> <ul> <li> <p> <code> <i>user</i> </code> </p> </li> <li>
     * <p> <code> <i>user</i> </code>:<code> <i>group</i> </code> </p> </li> <li> <p>
     * <code> <i>uid</i> </code> </p> </li> <li> <p> <code> <i>uid</i> </code>:<code>
     * <i>gid</i> </code> </p> </li> <li> <p> <code> <i>user</i> </code>:<code>
     * <i>gid</i> </code> </p> </li> <li> <p> <code> <i>uid</i> </code>:<code>
     * <i>group</i> </code> </p> </li> </ul>
     */
    inline const Aws::String& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = Aws::String>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = Aws::String>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data volumes to mount from another container.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails>& GetVolumesFrom() const { return m_volumesFrom; }
    inline bool VolumesFromHasBeenSet() const { return m_volumesFromHasBeenSet; }
    template<typename VolumesFromT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails>>
    void SetVolumesFrom(VolumesFromT&& value) { m_volumesFromHasBeenSet = true; m_volumesFrom = std::forward<VolumesFromT>(value); }
    template<typename VolumesFromT = Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails>>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithVolumesFrom(VolumesFromT&& value) { SetVolumesFrom(std::forward<VolumesFromT>(value)); return *this;}
    template<typename VolumesFromT = AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& AddVolumesFrom(VolumesFromT&& value) { m_volumesFromHasBeenSet = true; m_volumesFrom.emplace_back(std::forward<VolumesFromT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The working directory in which to run commands inside the container.</p>
     */
    inline const Aws::String& GetWorkingDirectory() const { return m_workingDirectory; }
    inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }
    template<typename WorkingDirectoryT = Aws::String>
    void SetWorkingDirectory(WorkingDirectoryT&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = std::forward<WorkingDirectoryT>(value); }
    template<typename WorkingDirectoryT = Aws::String>
    AwsEcsTaskDefinitionContainerDefinitionsDetails& WithWorkingDirectory(WorkingDirectoryT&& value) { SetWorkingDirectory(std::forward<WorkingDirectoryT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;

    int m_cpu{0};
    bool m_cpuHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails> m_dependsOn;
    bool m_dependsOnHasBeenSet = false;

    bool m_disableNetworking{false};
    bool m_disableNetworkingHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsSearchDomains;
    bool m_dnsSearchDomainsHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsServers;
    bool m_dnsServersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_dockerLabels;
    bool m_dockerLabelsHasBeenSet = false;

    Aws::Vector<Aws::String> m_dockerSecurityOptions;
    bool m_dockerSecurityOptionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_entryPoint;
    bool m_entryPointHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsEnvironmentDetails> m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails> m_environmentFiles;
    bool m_environmentFilesHasBeenSet = false;

    bool m_essential{false};
    bool m_essentialHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails> m_extraHosts;
    bool m_extraHostsHasBeenSet = false;

    AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails m_firelensConfiguration;
    bool m_firelensConfigurationHasBeenSet = false;

    AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails m_healthCheck;
    bool m_healthCheckHasBeenSet = false;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    bool m_interactive{false};
    bool m_interactiveHasBeenSet = false;

    Aws::Vector<Aws::String> m_links;
    bool m_linksHasBeenSet = false;

    AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails m_linuxParameters;
    bool m_linuxParametersHasBeenSet = false;

    AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    int m_memory{0};
    bool m_memoryHasBeenSet = false;

    int m_memoryReservation{0};
    bool m_memoryReservationHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails> m_mountPoints;
    bool m_mountPointsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails> m_portMappings;
    bool m_portMappingsHasBeenSet = false;

    bool m_privileged{false};
    bool m_privilegedHasBeenSet = false;

    bool m_pseudoTerminal{false};
    bool m_pseudoTerminalHasBeenSet = false;

    bool m_readonlyRootFilesystem{false};
    bool m_readonlyRootFilesystemHasBeenSet = false;

    AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails m_repositoryCredentials;
    bool m_repositoryCredentialsHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails> m_resourceRequirements;
    bool m_resourceRequirementsHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails> m_secrets;
    bool m_secretsHasBeenSet = false;

    int m_startTimeout{0};
    bool m_startTimeoutHasBeenSet = false;

    int m_stopTimeout{0};
    bool m_stopTimeoutHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails> m_systemControls;
    bool m_systemControlsHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails> m_ulimits;
    bool m_ulimitsHasBeenSet = false;

    Aws::String m_user;
    bool m_userHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails> m_volumesFrom;
    bool m_volumesFromHasBeenSet = false;

    Aws::String m_workingDirectory;
    bool m_workingDirectoryHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

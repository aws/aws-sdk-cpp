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
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The command that is passed to the container.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of CPU units reserved for the container.</p>
     */
    inline int GetCpu() const{ return m_cpu; }
    inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
    inline void SetCpu(int value) { m_cpuHasBeenSet = true; m_cpu = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithCpu(int value) { SetCpu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dependencies that are defined for container startup and shutdown.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails>& GetDependsOn() const{ return m_dependsOn; }
    inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }
    inline void SetDependsOn(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails>& value) { m_dependsOnHasBeenSet = true; m_dependsOn = value; }
    inline void SetDependsOn(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails>&& value) { m_dependsOnHasBeenSet = true; m_dependsOn = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithDependsOn(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails>& value) { SetDependsOn(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithDependsOn(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails>&& value) { SetDependsOn(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddDependsOn(const AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddDependsOn(AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails&& value) { m_dependsOnHasBeenSet = true; m_dependsOn.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether to disable networking within the container.</p>
     */
    inline bool GetDisableNetworking() const{ return m_disableNetworking; }
    inline bool DisableNetworkingHasBeenSet() const { return m_disableNetworkingHasBeenSet; }
    inline void SetDisableNetworking(bool value) { m_disableNetworkingHasBeenSet = true; m_disableNetworking = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithDisableNetworking(bool value) { SetDisableNetworking(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of DNS search domains that are presented to the container.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsSearchDomains() const{ return m_dnsSearchDomains; }
    inline bool DnsSearchDomainsHasBeenSet() const { return m_dnsSearchDomainsHasBeenSet; }
    inline void SetDnsSearchDomains(const Aws::Vector<Aws::String>& value) { m_dnsSearchDomainsHasBeenSet = true; m_dnsSearchDomains = value; }
    inline void SetDnsSearchDomains(Aws::Vector<Aws::String>&& value) { m_dnsSearchDomainsHasBeenSet = true; m_dnsSearchDomains = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithDnsSearchDomains(const Aws::Vector<Aws::String>& value) { SetDnsSearchDomains(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithDnsSearchDomains(Aws::Vector<Aws::String>&& value) { SetDnsSearchDomains(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddDnsSearchDomains(const Aws::String& value) { m_dnsSearchDomainsHasBeenSet = true; m_dnsSearchDomains.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddDnsSearchDomains(Aws::String&& value) { m_dnsSearchDomainsHasBeenSet = true; m_dnsSearchDomains.push_back(std::move(value)); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddDnsSearchDomains(const char* value) { m_dnsSearchDomainsHasBeenSet = true; m_dnsSearchDomains.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of DNS servers that are presented to the container.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsServers() const{ return m_dnsServers; }
    inline bool DnsServersHasBeenSet() const { return m_dnsServersHasBeenSet; }
    inline void SetDnsServers(const Aws::Vector<Aws::String>& value) { m_dnsServersHasBeenSet = true; m_dnsServers = value; }
    inline void SetDnsServers(Aws::Vector<Aws::String>&& value) { m_dnsServersHasBeenSet = true; m_dnsServers = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithDnsServers(const Aws::Vector<Aws::String>& value) { SetDnsServers(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithDnsServers(Aws::Vector<Aws::String>&& value) { SetDnsServers(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddDnsServers(const Aws::String& value) { m_dnsServersHasBeenSet = true; m_dnsServers.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddDnsServers(Aws::String&& value) { m_dnsServersHasBeenSet = true; m_dnsServers.push_back(std::move(value)); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddDnsServers(const char* value) { m_dnsServersHasBeenSet = true; m_dnsServers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A key-value map of labels to add to the container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDockerLabels() const{ return m_dockerLabels; }
    inline bool DockerLabelsHasBeenSet() const { return m_dockerLabelsHasBeenSet; }
    inline void SetDockerLabels(const Aws::Map<Aws::String, Aws::String>& value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels = value; }
    inline void SetDockerLabels(Aws::Map<Aws::String, Aws::String>&& value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithDockerLabels(const Aws::Map<Aws::String, Aws::String>& value) { SetDockerLabels(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithDockerLabels(Aws::Map<Aws::String, Aws::String>&& value) { SetDockerLabels(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddDockerLabels(const Aws::String& key, const Aws::String& value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels.emplace(key, value); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddDockerLabels(Aws::String&& key, const Aws::String& value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels.emplace(std::move(key), value); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddDockerLabels(const Aws::String& key, Aws::String&& value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels.emplace(key, std::move(value)); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddDockerLabels(Aws::String&& key, Aws::String&& value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels.emplace(std::move(key), std::move(value)); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddDockerLabels(const char* key, Aws::String&& value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels.emplace(key, std::move(value)); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddDockerLabels(Aws::String&& key, const char* value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels.emplace(std::move(key), value); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddDockerLabels(const char* key, const char* value) { m_dockerLabelsHasBeenSet = true; m_dockerLabels.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of strings to provide custom labels for SELinux and AppArmor
     * multi-level security systems.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDockerSecurityOptions() const{ return m_dockerSecurityOptions; }
    inline bool DockerSecurityOptionsHasBeenSet() const { return m_dockerSecurityOptionsHasBeenSet; }
    inline void SetDockerSecurityOptions(const Aws::Vector<Aws::String>& value) { m_dockerSecurityOptionsHasBeenSet = true; m_dockerSecurityOptions = value; }
    inline void SetDockerSecurityOptions(Aws::Vector<Aws::String>&& value) { m_dockerSecurityOptionsHasBeenSet = true; m_dockerSecurityOptions = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithDockerSecurityOptions(const Aws::Vector<Aws::String>& value) { SetDockerSecurityOptions(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithDockerSecurityOptions(Aws::Vector<Aws::String>&& value) { SetDockerSecurityOptions(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddDockerSecurityOptions(const Aws::String& value) { m_dockerSecurityOptionsHasBeenSet = true; m_dockerSecurityOptions.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddDockerSecurityOptions(Aws::String&& value) { m_dockerSecurityOptionsHasBeenSet = true; m_dockerSecurityOptions.push_back(std::move(value)); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddDockerSecurityOptions(const char* value) { m_dockerSecurityOptionsHasBeenSet = true; m_dockerSecurityOptions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The entry point that is passed to the container.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEntryPoint() const{ return m_entryPoint; }
    inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }
    inline void SetEntryPoint(const Aws::Vector<Aws::String>& value) { m_entryPointHasBeenSet = true; m_entryPoint = value; }
    inline void SetEntryPoint(Aws::Vector<Aws::String>&& value) { m_entryPointHasBeenSet = true; m_entryPoint = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithEntryPoint(const Aws::Vector<Aws::String>& value) { SetEntryPoint(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithEntryPoint(Aws::Vector<Aws::String>&& value) { SetEntryPoint(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddEntryPoint(const Aws::String& value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddEntryPoint(Aws::String&& value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(std::move(value)); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddEntryPoint(const char* value) { m_entryPointHasBeenSet = true; m_entryPoint.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The environment variables to pass to a container.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsEnvironmentDetails>& GetEnvironment() const{ return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    inline void SetEnvironment(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsEnvironmentDetails>& value) { m_environmentHasBeenSet = true; m_environment = value; }
    inline void SetEnvironment(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsEnvironmentDetails>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithEnvironment(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsEnvironmentDetails>& value) { SetEnvironment(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithEnvironment(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsEnvironmentDetails>&& value) { SetEnvironment(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddEnvironment(const AwsEcsTaskDefinitionContainerDefinitionsEnvironmentDetails& value) { m_environmentHasBeenSet = true; m_environment.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddEnvironment(AwsEcsTaskDefinitionContainerDefinitionsEnvironmentDetails&& value) { m_environmentHasBeenSet = true; m_environment.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of files containing the environment variables to pass to a
     * container.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails>& GetEnvironmentFiles() const{ return m_environmentFiles; }
    inline bool EnvironmentFilesHasBeenSet() const { return m_environmentFilesHasBeenSet; }
    inline void SetEnvironmentFiles(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails>& value) { m_environmentFilesHasBeenSet = true; m_environmentFiles = value; }
    inline void SetEnvironmentFiles(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails>&& value) { m_environmentFilesHasBeenSet = true; m_environmentFiles = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithEnvironmentFiles(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails>& value) { SetEnvironmentFiles(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithEnvironmentFiles(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails>&& value) { SetEnvironmentFiles(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddEnvironmentFiles(const AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails& value) { m_environmentFilesHasBeenSet = true; m_environmentFiles.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddEnvironmentFiles(AwsEcsTaskDefinitionContainerDefinitionsEnvironmentFilesDetails&& value) { m_environmentFilesHasBeenSet = true; m_environmentFiles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether the container is essential. All tasks must have at least one
     * essential container.</p>
     */
    inline bool GetEssential() const{ return m_essential; }
    inline bool EssentialHasBeenSet() const { return m_essentialHasBeenSet; }
    inline void SetEssential(bool value) { m_essentialHasBeenSet = true; m_essential = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithEssential(bool value) { SetEssential(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of hostnames and IP address mappings to append to the
     * <b>/etc/hosts</b> file on the container.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails>& GetExtraHosts() const{ return m_extraHosts; }
    inline bool ExtraHostsHasBeenSet() const { return m_extraHostsHasBeenSet; }
    inline void SetExtraHosts(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails>& value) { m_extraHostsHasBeenSet = true; m_extraHosts = value; }
    inline void SetExtraHosts(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails>&& value) { m_extraHostsHasBeenSet = true; m_extraHosts = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithExtraHosts(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails>& value) { SetExtraHosts(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithExtraHosts(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails>&& value) { SetExtraHosts(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddExtraHosts(const AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails& value) { m_extraHostsHasBeenSet = true; m_extraHosts.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddExtraHosts(AwsEcsTaskDefinitionContainerDefinitionsExtraHostsDetails&& value) { m_extraHostsHasBeenSet = true; m_extraHosts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The FireLens configuration for the container. Specifies and configures a log
     * router for container logs.</p>
     */
    inline const AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails& GetFirelensConfiguration() const{ return m_firelensConfiguration; }
    inline bool FirelensConfigurationHasBeenSet() const { return m_firelensConfigurationHasBeenSet; }
    inline void SetFirelensConfiguration(const AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails& value) { m_firelensConfigurationHasBeenSet = true; m_firelensConfiguration = value; }
    inline void SetFirelensConfiguration(AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails&& value) { m_firelensConfigurationHasBeenSet = true; m_firelensConfiguration = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithFirelensConfiguration(const AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails& value) { SetFirelensConfiguration(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithFirelensConfiguration(AwsEcsTaskDefinitionContainerDefinitionsFirelensConfigurationDetails&& value) { SetFirelensConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container health check command and associated configuration parameters
     * for the container.</p>
     */
    inline const AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails& GetHealthCheck() const{ return m_healthCheck; }
    inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }
    inline void SetHealthCheck(const AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails& value) { m_healthCheckHasBeenSet = true; m_healthCheck = value; }
    inline void SetHealthCheck(AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails&& value) { m_healthCheckHasBeenSet = true; m_healthCheck = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithHealthCheck(const AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails& value) { SetHealthCheck(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithHealthCheck(AwsEcsTaskDefinitionContainerDefinitionsHealthCheckDetails&& value) { SetHealthCheck(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hostname to use for the container.</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithHostname(const char* value) { SetHostname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image used to start the container.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithImage(const Aws::String& value) { SetImage(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithImage(const char* value) { SetImage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to true, then containerized applications can be deployed that require
     * <code>stdin</code> or a <code>tty</code> to be allocated.</p>
     */
    inline bool GetInteractive() const{ return m_interactive; }
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
    inline const Aws::Vector<Aws::String>& GetLinks() const{ return m_links; }
    inline bool LinksHasBeenSet() const { return m_linksHasBeenSet; }
    inline void SetLinks(const Aws::Vector<Aws::String>& value) { m_linksHasBeenSet = true; m_links = value; }
    inline void SetLinks(Aws::Vector<Aws::String>&& value) { m_linksHasBeenSet = true; m_links = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithLinks(const Aws::Vector<Aws::String>& value) { SetLinks(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithLinks(Aws::Vector<Aws::String>&& value) { SetLinks(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddLinks(const Aws::String& value) { m_linksHasBeenSet = true; m_links.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddLinks(Aws::String&& value) { m_linksHasBeenSet = true; m_links.push_back(std::move(value)); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddLinks(const char* value) { m_linksHasBeenSet = true; m_links.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Linux-specific modifications that are applied to the container, such as Linux
     * kernel capabilities.</p>
     */
    inline const AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& GetLinuxParameters() const{ return m_linuxParameters; }
    inline bool LinuxParametersHasBeenSet() const { return m_linuxParametersHasBeenSet; }
    inline void SetLinuxParameters(const AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& value) { m_linuxParametersHasBeenSet = true; m_linuxParameters = value; }
    inline void SetLinuxParameters(AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails&& value) { m_linuxParametersHasBeenSet = true; m_linuxParameters = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithLinuxParameters(const AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails& value) { SetLinuxParameters(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithLinuxParameters(AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails&& value) { SetLinuxParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log configuration specification for the container.</p>
     */
    inline const AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& GetLogConfiguration() const{ return m_logConfiguration; }
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
    inline void SetLogConfiguration(const AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = value; }
    inline void SetLogConfiguration(AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithLogConfiguration(const AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails& value) { SetLogConfiguration(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithLogConfiguration(AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails&& value) { SetLogConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount (in MiB) of memory to present to the container. If the container
     * attempts to exceed the memory specified here, the container is shut down. The
     * total amount of memory reserved for all containers within a task must be lower
     * than the task memory value, if one is specified.</p>
     */
    inline int GetMemory() const{ return m_memory; }
    inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
    inline void SetMemory(int value) { m_memoryHasBeenSet = true; m_memory = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithMemory(int value) { SetMemory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The soft limit (in MiB) of memory to reserve for the container.</p>
     */
    inline int GetMemoryReservation() const{ return m_memoryReservation; }
    inline bool MemoryReservationHasBeenSet() const { return m_memoryReservationHasBeenSet; }
    inline void SetMemoryReservation(int value) { m_memoryReservationHasBeenSet = true; m_memoryReservation = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithMemoryReservation(int value) { SetMemoryReservation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mount points for the data volumes in the container.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails>& GetMountPoints() const{ return m_mountPoints; }
    inline bool MountPointsHasBeenSet() const { return m_mountPointsHasBeenSet; }
    inline void SetMountPoints(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails>& value) { m_mountPointsHasBeenSet = true; m_mountPoints = value; }
    inline void SetMountPoints(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails>&& value) { m_mountPointsHasBeenSet = true; m_mountPoints = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithMountPoints(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails>& value) { SetMountPoints(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithMountPoints(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails>&& value) { SetMountPoints(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddMountPoints(const AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails& value) { m_mountPointsHasBeenSet = true; m_mountPoints.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddMountPoints(AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails&& value) { m_mountPointsHasBeenSet = true; m_mountPoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the container.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of port mappings for the container.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails>& GetPortMappings() const{ return m_portMappings; }
    inline bool PortMappingsHasBeenSet() const { return m_portMappingsHasBeenSet; }
    inline void SetPortMappings(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails>& value) { m_portMappingsHasBeenSet = true; m_portMappings = value; }
    inline void SetPortMappings(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails>&& value) { m_portMappingsHasBeenSet = true; m_portMappings = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithPortMappings(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails>& value) { SetPortMappings(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithPortMappings(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails>&& value) { SetPortMappings(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddPortMappings(const AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails& value) { m_portMappingsHasBeenSet = true; m_portMappings.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddPortMappings(AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails&& value) { m_portMappingsHasBeenSet = true; m_portMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether the container is given elevated privileges on the host container
     * instance. The elevated privileges are similar to the root user.</p>
     */
    inline bool GetPrivileged() const{ return m_privileged; }
    inline bool PrivilegedHasBeenSet() const { return m_privilegedHasBeenSet; }
    inline void SetPrivileged(bool value) { m_privilegedHasBeenSet = true; m_privileged = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithPrivileged(bool value) { SetPrivileged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to allocate a TTY to the container.</p>
     */
    inline bool GetPseudoTerminal() const{ return m_pseudoTerminal; }
    inline bool PseudoTerminalHasBeenSet() const { return m_pseudoTerminalHasBeenSet; }
    inline void SetPseudoTerminal(bool value) { m_pseudoTerminalHasBeenSet = true; m_pseudoTerminal = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithPseudoTerminal(bool value) { SetPseudoTerminal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the container is given read-only access to its root file system.</p>
     */
    inline bool GetReadonlyRootFilesystem() const{ return m_readonlyRootFilesystem; }
    inline bool ReadonlyRootFilesystemHasBeenSet() const { return m_readonlyRootFilesystemHasBeenSet; }
    inline void SetReadonlyRootFilesystem(bool value) { m_readonlyRootFilesystemHasBeenSet = true; m_readonlyRootFilesystem = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithReadonlyRootFilesystem(bool value) { SetReadonlyRootFilesystem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private repository authentication credentials to use.</p>
     */
    inline const AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails& GetRepositoryCredentials() const{ return m_repositoryCredentials; }
    inline bool RepositoryCredentialsHasBeenSet() const { return m_repositoryCredentialsHasBeenSet; }
    inline void SetRepositoryCredentials(const AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails& value) { m_repositoryCredentialsHasBeenSet = true; m_repositoryCredentials = value; }
    inline void SetRepositoryCredentials(AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails&& value) { m_repositoryCredentialsHasBeenSet = true; m_repositoryCredentials = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithRepositoryCredentials(const AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails& value) { SetRepositoryCredentials(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithRepositoryCredentials(AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails&& value) { SetRepositoryCredentials(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type and amount of a resource to assign to a container. The only
     * supported resource is a GPU.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails>& GetResourceRequirements() const{ return m_resourceRequirements; }
    inline bool ResourceRequirementsHasBeenSet() const { return m_resourceRequirementsHasBeenSet; }
    inline void SetResourceRequirements(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails>& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = value; }
    inline void SetResourceRequirements(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails>&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithResourceRequirements(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails>& value) { SetResourceRequirements(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithResourceRequirements(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails>&& value) { SetResourceRequirements(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddResourceRequirements(const AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddResourceRequirements(AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails&& value) { m_resourceRequirementsHasBeenSet = true; m_resourceRequirements.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The secrets to pass to the container.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails>& GetSecrets() const{ return m_secrets; }
    inline bool SecretsHasBeenSet() const { return m_secretsHasBeenSet; }
    inline void SetSecrets(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails>& value) { m_secretsHasBeenSet = true; m_secrets = value; }
    inline void SetSecrets(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails>&& value) { m_secretsHasBeenSet = true; m_secrets = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithSecrets(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails>& value) { SetSecrets(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithSecrets(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails>&& value) { SetSecrets(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddSecrets(const AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails& value) { m_secretsHasBeenSet = true; m_secrets.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddSecrets(AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails&& value) { m_secretsHasBeenSet = true; m_secrets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of seconds to wait before giving up on resolving dependencies for
     * a container. </p>
     */
    inline int GetStartTimeout() const{ return m_startTimeout; }
    inline bool StartTimeoutHasBeenSet() const { return m_startTimeoutHasBeenSet; }
    inline void SetStartTimeout(int value) { m_startTimeoutHasBeenSet = true; m_startTimeout = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithStartTimeout(int value) { SetStartTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds to wait before the container is stopped if it doesn't
     * shut down normally on its own.</p>
     */
    inline int GetStopTimeout() const{ return m_stopTimeout; }
    inline bool StopTimeoutHasBeenSet() const { return m_stopTimeoutHasBeenSet; }
    inline void SetStopTimeout(int value) { m_stopTimeoutHasBeenSet = true; m_stopTimeout = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithStopTimeout(int value) { SetStopTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of namespaced kernel parameters to set in the container.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails>& GetSystemControls() const{ return m_systemControls; }
    inline bool SystemControlsHasBeenSet() const { return m_systemControlsHasBeenSet; }
    inline void SetSystemControls(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails>& value) { m_systemControlsHasBeenSet = true; m_systemControls = value; }
    inline void SetSystemControls(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails>&& value) { m_systemControlsHasBeenSet = true; m_systemControls = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithSystemControls(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails>& value) { SetSystemControls(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithSystemControls(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails>&& value) { SetSystemControls(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddSystemControls(const AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails& value) { m_systemControlsHasBeenSet = true; m_systemControls.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddSystemControls(AwsEcsTaskDefinitionContainerDefinitionsSystemControlsDetails&& value) { m_systemControlsHasBeenSet = true; m_systemControls.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of ulimits to set in the container. </p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails>& GetUlimits() const{ return m_ulimits; }
    inline bool UlimitsHasBeenSet() const { return m_ulimitsHasBeenSet; }
    inline void SetUlimits(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails>& value) { m_ulimitsHasBeenSet = true; m_ulimits = value; }
    inline void SetUlimits(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails>&& value) { m_ulimitsHasBeenSet = true; m_ulimits = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithUlimits(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails>& value) { SetUlimits(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithUlimits(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails>&& value) { SetUlimits(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddUlimits(const AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails& value) { m_ulimitsHasBeenSet = true; m_ulimits.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddUlimits(AwsEcsTaskDefinitionContainerDefinitionsUlimitsDetails&& value) { m_ulimitsHasBeenSet = true; m_ulimits.push_back(std::move(value)); return *this; }
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
    inline const Aws::String& GetUser() const{ return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    inline void SetUser(const Aws::String& value) { m_userHasBeenSet = true; m_user = value; }
    inline void SetUser(Aws::String&& value) { m_userHasBeenSet = true; m_user = std::move(value); }
    inline void SetUser(const char* value) { m_userHasBeenSet = true; m_user.assign(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithUser(const Aws::String& value) { SetUser(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithUser(const char* value) { SetUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data volumes to mount from another container.</p>
     */
    inline const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails>& GetVolumesFrom() const{ return m_volumesFrom; }
    inline bool VolumesFromHasBeenSet() const { return m_volumesFromHasBeenSet; }
    inline void SetVolumesFrom(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails>& value) { m_volumesFromHasBeenSet = true; m_volumesFrom = value; }
    inline void SetVolumesFrom(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails>&& value) { m_volumesFromHasBeenSet = true; m_volumesFrom = std::move(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithVolumesFrom(const Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails>& value) { SetVolumesFrom(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithVolumesFrom(Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails>&& value) { SetVolumesFrom(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddVolumesFrom(const AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails& value) { m_volumesFromHasBeenSet = true; m_volumesFrom.push_back(value); return *this; }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& AddVolumesFrom(AwsEcsTaskDefinitionContainerDefinitionsVolumesFromDetails&& value) { m_volumesFromHasBeenSet = true; m_volumesFrom.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The working directory in which to run commands inside the container.</p>
     */
    inline const Aws::String& GetWorkingDirectory() const{ return m_workingDirectory; }
    inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }
    inline void SetWorkingDirectory(const Aws::String& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = value; }
    inline void SetWorkingDirectory(Aws::String&& value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory = std::move(value); }
    inline void SetWorkingDirectory(const char* value) { m_workingDirectoryHasBeenSet = true; m_workingDirectory.assign(value); }
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithWorkingDirectory(const Aws::String& value) { SetWorkingDirectory(value); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithWorkingDirectory(Aws::String&& value) { SetWorkingDirectory(std::move(value)); return *this;}
    inline AwsEcsTaskDefinitionContainerDefinitionsDetails& WithWorkingDirectory(const char* value) { SetWorkingDirectory(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;

    int m_cpu;
    bool m_cpuHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsDependsOnDetails> m_dependsOn;
    bool m_dependsOnHasBeenSet = false;

    bool m_disableNetworking;
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

    bool m_essential;
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

    bool m_interactive;
    bool m_interactiveHasBeenSet = false;

    Aws::Vector<Aws::String> m_links;
    bool m_linksHasBeenSet = false;

    AwsEcsTaskDefinitionContainerDefinitionsLinuxParametersDetails m_linuxParameters;
    bool m_linuxParametersHasBeenSet = false;

    AwsEcsTaskDefinitionContainerDefinitionsLogConfigurationDetails m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    int m_memory;
    bool m_memoryHasBeenSet = false;

    int m_memoryReservation;
    bool m_memoryReservationHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails> m_mountPoints;
    bool m_mountPointsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsPortMappingsDetails> m_portMappings;
    bool m_portMappingsHasBeenSet = false;

    bool m_privileged;
    bool m_privilegedHasBeenSet = false;

    bool m_pseudoTerminal;
    bool m_pseudoTerminalHasBeenSet = false;

    bool m_readonlyRootFilesystem;
    bool m_readonlyRootFilesystemHasBeenSet = false;

    AwsEcsTaskDefinitionContainerDefinitionsRepositoryCredentialsDetails m_repositoryCredentials;
    bool m_repositoryCredentialsHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsResourceRequirementsDetails> m_resourceRequirements;
    bool m_resourceRequirementsHasBeenSet = false;

    Aws::Vector<AwsEcsTaskDefinitionContainerDefinitionsSecretsDetails> m_secrets;
    bool m_secretsHasBeenSet = false;

    int m_startTimeout;
    bool m_startTimeoutHasBeenSet = false;

    int m_stopTimeout;
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

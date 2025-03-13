/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEcsClusterConfigurationDetails.h>
#include <aws/securityhub/model/AwsEcsClusterClusterSettingsDetails.h>
#include <aws/securityhub/model/AwsEcsClusterDefaultCapacityProviderStrategyDetails.h>
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
   * <p>Provides details about an Amazon ECS cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsClusterDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsClusterDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsClusterDetails() = default;
    AWS_SECURITYHUB_API AwsEcsClusterDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsClusterDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the cluster. </p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    AwsEcsClusterDetails& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of services that are running on the cluster in an
     * <code>ACTIVE</code> state. You can view these services with the Amazon ECS <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_ListServices.html">
     * <code>ListServices</code> </a> API operation. </p>
     */
    inline int GetActiveServicesCount() const { return m_activeServicesCount; }
    inline bool ActiveServicesCountHasBeenSet() const { return m_activeServicesCountHasBeenSet; }
    inline void SetActiveServicesCount(int value) { m_activeServicesCountHasBeenSet = true; m_activeServicesCount = value; }
    inline AwsEcsClusterDetails& WithActiveServicesCount(int value) { SetActiveServicesCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short name of one or more capacity providers to associate with the
     * cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapacityProviders() const { return m_capacityProviders; }
    inline bool CapacityProvidersHasBeenSet() const { return m_capacityProvidersHasBeenSet; }
    template<typename CapacityProvidersT = Aws::Vector<Aws::String>>
    void SetCapacityProviders(CapacityProvidersT&& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders = std::forward<CapacityProvidersT>(value); }
    template<typename CapacityProvidersT = Aws::Vector<Aws::String>>
    AwsEcsClusterDetails& WithCapacityProviders(CapacityProvidersT&& value) { SetCapacityProviders(std::forward<CapacityProvidersT>(value)); return *this;}
    template<typename CapacityProvidersT = Aws::String>
    AwsEcsClusterDetails& AddCapacityProviders(CapacityProvidersT&& value) { m_capacityProvidersHasBeenSet = true; m_capacityProviders.emplace_back(std::forward<CapacityProvidersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The setting to use to create the cluster. Specifically used to configure
     * whether to enable CloudWatch Container Insights for the cluster.</p>
     */
    inline const Aws::Vector<AwsEcsClusterClusterSettingsDetails>& GetClusterSettings() const { return m_clusterSettings; }
    inline bool ClusterSettingsHasBeenSet() const { return m_clusterSettingsHasBeenSet; }
    template<typename ClusterSettingsT = Aws::Vector<AwsEcsClusterClusterSettingsDetails>>
    void SetClusterSettings(ClusterSettingsT&& value) { m_clusterSettingsHasBeenSet = true; m_clusterSettings = std::forward<ClusterSettingsT>(value); }
    template<typename ClusterSettingsT = Aws::Vector<AwsEcsClusterClusterSettingsDetails>>
    AwsEcsClusterDetails& WithClusterSettings(ClusterSettingsT&& value) { SetClusterSettings(std::forward<ClusterSettingsT>(value)); return *this;}
    template<typename ClusterSettingsT = AwsEcsClusterClusterSettingsDetails>
    AwsEcsClusterDetails& AddClusterSettings(ClusterSettingsT&& value) { m_clusterSettingsHasBeenSet = true; m_clusterSettings.emplace_back(std::forward<ClusterSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The run command configuration for the cluster.</p>
     */
    inline const AwsEcsClusterConfigurationDetails& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = AwsEcsClusterConfigurationDetails>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = AwsEcsClusterConfigurationDetails>
    AwsEcsClusterDetails& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default capacity provider strategy for the cluster. The default capacity
     * provider strategy is used when services or tasks are run without a specified
     * launch type or capacity provider strategy.</p>
     */
    inline const Aws::Vector<AwsEcsClusterDefaultCapacityProviderStrategyDetails>& GetDefaultCapacityProviderStrategy() const { return m_defaultCapacityProviderStrategy; }
    inline bool DefaultCapacityProviderStrategyHasBeenSet() const { return m_defaultCapacityProviderStrategyHasBeenSet; }
    template<typename DefaultCapacityProviderStrategyT = Aws::Vector<AwsEcsClusterDefaultCapacityProviderStrategyDetails>>
    void SetDefaultCapacityProviderStrategy(DefaultCapacityProviderStrategyT&& value) { m_defaultCapacityProviderStrategyHasBeenSet = true; m_defaultCapacityProviderStrategy = std::forward<DefaultCapacityProviderStrategyT>(value); }
    template<typename DefaultCapacityProviderStrategyT = Aws::Vector<AwsEcsClusterDefaultCapacityProviderStrategyDetails>>
    AwsEcsClusterDetails& WithDefaultCapacityProviderStrategy(DefaultCapacityProviderStrategyT&& value) { SetDefaultCapacityProviderStrategy(std::forward<DefaultCapacityProviderStrategyT>(value)); return *this;}
    template<typename DefaultCapacityProviderStrategyT = AwsEcsClusterDefaultCapacityProviderStrategyDetails>
    AwsEcsClusterDetails& AddDefaultCapacityProviderStrategy(DefaultCapacityProviderStrategyT&& value) { m_defaultCapacityProviderStrategyHasBeenSet = true; m_defaultCapacityProviderStrategy.emplace_back(std::forward<DefaultCapacityProviderStrategyT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A name that you use to identify your cluster. </p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    AwsEcsClusterDetails& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of container instances registered into the cluster. This includes
     * container instances in both <code>ACTIVE</code> and <code>DRAINING</code>
     * status. </p>
     */
    inline int GetRegisteredContainerInstancesCount() const { return m_registeredContainerInstancesCount; }
    inline bool RegisteredContainerInstancesCountHasBeenSet() const { return m_registeredContainerInstancesCountHasBeenSet; }
    inline void SetRegisteredContainerInstancesCount(int value) { m_registeredContainerInstancesCountHasBeenSet = true; m_registeredContainerInstancesCount = value; }
    inline AwsEcsClusterDetails& WithRegisteredContainerInstancesCount(int value) { SetRegisteredContainerInstancesCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of tasks in the cluster that are in the <code>RUNNING</code>
     * state. </p>
     */
    inline int GetRunningTasksCount() const { return m_runningTasksCount; }
    inline bool RunningTasksCountHasBeenSet() const { return m_runningTasksCountHasBeenSet; }
    inline void SetRunningTasksCount(int value) { m_runningTasksCountHasBeenSet = true; m_runningTasksCount = value; }
    inline AwsEcsClusterDetails& WithRunningTasksCount(int value) { SetRunningTasksCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the cluster. </p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsEcsClusterDetails& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    int m_activeServicesCount{0};
    bool m_activeServicesCountHasBeenSet = false;

    Aws::Vector<Aws::String> m_capacityProviders;
    bool m_capacityProvidersHasBeenSet = false;

    Aws::Vector<AwsEcsClusterClusterSettingsDetails> m_clusterSettings;
    bool m_clusterSettingsHasBeenSet = false;

    AwsEcsClusterConfigurationDetails m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Vector<AwsEcsClusterDefaultCapacityProviderStrategyDetails> m_defaultCapacityProviderStrategy;
    bool m_defaultCapacityProviderStrategyHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    int m_registeredContainerInstancesCount{0};
    bool m_registeredContainerInstancesCountHasBeenSet = false;

    int m_runningTasksCount{0};
    bool m_runningTasksCountHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

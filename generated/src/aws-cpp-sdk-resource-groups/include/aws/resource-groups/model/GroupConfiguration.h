/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resource-groups/model/GroupConfigurationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-groups/model/GroupConfigurationItem.h>
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
namespace ResourceGroups
{
namespace Model
{

  /**
   * <p>A service configuration associated with a resource group. The configuration
   * options are determined by the Amazon Web Services service that defines the
   * <code>Type</code>, and specifies which resources can be included in the group.
   * You can add a service configuration when you create the group by using
   * <a>CreateGroup</a>, or later by using the <a>PutGroupConfiguration</a>
   * operation. For details about group service configuration syntax, see <a
   * href="https://docs.aws.amazon.com/ARG/latest/APIReference/about-slg.html">Service
   * configurations for resource groups</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/GroupConfiguration">AWS
   * API Reference</a></p>
   */
  class GroupConfiguration
  {
  public:
    AWS_RESOURCEGROUPS_API GroupConfiguration() = default;
    AWS_RESOURCEGROUPS_API GroupConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API GroupConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration currently associated with the group and in effect.</p>
     */
    inline const Aws::Vector<GroupConfigurationItem>& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = Aws::Vector<GroupConfigurationItem>>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = Aws::Vector<GroupConfigurationItem>>
    GroupConfiguration& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    template<typename ConfigurationT = GroupConfigurationItem>
    GroupConfiguration& AddConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration.emplace_back(std::forward<ConfigurationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If present, the new configuration that is in the process of being applied to
     * the group.</p>
     */
    inline const Aws::Vector<GroupConfigurationItem>& GetProposedConfiguration() const { return m_proposedConfiguration; }
    inline bool ProposedConfigurationHasBeenSet() const { return m_proposedConfigurationHasBeenSet; }
    template<typename ProposedConfigurationT = Aws::Vector<GroupConfigurationItem>>
    void SetProposedConfiguration(ProposedConfigurationT&& value) { m_proposedConfigurationHasBeenSet = true; m_proposedConfiguration = std::forward<ProposedConfigurationT>(value); }
    template<typename ProposedConfigurationT = Aws::Vector<GroupConfigurationItem>>
    GroupConfiguration& WithProposedConfiguration(ProposedConfigurationT&& value) { SetProposedConfiguration(std::forward<ProposedConfigurationT>(value)); return *this;}
    template<typename ProposedConfigurationT = GroupConfigurationItem>
    GroupConfiguration& AddProposedConfiguration(ProposedConfigurationT&& value) { m_proposedConfigurationHasBeenSet = true; m_proposedConfiguration.emplace_back(std::forward<ProposedConfigurationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current status of an attempt to update the group configuration.</p>
     */
    inline GroupConfigurationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(GroupConfigurationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GroupConfiguration& WithStatus(GroupConfigurationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If present, the reason why a request to update the group configuration
     * failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    GroupConfiguration& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GroupConfigurationItem> m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::Vector<GroupConfigurationItem> m_proposedConfiguration;
    bool m_proposedConfigurationHasBeenSet = false;

    GroupConfigurationStatus m_status{GroupConfigurationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws

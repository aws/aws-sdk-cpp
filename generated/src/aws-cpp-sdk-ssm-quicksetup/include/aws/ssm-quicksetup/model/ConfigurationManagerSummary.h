/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-quicksetup/model/ConfigurationDefinitionSummary.h>
#include <aws/ssm-quicksetup/model/StatusSummary.h>
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
namespace SSMQuickSetup
{
namespace Model
{

  /**
   * <p>A summary of a Quick Setup configuration manager.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-quicksetup-2018-05-10/ConfigurationManagerSummary">AWS
   * API Reference</a></p>
   */
  class ConfigurationManagerSummary
  {
  public:
    AWS_SSMQUICKSETUP_API ConfigurationManagerSummary() = default;
    AWS_SSMQUICKSETUP_API ConfigurationManagerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMQUICKSETUP_API ConfigurationManagerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMQUICKSETUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A summary of the Quick Setup configuration definition.</p>
     */
    inline const Aws::Vector<ConfigurationDefinitionSummary>& GetConfigurationDefinitionSummaries() const { return m_configurationDefinitionSummaries; }
    inline bool ConfigurationDefinitionSummariesHasBeenSet() const { return m_configurationDefinitionSummariesHasBeenSet; }
    template<typename ConfigurationDefinitionSummariesT = Aws::Vector<ConfigurationDefinitionSummary>>
    void SetConfigurationDefinitionSummaries(ConfigurationDefinitionSummariesT&& value) { m_configurationDefinitionSummariesHasBeenSet = true; m_configurationDefinitionSummaries = std::forward<ConfigurationDefinitionSummariesT>(value); }
    template<typename ConfigurationDefinitionSummariesT = Aws::Vector<ConfigurationDefinitionSummary>>
    ConfigurationManagerSummary& WithConfigurationDefinitionSummaries(ConfigurationDefinitionSummariesT&& value) { SetConfigurationDefinitionSummaries(std::forward<ConfigurationDefinitionSummariesT>(value)); return *this;}
    template<typename ConfigurationDefinitionSummariesT = ConfigurationDefinitionSummary>
    ConfigurationManagerSummary& AddConfigurationDefinitionSummaries(ConfigurationDefinitionSummariesT&& value) { m_configurationDefinitionSummariesHasBeenSet = true; m_configurationDefinitionSummaries.emplace_back(std::forward<ConfigurationDefinitionSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description of the configuration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ConfigurationManagerSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Quick Setup configuration.</p>
     */
    inline const Aws::String& GetManagerArn() const { return m_managerArn; }
    inline bool ManagerArnHasBeenSet() const { return m_managerArnHasBeenSet; }
    template<typename ManagerArnT = Aws::String>
    void SetManagerArn(ManagerArnT&& value) { m_managerArnHasBeenSet = true; m_managerArn = std::forward<ManagerArnT>(value); }
    template<typename ManagerArnT = Aws::String>
    ConfigurationManagerSummary& WithManagerArn(ManagerArnT&& value) { SetManagerArn(std::forward<ManagerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ConfigurationManagerSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summaries of the state of the configuration manager. These summaries include
     * an aggregate of the statuses from the configuration definition associated with
     * the configuration manager. This includes deployment statuses, association
     * statuses, drift statuses, health checks, and more.</p>
     */
    inline const Aws::Vector<StatusSummary>& GetStatusSummaries() const { return m_statusSummaries; }
    inline bool StatusSummariesHasBeenSet() const { return m_statusSummariesHasBeenSet; }
    template<typename StatusSummariesT = Aws::Vector<StatusSummary>>
    void SetStatusSummaries(StatusSummariesT&& value) { m_statusSummariesHasBeenSet = true; m_statusSummaries = std::forward<StatusSummariesT>(value); }
    template<typename StatusSummariesT = Aws::Vector<StatusSummary>>
    ConfigurationManagerSummary& WithStatusSummaries(StatusSummariesT&& value) { SetStatusSummaries(std::forward<StatusSummariesT>(value)); return *this;}
    template<typename StatusSummariesT = StatusSummary>
    ConfigurationManagerSummary& AddStatusSummaries(StatusSummariesT&& value) { m_statusSummariesHasBeenSet = true; m_statusSummaries.emplace_back(std::forward<StatusSummariesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ConfigurationDefinitionSummary> m_configurationDefinitionSummaries;
    bool m_configurationDefinitionSummariesHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_managerArn;
    bool m_managerArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<StatusSummary> m_statusSummaries;
    bool m_statusSummariesHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws

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
    AWS_SSMQUICKSETUP_API ConfigurationManagerSummary();
    AWS_SSMQUICKSETUP_API ConfigurationManagerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMQUICKSETUP_API ConfigurationManagerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMQUICKSETUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A summary of the Quick Setup configuration definition.</p>
     */
    inline const Aws::Vector<ConfigurationDefinitionSummary>& GetConfigurationDefinitionSummaries() const{ return m_configurationDefinitionSummaries; }
    inline bool ConfigurationDefinitionSummariesHasBeenSet() const { return m_configurationDefinitionSummariesHasBeenSet; }
    inline void SetConfigurationDefinitionSummaries(const Aws::Vector<ConfigurationDefinitionSummary>& value) { m_configurationDefinitionSummariesHasBeenSet = true; m_configurationDefinitionSummaries = value; }
    inline void SetConfigurationDefinitionSummaries(Aws::Vector<ConfigurationDefinitionSummary>&& value) { m_configurationDefinitionSummariesHasBeenSet = true; m_configurationDefinitionSummaries = std::move(value); }
    inline ConfigurationManagerSummary& WithConfigurationDefinitionSummaries(const Aws::Vector<ConfigurationDefinitionSummary>& value) { SetConfigurationDefinitionSummaries(value); return *this;}
    inline ConfigurationManagerSummary& WithConfigurationDefinitionSummaries(Aws::Vector<ConfigurationDefinitionSummary>&& value) { SetConfigurationDefinitionSummaries(std::move(value)); return *this;}
    inline ConfigurationManagerSummary& AddConfigurationDefinitionSummaries(const ConfigurationDefinitionSummary& value) { m_configurationDefinitionSummariesHasBeenSet = true; m_configurationDefinitionSummaries.push_back(value); return *this; }
    inline ConfigurationManagerSummary& AddConfigurationDefinitionSummaries(ConfigurationDefinitionSummary&& value) { m_configurationDefinitionSummariesHasBeenSet = true; m_configurationDefinitionSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description of the configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ConfigurationManagerSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ConfigurationManagerSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ConfigurationManagerSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Quick Setup configuration.</p>
     */
    inline const Aws::String& GetManagerArn() const{ return m_managerArn; }
    inline bool ManagerArnHasBeenSet() const { return m_managerArnHasBeenSet; }
    inline void SetManagerArn(const Aws::String& value) { m_managerArnHasBeenSet = true; m_managerArn = value; }
    inline void SetManagerArn(Aws::String&& value) { m_managerArnHasBeenSet = true; m_managerArn = std::move(value); }
    inline void SetManagerArn(const char* value) { m_managerArnHasBeenSet = true; m_managerArn.assign(value); }
    inline ConfigurationManagerSummary& WithManagerArn(const Aws::String& value) { SetManagerArn(value); return *this;}
    inline ConfigurationManagerSummary& WithManagerArn(Aws::String&& value) { SetManagerArn(std::move(value)); return *this;}
    inline ConfigurationManagerSummary& WithManagerArn(const char* value) { SetManagerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ConfigurationManagerSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ConfigurationManagerSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ConfigurationManagerSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summaries of the state of the configuration manager. These summaries include
     * an aggregate of the statuses from the configuration definition associated with
     * the configuration manager. This includes deployment statuses, association
     * statuses, drift statuses, health checks, and more.</p>
     */
    inline const Aws::Vector<StatusSummary>& GetStatusSummaries() const{ return m_statusSummaries; }
    inline bool StatusSummariesHasBeenSet() const { return m_statusSummariesHasBeenSet; }
    inline void SetStatusSummaries(const Aws::Vector<StatusSummary>& value) { m_statusSummariesHasBeenSet = true; m_statusSummaries = value; }
    inline void SetStatusSummaries(Aws::Vector<StatusSummary>&& value) { m_statusSummariesHasBeenSet = true; m_statusSummaries = std::move(value); }
    inline ConfigurationManagerSummary& WithStatusSummaries(const Aws::Vector<StatusSummary>& value) { SetStatusSummaries(value); return *this;}
    inline ConfigurationManagerSummary& WithStatusSummaries(Aws::Vector<StatusSummary>&& value) { SetStatusSummaries(std::move(value)); return *this;}
    inline ConfigurationManagerSummary& AddStatusSummaries(const StatusSummary& value) { m_statusSummariesHasBeenSet = true; m_statusSummaries.push_back(value); return *this; }
    inline ConfigurationManagerSummary& AddStatusSummaries(StatusSummary&& value) { m_statusSummariesHasBeenSet = true; m_statusSummaries.push_back(std::move(value)); return *this; }
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

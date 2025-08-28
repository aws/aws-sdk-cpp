/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/OperationStatus.h>
#include <aws/ssm-sap/model/ConfigurationCheckType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm-sap/model/RuleStatusCounts.h>
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
namespace SsmSap
{
namespace Model
{

  /**
   * <p>Represents a configuration check operation that has been executed against an
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/ConfigurationCheckOperation">AWS
   * API Reference</a></p>
   */
  class ConfigurationCheckOperation
  {
  public:
    AWS_SSMSAP_API ConfigurationCheckOperation() = default;
    AWS_SSMSAP_API ConfigurationCheckOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API ConfigurationCheckOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the configuration check operation.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ConfigurationCheckOperation& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the application against which the configuration check was
     * performed.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    ConfigurationCheckOperation& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the configuration check operation.</p>
     */
    inline OperationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(OperationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ConfigurationCheckOperation& WithStatus(OperationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message providing additional details about the status of the configuration
     * check operation.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ConfigurationCheckOperation& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the configuration check that was performed.</p>
     */
    inline ConfigurationCheckType GetConfigurationCheckId() const { return m_configurationCheckId; }
    inline bool ConfigurationCheckIdHasBeenSet() const { return m_configurationCheckIdHasBeenSet; }
    inline void SetConfigurationCheckId(ConfigurationCheckType value) { m_configurationCheckIdHasBeenSet = true; m_configurationCheckId = value; }
    inline ConfigurationCheckOperation& WithConfigurationCheckId(ConfigurationCheckType value) { SetConfigurationCheckId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration check that was performed.</p>
     */
    inline const Aws::String& GetConfigurationCheckName() const { return m_configurationCheckName; }
    inline bool ConfigurationCheckNameHasBeenSet() const { return m_configurationCheckNameHasBeenSet; }
    template<typename ConfigurationCheckNameT = Aws::String>
    void SetConfigurationCheckName(ConfigurationCheckNameT&& value) { m_configurationCheckNameHasBeenSet = true; m_configurationCheckName = std::forward<ConfigurationCheckNameT>(value); }
    template<typename ConfigurationCheckNameT = Aws::String>
    ConfigurationCheckOperation& WithConfigurationCheckName(ConfigurationCheckNameT&& value) { SetConfigurationCheckName(std::forward<ConfigurationCheckNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the configuration check that was performed.</p>
     */
    inline const Aws::String& GetConfigurationCheckDescription() const { return m_configurationCheckDescription; }
    inline bool ConfigurationCheckDescriptionHasBeenSet() const { return m_configurationCheckDescriptionHasBeenSet; }
    template<typename ConfigurationCheckDescriptionT = Aws::String>
    void SetConfigurationCheckDescription(ConfigurationCheckDescriptionT&& value) { m_configurationCheckDescriptionHasBeenSet = true; m_configurationCheckDescription = std::forward<ConfigurationCheckDescriptionT>(value); }
    template<typename ConfigurationCheckDescriptionT = Aws::String>
    ConfigurationCheckOperation& WithConfigurationCheckDescription(ConfigurationCheckDescriptionT&& value) { SetConfigurationCheckDescription(std::forward<ConfigurationCheckDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the configuration check operation started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ConfigurationCheckOperation& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the configuration check operation completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ConfigurationCheckOperation& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of all the rule results, showing counts for each status type.</p>
     */
    inline const RuleStatusCounts& GetRuleStatusCounts() const { return m_ruleStatusCounts; }
    inline bool RuleStatusCountsHasBeenSet() const { return m_ruleStatusCountsHasBeenSet; }
    template<typename RuleStatusCountsT = RuleStatusCounts>
    void SetRuleStatusCounts(RuleStatusCountsT&& value) { m_ruleStatusCountsHasBeenSet = true; m_ruleStatusCounts = std::forward<RuleStatusCountsT>(value); }
    template<typename RuleStatusCountsT = RuleStatusCounts>
    ConfigurationCheckOperation& WithRuleStatusCounts(RuleStatusCountsT&& value) { SetRuleStatusCounts(std::forward<RuleStatusCountsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    OperationStatus m_status{OperationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    ConfigurationCheckType m_configurationCheckId{ConfigurationCheckType::NOT_SET};
    bool m_configurationCheckIdHasBeenSet = false;

    Aws::String m_configurationCheckName;
    bool m_configurationCheckNameHasBeenSet = false;

    Aws::String m_configurationCheckDescription;
    bool m_configurationCheckDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    RuleStatusCounts m_ruleStatusCounts;
    bool m_ruleStatusCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws

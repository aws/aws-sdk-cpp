/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/monitoring/model/StateValue.h>
#include <aws/monitoring/model/ActionsSuppressedBy.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>The details about a composite alarm.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/CompositeAlarm">AWS
   * API Reference</a></p>
   */
  class CompositeAlarm
  {
  public:
    AWS_CLOUDWATCH_API CompositeAlarm() = default;
    AWS_CLOUDWATCH_API CompositeAlarm(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API CompositeAlarm& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether actions should be executed during any changes to the alarm
     * state.</p>
     */
    inline bool GetActionsEnabled() const { return m_actionsEnabled; }
    inline bool ActionsEnabledHasBeenSet() const { return m_actionsEnabledHasBeenSet; }
    inline void SetActionsEnabled(bool value) { m_actionsEnabledHasBeenSet = true; m_actionsEnabled = value; }
    inline CompositeAlarm& WithActionsEnabled(bool value) { SetActionsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions to execute when this alarm transitions to the ALARM state from
     * any other state. Each action is specified as an Amazon Resource Name (ARN).</p>
     */
    inline const Aws::Vector<Aws::String>& GetAlarmActions() const { return m_alarmActions; }
    inline bool AlarmActionsHasBeenSet() const { return m_alarmActionsHasBeenSet; }
    template<typename AlarmActionsT = Aws::Vector<Aws::String>>
    void SetAlarmActions(AlarmActionsT&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions = std::forward<AlarmActionsT>(value); }
    template<typename AlarmActionsT = Aws::Vector<Aws::String>>
    CompositeAlarm& WithAlarmActions(AlarmActionsT&& value) { SetAlarmActions(std::forward<AlarmActionsT>(value)); return *this;}
    template<typename AlarmActionsT = Aws::String>
    CompositeAlarm& AddAlarmActions(AlarmActionsT&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions.emplace_back(std::forward<AlarmActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the alarm.</p>
     */
    inline const Aws::String& GetAlarmArn() const { return m_alarmArn; }
    inline bool AlarmArnHasBeenSet() const { return m_alarmArnHasBeenSet; }
    template<typename AlarmArnT = Aws::String>
    void SetAlarmArn(AlarmArnT&& value) { m_alarmArnHasBeenSet = true; m_alarmArn = std::forward<AlarmArnT>(value); }
    template<typename AlarmArnT = Aws::String>
    CompositeAlarm& WithAlarmArn(AlarmArnT&& value) { SetAlarmArn(std::forward<AlarmArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp of the last update to the alarm configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetAlarmConfigurationUpdatedTimestamp() const { return m_alarmConfigurationUpdatedTimestamp; }
    inline bool AlarmConfigurationUpdatedTimestampHasBeenSet() const { return m_alarmConfigurationUpdatedTimestampHasBeenSet; }
    template<typename AlarmConfigurationUpdatedTimestampT = Aws::Utils::DateTime>
    void SetAlarmConfigurationUpdatedTimestamp(AlarmConfigurationUpdatedTimestampT&& value) { m_alarmConfigurationUpdatedTimestampHasBeenSet = true; m_alarmConfigurationUpdatedTimestamp = std::forward<AlarmConfigurationUpdatedTimestampT>(value); }
    template<typename AlarmConfigurationUpdatedTimestampT = Aws::Utils::DateTime>
    CompositeAlarm& WithAlarmConfigurationUpdatedTimestamp(AlarmConfigurationUpdatedTimestampT&& value) { SetAlarmConfigurationUpdatedTimestamp(std::forward<AlarmConfigurationUpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the alarm.</p>
     */
    inline const Aws::String& GetAlarmDescription() const { return m_alarmDescription; }
    inline bool AlarmDescriptionHasBeenSet() const { return m_alarmDescriptionHasBeenSet; }
    template<typename AlarmDescriptionT = Aws::String>
    void SetAlarmDescription(AlarmDescriptionT&& value) { m_alarmDescriptionHasBeenSet = true; m_alarmDescription = std::forward<AlarmDescriptionT>(value); }
    template<typename AlarmDescriptionT = Aws::String>
    CompositeAlarm& WithAlarmDescription(AlarmDescriptionT&& value) { SetAlarmDescription(std::forward<AlarmDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the alarm.</p>
     */
    inline const Aws::String& GetAlarmName() const { return m_alarmName; }
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }
    template<typename AlarmNameT = Aws::String>
    void SetAlarmName(AlarmNameT&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::forward<AlarmNameT>(value); }
    template<typename AlarmNameT = Aws::String>
    CompositeAlarm& WithAlarmName(AlarmNameT&& value) { SetAlarmName(std::forward<AlarmNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule that this alarm uses to evaluate its alarm state.</p>
     */
    inline const Aws::String& GetAlarmRule() const { return m_alarmRule; }
    inline bool AlarmRuleHasBeenSet() const { return m_alarmRuleHasBeenSet; }
    template<typename AlarmRuleT = Aws::String>
    void SetAlarmRule(AlarmRuleT&& value) { m_alarmRuleHasBeenSet = true; m_alarmRule = std::forward<AlarmRuleT>(value); }
    template<typename AlarmRuleT = Aws::String>
    CompositeAlarm& WithAlarmRule(AlarmRuleT&& value) { SetAlarmRule(std::forward<AlarmRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions to execute when this alarm transitions to the INSUFFICIENT_DATA
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p>
     */
    inline const Aws::Vector<Aws::String>& GetInsufficientDataActions() const { return m_insufficientDataActions; }
    inline bool InsufficientDataActionsHasBeenSet() const { return m_insufficientDataActionsHasBeenSet; }
    template<typename InsufficientDataActionsT = Aws::Vector<Aws::String>>
    void SetInsufficientDataActions(InsufficientDataActionsT&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions = std::forward<InsufficientDataActionsT>(value); }
    template<typename InsufficientDataActionsT = Aws::Vector<Aws::String>>
    CompositeAlarm& WithInsufficientDataActions(InsufficientDataActionsT&& value) { SetInsufficientDataActions(std::forward<InsufficientDataActionsT>(value)); return *this;}
    template<typename InsufficientDataActionsT = Aws::String>
    CompositeAlarm& AddInsufficientDataActions(InsufficientDataActionsT&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.emplace_back(std::forward<InsufficientDataActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions to execute when this alarm transitions to the OK state from any
     * other state. Each action is specified as an Amazon Resource Name (ARN).</p>
     */
    inline const Aws::Vector<Aws::String>& GetOKActions() const { return m_oKActions; }
    inline bool OKActionsHasBeenSet() const { return m_oKActionsHasBeenSet; }
    template<typename OKActionsT = Aws::Vector<Aws::String>>
    void SetOKActions(OKActionsT&& value) { m_oKActionsHasBeenSet = true; m_oKActions = std::forward<OKActionsT>(value); }
    template<typename OKActionsT = Aws::Vector<Aws::String>>
    CompositeAlarm& WithOKActions(OKActionsT&& value) { SetOKActions(std::forward<OKActionsT>(value)); return *this;}
    template<typename OKActionsT = Aws::String>
    CompositeAlarm& AddOKActions(OKActionsT&& value) { m_oKActionsHasBeenSet = true; m_oKActions.emplace_back(std::forward<OKActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An explanation for the alarm state, in text format.</p>
     */
    inline const Aws::String& GetStateReason() const { return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    template<typename StateReasonT = Aws::String>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = Aws::String>
    CompositeAlarm& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An explanation for the alarm state, in JSON format.</p>
     */
    inline const Aws::String& GetStateReasonData() const { return m_stateReasonData; }
    inline bool StateReasonDataHasBeenSet() const { return m_stateReasonDataHasBeenSet; }
    template<typename StateReasonDataT = Aws::String>
    void SetStateReasonData(StateReasonDataT&& value) { m_stateReasonDataHasBeenSet = true; m_stateReasonData = std::forward<StateReasonDataT>(value); }
    template<typename StateReasonDataT = Aws::String>
    CompositeAlarm& WithStateReasonData(StateReasonDataT&& value) { SetStateReasonData(std::forward<StateReasonDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tracks the timestamp of any state update, even if <code>StateValue</code>
     * doesn't change.</p>
     */
    inline const Aws::Utils::DateTime& GetStateUpdatedTimestamp() const { return m_stateUpdatedTimestamp; }
    inline bool StateUpdatedTimestampHasBeenSet() const { return m_stateUpdatedTimestampHasBeenSet; }
    template<typename StateUpdatedTimestampT = Aws::Utils::DateTime>
    void SetStateUpdatedTimestamp(StateUpdatedTimestampT&& value) { m_stateUpdatedTimestampHasBeenSet = true; m_stateUpdatedTimestamp = std::forward<StateUpdatedTimestampT>(value); }
    template<typename StateUpdatedTimestampT = Aws::Utils::DateTime>
    CompositeAlarm& WithStateUpdatedTimestamp(StateUpdatedTimestampT&& value) { SetStateUpdatedTimestamp(std::forward<StateUpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state value for the alarm.</p>
     */
    inline StateValue GetStateValue() const { return m_stateValue; }
    inline bool StateValueHasBeenSet() const { return m_stateValueHasBeenSet; }
    inline void SetStateValue(StateValue value) { m_stateValueHasBeenSet = true; m_stateValue = value; }
    inline CompositeAlarm& WithStateValue(StateValue value) { SetStateValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp of the last change to the alarm's <code>StateValue</code>.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetStateTransitionedTimestamp() const { return m_stateTransitionedTimestamp; }
    inline bool StateTransitionedTimestampHasBeenSet() const { return m_stateTransitionedTimestampHasBeenSet; }
    template<typename StateTransitionedTimestampT = Aws::Utils::DateTime>
    void SetStateTransitionedTimestamp(StateTransitionedTimestampT&& value) { m_stateTransitionedTimestampHasBeenSet = true; m_stateTransitionedTimestamp = std::forward<StateTransitionedTimestampT>(value); }
    template<typename StateTransitionedTimestampT = Aws::Utils::DateTime>
    CompositeAlarm& WithStateTransitionedTimestamp(StateTransitionedTimestampT&& value) { SetStateTransitionedTimestamp(std::forward<StateTransitionedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> When the value is <code>ALARM</code>, it means that the actions are
     * suppressed because the suppressor alarm is in <code>ALARM</code> When the value
     * is <code>WaitPeriod</code>, it means that the actions are suppressed because the
     * composite alarm is waiting for the suppressor alarm to go into into the
     * <code>ALARM</code> state. The maximum waiting time is as specified in
     * <code>ActionsSuppressorWaitPeriod</code>. After this time, the composite alarm
     * performs its actions. When the value is <code>ExtensionPeriod</code>, it means
     * that the actions are suppressed because the composite alarm is waiting after the
     * suppressor alarm went out of the <code>ALARM</code> state. The maximum waiting
     * time is as specified in <code>ActionsSuppressorExtensionPeriod</code>. After
     * this time, the composite alarm performs its actions. </p>
     */
    inline ActionsSuppressedBy GetActionsSuppressedBy() const { return m_actionsSuppressedBy; }
    inline bool ActionsSuppressedByHasBeenSet() const { return m_actionsSuppressedByHasBeenSet; }
    inline void SetActionsSuppressedBy(ActionsSuppressedBy value) { m_actionsSuppressedByHasBeenSet = true; m_actionsSuppressedBy = value; }
    inline CompositeAlarm& WithActionsSuppressedBy(ActionsSuppressedBy value) { SetActionsSuppressedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Captures the reason for action suppression. </p>
     */
    inline const Aws::String& GetActionsSuppressedReason() const { return m_actionsSuppressedReason; }
    inline bool ActionsSuppressedReasonHasBeenSet() const { return m_actionsSuppressedReasonHasBeenSet; }
    template<typename ActionsSuppressedReasonT = Aws::String>
    void SetActionsSuppressedReason(ActionsSuppressedReasonT&& value) { m_actionsSuppressedReasonHasBeenSet = true; m_actionsSuppressedReason = std::forward<ActionsSuppressedReasonT>(value); }
    template<typename ActionsSuppressedReasonT = Aws::String>
    CompositeAlarm& WithActionsSuppressedReason(ActionsSuppressedReasonT&& value) { SetActionsSuppressedReason(std::forward<ActionsSuppressedReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Actions will be suppressed if the suppressor alarm is in the
     * <code>ALARM</code> state. <code>ActionsSuppressor</code> can be an AlarmName or
     * an Amazon Resource Name (ARN) from an existing alarm. </p>
     */
    inline const Aws::String& GetActionsSuppressor() const { return m_actionsSuppressor; }
    inline bool ActionsSuppressorHasBeenSet() const { return m_actionsSuppressorHasBeenSet; }
    template<typename ActionsSuppressorT = Aws::String>
    void SetActionsSuppressor(ActionsSuppressorT&& value) { m_actionsSuppressorHasBeenSet = true; m_actionsSuppressor = std::forward<ActionsSuppressorT>(value); }
    template<typename ActionsSuppressorT = Aws::String>
    CompositeAlarm& WithActionsSuppressor(ActionsSuppressorT&& value) { SetActionsSuppressor(std::forward<ActionsSuppressorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum time in seconds that the composite alarm waits for the
     * suppressor alarm to go into the <code>ALARM</code> state. After this time, the
     * composite alarm performs its actions. </p>  <p>
     * <code>WaitPeriod</code> is required only when <code>ActionsSuppressor</code> is
     * specified. </p> 
     */
    inline int GetActionsSuppressorWaitPeriod() const { return m_actionsSuppressorWaitPeriod; }
    inline bool ActionsSuppressorWaitPeriodHasBeenSet() const { return m_actionsSuppressorWaitPeriodHasBeenSet; }
    inline void SetActionsSuppressorWaitPeriod(int value) { m_actionsSuppressorWaitPeriodHasBeenSet = true; m_actionsSuppressorWaitPeriod = value; }
    inline CompositeAlarm& WithActionsSuppressorWaitPeriod(int value) { SetActionsSuppressorWaitPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum time in seconds that the composite alarm waits after suppressor
     * alarm goes out of the <code>ALARM</code> state. After this time, the composite
     * alarm performs its actions. </p>  <p> <code>ExtensionPeriod</code> is
     * required only when <code>ActionsSuppressor</code> is specified. </p>
     * 
     */
    inline int GetActionsSuppressorExtensionPeriod() const { return m_actionsSuppressorExtensionPeriod; }
    inline bool ActionsSuppressorExtensionPeriodHasBeenSet() const { return m_actionsSuppressorExtensionPeriodHasBeenSet; }
    inline void SetActionsSuppressorExtensionPeriod(int value) { m_actionsSuppressorExtensionPeriodHasBeenSet = true; m_actionsSuppressorExtensionPeriod = value; }
    inline CompositeAlarm& WithActionsSuppressorExtensionPeriod(int value) { SetActionsSuppressorExtensionPeriod(value); return *this;}
    ///@}
  private:

    bool m_actionsEnabled{false};
    bool m_actionsEnabledHasBeenSet = false;

    Aws::Vector<Aws::String> m_alarmActions;
    bool m_alarmActionsHasBeenSet = false;

    Aws::String m_alarmArn;
    bool m_alarmArnHasBeenSet = false;

    Aws::Utils::DateTime m_alarmConfigurationUpdatedTimestamp{};
    bool m_alarmConfigurationUpdatedTimestampHasBeenSet = false;

    Aws::String m_alarmDescription;
    bool m_alarmDescriptionHasBeenSet = false;

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet = false;

    Aws::String m_alarmRule;
    bool m_alarmRuleHasBeenSet = false;

    Aws::Vector<Aws::String> m_insufficientDataActions;
    bool m_insufficientDataActionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_oKActions;
    bool m_oKActionsHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::String m_stateReasonData;
    bool m_stateReasonDataHasBeenSet = false;

    Aws::Utils::DateTime m_stateUpdatedTimestamp{};
    bool m_stateUpdatedTimestampHasBeenSet = false;

    StateValue m_stateValue{StateValue::NOT_SET};
    bool m_stateValueHasBeenSet = false;

    Aws::Utils::DateTime m_stateTransitionedTimestamp{};
    bool m_stateTransitionedTimestampHasBeenSet = false;

    ActionsSuppressedBy m_actionsSuppressedBy{ActionsSuppressedBy::NOT_SET};
    bool m_actionsSuppressedByHasBeenSet = false;

    Aws::String m_actionsSuppressedReason;
    bool m_actionsSuppressedReasonHasBeenSet = false;

    Aws::String m_actionsSuppressor;
    bool m_actionsSuppressorHasBeenSet = false;

    int m_actionsSuppressorWaitPeriod{0};
    bool m_actionsSuppressorWaitPeriodHasBeenSet = false;

    int m_actionsSuppressorExtensionPeriod{0};
    bool m_actionsSuppressorExtensionPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws

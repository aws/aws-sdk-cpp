/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class PutCompositeAlarmRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API PutCompositeAlarmRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutCompositeAlarm"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Indicates whether actions should be executed during any changes to the alarm
     * state of the composite alarm. The default is <code>TRUE</code>.</p>
     */
    inline bool GetActionsEnabled() const { return m_actionsEnabled; }
    inline bool ActionsEnabledHasBeenSet() const { return m_actionsEnabledHasBeenSet; }
    inline void SetActionsEnabled(bool value) { m_actionsEnabledHasBeenSet = true; m_actionsEnabled = value; }
    inline PutCompositeAlarmRequest& WithActionsEnabled(bool value) { SetActionsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions to execute when this alarm transitions to the <code>ALARM</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p> <p>Valid Values: ]</p> <p> <b>Amazon SNS actions:</b> </p> <p>
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p> <p> <b>Lambda actions:</b> </p> <ul> <li> <p>Invoke the latest version of a
     * Lambda function:
     * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>
     * </code> </p> </li> <li> <p>Invoke a specific version of a Lambda function:
     * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>:<i>version-number</i>
     * </code> </p> </li> <li> <p>Invoke a function by using an alias Lambda function:
     * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>:<i>alias-name</i>
     * </code> </p> </li> </ul> <p> <b>Systems Manager actions:</b> </p> <p>
     * <code>arn:aws:ssm:<i>region</i>:<i>account-id</i>:opsitem:<i>severity</i>
     * </code> </p> <p> <b>Start a Amazon Q Developer operational investigation</b>
     * </p> <p>
     * <code>arn:aws:aiops:<i>region</i>:<i>account-id</i>:investigation-group:<i>investigation-group-id</i>
     * </code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetAlarmActions() const { return m_alarmActions; }
    inline bool AlarmActionsHasBeenSet() const { return m_alarmActionsHasBeenSet; }
    template<typename AlarmActionsT = Aws::Vector<Aws::String>>
    void SetAlarmActions(AlarmActionsT&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions = std::forward<AlarmActionsT>(value); }
    template<typename AlarmActionsT = Aws::Vector<Aws::String>>
    PutCompositeAlarmRequest& WithAlarmActions(AlarmActionsT&& value) { SetAlarmActions(std::forward<AlarmActionsT>(value)); return *this;}
    template<typename AlarmActionsT = Aws::String>
    PutCompositeAlarmRequest& AddAlarmActions(AlarmActionsT&& value) { m_alarmActionsHasBeenSet = true; m_alarmActions.emplace_back(std::forward<AlarmActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description for the composite alarm.</p>
     */
    inline const Aws::String& GetAlarmDescription() const { return m_alarmDescription; }
    inline bool AlarmDescriptionHasBeenSet() const { return m_alarmDescriptionHasBeenSet; }
    template<typename AlarmDescriptionT = Aws::String>
    void SetAlarmDescription(AlarmDescriptionT&& value) { m_alarmDescriptionHasBeenSet = true; m_alarmDescription = std::forward<AlarmDescriptionT>(value); }
    template<typename AlarmDescriptionT = Aws::String>
    PutCompositeAlarmRequest& WithAlarmDescription(AlarmDescriptionT&& value) { SetAlarmDescription(std::forward<AlarmDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the composite alarm. This name must be unique within the
     * Region.</p>
     */
    inline const Aws::String& GetAlarmName() const { return m_alarmName; }
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }
    template<typename AlarmNameT = Aws::String>
    void SetAlarmName(AlarmNameT&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::forward<AlarmNameT>(value); }
    template<typename AlarmNameT = Aws::String>
    PutCompositeAlarmRequest& WithAlarmName(AlarmNameT&& value) { SetAlarmName(std::forward<AlarmNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An expression that specifies which other alarms are to be evaluated to
     * determine this composite alarm's state. For each alarm that you reference, you
     * designate a function that specifies whether that alarm needs to be in ALARM
     * state, OK state, or INSUFFICIENT_DATA state. You can use operators (AND, OR and
     * NOT) to combine multiple functions in a single expression. You can use
     * parenthesis to logically group the functions in your expression.</p> <p>You can
     * use either alarm names or ARNs to reference the other alarms that are to be
     * evaluated.</p> <p>Functions can include the following:</p> <ul> <li> <p>
     * <code>ALARM("<i>alarm-name</i> or <i>alarm-ARN</i>")</code> is TRUE if the named
     * alarm is in ALARM state.</p> </li> <li> <p> <code>OK("<i>alarm-name</i> or
     * <i>alarm-ARN</i>")</code> is TRUE if the named alarm is in OK state.</p> </li>
     * <li> <p> <code>INSUFFICIENT_DATA("<i>alarm-name</i> or <i>alarm-ARN</i>")</code>
     * is TRUE if the named alarm is in INSUFFICIENT_DATA state.</p> </li> <li> <p>
     * <code>TRUE</code> always evaluates to TRUE.</p> </li> <li> <p>
     * <code>FALSE</code> always evaluates to FALSE.</p> </li> </ul> <p>TRUE and FALSE
     * are useful for testing a complex <code>AlarmRule</code> structure, and for
     * testing your alarm actions.</p> <p>Alarm names specified in
     * <code>AlarmRule</code> can be surrounded with double-quotes ("), but do not have
     * to be.</p> <p>The following are some examples of <code>AlarmRule</code>:</p>
     * <ul> <li> <p> <code>ALARM(CPUUtilizationTooHigh) AND
     * ALARM(DiskReadOpsTooHigh)</code> specifies that the composite alarm goes into
     * ALARM state only if both CPUUtilizationTooHigh and DiskReadOpsTooHigh alarms are
     * in ALARM state.</p> </li> <li> <p> <code>ALARM(CPUUtilizationTooHigh) AND NOT
     * ALARM(DeploymentInProgress)</code> specifies that the alarm goes to ALARM state
     * if CPUUtilizationTooHigh is in ALARM state and DeploymentInProgress is not in
     * ALARM state. This example reduces alarm noise during a known deployment
     * window.</p> </li> <li> <p> <code>(ALARM(CPUUtilizationTooHigh) OR
     * ALARM(DiskReadOpsTooHigh)) AND OK(NetworkOutTooHigh)</code> goes into ALARM
     * state if CPUUtilizationTooHigh OR DiskReadOpsTooHigh is in ALARM state, and if
     * NetworkOutTooHigh is in OK state. This provides another example of using a
     * composite alarm to prevent noise. This rule ensures that you are not notified
     * with an alarm action on high CPU or disk usage if a known network problem is
     * also occurring.</p> </li> </ul> <p>The <code>AlarmRule</code> can specify as
     * many as 100 "children" alarms. The <code>AlarmRule</code> expression can have as
     * many as 500 elements. Elements are child alarms, TRUE or FALSE statements, and
     * parentheses.</p>
     */
    inline const Aws::String& GetAlarmRule() const { return m_alarmRule; }
    inline bool AlarmRuleHasBeenSet() const { return m_alarmRuleHasBeenSet; }
    template<typename AlarmRuleT = Aws::String>
    void SetAlarmRule(AlarmRuleT&& value) { m_alarmRuleHasBeenSet = true; m_alarmRule = std::forward<AlarmRuleT>(value); }
    template<typename AlarmRuleT = Aws::String>
    PutCompositeAlarmRequest& WithAlarmRule(AlarmRuleT&& value) { SetAlarmRule(std::forward<AlarmRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The actions to execute when this alarm transitions to the
     * <code>INSUFFICIENT_DATA</code> state from any other state. Each action is
     * specified as an Amazon Resource Name (ARN).</p> <p>Valid Values: ]</p> <p>
     * <b>Amazon SNS actions:</b> </p> <p>
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p> <p> <b>Lambda actions:</b> </p> <ul> <li> <p>Invoke the latest version of a
     * Lambda function:
     * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>
     * </code> </p> </li> <li> <p>Invoke a specific version of a Lambda function:
     * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>:<i>version-number</i>
     * </code> </p> </li> <li> <p>Invoke a function by using an alias Lambda function:
     * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>:<i>alias-name</i>
     * </code> </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetInsufficientDataActions() const { return m_insufficientDataActions; }
    inline bool InsufficientDataActionsHasBeenSet() const { return m_insufficientDataActionsHasBeenSet; }
    template<typename InsufficientDataActionsT = Aws::Vector<Aws::String>>
    void SetInsufficientDataActions(InsufficientDataActionsT&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions = std::forward<InsufficientDataActionsT>(value); }
    template<typename InsufficientDataActionsT = Aws::Vector<Aws::String>>
    PutCompositeAlarmRequest& WithInsufficientDataActions(InsufficientDataActionsT&& value) { SetInsufficientDataActions(std::forward<InsufficientDataActionsT>(value)); return *this;}
    template<typename InsufficientDataActionsT = Aws::String>
    PutCompositeAlarmRequest& AddInsufficientDataActions(InsufficientDataActionsT&& value) { m_insufficientDataActionsHasBeenSet = true; m_insufficientDataActions.emplace_back(std::forward<InsufficientDataActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The actions to execute when this alarm transitions to an <code>OK</code>
     * state from any other state. Each action is specified as an Amazon Resource Name
     * (ARN).</p> <p>Valid Values: ]</p> <p> <b>Amazon SNS actions:</b> </p> <p>
     * <code>arn:aws:sns:<i>region</i>:<i>account-id</i>:<i>sns-topic-name</i> </code>
     * </p> <p> <b>Lambda actions:</b> </p> <ul> <li> <p>Invoke the latest version of a
     * Lambda function:
     * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>
     * </code> </p> </li> <li> <p>Invoke a specific version of a Lambda function:
     * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>:<i>version-number</i>
     * </code> </p> </li> <li> <p>Invoke a function by using an alias Lambda function:
     * <code>arn:aws:lambda:<i>region</i>:<i>account-id</i>:function:<i>function-name</i>:<i>alias-name</i>
     * </code> </p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetOKActions() const { return m_oKActions; }
    inline bool OKActionsHasBeenSet() const { return m_oKActionsHasBeenSet; }
    template<typename OKActionsT = Aws::Vector<Aws::String>>
    void SetOKActions(OKActionsT&& value) { m_oKActionsHasBeenSet = true; m_oKActions = std::forward<OKActionsT>(value); }
    template<typename OKActionsT = Aws::Vector<Aws::String>>
    PutCompositeAlarmRequest& WithOKActions(OKActionsT&& value) { SetOKActions(std::forward<OKActionsT>(value)); return *this;}
    template<typename OKActionsT = Aws::String>
    PutCompositeAlarmRequest& AddOKActions(OKActionsT&& value) { m_oKActionsHasBeenSet = true; m_oKActions.emplace_back(std::forward<OKActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs to associate with the alarm. You can associate as
     * many as 50 tags with an alarm. To be able to associate tags with the alarm when
     * you create the alarm, you must have the <code>cloudwatch:TagResource</code>
     * permission.</p> <p>Tags can help you organize and categorize your resources. You
     * can also use them to scope user permissions by granting a user permission to
     * access or change only resources with certain tag values.</p> <p>If you are using
     * this operation to update an existing alarm, any tags you specify in this
     * parameter are ignored. To change the tags of an existing alarm, use <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_TagResource.html">TagResource</a>
     * or <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_UntagResource.html">UntagResource</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    PutCompositeAlarmRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    PutCompositeAlarmRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    PutCompositeAlarmRequest& WithActionsSuppressor(ActionsSuppressorT&& value) { SetActionsSuppressor(std::forward<ActionsSuppressorT>(value)); return *this;}
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
    inline PutCompositeAlarmRequest& WithActionsSuppressorWaitPeriod(int value) { SetActionsSuppressorWaitPeriod(value); return *this;}
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
    inline PutCompositeAlarmRequest& WithActionsSuppressorExtensionPeriod(int value) { SetActionsSuppressorExtensionPeriod(value); return *this;}
    ///@}
  private:

    bool m_actionsEnabled{false};
    bool m_actionsEnabledHasBeenSet = false;

    Aws::Vector<Aws::String> m_alarmActions;
    bool m_alarmActionsHasBeenSet = false;

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

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

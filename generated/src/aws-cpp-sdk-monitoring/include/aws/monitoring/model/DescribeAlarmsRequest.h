/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/StateValue.h>
#include <aws/monitoring/model/AlarmType.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class DescribeAlarmsRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API DescribeAlarmsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAlarms"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The names of the alarms to retrieve information about.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAlarmNames() const{ return m_alarmNames; }
    inline bool AlarmNamesHasBeenSet() const { return m_alarmNamesHasBeenSet; }
    inline void SetAlarmNames(const Aws::Vector<Aws::String>& value) { m_alarmNamesHasBeenSet = true; m_alarmNames = value; }
    inline void SetAlarmNames(Aws::Vector<Aws::String>&& value) { m_alarmNamesHasBeenSet = true; m_alarmNames = std::move(value); }
    inline DescribeAlarmsRequest& WithAlarmNames(const Aws::Vector<Aws::String>& value) { SetAlarmNames(value); return *this;}
    inline DescribeAlarmsRequest& WithAlarmNames(Aws::Vector<Aws::String>&& value) { SetAlarmNames(std::move(value)); return *this;}
    inline DescribeAlarmsRequest& AddAlarmNames(const Aws::String& value) { m_alarmNamesHasBeenSet = true; m_alarmNames.push_back(value); return *this; }
    inline DescribeAlarmsRequest& AddAlarmNames(Aws::String&& value) { m_alarmNamesHasBeenSet = true; m_alarmNames.push_back(std::move(value)); return *this; }
    inline DescribeAlarmsRequest& AddAlarmNames(const char* value) { m_alarmNamesHasBeenSet = true; m_alarmNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An alarm name prefix. If you specify this parameter, you receive information
     * about all alarms that have names that start with this prefix.</p> <p>If this
     * parameter is specified, you cannot specify <code>AlarmNames</code>.</p>
     */
    inline const Aws::String& GetAlarmNamePrefix() const{ return m_alarmNamePrefix; }
    inline bool AlarmNamePrefixHasBeenSet() const { return m_alarmNamePrefixHasBeenSet; }
    inline void SetAlarmNamePrefix(const Aws::String& value) { m_alarmNamePrefixHasBeenSet = true; m_alarmNamePrefix = value; }
    inline void SetAlarmNamePrefix(Aws::String&& value) { m_alarmNamePrefixHasBeenSet = true; m_alarmNamePrefix = std::move(value); }
    inline void SetAlarmNamePrefix(const char* value) { m_alarmNamePrefixHasBeenSet = true; m_alarmNamePrefix.assign(value); }
    inline DescribeAlarmsRequest& WithAlarmNamePrefix(const Aws::String& value) { SetAlarmNamePrefix(value); return *this;}
    inline DescribeAlarmsRequest& WithAlarmNamePrefix(Aws::String&& value) { SetAlarmNamePrefix(std::move(value)); return *this;}
    inline DescribeAlarmsRequest& WithAlarmNamePrefix(const char* value) { SetAlarmNamePrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to specify whether you want the operation to return metric
     * alarms or composite alarms. If you omit this parameter, only metric alarms are
     * returned, even if composite alarms exist in the account.</p> <p>For example, if
     * you omit this parameter or specify <code>MetricAlarms</code>, the operation
     * returns only a list of metric alarms. It does not return any composite alarms,
     * even if composite alarms exist in the account.</p> <p>If you specify
     * <code>CompositeAlarms</code>, the operation returns only a list of composite
     * alarms, and does not return any metric alarms.</p>
     */
    inline const Aws::Vector<AlarmType>& GetAlarmTypes() const{ return m_alarmTypes; }
    inline bool AlarmTypesHasBeenSet() const { return m_alarmTypesHasBeenSet; }
    inline void SetAlarmTypes(const Aws::Vector<AlarmType>& value) { m_alarmTypesHasBeenSet = true; m_alarmTypes = value; }
    inline void SetAlarmTypes(Aws::Vector<AlarmType>&& value) { m_alarmTypesHasBeenSet = true; m_alarmTypes = std::move(value); }
    inline DescribeAlarmsRequest& WithAlarmTypes(const Aws::Vector<AlarmType>& value) { SetAlarmTypes(value); return *this;}
    inline DescribeAlarmsRequest& WithAlarmTypes(Aws::Vector<AlarmType>&& value) { SetAlarmTypes(std::move(value)); return *this;}
    inline DescribeAlarmsRequest& AddAlarmTypes(const AlarmType& value) { m_alarmTypesHasBeenSet = true; m_alarmTypes.push_back(value); return *this; }
    inline DescribeAlarmsRequest& AddAlarmTypes(AlarmType&& value) { m_alarmTypesHasBeenSet = true; m_alarmTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you use this parameter and specify the name of a composite alarm, the
     * operation returns information about the "children" alarms of the alarm you
     * specify. These are the metric alarms and composite alarms referenced in the
     * <code>AlarmRule</code> field of the composite alarm that you specify in
     * <code>ChildrenOfAlarmName</code>. Information about the composite alarm that you
     * name in <code>ChildrenOfAlarmName</code> is not returned.</p> <p>If you specify
     * <code>ChildrenOfAlarmName</code>, you cannot specify any other parameters in the
     * request except for <code>MaxRecords</code> and <code>NextToken</code>. If you do
     * so, you receive a validation error.</p>  <p>Only the <code>Alarm
     * Name</code>, <code>ARN</code>, <code>StateValue</code>
     * (OK/ALARM/INSUFFICIENT_DATA), and <code>StateUpdatedTimestamp</code> information
     * are returned by this operation when you use this parameter. To get complete
     * information about these alarms, perform another <code>DescribeAlarms</code>
     * operation and specify the parent alarm names in the <code>AlarmNames</code>
     * parameter.</p> 
     */
    inline const Aws::String& GetChildrenOfAlarmName() const{ return m_childrenOfAlarmName; }
    inline bool ChildrenOfAlarmNameHasBeenSet() const { return m_childrenOfAlarmNameHasBeenSet; }
    inline void SetChildrenOfAlarmName(const Aws::String& value) { m_childrenOfAlarmNameHasBeenSet = true; m_childrenOfAlarmName = value; }
    inline void SetChildrenOfAlarmName(Aws::String&& value) { m_childrenOfAlarmNameHasBeenSet = true; m_childrenOfAlarmName = std::move(value); }
    inline void SetChildrenOfAlarmName(const char* value) { m_childrenOfAlarmNameHasBeenSet = true; m_childrenOfAlarmName.assign(value); }
    inline DescribeAlarmsRequest& WithChildrenOfAlarmName(const Aws::String& value) { SetChildrenOfAlarmName(value); return *this;}
    inline DescribeAlarmsRequest& WithChildrenOfAlarmName(Aws::String&& value) { SetChildrenOfAlarmName(std::move(value)); return *this;}
    inline DescribeAlarmsRequest& WithChildrenOfAlarmName(const char* value) { SetChildrenOfAlarmName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you use this parameter and specify the name of a metric or composite
     * alarm, the operation returns information about the "parent" alarms of the alarm
     * you specify. These are the composite alarms that have <code>AlarmRule</code>
     * parameters that reference the alarm named in <code>ParentsOfAlarmName</code>.
     * Information about the alarm that you specify in <code>ParentsOfAlarmName</code>
     * is not returned.</p> <p>If you specify <code>ParentsOfAlarmName</code>, you
     * cannot specify any other parameters in the request except for
     * <code>MaxRecords</code> and <code>NextToken</code>. If you do so, you receive a
     * validation error.</p>  <p>Only the Alarm Name and ARN are returned by this
     * operation when you use this parameter. To get complete information about these
     * alarms, perform another <code>DescribeAlarms</code> operation and specify the
     * parent alarm names in the <code>AlarmNames</code> parameter.</p> 
     */
    inline const Aws::String& GetParentsOfAlarmName() const{ return m_parentsOfAlarmName; }
    inline bool ParentsOfAlarmNameHasBeenSet() const { return m_parentsOfAlarmNameHasBeenSet; }
    inline void SetParentsOfAlarmName(const Aws::String& value) { m_parentsOfAlarmNameHasBeenSet = true; m_parentsOfAlarmName = value; }
    inline void SetParentsOfAlarmName(Aws::String&& value) { m_parentsOfAlarmNameHasBeenSet = true; m_parentsOfAlarmName = std::move(value); }
    inline void SetParentsOfAlarmName(const char* value) { m_parentsOfAlarmNameHasBeenSet = true; m_parentsOfAlarmName.assign(value); }
    inline DescribeAlarmsRequest& WithParentsOfAlarmName(const Aws::String& value) { SetParentsOfAlarmName(value); return *this;}
    inline DescribeAlarmsRequest& WithParentsOfAlarmName(Aws::String&& value) { SetParentsOfAlarmName(std::move(value)); return *this;}
    inline DescribeAlarmsRequest& WithParentsOfAlarmName(const char* value) { SetParentsOfAlarmName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify this parameter to receive information only about alarms that are
     * currently in the state that you specify.</p>
     */
    inline const StateValue& GetStateValue() const{ return m_stateValue; }
    inline bool StateValueHasBeenSet() const { return m_stateValueHasBeenSet; }
    inline void SetStateValue(const StateValue& value) { m_stateValueHasBeenSet = true; m_stateValue = value; }
    inline void SetStateValue(StateValue&& value) { m_stateValueHasBeenSet = true; m_stateValue = std::move(value); }
    inline DescribeAlarmsRequest& WithStateValue(const StateValue& value) { SetStateValue(value); return *this;}
    inline DescribeAlarmsRequest& WithStateValue(StateValue&& value) { SetStateValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to filter the results of the operation to only those
     * alarms that use a certain alarm action. For example, you could specify the ARN
     * of an SNS topic to find all alarms that send notifications to that topic.</p>
     */
    inline const Aws::String& GetActionPrefix() const{ return m_actionPrefix; }
    inline bool ActionPrefixHasBeenSet() const { return m_actionPrefixHasBeenSet; }
    inline void SetActionPrefix(const Aws::String& value) { m_actionPrefixHasBeenSet = true; m_actionPrefix = value; }
    inline void SetActionPrefix(Aws::String&& value) { m_actionPrefixHasBeenSet = true; m_actionPrefix = std::move(value); }
    inline void SetActionPrefix(const char* value) { m_actionPrefixHasBeenSet = true; m_actionPrefix.assign(value); }
    inline DescribeAlarmsRequest& WithActionPrefix(const Aws::String& value) { SetActionPrefix(value); return *this;}
    inline DescribeAlarmsRequest& WithActionPrefix(Aws::String&& value) { SetActionPrefix(std::move(value)); return *this;}
    inline DescribeAlarmsRequest& WithActionPrefix(const char* value) { SetActionPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of alarm descriptions to retrieve.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeAlarmsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeAlarmsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeAlarmsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeAlarmsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_alarmNames;
    bool m_alarmNamesHasBeenSet = false;

    Aws::String m_alarmNamePrefix;
    bool m_alarmNamePrefixHasBeenSet = false;

    Aws::Vector<AlarmType> m_alarmTypes;
    bool m_alarmTypesHasBeenSet = false;

    Aws::String m_childrenOfAlarmName;
    bool m_childrenOfAlarmNameHasBeenSet = false;

    Aws::String m_parentsOfAlarmName;
    bool m_parentsOfAlarmNameHasBeenSet = false;

    StateValue m_stateValue;
    bool m_stateValueHasBeenSet = false;

    Aws::String m_actionPrefix;
    bool m_actionPrefixHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws

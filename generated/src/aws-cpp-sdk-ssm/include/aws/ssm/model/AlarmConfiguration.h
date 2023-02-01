/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/Alarm.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The details for the CloudWatch alarm you want to apply to an automation or
   * command.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AlarmConfiguration">AWS
   * API Reference</a></p>
   */
  class AlarmConfiguration
  {
  public:
    AWS_SSM_API AlarmConfiguration();
    AWS_SSM_API AlarmConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AlarmConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If you specify <code>true</code> for this value, your automation or command
     * continue to run even if we can't gather information about the state of your
     * CloudWatch alarm. The default value is <code>false</code>.</p>
     */
    inline bool GetIgnorePollAlarmFailure() const{ return m_ignorePollAlarmFailure; }

    /**
     * <p>If you specify <code>true</code> for this value, your automation or command
     * continue to run even if we can't gather information about the state of your
     * CloudWatch alarm. The default value is <code>false</code>.</p>
     */
    inline bool IgnorePollAlarmFailureHasBeenSet() const { return m_ignorePollAlarmFailureHasBeenSet; }

    /**
     * <p>If you specify <code>true</code> for this value, your automation or command
     * continue to run even if we can't gather information about the state of your
     * CloudWatch alarm. The default value is <code>false</code>.</p>
     */
    inline void SetIgnorePollAlarmFailure(bool value) { m_ignorePollAlarmFailureHasBeenSet = true; m_ignorePollAlarmFailure = value; }

    /**
     * <p>If you specify <code>true</code> for this value, your automation or command
     * continue to run even if we can't gather information about the state of your
     * CloudWatch alarm. The default value is <code>false</code>.</p>
     */
    inline AlarmConfiguration& WithIgnorePollAlarmFailure(bool value) { SetIgnorePollAlarmFailure(value); return *this;}


    /**
     * <p>The name of the CloudWatch alarm specified in the configuration.</p>
     */
    inline const Aws::Vector<Alarm>& GetAlarms() const{ return m_alarms; }

    /**
     * <p>The name of the CloudWatch alarm specified in the configuration.</p>
     */
    inline bool AlarmsHasBeenSet() const { return m_alarmsHasBeenSet; }

    /**
     * <p>The name of the CloudWatch alarm specified in the configuration.</p>
     */
    inline void SetAlarms(const Aws::Vector<Alarm>& value) { m_alarmsHasBeenSet = true; m_alarms = value; }

    /**
     * <p>The name of the CloudWatch alarm specified in the configuration.</p>
     */
    inline void SetAlarms(Aws::Vector<Alarm>&& value) { m_alarmsHasBeenSet = true; m_alarms = std::move(value); }

    /**
     * <p>The name of the CloudWatch alarm specified in the configuration.</p>
     */
    inline AlarmConfiguration& WithAlarms(const Aws::Vector<Alarm>& value) { SetAlarms(value); return *this;}

    /**
     * <p>The name of the CloudWatch alarm specified in the configuration.</p>
     */
    inline AlarmConfiguration& WithAlarms(Aws::Vector<Alarm>&& value) { SetAlarms(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch alarm specified in the configuration.</p>
     */
    inline AlarmConfiguration& AddAlarms(const Alarm& value) { m_alarmsHasBeenSet = true; m_alarms.push_back(value); return *this; }

    /**
     * <p>The name of the CloudWatch alarm specified in the configuration.</p>
     */
    inline AlarmConfiguration& AddAlarms(Alarm&& value) { m_alarmsHasBeenSet = true; m_alarms.push_back(std::move(value)); return *this; }

  private:

    bool m_ignorePollAlarmFailure;
    bool m_ignorePollAlarmFailureHasBeenSet = false;

    Aws::Vector<Alarm> m_alarms;
    bool m_alarmsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

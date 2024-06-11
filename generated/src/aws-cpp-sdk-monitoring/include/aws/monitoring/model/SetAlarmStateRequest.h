/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/StateValue.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class SetAlarmStateRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API SetAlarmStateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetAlarmState"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the alarm.</p>
     */
    inline const Aws::String& GetAlarmName() const{ return m_alarmName; }
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }
    inline void SetAlarmName(const Aws::String& value) { m_alarmNameHasBeenSet = true; m_alarmName = value; }
    inline void SetAlarmName(Aws::String&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::move(value); }
    inline void SetAlarmName(const char* value) { m_alarmNameHasBeenSet = true; m_alarmName.assign(value); }
    inline SetAlarmStateRequest& WithAlarmName(const Aws::String& value) { SetAlarmName(value); return *this;}
    inline SetAlarmStateRequest& WithAlarmName(Aws::String&& value) { SetAlarmName(std::move(value)); return *this;}
    inline SetAlarmStateRequest& WithAlarmName(const char* value) { SetAlarmName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the state.</p>
     */
    inline const StateValue& GetStateValue() const{ return m_stateValue; }
    inline bool StateValueHasBeenSet() const { return m_stateValueHasBeenSet; }
    inline void SetStateValue(const StateValue& value) { m_stateValueHasBeenSet = true; m_stateValue = value; }
    inline void SetStateValue(StateValue&& value) { m_stateValueHasBeenSet = true; m_stateValue = std::move(value); }
    inline SetAlarmStateRequest& WithStateValue(const StateValue& value) { SetStateValue(value); return *this;}
    inline SetAlarmStateRequest& WithStateValue(StateValue&& value) { SetStateValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that this alarm is set to this specific state, in text format.</p>
     */
    inline const Aws::String& GetStateReason() const{ return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    inline void SetStateReason(const Aws::String& value) { m_stateReasonHasBeenSet = true; m_stateReason = value; }
    inline void SetStateReason(Aws::String&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::move(value); }
    inline void SetStateReason(const char* value) { m_stateReasonHasBeenSet = true; m_stateReason.assign(value); }
    inline SetAlarmStateRequest& WithStateReason(const Aws::String& value) { SetStateReason(value); return *this;}
    inline SetAlarmStateRequest& WithStateReason(Aws::String&& value) { SetStateReason(std::move(value)); return *this;}
    inline SetAlarmStateRequest& WithStateReason(const char* value) { SetStateReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that this alarm is set to this specific state, in JSON format.</p>
     * <p>For SNS or EC2 alarm actions, this is just informational. But for EC2 Auto
     * Scaling or application Auto Scaling alarm actions, the Auto Scaling policy uses
     * the information in this field to take the correct action.</p>
     */
    inline const Aws::String& GetStateReasonData() const{ return m_stateReasonData; }
    inline bool StateReasonDataHasBeenSet() const { return m_stateReasonDataHasBeenSet; }
    inline void SetStateReasonData(const Aws::String& value) { m_stateReasonDataHasBeenSet = true; m_stateReasonData = value; }
    inline void SetStateReasonData(Aws::String&& value) { m_stateReasonDataHasBeenSet = true; m_stateReasonData = std::move(value); }
    inline void SetStateReasonData(const char* value) { m_stateReasonDataHasBeenSet = true; m_stateReasonData.assign(value); }
    inline SetAlarmStateRequest& WithStateReasonData(const Aws::String& value) { SetStateReasonData(value); return *this;}
    inline SetAlarmStateRequest& WithStateReasonData(Aws::String&& value) { SetStateReasonData(std::move(value)); return *this;}
    inline SetAlarmStateRequest& WithStateReasonData(const char* value) { SetStateReasonData(value); return *this;}
    ///@}
  private:

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet = false;

    StateValue m_stateValue;
    bool m_stateValueHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::String m_stateReasonData;
    bool m_stateReasonDataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws

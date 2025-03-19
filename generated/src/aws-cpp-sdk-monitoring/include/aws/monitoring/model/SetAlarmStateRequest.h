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
    AWS_CLOUDWATCH_API SetAlarmStateRequest() = default;

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
    inline const Aws::String& GetAlarmName() const { return m_alarmName; }
    inline bool AlarmNameHasBeenSet() const { return m_alarmNameHasBeenSet; }
    template<typename AlarmNameT = Aws::String>
    void SetAlarmName(AlarmNameT&& value) { m_alarmNameHasBeenSet = true; m_alarmName = std::forward<AlarmNameT>(value); }
    template<typename AlarmNameT = Aws::String>
    SetAlarmStateRequest& WithAlarmName(AlarmNameT&& value) { SetAlarmName(std::forward<AlarmNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the state.</p>
     */
    inline StateValue GetStateValue() const { return m_stateValue; }
    inline bool StateValueHasBeenSet() const { return m_stateValueHasBeenSet; }
    inline void SetStateValue(StateValue value) { m_stateValueHasBeenSet = true; m_stateValue = value; }
    inline SetAlarmStateRequest& WithStateValue(StateValue value) { SetStateValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that this alarm is set to this specific state, in text format.</p>
     */
    inline const Aws::String& GetStateReason() const { return m_stateReason; }
    inline bool StateReasonHasBeenSet() const { return m_stateReasonHasBeenSet; }
    template<typename StateReasonT = Aws::String>
    void SetStateReason(StateReasonT&& value) { m_stateReasonHasBeenSet = true; m_stateReason = std::forward<StateReasonT>(value); }
    template<typename StateReasonT = Aws::String>
    SetAlarmStateRequest& WithStateReason(StateReasonT&& value) { SetStateReason(std::forward<StateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that this alarm is set to this specific state, in JSON format.</p>
     * <p>For SNS or EC2 alarm actions, this is just informational. But for EC2 Auto
     * Scaling or application Auto Scaling alarm actions, the Auto Scaling policy uses
     * the information in this field to take the correct action.</p>
     */
    inline const Aws::String& GetStateReasonData() const { return m_stateReasonData; }
    inline bool StateReasonDataHasBeenSet() const { return m_stateReasonDataHasBeenSet; }
    template<typename StateReasonDataT = Aws::String>
    void SetStateReasonData(StateReasonDataT&& value) { m_stateReasonDataHasBeenSet = true; m_stateReasonData = std::forward<StateReasonDataT>(value); }
    template<typename StateReasonDataT = Aws::String>
    SetAlarmStateRequest& WithStateReasonData(StateReasonDataT&& value) { SetStateReasonData(std::forward<StateReasonDataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_alarmName;
    bool m_alarmNameHasBeenSet = false;

    StateValue m_stateValue{StateValue::NOT_SET};
    bool m_stateValueHasBeenSet = false;

    Aws::String m_stateReason;
    bool m_stateReasonHasBeenSet = false;

    Aws::String m_stateReasonData;
    bool m_stateReasonDataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws

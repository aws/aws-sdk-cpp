/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ExternalAlarmState.h>
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
   * <p>The details about the state of your CloudWatch alarm.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AlarmStateInformation">AWS
   * API Reference</a></p>
   */
  class AlarmStateInformation
  {
  public:
    AWS_SSM_API AlarmStateInformation() = default;
    AWS_SSM_API AlarmStateInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AlarmStateInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of your CloudWatch alarm.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AlarmStateInformation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of your CloudWatch alarm.</p>
     */
    inline ExternalAlarmState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ExternalAlarmState value) { m_stateHasBeenSet = true; m_state = value; }
    inline AlarmStateInformation& WithState(ExternalAlarmState value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ExternalAlarmState m_state{ExternalAlarmState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

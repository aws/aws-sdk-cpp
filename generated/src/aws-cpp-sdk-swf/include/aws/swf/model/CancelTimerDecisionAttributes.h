/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Provides the details of the <code>CancelTimer</code> decision.</p> <p>
   * <b>Access Control</b> </p> <p>You can use IAM policies to control this
   * decision's access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
   * <code>Resource</code> element with the domain name to limit the action to only
   * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
   * or deny permission to call this action.</p> </li> <li> <p>You cannot use an IAM
   * policy to constrain this action's parameters.</p> </li> </ul> <p>If the caller
   * doesn't have sufficient permissions to invoke the action, or the parameter
   * values fall outside the specified constraints, the action fails. The associated
   * event attribute's <code>cause</code> parameter is set to
   * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
   * <a
   * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
   * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/CancelTimerDecisionAttributes">AWS
   * API Reference</a></p>
   */
  class CancelTimerDecisionAttributes
  {
  public:
    AWS_SWF_API CancelTimerDecisionAttributes() = default;
    AWS_SWF_API CancelTimerDecisionAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API CancelTimerDecisionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique ID of the timer to cancel.</p>
     */
    inline const Aws::String& GetTimerId() const { return m_timerId; }
    inline bool TimerIdHasBeenSet() const { return m_timerIdHasBeenSet; }
    template<typename TimerIdT = Aws::String>
    void SetTimerId(TimerIdT&& value) { m_timerIdHasBeenSet = true; m_timerId = std::forward<TimerIdT>(value); }
    template<typename TimerIdT = Aws::String>
    CancelTimerDecisionAttributes& WithTimerId(TimerIdT&& value) { SetTimerId(std::forward<TimerIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_timerId;
    bool m_timerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws

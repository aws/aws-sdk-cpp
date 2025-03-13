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
   * <p>Decision attributes specified in
   * <code>scheduleLambdaFunctionDecisionAttributes</code> within the list of
   * decisions <code>decisions</code> passed to
   * <a>RespondDecisionTaskCompleted</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ScheduleLambdaFunctionDecisionAttributes">AWS
   * API Reference</a></p>
   */
  class ScheduleLambdaFunctionDecisionAttributes
  {
  public:
    AWS_SWF_API ScheduleLambdaFunctionDecisionAttributes() = default;
    AWS_SWF_API ScheduleLambdaFunctionDecisionAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API ScheduleLambdaFunctionDecisionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string that identifies the Lambda function execution in the event
     * history.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ScheduleLambdaFunctionDecisionAttributes& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name, or ARN, of the Lambda function to schedule.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ScheduleLambdaFunctionDecisionAttributes& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the Lambda task.</p>
     */
    inline const Aws::String& GetControl() const { return m_control; }
    inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }
    template<typename ControlT = Aws::String>
    void SetControl(ControlT&& value) { m_controlHasBeenSet = true; m_control = std::forward<ControlT>(value); }
    template<typename ControlT = Aws::String>
    ScheduleLambdaFunctionDecisionAttributes& WithControl(ControlT&& value) { SetControl(std::forward<ControlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional input data to be supplied to the Lambda function.</p>
     */
    inline const Aws::String& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = Aws::String>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = Aws::String>
    ScheduleLambdaFunctionDecisionAttributes& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout value, in seconds, after which the Lambda function is considered
     * to be failed once it has started. This can be any integer from 1-900
     * (1s-15m).</p> <p>If no value is supplied, then a default value of 900s is
     * assumed.</p>
     */
    inline const Aws::String& GetStartToCloseTimeout() const { return m_startToCloseTimeout; }
    inline bool StartToCloseTimeoutHasBeenSet() const { return m_startToCloseTimeoutHasBeenSet; }
    template<typename StartToCloseTimeoutT = Aws::String>
    void SetStartToCloseTimeout(StartToCloseTimeoutT&& value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout = std::forward<StartToCloseTimeoutT>(value); }
    template<typename StartToCloseTimeoutT = Aws::String>
    ScheduleLambdaFunctionDecisionAttributes& WithStartToCloseTimeout(StartToCloseTimeoutT&& value) { SetStartToCloseTimeout(std::forward<StartToCloseTimeoutT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_control;
    bool m_controlHasBeenSet = false;

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    Aws::String m_startToCloseTimeout;
    bool m_startToCloseTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws

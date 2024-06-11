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
    AWS_SWF_API ScheduleLambdaFunctionDecisionAttributes();
    AWS_SWF_API ScheduleLambdaFunctionDecisionAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API ScheduleLambdaFunctionDecisionAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string that identifies the Lambda function execution in the event
     * history.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ScheduleLambdaFunctionDecisionAttributes& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ScheduleLambdaFunctionDecisionAttributes& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ScheduleLambdaFunctionDecisionAttributes& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name, or ARN, of the Lambda function to schedule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ScheduleLambdaFunctionDecisionAttributes& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ScheduleLambdaFunctionDecisionAttributes& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ScheduleLambdaFunctionDecisionAttributes& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data attached to the event that the decider can use in subsequent
     * workflow tasks. This data isn't sent to the Lambda task.</p>
     */
    inline const Aws::String& GetControl() const{ return m_control; }
    inline bool ControlHasBeenSet() const { return m_controlHasBeenSet; }
    inline void SetControl(const Aws::String& value) { m_controlHasBeenSet = true; m_control = value; }
    inline void SetControl(Aws::String&& value) { m_controlHasBeenSet = true; m_control = std::move(value); }
    inline void SetControl(const char* value) { m_controlHasBeenSet = true; m_control.assign(value); }
    inline ScheduleLambdaFunctionDecisionAttributes& WithControl(const Aws::String& value) { SetControl(value); return *this;}
    inline ScheduleLambdaFunctionDecisionAttributes& WithControl(Aws::String&& value) { SetControl(std::move(value)); return *this;}
    inline ScheduleLambdaFunctionDecisionAttributes& WithControl(const char* value) { SetControl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional input data to be supplied to the Lambda function.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }
    inline ScheduleLambdaFunctionDecisionAttributes& WithInput(const Aws::String& value) { SetInput(value); return *this;}
    inline ScheduleLambdaFunctionDecisionAttributes& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}
    inline ScheduleLambdaFunctionDecisionAttributes& WithInput(const char* value) { SetInput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout value, in seconds, after which the Lambda function is considered
     * to be failed once it has started. This can be any integer from 1-900
     * (1s-15m).</p> <p>If no value is supplied, then a default value of 900s is
     * assumed.</p>
     */
    inline const Aws::String& GetStartToCloseTimeout() const{ return m_startToCloseTimeout; }
    inline bool StartToCloseTimeoutHasBeenSet() const { return m_startToCloseTimeoutHasBeenSet; }
    inline void SetStartToCloseTimeout(const Aws::String& value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout = value; }
    inline void SetStartToCloseTimeout(Aws::String&& value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout = std::move(value); }
    inline void SetStartToCloseTimeout(const char* value) { m_startToCloseTimeoutHasBeenSet = true; m_startToCloseTimeout.assign(value); }
    inline ScheduleLambdaFunctionDecisionAttributes& WithStartToCloseTimeout(const Aws::String& value) { SetStartToCloseTimeout(value); return *this;}
    inline ScheduleLambdaFunctionDecisionAttributes& WithStartToCloseTimeout(Aws::String&& value) { SetStartToCloseTimeout(std::move(value)); return *this;}
    inline ScheduleLambdaFunctionDecisionAttributes& WithStartToCloseTimeout(const char* value) { SetStartToCloseTimeout(value); return *this;}
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

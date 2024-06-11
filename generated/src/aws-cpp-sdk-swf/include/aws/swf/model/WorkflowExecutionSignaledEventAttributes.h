/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/swf/model/WorkflowExecution.h>
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
   * <p>Provides the details of the <code>WorkflowExecutionSignaled</code>
   * event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/WorkflowExecutionSignaledEventAttributes">AWS
   * API Reference</a></p>
   */
  class WorkflowExecutionSignaledEventAttributes
  {
  public:
    AWS_SWF_API WorkflowExecutionSignaledEventAttributes();
    AWS_SWF_API WorkflowExecutionSignaledEventAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API WorkflowExecutionSignaledEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the signal received. The decider can use the signal name and
     * inputs to determine how to the process the signal.</p>
     */
    inline const Aws::String& GetSignalName() const{ return m_signalName; }
    inline bool SignalNameHasBeenSet() const { return m_signalNameHasBeenSet; }
    inline void SetSignalName(const Aws::String& value) { m_signalNameHasBeenSet = true; m_signalName = value; }
    inline void SetSignalName(Aws::String&& value) { m_signalNameHasBeenSet = true; m_signalName = std::move(value); }
    inline void SetSignalName(const char* value) { m_signalNameHasBeenSet = true; m_signalName.assign(value); }
    inline WorkflowExecutionSignaledEventAttributes& WithSignalName(const Aws::String& value) { SetSignalName(value); return *this;}
    inline WorkflowExecutionSignaledEventAttributes& WithSignalName(Aws::String&& value) { SetSignalName(std::move(value)); return *this;}
    inline WorkflowExecutionSignaledEventAttributes& WithSignalName(const char* value) { SetSignalName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inputs provided with the signal. The decider can use the signal name and
     * inputs to determine how to process the signal.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }
    inline WorkflowExecutionSignaledEventAttributes& WithInput(const Aws::String& value) { SetInput(value); return *this;}
    inline WorkflowExecutionSignaledEventAttributes& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}
    inline WorkflowExecutionSignaledEventAttributes& WithInput(const char* value) { SetInput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The workflow execution that sent the signal. This is set only of the signal
     * was sent by another workflow execution.</p>
     */
    inline const WorkflowExecution& GetExternalWorkflowExecution() const{ return m_externalWorkflowExecution; }
    inline bool ExternalWorkflowExecutionHasBeenSet() const { return m_externalWorkflowExecutionHasBeenSet; }
    inline void SetExternalWorkflowExecution(const WorkflowExecution& value) { m_externalWorkflowExecutionHasBeenSet = true; m_externalWorkflowExecution = value; }
    inline void SetExternalWorkflowExecution(WorkflowExecution&& value) { m_externalWorkflowExecutionHasBeenSet = true; m_externalWorkflowExecution = std::move(value); }
    inline WorkflowExecutionSignaledEventAttributes& WithExternalWorkflowExecution(const WorkflowExecution& value) { SetExternalWorkflowExecution(value); return *this;}
    inline WorkflowExecutionSignaledEventAttributes& WithExternalWorkflowExecution(WorkflowExecution&& value) { SetExternalWorkflowExecution(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>SignalExternalWorkflowExecutionInitiated</code> event
     * corresponding to the <code>SignalExternalWorkflow</code> decision to signal this
     * workflow execution.The source event with this ID can be found in the history of
     * the source workflow execution. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event. This
     * field is set only if the signal was initiated by another workflow execution.</p>
     */
    inline long long GetExternalInitiatedEventId() const{ return m_externalInitiatedEventId; }
    inline bool ExternalInitiatedEventIdHasBeenSet() const { return m_externalInitiatedEventIdHasBeenSet; }
    inline void SetExternalInitiatedEventId(long long value) { m_externalInitiatedEventIdHasBeenSet = true; m_externalInitiatedEventId = value; }
    inline WorkflowExecutionSignaledEventAttributes& WithExternalInitiatedEventId(long long value) { SetExternalInitiatedEventId(value); return *this;}
    ///@}
  private:

    Aws::String m_signalName;
    bool m_signalNameHasBeenSet = false;

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    WorkflowExecution m_externalWorkflowExecution;
    bool m_externalWorkflowExecutionHasBeenSet = false;

    long long m_externalInitiatedEventId;
    bool m_externalInitiatedEventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws

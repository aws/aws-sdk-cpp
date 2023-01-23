/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/SignalType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class SendAutomationSignalRequest : public SSMRequest
  {
  public:
    AWS_SSM_API SendAutomationSignalRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendAutomationSignal"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier for an existing Automation execution that you want to
     * send the signal to.</p>
     */
    inline const Aws::String& GetAutomationExecutionId() const{ return m_automationExecutionId; }

    /**
     * <p>The unique identifier for an existing Automation execution that you want to
     * send the signal to.</p>
     */
    inline bool AutomationExecutionIdHasBeenSet() const { return m_automationExecutionIdHasBeenSet; }

    /**
     * <p>The unique identifier for an existing Automation execution that you want to
     * send the signal to.</p>
     */
    inline void SetAutomationExecutionId(const Aws::String& value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId = value; }

    /**
     * <p>The unique identifier for an existing Automation execution that you want to
     * send the signal to.</p>
     */
    inline void SetAutomationExecutionId(Aws::String&& value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId = std::move(value); }

    /**
     * <p>The unique identifier for an existing Automation execution that you want to
     * send the signal to.</p>
     */
    inline void SetAutomationExecutionId(const char* value) { m_automationExecutionIdHasBeenSet = true; m_automationExecutionId.assign(value); }

    /**
     * <p>The unique identifier for an existing Automation execution that you want to
     * send the signal to.</p>
     */
    inline SendAutomationSignalRequest& WithAutomationExecutionId(const Aws::String& value) { SetAutomationExecutionId(value); return *this;}

    /**
     * <p>The unique identifier for an existing Automation execution that you want to
     * send the signal to.</p>
     */
    inline SendAutomationSignalRequest& WithAutomationExecutionId(Aws::String&& value) { SetAutomationExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for an existing Automation execution that you want to
     * send the signal to.</p>
     */
    inline SendAutomationSignalRequest& WithAutomationExecutionId(const char* value) { SetAutomationExecutionId(value); return *this;}


    /**
     * <p>The type of signal to send to an Automation execution. </p>
     */
    inline const SignalType& GetSignalType() const{ return m_signalType; }

    /**
     * <p>The type of signal to send to an Automation execution. </p>
     */
    inline bool SignalTypeHasBeenSet() const { return m_signalTypeHasBeenSet; }

    /**
     * <p>The type of signal to send to an Automation execution. </p>
     */
    inline void SetSignalType(const SignalType& value) { m_signalTypeHasBeenSet = true; m_signalType = value; }

    /**
     * <p>The type of signal to send to an Automation execution. </p>
     */
    inline void SetSignalType(SignalType&& value) { m_signalTypeHasBeenSet = true; m_signalType = std::move(value); }

    /**
     * <p>The type of signal to send to an Automation execution. </p>
     */
    inline SendAutomationSignalRequest& WithSignalType(const SignalType& value) { SetSignalType(value); return *this;}

    /**
     * <p>The type of signal to send to an Automation execution. </p>
     */
    inline SendAutomationSignalRequest& WithSignalType(SignalType&& value) { SetSignalType(std::move(value)); return *this;}


    /**
     * <p>The data sent with the signal. The data schema depends on the type of signal
     * used in the request.</p> <p>For <code>Approve</code> and <code>Reject</code>
     * signal types, the payload is an optional comment that you can send with the
     * signal type. For example:</p> <p> <code>Comment="Looks good"</code> </p> <p>For
     * <code>StartStep</code> and <code>Resume</code> signal types, you must send the
     * name of the Automation step to start or resume as the payload. For example:</p>
     * <p> <code>StepName="step1"</code> </p> <p>For the <code>StopStep</code> signal
     * type, you must send the step execution ID as the payload. For example:</p> <p>
     * <code>StepExecutionId="97fff367-fc5a-4299-aed8-0123456789ab"</code> </p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetPayload() const{ return m_payload; }

    /**
     * <p>The data sent with the signal. The data schema depends on the type of signal
     * used in the request.</p> <p>For <code>Approve</code> and <code>Reject</code>
     * signal types, the payload is an optional comment that you can send with the
     * signal type. For example:</p> <p> <code>Comment="Looks good"</code> </p> <p>For
     * <code>StartStep</code> and <code>Resume</code> signal types, you must send the
     * name of the Automation step to start or resume as the payload. For example:</p>
     * <p> <code>StepName="step1"</code> </p> <p>For the <code>StopStep</code> signal
     * type, you must send the step execution ID as the payload. For example:</p> <p>
     * <code>StepExecutionId="97fff367-fc5a-4299-aed8-0123456789ab"</code> </p>
     */
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }

    /**
     * <p>The data sent with the signal. The data schema depends on the type of signal
     * used in the request.</p> <p>For <code>Approve</code> and <code>Reject</code>
     * signal types, the payload is an optional comment that you can send with the
     * signal type. For example:</p> <p> <code>Comment="Looks good"</code> </p> <p>For
     * <code>StartStep</code> and <code>Resume</code> signal types, you must send the
     * name of the Automation step to start or resume as the payload. For example:</p>
     * <p> <code>StepName="step1"</code> </p> <p>For the <code>StopStep</code> signal
     * type, you must send the step execution ID as the payload. For example:</p> <p>
     * <code>StepExecutionId="97fff367-fc5a-4299-aed8-0123456789ab"</code> </p>
     */
    inline void SetPayload(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_payloadHasBeenSet = true; m_payload = value; }

    /**
     * <p>The data sent with the signal. The data schema depends on the type of signal
     * used in the request.</p> <p>For <code>Approve</code> and <code>Reject</code>
     * signal types, the payload is an optional comment that you can send with the
     * signal type. For example:</p> <p> <code>Comment="Looks good"</code> </p> <p>For
     * <code>StartStep</code> and <code>Resume</code> signal types, you must send the
     * name of the Automation step to start or resume as the payload. For example:</p>
     * <p> <code>StepName="step1"</code> </p> <p>For the <code>StopStep</code> signal
     * type, you must send the step execution ID as the payload. For example:</p> <p>
     * <code>StepExecutionId="97fff367-fc5a-4299-aed8-0123456789ab"</code> </p>
     */
    inline void SetPayload(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }

    /**
     * <p>The data sent with the signal. The data schema depends on the type of signal
     * used in the request.</p> <p>For <code>Approve</code> and <code>Reject</code>
     * signal types, the payload is an optional comment that you can send with the
     * signal type. For example:</p> <p> <code>Comment="Looks good"</code> </p> <p>For
     * <code>StartStep</code> and <code>Resume</code> signal types, you must send the
     * name of the Automation step to start or resume as the payload. For example:</p>
     * <p> <code>StepName="step1"</code> </p> <p>For the <code>StopStep</code> signal
     * type, you must send the step execution ID as the payload. For example:</p> <p>
     * <code>StepExecutionId="97fff367-fc5a-4299-aed8-0123456789ab"</code> </p>
     */
    inline SendAutomationSignalRequest& WithPayload(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetPayload(value); return *this;}

    /**
     * <p>The data sent with the signal. The data schema depends on the type of signal
     * used in the request.</p> <p>For <code>Approve</code> and <code>Reject</code>
     * signal types, the payload is an optional comment that you can send with the
     * signal type. For example:</p> <p> <code>Comment="Looks good"</code> </p> <p>For
     * <code>StartStep</code> and <code>Resume</code> signal types, you must send the
     * name of the Automation step to start or resume as the payload. For example:</p>
     * <p> <code>StepName="step1"</code> </p> <p>For the <code>StopStep</code> signal
     * type, you must send the step execution ID as the payload. For example:</p> <p>
     * <code>StepExecutionId="97fff367-fc5a-4299-aed8-0123456789ab"</code> </p>
     */
    inline SendAutomationSignalRequest& WithPayload(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetPayload(std::move(value)); return *this;}

    /**
     * <p>The data sent with the signal. The data schema depends on the type of signal
     * used in the request.</p> <p>For <code>Approve</code> and <code>Reject</code>
     * signal types, the payload is an optional comment that you can send with the
     * signal type. For example:</p> <p> <code>Comment="Looks good"</code> </p> <p>For
     * <code>StartStep</code> and <code>Resume</code> signal types, you must send the
     * name of the Automation step to start or resume as the payload. For example:</p>
     * <p> <code>StepName="step1"</code> </p> <p>For the <code>StopStep</code> signal
     * type, you must send the step execution ID as the payload. For example:</p> <p>
     * <code>StepExecutionId="97fff367-fc5a-4299-aed8-0123456789ab"</code> </p>
     */
    inline SendAutomationSignalRequest& AddPayload(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_payloadHasBeenSet = true; m_payload.emplace(key, value); return *this; }

    /**
     * <p>The data sent with the signal. The data schema depends on the type of signal
     * used in the request.</p> <p>For <code>Approve</code> and <code>Reject</code>
     * signal types, the payload is an optional comment that you can send with the
     * signal type. For example:</p> <p> <code>Comment="Looks good"</code> </p> <p>For
     * <code>StartStep</code> and <code>Resume</code> signal types, you must send the
     * name of the Automation step to start or resume as the payload. For example:</p>
     * <p> <code>StepName="step1"</code> </p> <p>For the <code>StopStep</code> signal
     * type, you must send the step execution ID as the payload. For example:</p> <p>
     * <code>StepExecutionId="97fff367-fc5a-4299-aed8-0123456789ab"</code> </p>
     */
    inline SendAutomationSignalRequest& AddPayload(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_payloadHasBeenSet = true; m_payload.emplace(std::move(key), value); return *this; }

    /**
     * <p>The data sent with the signal. The data schema depends on the type of signal
     * used in the request.</p> <p>For <code>Approve</code> and <code>Reject</code>
     * signal types, the payload is an optional comment that you can send with the
     * signal type. For example:</p> <p> <code>Comment="Looks good"</code> </p> <p>For
     * <code>StartStep</code> and <code>Resume</code> signal types, you must send the
     * name of the Automation step to start or resume as the payload. For example:</p>
     * <p> <code>StepName="step1"</code> </p> <p>For the <code>StopStep</code> signal
     * type, you must send the step execution ID as the payload. For example:</p> <p>
     * <code>StepExecutionId="97fff367-fc5a-4299-aed8-0123456789ab"</code> </p>
     */
    inline SendAutomationSignalRequest& AddPayload(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_payloadHasBeenSet = true; m_payload.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The data sent with the signal. The data schema depends on the type of signal
     * used in the request.</p> <p>For <code>Approve</code> and <code>Reject</code>
     * signal types, the payload is an optional comment that you can send with the
     * signal type. For example:</p> <p> <code>Comment="Looks good"</code> </p> <p>For
     * <code>StartStep</code> and <code>Resume</code> signal types, you must send the
     * name of the Automation step to start or resume as the payload. For example:</p>
     * <p> <code>StepName="step1"</code> </p> <p>For the <code>StopStep</code> signal
     * type, you must send the step execution ID as the payload. For example:</p> <p>
     * <code>StepExecutionId="97fff367-fc5a-4299-aed8-0123456789ab"</code> </p>
     */
    inline SendAutomationSignalRequest& AddPayload(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_payloadHasBeenSet = true; m_payload.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The data sent with the signal. The data schema depends on the type of signal
     * used in the request.</p> <p>For <code>Approve</code> and <code>Reject</code>
     * signal types, the payload is an optional comment that you can send with the
     * signal type. For example:</p> <p> <code>Comment="Looks good"</code> </p> <p>For
     * <code>StartStep</code> and <code>Resume</code> signal types, you must send the
     * name of the Automation step to start or resume as the payload. For example:</p>
     * <p> <code>StepName="step1"</code> </p> <p>For the <code>StopStep</code> signal
     * type, you must send the step execution ID as the payload. For example:</p> <p>
     * <code>StepExecutionId="97fff367-fc5a-4299-aed8-0123456789ab"</code> </p>
     */
    inline SendAutomationSignalRequest& AddPayload(const char* key, Aws::Vector<Aws::String>&& value) { m_payloadHasBeenSet = true; m_payload.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The data sent with the signal. The data schema depends on the type of signal
     * used in the request.</p> <p>For <code>Approve</code> and <code>Reject</code>
     * signal types, the payload is an optional comment that you can send with the
     * signal type. For example:</p> <p> <code>Comment="Looks good"</code> </p> <p>For
     * <code>StartStep</code> and <code>Resume</code> signal types, you must send the
     * name of the Automation step to start or resume as the payload. For example:</p>
     * <p> <code>StepName="step1"</code> </p> <p>For the <code>StopStep</code> signal
     * type, you must send the step execution ID as the payload. For example:</p> <p>
     * <code>StepExecutionId="97fff367-fc5a-4299-aed8-0123456789ab"</code> </p>
     */
    inline SendAutomationSignalRequest& AddPayload(const char* key, const Aws::Vector<Aws::String>& value) { m_payloadHasBeenSet = true; m_payload.emplace(key, value); return *this; }

  private:

    Aws::String m_automationExecutionId;
    bool m_automationExecutionIdHasBeenSet = false;

    SignalType m_signalType;
    bool m_signalTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_payload;
    bool m_payloadHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

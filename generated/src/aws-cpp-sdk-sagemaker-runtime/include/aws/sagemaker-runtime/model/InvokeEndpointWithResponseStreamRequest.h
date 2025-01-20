/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-runtime/SageMakerRuntime_EXPORTS.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeRequest.h>
#include <aws/sagemaker-runtime/model/InvokeEndpointWithResponseStreamHandler.h>
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace SageMakerRuntime
{
namespace Model
{

  /**
   */
  class InvokeEndpointWithResponseStreamRequest : public StreamingSageMakerRuntimeRequest
  {
  public:
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointWithResponseStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeEndpointWithResponseStream"; }

    inline virtual bool HasEventStreamResponse() const override { return true; }
    AWS_SAGEMAKERRUNTIME_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Underlying Event Stream Decoder.
     */
    inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline const InvokeEndpointWithResponseStreamHandler& GetEventStreamHandler() const { return m_handler; }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline void SetEventStreamHandler(const InvokeEndpointWithResponseStreamHandler& value) { m_handler = value; m_decoder.ResetEventStreamHandler(&m_handler); }

    /**
     * Underlying Event Stream Handler which is used to define callback functions.
     */
    inline InvokeEndpointWithResponseStreamRequest& WithEventStreamHandler(const InvokeEndpointWithResponseStreamHandler& value) { SetEventStreamHandler(value); return *this; }


    ///@{
    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * API.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }
    inline InvokeEndpointWithResponseStreamRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}
    inline InvokeEndpointWithResponseStreamRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}
    inline InvokeEndpointWithResponseStreamRequest& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired MIME type of the inference response from the model container.</p>
     */
    inline const Aws::String& GetAccept() const{ return m_accept; }
    inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }
    inline void SetAccept(const Aws::String& value) { m_acceptHasBeenSet = true; m_accept = value; }
    inline void SetAccept(Aws::String&& value) { m_acceptHasBeenSet = true; m_accept = std::move(value); }
    inline void SetAccept(const char* value) { m_acceptHasBeenSet = true; m_accept.assign(value); }
    inline InvokeEndpointWithResponseStreamRequest& WithAccept(const Aws::String& value) { SetAccept(value); return *this;}
    inline InvokeEndpointWithResponseStreamRequest& WithAccept(Aws::String&& value) { SetAccept(std::move(value)); return *this;}
    inline InvokeEndpointWithResponseStreamRequest& WithAccept(const char* value) { SetAccept(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides additional information about a request for an inference submitted to
     * a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * provide an ID that you can use to track a request or to provide other metadata
     * that a service endpoint was programmed to process. The value must consist of no
     * more than 1024 visible US-ASCII characters as specified in <a
     * href="https://datatracker.ietf.org/doc/html/rfc7230#section-3.2.6">Section
     * 3.3.6. Field Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1).
     * </p> <p>The code in your model is responsible for setting or updating any custom
     * attributes in the response. If your code does not set this value in the
     * response, an empty value is returned. For example, if a custom attribute
     * represents the trace ID, your model can prepend the custom attribute with
     * <code>Trace ID:</code> in your post-processing function. </p> <p>This feature is
     * currently supported in the Amazon Web Services SDKs but not in the Amazon
     * SageMaker Python SDK. </p>
     */
    inline const Aws::String& GetCustomAttributes() const{ return m_customAttributes; }
    inline bool CustomAttributesHasBeenSet() const { return m_customAttributesHasBeenSet; }
    inline void SetCustomAttributes(const Aws::String& value) { m_customAttributesHasBeenSet = true; m_customAttributes = value; }
    inline void SetCustomAttributes(Aws::String&& value) { m_customAttributesHasBeenSet = true; m_customAttributes = std::move(value); }
    inline void SetCustomAttributes(const char* value) { m_customAttributesHasBeenSet = true; m_customAttributes.assign(value); }
    inline InvokeEndpointWithResponseStreamRequest& WithCustomAttributes(const Aws::String& value) { SetCustomAttributes(value); return *this;}
    inline InvokeEndpointWithResponseStreamRequest& WithCustomAttributes(Aws::String&& value) { SetCustomAttributes(std::move(value)); return *this;}
    inline InvokeEndpointWithResponseStreamRequest& WithCustomAttributes(const char* value) { SetCustomAttributes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the production variant to send the inference request to when invoking
     * an endpoint that is running two or more variants. Note that this parameter
     * overrides the default behavior for the endpoint, which is to distribute the
     * invocation traffic based on the variant weights.</p> <p>For information about
     * how to use variant targeting to perform a/b testing, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-ab-testing.html">Test
     * models in production</a> </p>
     */
    inline const Aws::String& GetTargetVariant() const{ return m_targetVariant; }
    inline bool TargetVariantHasBeenSet() const { return m_targetVariantHasBeenSet; }
    inline void SetTargetVariant(const Aws::String& value) { m_targetVariantHasBeenSet = true; m_targetVariant = value; }
    inline void SetTargetVariant(Aws::String&& value) { m_targetVariantHasBeenSet = true; m_targetVariant = std::move(value); }
    inline void SetTargetVariant(const char* value) { m_targetVariantHasBeenSet = true; m_targetVariant.assign(value); }
    inline InvokeEndpointWithResponseStreamRequest& WithTargetVariant(const Aws::String& value) { SetTargetVariant(value); return *this;}
    inline InvokeEndpointWithResponseStreamRequest& WithTargetVariant(Aws::String&& value) { SetTargetVariant(std::move(value)); return *this;}
    inline InvokeEndpointWithResponseStreamRequest& WithTargetVariant(const char* value) { SetTargetVariant(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the endpoint hosts multiple containers and is configured to use direct
     * invocation, this parameter specifies the host name of the container to
     * invoke.</p>
     */
    inline const Aws::String& GetTargetContainerHostname() const{ return m_targetContainerHostname; }
    inline bool TargetContainerHostnameHasBeenSet() const { return m_targetContainerHostnameHasBeenSet; }
    inline void SetTargetContainerHostname(const Aws::String& value) { m_targetContainerHostnameHasBeenSet = true; m_targetContainerHostname = value; }
    inline void SetTargetContainerHostname(Aws::String&& value) { m_targetContainerHostnameHasBeenSet = true; m_targetContainerHostname = std::move(value); }
    inline void SetTargetContainerHostname(const char* value) { m_targetContainerHostnameHasBeenSet = true; m_targetContainerHostname.assign(value); }
    inline InvokeEndpointWithResponseStreamRequest& WithTargetContainerHostname(const Aws::String& value) { SetTargetContainerHostname(value); return *this;}
    inline InvokeEndpointWithResponseStreamRequest& WithTargetContainerHostname(Aws::String&& value) { SetTargetContainerHostname(std::move(value)); return *this;}
    inline InvokeEndpointWithResponseStreamRequest& WithTargetContainerHostname(const char* value) { SetTargetContainerHostname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier that you assign to your request.</p>
     */
    inline const Aws::String& GetInferenceId() const{ return m_inferenceId; }
    inline bool InferenceIdHasBeenSet() const { return m_inferenceIdHasBeenSet; }
    inline void SetInferenceId(const Aws::String& value) { m_inferenceIdHasBeenSet = true; m_inferenceId = value; }
    inline void SetInferenceId(Aws::String&& value) { m_inferenceIdHasBeenSet = true; m_inferenceId = std::move(value); }
    inline void SetInferenceId(const char* value) { m_inferenceIdHasBeenSet = true; m_inferenceId.assign(value); }
    inline InvokeEndpointWithResponseStreamRequest& WithInferenceId(const Aws::String& value) { SetInferenceId(value); return *this;}
    inline InvokeEndpointWithResponseStreamRequest& WithInferenceId(Aws::String&& value) { SetInferenceId(std::move(value)); return *this;}
    inline InvokeEndpointWithResponseStreamRequest& WithInferenceId(const char* value) { SetInferenceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the endpoint hosts one or more inference components, this parameter
     * specifies the name of inference component to invoke for a streaming
     * response.</p>
     */
    inline const Aws::String& GetInferenceComponentName() const{ return m_inferenceComponentName; }
    inline bool InferenceComponentNameHasBeenSet() const { return m_inferenceComponentNameHasBeenSet; }
    inline void SetInferenceComponentName(const Aws::String& value) { m_inferenceComponentNameHasBeenSet = true; m_inferenceComponentName = value; }
    inline void SetInferenceComponentName(Aws::String&& value) { m_inferenceComponentNameHasBeenSet = true; m_inferenceComponentName = std::move(value); }
    inline void SetInferenceComponentName(const char* value) { m_inferenceComponentNameHasBeenSet = true; m_inferenceComponentName.assign(value); }
    inline InvokeEndpointWithResponseStreamRequest& WithInferenceComponentName(const Aws::String& value) { SetInferenceComponentName(value); return *this;}
    inline InvokeEndpointWithResponseStreamRequest& WithInferenceComponentName(Aws::String&& value) { SetInferenceComponentName(std::move(value)); return *this;}
    inline InvokeEndpointWithResponseStreamRequest& WithInferenceComponentName(const char* value) { SetInferenceComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a stateful session to handle your request.</p> <p>You can't create
     * a stateful session by using the <code>InvokeEndpointWithResponseStream</code>
     * action. Instead, you can create one by using the <code> <a>InvokeEndpoint</a>
     * </code> action. In your request, you specify <code>NEW_SESSION</code> for the
     * <code>SessionId</code> request parameter. The response to that request provides
     * the session ID for the <code>NewSessionId</code> response parameter.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline InvokeEndpointWithResponseStreamRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline InvokeEndpointWithResponseStreamRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline InvokeEndpointWithResponseStreamRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}
  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;


    Aws::String m_accept;
    bool m_acceptHasBeenSet = false;

    Aws::String m_customAttributes;
    bool m_customAttributesHasBeenSet = false;

    Aws::String m_targetVariant;
    bool m_targetVariantHasBeenSet = false;

    Aws::String m_targetContainerHostname;
    bool m_targetContainerHostnameHasBeenSet = false;

    Aws::String m_inferenceId;
    bool m_inferenceIdHasBeenSet = false;

    Aws::String m_inferenceComponentName;
    bool m_inferenceComponentNameHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
    InvokeEndpointWithResponseStreamHandler m_handler;
    Aws::Utils::Event::EventStreamDecoder m_decoder;

  };

} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws

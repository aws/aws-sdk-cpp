/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-runtime/SageMakerRuntime_EXPORTS.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeRequest.h>
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
  class InvokeEndpointRequest : public StreamingSageMakerRuntimeRequest
  {
  public:
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeEndpoint"; }

    AWS_SAGEMAKERRUNTIME_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the endpoint that you specified when you created the endpoint
     * using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateEndpoint.html">CreateEndpoint</a>
     * API.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    InvokeEndpointRequest& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired MIME type of the inference response from the model container.</p>
     */
    inline const Aws::String& GetAccept() const { return m_accept; }
    inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }
    template<typename AcceptT = Aws::String>
    void SetAccept(AcceptT&& value) { m_acceptHasBeenSet = true; m_accept = std::forward<AcceptT>(value); }
    template<typename AcceptT = Aws::String>
    InvokeEndpointRequest& WithAccept(AcceptT&& value) { SetAccept(std::forward<AcceptT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides additional information about a request for an inference submitted to
     * a model hosted at an Amazon SageMaker AI endpoint. The information is an opaque
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
     * SageMaker AI Python SDK. </p>
     */
    inline const Aws::String& GetCustomAttributes() const { return m_customAttributes; }
    inline bool CustomAttributesHasBeenSet() const { return m_customAttributesHasBeenSet; }
    template<typename CustomAttributesT = Aws::String>
    void SetCustomAttributes(CustomAttributesT&& value) { m_customAttributesHasBeenSet = true; m_customAttributes = std::forward<CustomAttributesT>(value); }
    template<typename CustomAttributesT = Aws::String>
    InvokeEndpointRequest& WithCustomAttributes(CustomAttributesT&& value) { SetCustomAttributes(std::forward<CustomAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model to request for inference when invoking a multi-model endpoint.</p>
     */
    inline const Aws::String& GetTargetModel() const { return m_targetModel; }
    inline bool TargetModelHasBeenSet() const { return m_targetModelHasBeenSet; }
    template<typename TargetModelT = Aws::String>
    void SetTargetModel(TargetModelT&& value) { m_targetModelHasBeenSet = true; m_targetModel = std::forward<TargetModelT>(value); }
    template<typename TargetModelT = Aws::String>
    InvokeEndpointRequest& WithTargetModel(TargetModelT&& value) { SetTargetModel(std::forward<TargetModelT>(value)); return *this;}
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
    inline const Aws::String& GetTargetVariant() const { return m_targetVariant; }
    inline bool TargetVariantHasBeenSet() const { return m_targetVariantHasBeenSet; }
    template<typename TargetVariantT = Aws::String>
    void SetTargetVariant(TargetVariantT&& value) { m_targetVariantHasBeenSet = true; m_targetVariant = std::forward<TargetVariantT>(value); }
    template<typename TargetVariantT = Aws::String>
    InvokeEndpointRequest& WithTargetVariant(TargetVariantT&& value) { SetTargetVariant(std::forward<TargetVariantT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the endpoint hosts multiple containers and is configured to use direct
     * invocation, this parameter specifies the host name of the container to
     * invoke.</p>
     */
    inline const Aws::String& GetTargetContainerHostname() const { return m_targetContainerHostname; }
    inline bool TargetContainerHostnameHasBeenSet() const { return m_targetContainerHostnameHasBeenSet; }
    template<typename TargetContainerHostnameT = Aws::String>
    void SetTargetContainerHostname(TargetContainerHostnameT&& value) { m_targetContainerHostnameHasBeenSet = true; m_targetContainerHostname = std::forward<TargetContainerHostnameT>(value); }
    template<typename TargetContainerHostnameT = Aws::String>
    InvokeEndpointRequest& WithTargetContainerHostname(TargetContainerHostnameT&& value) { SetTargetContainerHostname(std::forward<TargetContainerHostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you provide a value, it is added to the captured data when you enable data
     * capture on the endpoint. For information about data capture, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor-data-capture.html">Capture
     * Data</a>.</p>
     */
    inline const Aws::String& GetInferenceId() const { return m_inferenceId; }
    inline bool InferenceIdHasBeenSet() const { return m_inferenceIdHasBeenSet; }
    template<typename InferenceIdT = Aws::String>
    void SetInferenceId(InferenceIdT&& value) { m_inferenceIdHasBeenSet = true; m_inferenceId = std::forward<InferenceIdT>(value); }
    template<typename InferenceIdT = Aws::String>
    InvokeEndpointRequest& WithInferenceId(InferenceIdT&& value) { SetInferenceId(std::forward<InferenceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional JMESPath expression used to override the
     * <code>EnableExplanations</code> parameter of the
     * <code>ClarifyExplainerConfig</code> API. See the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-create-endpoint.html#clarify-online-explainability-create-endpoint-enable">EnableExplanations</a>
     * section in the developer guide for more information. </p>
     */
    inline const Aws::String& GetEnableExplanations() const { return m_enableExplanations; }
    inline bool EnableExplanationsHasBeenSet() const { return m_enableExplanationsHasBeenSet; }
    template<typename EnableExplanationsT = Aws::String>
    void SetEnableExplanations(EnableExplanationsT&& value) { m_enableExplanationsHasBeenSet = true; m_enableExplanations = std::forward<EnableExplanationsT>(value); }
    template<typename EnableExplanationsT = Aws::String>
    InvokeEndpointRequest& WithEnableExplanations(EnableExplanationsT&& value) { SetEnableExplanations(std::forward<EnableExplanationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the endpoint hosts one or more inference components, this parameter
     * specifies the name of inference component to invoke.</p>
     */
    inline const Aws::String& GetInferenceComponentName() const { return m_inferenceComponentName; }
    inline bool InferenceComponentNameHasBeenSet() const { return m_inferenceComponentNameHasBeenSet; }
    template<typename InferenceComponentNameT = Aws::String>
    void SetInferenceComponentName(InferenceComponentNameT&& value) { m_inferenceComponentNameHasBeenSet = true; m_inferenceComponentName = std::forward<InferenceComponentNameT>(value); }
    template<typename InferenceComponentNameT = Aws::String>
    InvokeEndpointRequest& WithInferenceComponentName(InferenceComponentNameT&& value) { SetInferenceComponentName(std::forward<InferenceComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creates a stateful session or identifies an existing one. You can do one of
     * the following:</p> <ul> <li> <p>Create a stateful session by specifying the
     * value <code>NEW_SESSION</code>.</p> </li> <li> <p>Send your request to an
     * existing stateful session by specifying the ID of that session.</p> </li> </ul>
     * <p>With a stateful session, you can send multiple requests to a stateful model.
     * When you create a session with a stateful model, the model must create the
     * session ID and set the expiration time. The model must also provide that
     * information in the response to your request. You can get the ID and timestamp
     * from the <code>NewSessionId</code> response parameter. For any subsequent
     * request where you specify that session ID, SageMaker AI routes the request to
     * the same instance that supports the session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    InvokeEndpointRequest& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;


    Aws::String m_accept;
    bool m_acceptHasBeenSet = false;

    Aws::String m_customAttributes;
    bool m_customAttributesHasBeenSet = false;

    Aws::String m_targetModel;
    bool m_targetModelHasBeenSet = false;

    Aws::String m_targetVariant;
    bool m_targetVariantHasBeenSet = false;

    Aws::String m_targetContainerHostname;
    bool m_targetContainerHostnameHasBeenSet = false;

    Aws::String m_inferenceId;
    bool m_inferenceIdHasBeenSet = false;

    Aws::String m_enableExplanations;
    bool m_enableExplanationsHasBeenSet = false;

    Aws::String m_inferenceComponentName;
    bool m_inferenceComponentNameHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws

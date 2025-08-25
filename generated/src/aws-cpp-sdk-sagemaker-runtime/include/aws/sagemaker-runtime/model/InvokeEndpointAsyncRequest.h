/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-runtime/SageMakerRuntime_EXPORTS.h>
#include <aws/sagemaker-runtime/SageMakerRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMakerRuntime
{
namespace Model
{

  /**
   */
  class InvokeEndpointAsyncRequest : public SageMakerRuntimeRequest
  {
  public:
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointAsyncRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InvokeEndpointAsync"; }

    AWS_SAGEMAKERRUNTIME_API Aws::String SerializePayload() const override;

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
    InvokeEndpointAsyncRequest& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MIME type of the input data in the request body.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    InvokeEndpointAsyncRequest& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
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
    InvokeEndpointAsyncRequest& WithAccept(AcceptT&& value) { SetAccept(std::forward<AcceptT>(value)); return *this;}
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
    InvokeEndpointAsyncRequest& WithCustomAttributes(CustomAttributesT&& value) { SetCustomAttributes(std::forward<CustomAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the inference request. Amazon SageMaker AI will generate
     * an identifier for you if none is specified. </p>
     */
    inline const Aws::String& GetInferenceId() const { return m_inferenceId; }
    inline bool InferenceIdHasBeenSet() const { return m_inferenceIdHasBeenSet; }
    template<typename InferenceIdT = Aws::String>
    void SetInferenceId(InferenceIdT&& value) { m_inferenceIdHasBeenSet = true; m_inferenceId = std::forward<InferenceIdT>(value); }
    template<typename InferenceIdT = Aws::String>
    InvokeEndpointAsyncRequest& WithInferenceId(InferenceIdT&& value) { SetInferenceId(std::forward<InferenceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 URI where the inference request payload is stored.</p>
     */
    inline const Aws::String& GetInputLocation() const { return m_inputLocation; }
    inline bool InputLocationHasBeenSet() const { return m_inputLocationHasBeenSet; }
    template<typename InputLocationT = Aws::String>
    void SetInputLocation(InputLocationT&& value) { m_inputLocationHasBeenSet = true; m_inputLocation = std::forward<InputLocationT>(value); }
    template<typename InputLocationT = Aws::String>
    InvokeEndpointAsyncRequest& WithInputLocation(InputLocationT&& value) { SetInputLocation(std::forward<InputLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum age in seconds a request can be in the queue before it is marked as
     * expired. The default is 6 hours, or 21,600 seconds.</p>
     */
    inline int GetRequestTTLSeconds() const { return m_requestTTLSeconds; }
    inline bool RequestTTLSecondsHasBeenSet() const { return m_requestTTLSecondsHasBeenSet; }
    inline void SetRequestTTLSeconds(int value) { m_requestTTLSecondsHasBeenSet = true; m_requestTTLSeconds = value; }
    inline InvokeEndpointAsyncRequest& WithRequestTTLSeconds(int value) { SetRequestTTLSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum amount of time in seconds a request can be processed before it is
     * marked as expired. The default is 15 minutes, or 900 seconds.</p>
     */
    inline int GetInvocationTimeoutSeconds() const { return m_invocationTimeoutSeconds; }
    inline bool InvocationTimeoutSecondsHasBeenSet() const { return m_invocationTimeoutSecondsHasBeenSet; }
    inline void SetInvocationTimeoutSeconds(int value) { m_invocationTimeoutSecondsHasBeenSet = true; m_invocationTimeoutSeconds = value; }
    inline InvokeEndpointAsyncRequest& WithInvocationTimeoutSeconds(int value) { SetInvocationTimeoutSeconds(value); return *this;}
    ///@}
  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_accept;
    bool m_acceptHasBeenSet = false;

    Aws::String m_customAttributes;
    bool m_customAttributesHasBeenSet = false;

    Aws::String m_inferenceId;
    bool m_inferenceIdHasBeenSet = false;

    Aws::String m_inputLocation;
    bool m_inputLocationHasBeenSet = false;

    int m_requestTTLSeconds{0};
    bool m_requestTTLSecondsHasBeenSet = false;

    int m_invocationTimeoutSeconds{0};
    bool m_invocationTimeoutSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws

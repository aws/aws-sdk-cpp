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
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointAsyncRequest();

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
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }
    inline InvokeEndpointAsyncRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}
    inline InvokeEndpointAsyncRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}
    inline InvokeEndpointAsyncRequest& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MIME type of the input data in the request body.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline InvokeEndpointAsyncRequest& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline InvokeEndpointAsyncRequest& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline InvokeEndpointAsyncRequest& WithContentType(const char* value) { SetContentType(value); return *this;}
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
    inline InvokeEndpointAsyncRequest& WithAccept(const Aws::String& value) { SetAccept(value); return *this;}
    inline InvokeEndpointAsyncRequest& WithAccept(Aws::String&& value) { SetAccept(std::move(value)); return *this;}
    inline InvokeEndpointAsyncRequest& WithAccept(const char* value) { SetAccept(value); return *this;}
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
    inline InvokeEndpointAsyncRequest& WithCustomAttributes(const Aws::String& value) { SetCustomAttributes(value); return *this;}
    inline InvokeEndpointAsyncRequest& WithCustomAttributes(Aws::String&& value) { SetCustomAttributes(std::move(value)); return *this;}
    inline InvokeEndpointAsyncRequest& WithCustomAttributes(const char* value) { SetCustomAttributes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the inference request. Amazon SageMaker will generate an
     * identifier for you if none is specified. </p>
     */
    inline const Aws::String& GetInferenceId() const{ return m_inferenceId; }
    inline bool InferenceIdHasBeenSet() const { return m_inferenceIdHasBeenSet; }
    inline void SetInferenceId(const Aws::String& value) { m_inferenceIdHasBeenSet = true; m_inferenceId = value; }
    inline void SetInferenceId(Aws::String&& value) { m_inferenceIdHasBeenSet = true; m_inferenceId = std::move(value); }
    inline void SetInferenceId(const char* value) { m_inferenceIdHasBeenSet = true; m_inferenceId.assign(value); }
    inline InvokeEndpointAsyncRequest& WithInferenceId(const Aws::String& value) { SetInferenceId(value); return *this;}
    inline InvokeEndpointAsyncRequest& WithInferenceId(Aws::String&& value) { SetInferenceId(std::move(value)); return *this;}
    inline InvokeEndpointAsyncRequest& WithInferenceId(const char* value) { SetInferenceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 URI where the inference request payload is stored.</p>
     */
    inline const Aws::String& GetInputLocation() const{ return m_inputLocation; }
    inline bool InputLocationHasBeenSet() const { return m_inputLocationHasBeenSet; }
    inline void SetInputLocation(const Aws::String& value) { m_inputLocationHasBeenSet = true; m_inputLocation = value; }
    inline void SetInputLocation(Aws::String&& value) { m_inputLocationHasBeenSet = true; m_inputLocation = std::move(value); }
    inline void SetInputLocation(const char* value) { m_inputLocationHasBeenSet = true; m_inputLocation.assign(value); }
    inline InvokeEndpointAsyncRequest& WithInputLocation(const Aws::String& value) { SetInputLocation(value); return *this;}
    inline InvokeEndpointAsyncRequest& WithInputLocation(Aws::String&& value) { SetInputLocation(std::move(value)); return *this;}
    inline InvokeEndpointAsyncRequest& WithInputLocation(const char* value) { SetInputLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum age in seconds a request can be in the queue before it is marked as
     * expired. The default is 6 hours, or 21,600 seconds.</p>
     */
    inline int GetRequestTTLSeconds() const{ return m_requestTTLSeconds; }
    inline bool RequestTTLSecondsHasBeenSet() const { return m_requestTTLSecondsHasBeenSet; }
    inline void SetRequestTTLSeconds(int value) { m_requestTTLSecondsHasBeenSet = true; m_requestTTLSeconds = value; }
    inline InvokeEndpointAsyncRequest& WithRequestTTLSeconds(int value) { SetRequestTTLSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum amount of time in seconds a request can be processed before it is
     * marked as expired. The default is 15 minutes, or 900 seconds.</p>
     */
    inline int GetInvocationTimeoutSeconds() const{ return m_invocationTimeoutSeconds; }
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

    int m_requestTTLSeconds;
    bool m_requestTTLSecondsHasBeenSet = false;

    int m_invocationTimeoutSeconds;
    bool m_invocationTimeoutSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws

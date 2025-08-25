/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-runtime/SageMakerRuntime_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace SageMakerRuntime
{
namespace Model
{
  class InvokeEndpointResult
  {
  public:
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointResult() = default;
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointResult(InvokeEndpointResult&&) = default;
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointResult& operator=(InvokeEndpointResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    InvokeEndpointResult(const InvokeEndpointResult&) = delete;
    InvokeEndpointResult& operator=(const InvokeEndpointResult&) = delete;


    AWS_SAGEMAKERRUNTIME_API InvokeEndpointResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>Includes the inference provided by the model. </p> <p>For information about
     * the format of the response body, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/cdf-inference.html">Common
     * Data Formats-Inference</a>.</p> <p>If the explainer is activated, the body
     * includes the explanations provided by the model. For more information, see the
     * <b>Response section</b> under <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-invoke-endpoint.html#clarify-online-explainability-response">Invoke
     * the Endpoint</a> in the Developer Guide.</p>
     */
    inline Aws::IOStream& GetBody() const { return m_body.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_body = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * <p>The MIME type of the inference returned from the model container.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    InvokeEndpointResult& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the production variant that was invoked.</p>
     */
    inline const Aws::String& GetInvokedProductionVariant() const { return m_invokedProductionVariant; }
    template<typename InvokedProductionVariantT = Aws::String>
    void SetInvokedProductionVariant(InvokedProductionVariantT&& value) { m_invokedProductionVariantHasBeenSet = true; m_invokedProductionVariant = std::forward<InvokedProductionVariantT>(value); }
    template<typename InvokedProductionVariantT = Aws::String>
    InvokeEndpointResult& WithInvokedProductionVariant(InvokedProductionVariantT&& value) { SetInvokedProductionVariant(std::forward<InvokedProductionVariantT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides additional information in the response about the inference returned
     * by a model hosted at an Amazon SageMaker AI endpoint. The information is an
     * opaque value that is forwarded verbatim. You could use this value, for example,
     * to return an ID received in the <code>CustomAttributes</code> header of a
     * request or other metadata that a service endpoint was programmed to produce. The
     * value must consist of no more than 1024 visible US-ASCII characters as specified
     * in <a href="https://tools.ietf.org/html/rfc7230#section-3.2.6">Section 3.3.6.
     * Field Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). If the
     * customer wants the custom attribute returned, the model must set the custom
     * attribute to be included on the way back. </p> <p>The code in your model is
     * responsible for setting or updating any custom attributes in the response. If
     * your code does not set this value in the response, an empty value is returned.
     * For example, if a custom attribute represents the trace ID, your model can
     * prepend the custom attribute with <code>Trace ID:</code> in your post-processing
     * function.</p> <p>This feature is currently supported in the Amazon Web Services
     * SDKs but not in the Amazon SageMaker AI Python SDK.</p>
     */
    inline const Aws::String& GetCustomAttributes() const { return m_customAttributes; }
    template<typename CustomAttributesT = Aws::String>
    void SetCustomAttributes(CustomAttributesT&& value) { m_customAttributesHasBeenSet = true; m_customAttributes = std::forward<CustomAttributesT>(value); }
    template<typename CustomAttributesT = Aws::String>
    InvokeEndpointResult& WithCustomAttributes(CustomAttributesT&& value) { SetCustomAttributes(std::forward<CustomAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you created a stateful session with your request, the ID and expiration
     * time that the model assigns to that session.</p>
     */
    inline const Aws::String& GetNewSessionId() const { return m_newSessionId; }
    template<typename NewSessionIdT = Aws::String>
    void SetNewSessionId(NewSessionIdT&& value) { m_newSessionIdHasBeenSet = true; m_newSessionId = std::forward<NewSessionIdT>(value); }
    template<typename NewSessionIdT = Aws::String>
    InvokeEndpointResult& WithNewSessionId(NewSessionIdT&& value) { SetNewSessionId(std::forward<NewSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you closed a stateful session with your request, the ID of that
     * session.</p>
     */
    inline const Aws::String& GetClosedSessionId() const { return m_closedSessionId; }
    template<typename ClosedSessionIdT = Aws::String>
    void SetClosedSessionId(ClosedSessionIdT&& value) { m_closedSessionIdHasBeenSet = true; m_closedSessionId = std::forward<ClosedSessionIdT>(value); }
    template<typename ClosedSessionIdT = Aws::String>
    InvokeEndpointResult& WithClosedSessionId(ClosedSessionIdT&& value) { SetClosedSessionId(std::forward<ClosedSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    InvokeEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_body{};
    bool m_bodyHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_invokedProductionVariant;
    bool m_invokedProductionVariantHasBeenSet = false;

    Aws::String m_customAttributes;
    bool m_customAttributesHasBeenSet = false;

    Aws::String m_newSessionId;
    bool m_newSessionIdHasBeenSet = false;

    Aws::String m_closedSessionId;
    bool m_closedSessionIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws

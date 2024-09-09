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
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointResult(InvokeEndpointResult&&);
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointResult& operator=(InvokeEndpointResult&&);
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
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline void SetContentType(const Aws::String& value) { m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentType.assign(value); }
    inline InvokeEndpointResult& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline InvokeEndpointResult& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline InvokeEndpointResult& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the production variant that was invoked.</p>
     */
    inline const Aws::String& GetInvokedProductionVariant() const{ return m_invokedProductionVariant; }
    inline void SetInvokedProductionVariant(const Aws::String& value) { m_invokedProductionVariant = value; }
    inline void SetInvokedProductionVariant(Aws::String&& value) { m_invokedProductionVariant = std::move(value); }
    inline void SetInvokedProductionVariant(const char* value) { m_invokedProductionVariant.assign(value); }
    inline InvokeEndpointResult& WithInvokedProductionVariant(const Aws::String& value) { SetInvokedProductionVariant(value); return *this;}
    inline InvokeEndpointResult& WithInvokedProductionVariant(Aws::String&& value) { SetInvokedProductionVariant(std::move(value)); return *this;}
    inline InvokeEndpointResult& WithInvokedProductionVariant(const char* value) { SetInvokedProductionVariant(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides additional information in the response about the inference returned
     * by a model hosted at an Amazon SageMaker endpoint. The information is an opaque
     * value that is forwarded verbatim. You could use this value, for example, to
     * return an ID received in the <code>CustomAttributes</code> header of a request
     * or other metadata that a service endpoint was programmed to produce. The value
     * must consist of no more than 1024 visible US-ASCII characters as specified in <a
     * href="https://tools.ietf.org/html/rfc7230#section-3.2.6">Section 3.3.6. Field
     * Value Components</a> of the Hypertext Transfer Protocol (HTTP/1.1). If the
     * customer wants the custom attribute returned, the model must set the custom
     * attribute to be included on the way back. </p> <p>The code in your model is
     * responsible for setting or updating any custom attributes in the response. If
     * your code does not set this value in the response, an empty value is returned.
     * For example, if a custom attribute represents the trace ID, your model can
     * prepend the custom attribute with <code>Trace ID:</code> in your post-processing
     * function.</p> <p>This feature is currently supported in the Amazon Web Services
     * SDKs but not in the Amazon SageMaker Python SDK.</p>
     */
    inline const Aws::String& GetCustomAttributes() const{ return m_customAttributes; }
    inline void SetCustomAttributes(const Aws::String& value) { m_customAttributes = value; }
    inline void SetCustomAttributes(Aws::String&& value) { m_customAttributes = std::move(value); }
    inline void SetCustomAttributes(const char* value) { m_customAttributes.assign(value); }
    inline InvokeEndpointResult& WithCustomAttributes(const Aws::String& value) { SetCustomAttributes(value); return *this;}
    inline InvokeEndpointResult& WithCustomAttributes(Aws::String&& value) { SetCustomAttributes(std::move(value)); return *this;}
    inline InvokeEndpointResult& WithCustomAttributes(const char* value) { SetCustomAttributes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you created a stateful session with your request, the ID and expiration
     * time that the model assigns to that session.</p>
     */
    inline const Aws::String& GetNewSessionId() const{ return m_newSessionId; }
    inline void SetNewSessionId(const Aws::String& value) { m_newSessionId = value; }
    inline void SetNewSessionId(Aws::String&& value) { m_newSessionId = std::move(value); }
    inline void SetNewSessionId(const char* value) { m_newSessionId.assign(value); }
    inline InvokeEndpointResult& WithNewSessionId(const Aws::String& value) { SetNewSessionId(value); return *this;}
    inline InvokeEndpointResult& WithNewSessionId(Aws::String&& value) { SetNewSessionId(std::move(value)); return *this;}
    inline InvokeEndpointResult& WithNewSessionId(const char* value) { SetNewSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you closed a stateful session with your request, the ID of that
     * session.</p>
     */
    inline const Aws::String& GetClosedSessionId() const{ return m_closedSessionId; }
    inline void SetClosedSessionId(const Aws::String& value) { m_closedSessionId = value; }
    inline void SetClosedSessionId(Aws::String&& value) { m_closedSessionId = std::move(value); }
    inline void SetClosedSessionId(const char* value) { m_closedSessionId.assign(value); }
    inline InvokeEndpointResult& WithClosedSessionId(const Aws::String& value) { SetClosedSessionId(value); return *this;}
    inline InvokeEndpointResult& WithClosedSessionId(Aws::String&& value) { SetClosedSessionId(std::move(value)); return *this;}
    inline InvokeEndpointResult& WithClosedSessionId(const char* value) { SetClosedSessionId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline InvokeEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline InvokeEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline InvokeEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_body;

    Aws::String m_contentType;

    Aws::String m_invokedProductionVariant;

    Aws::String m_customAttributes;

    Aws::String m_newSessionId;

    Aws::String m_closedSessionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws

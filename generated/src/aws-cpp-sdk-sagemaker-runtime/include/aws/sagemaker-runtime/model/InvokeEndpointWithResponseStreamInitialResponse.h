/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-runtime/SageMakerRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/http/HttpTypes.h>
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
namespace SageMakerRuntime
{
namespace Model
{

  class InvokeEndpointWithResponseStreamInitialResponse
  {
  public:
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointWithResponseStreamInitialResponse();
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointWithResponseStreamInitialResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointWithResponseStreamInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointWithResponseStreamInitialResponse(const Http::HeaderValueCollection& responseHeaders);
    AWS_SAGEMAKERRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The MIME type of the inference returned from the model container.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline InvokeEndpointWithResponseStreamInitialResponse& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline InvokeEndpointWithResponseStreamInitialResponse& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline InvokeEndpointWithResponseStreamInitialResponse& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the production variant that was invoked.</p>
     */
    inline const Aws::String& GetInvokedProductionVariant() const{ return m_invokedProductionVariant; }
    inline bool InvokedProductionVariantHasBeenSet() const { return m_invokedProductionVariantHasBeenSet; }
    inline void SetInvokedProductionVariant(const Aws::String& value) { m_invokedProductionVariantHasBeenSet = true; m_invokedProductionVariant = value; }
    inline void SetInvokedProductionVariant(Aws::String&& value) { m_invokedProductionVariantHasBeenSet = true; m_invokedProductionVariant = std::move(value); }
    inline void SetInvokedProductionVariant(const char* value) { m_invokedProductionVariantHasBeenSet = true; m_invokedProductionVariant.assign(value); }
    inline InvokeEndpointWithResponseStreamInitialResponse& WithInvokedProductionVariant(const Aws::String& value) { SetInvokedProductionVariant(value); return *this;}
    inline InvokeEndpointWithResponseStreamInitialResponse& WithInvokedProductionVariant(Aws::String&& value) { SetInvokedProductionVariant(std::move(value)); return *this;}
    inline InvokeEndpointWithResponseStreamInitialResponse& WithInvokedProductionVariant(const char* value) { SetInvokedProductionVariant(value); return *this;}
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
    inline bool CustomAttributesHasBeenSet() const { return m_customAttributesHasBeenSet; }
    inline void SetCustomAttributes(const Aws::String& value) { m_customAttributesHasBeenSet = true; m_customAttributes = value; }
    inline void SetCustomAttributes(Aws::String&& value) { m_customAttributesHasBeenSet = true; m_customAttributes = std::move(value); }
    inline void SetCustomAttributes(const char* value) { m_customAttributesHasBeenSet = true; m_customAttributes.assign(value); }
    inline InvokeEndpointWithResponseStreamInitialResponse& WithCustomAttributes(const Aws::String& value) { SetCustomAttributes(value); return *this;}
    inline InvokeEndpointWithResponseStreamInitialResponse& WithCustomAttributes(Aws::String&& value) { SetCustomAttributes(std::move(value)); return *this;}
    inline InvokeEndpointWithResponseStreamInitialResponse& WithCustomAttributes(const char* value) { SetCustomAttributes(value); return *this;}
    ///@}
  private:

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    Aws::String m_invokedProductionVariant;
    bool m_invokedProductionVariantHasBeenSet = false;

    Aws::String m_customAttributes;
    bool m_customAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerRuntime
} // namespace Aws

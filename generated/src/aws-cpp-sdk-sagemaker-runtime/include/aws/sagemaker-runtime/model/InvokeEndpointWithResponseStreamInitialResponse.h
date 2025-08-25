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
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointWithResponseStreamInitialResponse() = default;
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointWithResponseStreamInitialResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointWithResponseStreamInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERRUNTIME_API InvokeEndpointWithResponseStreamInitialResponse(const Http::HeaderValueCollection& responseHeaders);
    AWS_SAGEMAKERRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The MIME type of the inference returned from the model container.</p>
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    InvokeEndpointWithResponseStreamInitialResponse& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the production variant that was invoked.</p>
     */
    inline const Aws::String& GetInvokedProductionVariant() const { return m_invokedProductionVariant; }
    inline bool InvokedProductionVariantHasBeenSet() const { return m_invokedProductionVariantHasBeenSet; }
    template<typename InvokedProductionVariantT = Aws::String>
    void SetInvokedProductionVariant(InvokedProductionVariantT&& value) { m_invokedProductionVariantHasBeenSet = true; m_invokedProductionVariant = std::forward<InvokedProductionVariantT>(value); }
    template<typename InvokedProductionVariantT = Aws::String>
    InvokeEndpointWithResponseStreamInitialResponse& WithInvokedProductionVariant(InvokedProductionVariantT&& value) { SetInvokedProductionVariant(std::forward<InvokedProductionVariantT>(value)); return *this;}
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
    inline bool CustomAttributesHasBeenSet() const { return m_customAttributesHasBeenSet; }
    template<typename CustomAttributesT = Aws::String>
    void SetCustomAttributes(CustomAttributesT&& value) { m_customAttributesHasBeenSet = true; m_customAttributes = std::forward<CustomAttributesT>(value); }
    template<typename CustomAttributesT = Aws::String>
    InvokeEndpointWithResponseStreamInitialResponse& WithCustomAttributes(CustomAttributesT&& value) { SetCustomAttributes(std::forward<CustomAttributesT>(value)); return *this;}
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

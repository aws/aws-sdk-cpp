/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntime_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace SageMakerInferenceRouterRuntime {
namespace Model {
class InvokeInferenceRouterResult {
 public:
  AWS_SAGEMAKERINFERENCEROUTERRUNTIME_API InvokeInferenceRouterResult() = default;
  AWS_SAGEMAKERINFERENCEROUTERRUNTIME_API InvokeInferenceRouterResult(InvokeInferenceRouterResult&&) = default;
  AWS_SAGEMAKERINFERENCEROUTERRUNTIME_API InvokeInferenceRouterResult& operator=(InvokeInferenceRouterResult&&) = default;
  // we delete these because Microsoft doesn't handle move generation correctly
  // and we therefore don't trust them to get it right here either.
  InvokeInferenceRouterResult(const InvokeInferenceRouterResult&) = delete;
  InvokeInferenceRouterResult& operator=(const InvokeInferenceRouterResult&) = delete;

  AWS_SAGEMAKERINFERENCEROUTERRUNTIME_API InvokeInferenceRouterResult(
      Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
  AWS_SAGEMAKERINFERENCEROUTERRUNTIME_API InvokeInferenceRouterResult& operator=(
      Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);

  ///@{
  /**
   * <p>The inference that the model returned.</p>
   */
  inline Aws::IOStream& GetBody() const { return m_body.GetUnderlyingStream(); }
  inline void ReplaceBody(Aws::IOStream* body) { m_body = Aws::Utils::Stream::ResponseStream(body); }

  ///@}

  ///@{
  /**
   * <p>The MIME type of the inference returned in the response body.</p>
   */
  inline const Aws::String& GetContentType() const { return m_contentType; }
  template <typename ContentTypeT = Aws::String>
  void SetContentType(ContentTypeT&& value) {
    m_contentTypeHasBeenSet = true;
    m_contentType = std::forward<ContentTypeT>(value);
  }
  template <typename ContentTypeT = Aws::String>
  InvokeInferenceRouterResult& WithContentType(ContentTypeT&& value) {
    SetContentType(std::forward<ContentTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the endpoint or inference component that
   * served the request.</p>
   */
  inline const Aws::String& GetInvokedRoutedResourceArn() const { return m_invokedRoutedResourceArn; }
  template <typename InvokedRoutedResourceArnT = Aws::String>
  void SetInvokedRoutedResourceArn(InvokedRoutedResourceArnT&& value) {
    m_invokedRoutedResourceArnHasBeenSet = true;
    m_invokedRoutedResourceArn = std::forward<InvokedRoutedResourceArnT>(value);
  }
  template <typename InvokedRoutedResourceArnT = Aws::String>
  InvokeInferenceRouterResult& WithInvokedRoutedResourceArn(InvokedRoutedResourceArnT&& value) {
    SetInvokedRoutedResourceArn(std::forward<InvokedRoutedResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason that the router chose the destination that served the request.
   * Possible values:</p> <ul> <li> <p> <code>local-preferred</code> – The
   * destination is a healthy destination in the router's Region.</p> </li> <li> <p>
   * <code>capacity-available</code> – No destination in the router's Region could
   * take the request, and two or more destinations in other Regions could.</p> </li>
   * <li> <p> <code>only-healthy</code> – No destination in the router's Region could
   * take the request, and exactly one destination in another Region could.</p> </li>
   * <li> <p> <code>failover</code> – The router moved the request away from
   * destinations in its Region because they were overloaded or returning errors. You
   * also see this value when the router can't assess destination health, and when no
   * destination is healthy and the router tries one anyway.</p> </li> </ul>
   */
  inline const Aws::String& GetRoutingReason() const { return m_routingReason; }
  template <typename RoutingReasonT = Aws::String>
  void SetRoutingReason(RoutingReasonT&& value) {
    m_routingReasonHasBeenSet = true;
    m_routingReason = std::forward<RoutingReasonT>(value);
  }
  template <typename RoutingReasonT = Aws::String>
  InvokeInferenceRouterResult& WithRoutingReason(RoutingReasonT&& value) {
    SetRoutingReason(std::forward<RoutingReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The production variant of the destination endpoint that served the
   * request.</p>
   */
  inline const Aws::String& GetInvokedProductionVariant() const { return m_invokedProductionVariant; }
  template <typename InvokedProductionVariantT = Aws::String>
  void SetInvokedProductionVariant(InvokedProductionVariantT&& value) {
    m_invokedProductionVariantHasBeenSet = true;
    m_invokedProductionVariant = std::forward<InvokedProductionVariantT>(value);
  }
  template <typename InvokedProductionVariantT = Aws::String>
  InvokeInferenceRouterResult& WithInvokedProductionVariant(InvokedProductionVariantT&& value) {
    SetInvokedProductionVariant(std::forward<InvokedProductionVariantT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provides additional information in the response about the inference. This is
   * the value that the model container of the destination returned, unchanged.</p>
   */
  inline const Aws::String& GetCustomAttributes() const { return m_customAttributes; }
  template <typename CustomAttributesT = Aws::String>
  void SetCustomAttributes(CustomAttributesT&& value) {
    m_customAttributesHasBeenSet = true;
    m_customAttributes = std::forward<CustomAttributesT>(value);
  }
  template <typename CustomAttributesT = Aws::String>
  InvokeInferenceRouterResult& WithCustomAttributes(CustomAttributesT&& value) {
    SetCustomAttributes(std::forward<CustomAttributesT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  InvokeInferenceRouterResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Utils::Stream::ResponseStream m_body{};

  Aws::String m_contentType;

  Aws::String m_invokedRoutedResourceArn;

  Aws::String m_routingReason;

  Aws::String m_invokedProductionVariant;

  Aws::String m_customAttributes;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_bodyHasBeenSet = false;
  bool m_contentTypeHasBeenSet = false;
  bool m_invokedRoutedResourceArnHasBeenSet = false;
  bool m_routingReasonHasBeenSet = false;
  bool m_invokedProductionVariantHasBeenSet = false;
  bool m_customAttributesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerInferenceRouterRuntime
}  // namespace Aws

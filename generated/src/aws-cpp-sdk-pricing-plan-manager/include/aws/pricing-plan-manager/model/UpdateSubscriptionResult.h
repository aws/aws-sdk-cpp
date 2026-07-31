/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pricing-plan-manager/PricingPlanManager_EXPORTS.h>
#include <aws/pricing-plan-manager/model/Subscription.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PricingPlanManager {
namespace Model {
class UpdateSubscriptionResult {
 public:
  AWS_PRICINGPLANMANAGER_API UpdateSubscriptionResult() = default;
  AWS_PRICINGPLANMANAGER_API UpdateSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PRICINGPLANMANAGER_API UpdateSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The details of the updated subscription. For downgrades, the current tier
   * remains unchanged and a <code>scheduledChange</code> indicates the pending
   * change.</p>
   */
  inline const Subscription& GetSubscription() const { return m_subscription; }
  template <typename SubscriptionT = Subscription>
  void SetSubscription(SubscriptionT&& value) {
    m_subscriptionHasBeenSet = true;
    m_subscription = std::forward<SubscriptionT>(value);
  }
  template <typename SubscriptionT = Subscription>
  UpdateSubscriptionResult& WithSubscription(SubscriptionT&& value) {
    SetSubscription(std::forward<SubscriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated entity tag for concurrency control.</p>
   */
  inline const Aws::String& GetETag() const { return m_eTag; }
  template <typename ETagT = Aws::String>
  void SetETag(ETagT&& value) {
    m_eTagHasBeenSet = true;
    m_eTag = std::forward<ETagT>(value);
  }
  template <typename ETagT = Aws::String>
  UpdateSubscriptionResult& WithETag(ETagT&& value) {
    SetETag(std::forward<ETagT>(value));
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
  UpdateSubscriptionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Subscription m_subscription;

  Aws::String m_eTag;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_subscriptionHasBeenSet = false;
  bool m_eTagHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PricingPlanManager
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pricing-plan-manager/PricingPlanManager_EXPORTS.h>
#include <aws/pricing-plan-manager/model/SubscriptionSummary.h>

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
class ListSubscriptionsResult {
 public:
  AWS_PRICINGPLANMANAGER_API ListSubscriptionsResult() = default;
  AWS_PRICINGPLANMANAGER_API ListSubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PRICINGPLANMANAGER_API ListSubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of subscription summaries for the calling account.</p>
   */
  inline const Aws::Vector<SubscriptionSummary>& GetSubscriptionSummaries() const { return m_subscriptionSummaries; }
  template <typename SubscriptionSummariesT = Aws::Vector<SubscriptionSummary>>
  void SetSubscriptionSummaries(SubscriptionSummariesT&& value) {
    m_subscriptionSummariesHasBeenSet = true;
    m_subscriptionSummaries = std::forward<SubscriptionSummariesT>(value);
  }
  template <typename SubscriptionSummariesT = Aws::Vector<SubscriptionSummary>>
  ListSubscriptionsResult& WithSubscriptionSummaries(SubscriptionSummariesT&& value) {
    SetSubscriptionSummaries(std::forward<SubscriptionSummariesT>(value));
    return *this;
  }
  template <typename SubscriptionSummariesT = SubscriptionSummary>
  ListSubscriptionsResult& AddSubscriptionSummaries(SubscriptionSummariesT&& value) {
    m_subscriptionSummariesHasBeenSet = true;
    m_subscriptionSummaries.emplace_back(std::forward<SubscriptionSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token that indicates there are more results available. Pass this value in a
   * subsequent <code>ListSubscriptions</code> request to retrieve the next page of
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSubscriptionsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListSubscriptionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<SubscriptionSummary> m_subscriptionSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_subscriptionSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PricingPlanManager
}  // namespace Aws

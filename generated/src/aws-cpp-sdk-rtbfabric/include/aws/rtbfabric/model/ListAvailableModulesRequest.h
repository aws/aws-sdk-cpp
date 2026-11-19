/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabricRequest.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/SubscriptionType.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace RTBFabric {
namespace Model {

/**
 */
class ListAvailableModulesRequest : public RTBFabricRequest {
 public:
  AWS_RTBFABRIC_API ListAvailableModulesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAvailableModules"; }

  AWS_RTBFABRIC_API Aws::String SerializePayload() const override;

  AWS_RTBFABRIC_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>Lists only modules that you have access to this way.</p>
   */
  inline SubscriptionType GetSubscriptionType() const { return m_subscriptionType; }
  inline bool SubscriptionTypeHasBeenSet() const { return m_subscriptionTypeHasBeenSet; }
  inline void SetSubscriptionType(SubscriptionType value) {
    m_subscriptionTypeHasBeenSet = true;
    m_subscriptionType = value;
  }
  inline ListAvailableModulesRequest& WithSubscriptionType(SubscriptionType value) {
    SetSubscriptionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results for each page, from 1 to 10. The default is
   * 10.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAvailableModulesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If nextToken is returned, there are more results available. Make the call
   * again using the returned token to retrieve the next page. Keep all other
   * arguments unchanged. Each pagination token expires after 24 hours; using an
   * expired token fails with ValidationException.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAvailableModulesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  SubscriptionType m_subscriptionType{SubscriptionType::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_subscriptionTypeHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws

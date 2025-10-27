/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace MediaTailor {
namespace Model {

/**
 */
class ListAlertsRequest : public MediaTailorRequest {
 public:
  AWS_MEDIATAILOR_API ListAlertsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAlerts"; }

  AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;

  AWS_MEDIATAILOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The maximum number of alerts that you want MediaTailor to return in response
   * to the current request. If there are more than <code>MaxResults</code> alerts,
   * use the value of <code>NextToken</code> in the response to get the next page of
   * results.</p> <p>The default value is 100. MediaTailor uses DynamoDB-based
   * pagination, which means that a response might contain fewer than
   * <code>MaxResults</code> items, including 0 items, even when more results are
   * available. To retrieve all results, you must continue making requests using the
   * <code>NextToken</code> value from each response until the response no longer
   * includes a <code>NextToken</code> value.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAlertsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token returned by the list request when results exceed the maximum
   * allowed. Use the token to fetch the next page of results.</p> <p>For the first
   * <code>ListAlerts</code> request, omit this value. For subsequent requests, get
   * the value of <code>NextToken</code> from the previous response and specify that
   * value for <code>NextToken</code> in the request. Continue making requests until
   * the response no longer includes a <code>NextToken</code> value, which indicates
   * that all results have been retrieved.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAlertsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the resource.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  ListAlertsRequest& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_resourceArn;
  bool m_resourceArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws

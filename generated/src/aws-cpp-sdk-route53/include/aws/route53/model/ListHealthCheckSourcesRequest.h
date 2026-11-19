/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/Route53Request.h>
#include <aws/route53/Route53_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Route53 {
namespace Model {

/**
 * <p>Contains the parameters for retrieving a list of the health check sources
 * that are associated with the current Amazon Web Services account.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListHealthCheckSourcesRequest">AWS
 * API Reference</a></p>
 */
class ListHealthCheckSourcesRequest : public Route53Request {
 public:
  AWS_ROUTE53_API ListHealthCheckSourcesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListHealthCheckSources"; }

  AWS_ROUTE53_API Aws::String SerializePayload() const override;

  AWS_ROUTE53_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The <code>NextToken</code> value from the previous response, if it included
   * one. Specify it to get the next group of health check sources.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListHealthCheckSourcesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of health check sources that you want
   * <code>ListHealthCheckSources</code> to return. Route 53 returns a maximum of 100
   * health check sources. If you specify a value greater than 100, Route 53 returns
   * only the first 100.</p>
   */
  inline const Aws::String& GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  template <typename MaxResultsT = Aws::String>
  void SetMaxResults(MaxResultsT&& value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = std::forward<MaxResultsT>(value);
  }
  template <typename MaxResultsT = Aws::String>
  ListHealthCheckSourcesRequest& WithMaxResults(MaxResultsT&& value) {
    SetMaxResults(std::forward<MaxResultsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  Aws::String m_maxResults;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/StandardsProvider.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace SecurityHub {
namespace Model {

/**
 */
class DescribeStandardsRequest : public SecurityHubRequest {
 public:
  AWS_SECURITYHUB_API DescribeStandardsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeStandards"; }

  AWS_SECURITYHUB_API Aws::String SerializePayload() const override;

  AWS_SECURITYHUB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The token that is required for pagination. On your first call to the
   * <code>DescribeStandards</code> operation, set the value of this parameter to
   * <code>NULL</code>.</p> <p>For subsequent calls to the operation, to continue
   * listing data, set the value of this parameter to the value returned from the
   * previous response.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  DescribeStandardsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of standards to return.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline DescribeStandardsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of cloud providers to filter the standards by. For example, specify
   * <code>Azure</code> to return only standards that evaluate Azure resources.</p>
   */
  inline const Aws::Vector<StandardsProvider>& GetProviders() const { return m_providers; }
  inline bool ProvidersHasBeenSet() const { return m_providersHasBeenSet; }
  template <typename ProvidersT = Aws::Vector<StandardsProvider>>
  void SetProviders(ProvidersT&& value) {
    m_providersHasBeenSet = true;
    m_providers = std::forward<ProvidersT>(value);
  }
  template <typename ProvidersT = Aws::Vector<StandardsProvider>>
  DescribeStandardsRequest& WithProviders(ProvidersT&& value) {
    SetProviders(std::forward<ProvidersT>(value));
    return *this;
  }
  inline DescribeStandardsRequest& AddProviders(StandardsProvider value) {
    m_providersHasBeenSet = true;
    m_providers.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  int m_maxResults{0};

  Aws::Vector<StandardsProvider> m_providers;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_providersHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws

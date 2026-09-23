/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManagerRequest.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace NetworkSecurityManager {
namespace Model {

/**
 */
class ListScopeSnapshotsRequest : public NetworkSecurityManagerRequest {
 public:
  AWS_NETWORKSECURITYMANAGER_API ListScopeSnapshotsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListScopeSnapshots"; }

  AWS_NETWORKSECURITYMANAGER_API Aws::String SerializePayload() const override;

  AWS_NETWORKSECURITYMANAGER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The identifier of the scope. This is the scope's Amazon Resource Name
   * (ARN).</p>
   */
  inline const Aws::String& GetScopeIdentifier() const { return m_scopeIdentifier; }
  inline bool ScopeIdentifierHasBeenSet() const { return m_scopeIdentifierHasBeenSet; }
  template <typename ScopeIdentifierT = Aws::String>
  void SetScopeIdentifier(ScopeIdentifierT&& value) {
    m_scopeIdentifierHasBeenSet = true;
    m_scopeIdentifier = std::forward<ScopeIdentifierT>(value);
  }
  template <typename ScopeIdentifierT = Aws::String>
  ListScopeSnapshotsRequest& WithScopeIdentifier(ScopeIdentifierT&& value) {
    SetScopeIdentifier(std::forward<ScopeIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single call. Valid range: 1-100.
   * To retrieve the remaining results, use the returned <code>nextToken</code> value
   * in a subsequent call.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListScopeSnapshotsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next page of results. To retrieve the next page, call the
   * operation again and provide this value. When there are no more results, this
   * value is null.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListScopeSnapshotsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_scopeIdentifier;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_scopeIdentifierHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws

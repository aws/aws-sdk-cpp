/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace NetworkManager {
namespace Model {

/**
 */
class ListContextChangesRequest : public NetworkManagerRequest {
 public:
  AWS_NETWORKMANAGER_API ListContextChangesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListContextChanges"; }

  AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;

  AWS_NETWORKMANAGER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID of the context store.</p>
   */
  inline const Aws::String& GetContextStoreId() const { return m_contextStoreId; }
  inline bool ContextStoreIdHasBeenSet() const { return m_contextStoreIdHasBeenSet; }
  template <typename ContextStoreIdT = Aws::String>
  void SetContextStoreId(ContextStoreIdT&& value) {
    m_contextStoreIdHasBeenSet = true;
    m_contextStoreId = std::forward<ContextStoreIdT>(value);
  }
  template <typename ContextStoreIdT = Aws::String>
  ListContextChangesRequest& WithContextStoreId(ContextStoreIdT&& value) {
    SetContextStoreId(std::forward<ContextStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version to return changes from. Specify a version returned by
   * <code>ListContexts</code>, <code>GetContextVersion</code>, or the
   * <code>ToVersionId</code> of a previous <code>ListContextChanges</code> request.
   * If the version is no longer available, the request fails, and you must call
   * <code>ListContexts</code> to get the current context entries.</p>
   */
  inline const Aws::String& GetFromVersionId() const { return m_fromVersionId; }
  inline bool FromVersionIdHasBeenSet() const { return m_fromVersionIdHasBeenSet; }
  template <typename FromVersionIdT = Aws::String>
  void SetFromVersionId(FromVersionIdT&& value) {
    m_fromVersionIdHasBeenSet = true;
    m_fromVersionId = std::forward<FromVersionIdT>(value);
  }
  template <typename FromVersionIdT = Aws::String>
  ListContextChangesRequest& WithFromVersionId(FromVersionIdT&& value) {
    SetFromVersionId(std::forward<FromVersionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListContextChangesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListContextChangesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_contextStoreId;

  Aws::String m_fromVersionId;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_contextStoreIdHasBeenSet = false;
  bool m_fromVersionIdHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws

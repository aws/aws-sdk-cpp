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
class ListContextStoresRequest : public NetworkManagerRequest {
 public:
  AWS_NETWORKMANAGER_API ListContextStoresRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListContextStores"; }

  AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;

  AWS_NETWORKMANAGER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The ID of a global network. If you specify this parameter, only the context
   * stores in the global network are returned.</p>
   */
  inline const Aws::String& GetGlobalNetworkId() const { return m_globalNetworkId; }
  inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }
  template <typename GlobalNetworkIdT = Aws::String>
  void SetGlobalNetworkId(GlobalNetworkIdT&& value) {
    m_globalNetworkIdHasBeenSet = true;
    m_globalNetworkId = std::forward<GlobalNetworkIdT>(value);
  }
  template <typename GlobalNetworkIdT = Aws::String>
  ListContextStoresRequest& WithGlobalNetworkId(GlobalNetworkIdT&& value) {
    SetGlobalNetworkId(std::forward<GlobalNetworkIdT>(value));
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
  inline ListContextStoresRequest& WithMaxResults(int value) {
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
  ListContextStoresRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_globalNetworkId;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_globalNetworkIdHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws

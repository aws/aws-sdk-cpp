/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wickr/WickrRequest.h>
#include <aws/wickr/Wickr_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Wickr {
namespace Model {

/**
 */
class BatchDeleteUserRequest : public WickrRequest {
 public:
  AWS_WICKR_API BatchDeleteUserRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteUser"; }

  AWS_WICKR_API Aws::String SerializePayload() const override;

  AWS_WICKR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the Wickr network from which users will be deleted.</p>
   */
  inline const Aws::String& GetNetworkId() const { return m_networkId; }
  inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
  template <typename NetworkIdT = Aws::String>
  void SetNetworkId(NetworkIdT&& value) {
    m_networkIdHasBeenSet = true;
    m_networkId = std::forward<NetworkIdT>(value);
  }
  template <typename NetworkIdT = Aws::String>
  BatchDeleteUserRequest& WithNetworkId(NetworkIdT&& value) {
    SetNetworkId(std::forward<NetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of user IDs identifying the users to be deleted from the network.
   * Maximum 50 users per batch request.</p>
   */
  inline const Aws::Vector<Aws::String>& GetUserIds() const { return m_userIds; }
  inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }
  template <typename UserIdsT = Aws::Vector<Aws::String>>
  void SetUserIds(UserIdsT&& value) {
    m_userIdsHasBeenSet = true;
    m_userIds = std::forward<UserIdsT>(value);
  }
  template <typename UserIdsT = Aws::Vector<Aws::String>>
  BatchDeleteUserRequest& WithUserIds(UserIdsT&& value) {
    SetUserIds(std::forward<UserIdsT>(value));
    return *this;
  }
  template <typename UserIdsT = Aws::String>
  BatchDeleteUserRequest& AddUserIds(UserIdsT&& value) {
    m_userIdsHasBeenSet = true;
    m_userIds.emplace_back(std::forward<UserIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for this request to ensure idempotency. If you retry a
   * request with the same client token, the service will return the same response
   * without attempting to delete users again.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  BatchDeleteUserRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkId;

  Aws::Vector<Aws::String> m_userIds;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_networkIdHasBeenSet = false;
  bool m_userIdsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws

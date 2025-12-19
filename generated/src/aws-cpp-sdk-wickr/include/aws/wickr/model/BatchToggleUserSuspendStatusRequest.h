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
namespace Http {
class URI;
}  // namespace Http
namespace Wickr {
namespace Model {

/**
 */
class BatchToggleUserSuspendStatusRequest : public WickrRequest {
 public:
  AWS_WICKR_API BatchToggleUserSuspendStatusRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchToggleUserSuspendStatus"; }

  AWS_WICKR_API Aws::String SerializePayload() const override;

  AWS_WICKR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  AWS_WICKR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the Wickr network where users will be suspended or unsuspended.</p>
   */
  inline const Aws::String& GetNetworkId() const { return m_networkId; }
  inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
  template <typename NetworkIdT = Aws::String>
  void SetNetworkId(NetworkIdT&& value) {
    m_networkIdHasBeenSet = true;
    m_networkId = std::forward<NetworkIdT>(value);
  }
  template <typename NetworkIdT = Aws::String>
  BatchToggleUserSuspendStatusRequest& WithNetworkId(NetworkIdT&& value) {
    SetNetworkId(std::forward<NetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A boolean value indicating whether to suspend (true) or unsuspend (false) the
   * specified users.</p>
   */
  inline bool GetSuspend() const { return m_suspend; }
  inline bool SuspendHasBeenSet() const { return m_suspendHasBeenSet; }
  inline void SetSuspend(bool value) {
    m_suspendHasBeenSet = true;
    m_suspend = value;
  }
  inline BatchToggleUserSuspendStatusRequest& WithSuspend(bool value) {
    SetSuspend(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of user IDs identifying the users whose suspend status will be
   * toggled. Maximum 50 users per batch request.</p>
   */
  inline const Aws::Vector<Aws::String>& GetUserIds() const { return m_userIds; }
  inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }
  template <typename UserIdsT = Aws::Vector<Aws::String>>
  void SetUserIds(UserIdsT&& value) {
    m_userIdsHasBeenSet = true;
    m_userIds = std::forward<UserIdsT>(value);
  }
  template <typename UserIdsT = Aws::Vector<Aws::String>>
  BatchToggleUserSuspendStatusRequest& WithUserIds(UserIdsT&& value) {
    SetUserIds(std::forward<UserIdsT>(value));
    return *this;
  }
  template <typename UserIdsT = Aws::String>
  BatchToggleUserSuspendStatusRequest& AddUserIds(UserIdsT&& value) {
    m_userIdsHasBeenSet = true;
    m_userIds.emplace_back(std::forward<UserIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for this request to ensure idempotency.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  BatchToggleUserSuspendStatusRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkId;

  bool m_suspend{false};

  Aws::Vector<Aws::String> m_userIds;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_networkIdHasBeenSet = false;
  bool m_suspendHasBeenSet = false;
  bool m_userIdsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws

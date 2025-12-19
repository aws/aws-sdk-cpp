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
#include <aws/wickr/model/BatchCreateUserRequestItem.h>

#include <utility>

namespace Aws {
namespace Wickr {
namespace Model {

/**
 */
class BatchCreateUserRequest : public WickrRequest {
 public:
  AWS_WICKR_API BatchCreateUserRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchCreateUser"; }

  AWS_WICKR_API Aws::String SerializePayload() const override;

  AWS_WICKR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the Wickr network where users will be created.</p>
   */
  inline const Aws::String& GetNetworkId() const { return m_networkId; }
  inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
  template <typename NetworkIdT = Aws::String>
  void SetNetworkId(NetworkIdT&& value) {
    m_networkIdHasBeenSet = true;
    m_networkId = std::forward<NetworkIdT>(value);
  }
  template <typename NetworkIdT = Aws::String>
  BatchCreateUserRequest& WithNetworkId(NetworkIdT&& value) {
    SetNetworkId(std::forward<NetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of user objects containing the details for each user to be created,
   * including username, name, security groups, and optional invite codes. Maximum 50
   * users per batch request.</p>
   */
  inline const Aws::Vector<BatchCreateUserRequestItem>& GetUsers() const { return m_users; }
  inline bool UsersHasBeenSet() const { return m_usersHasBeenSet; }
  template <typename UsersT = Aws::Vector<BatchCreateUserRequestItem>>
  void SetUsers(UsersT&& value) {
    m_usersHasBeenSet = true;
    m_users = std::forward<UsersT>(value);
  }
  template <typename UsersT = Aws::Vector<BatchCreateUserRequestItem>>
  BatchCreateUserRequest& WithUsers(UsersT&& value) {
    SetUsers(std::forward<UsersT>(value));
    return *this;
  }
  template <typename UsersT = BatchCreateUserRequestItem>
  BatchCreateUserRequest& AddUsers(UsersT&& value) {
    m_usersHasBeenSet = true;
    m_users.emplace_back(std::forward<UsersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for this request to ensure idempotency. If you retry a
   * request with the same client token, the service will return the same response
   * without creating duplicate users.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  BatchCreateUserRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkId;

  Aws::Vector<BatchCreateUserRequestItem> m_users;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_networkIdHasBeenSet = false;
  bool m_usersHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws

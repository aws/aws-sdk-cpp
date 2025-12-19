/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/WickrRequest.h>
#include <aws/wickr/Wickr_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Wickr {
namespace Model {

/**
 */
class UpdateGuestUserRequest : public WickrRequest {
 public:
  AWS_WICKR_API UpdateGuestUserRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateGuestUser"; }

  AWS_WICKR_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Wickr network where the guest user's status will be
   * updated.</p>
   */
  inline const Aws::String& GetNetworkId() const { return m_networkId; }
  inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
  template <typename NetworkIdT = Aws::String>
  void SetNetworkId(NetworkIdT&& value) {
    m_networkIdHasBeenSet = true;
    m_networkId = std::forward<NetworkIdT>(value);
  }
  template <typename NetworkIdT = Aws::String>
  UpdateGuestUserRequest& WithNetworkId(NetworkIdT&& value) {
    SetNetworkId(std::forward<NetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The username hash (unique identifier) of the guest user to update.</p>
   */
  inline const Aws::String& GetUsernameHash() const { return m_usernameHash; }
  inline bool UsernameHashHasBeenSet() const { return m_usernameHashHasBeenSet; }
  template <typename UsernameHashT = Aws::String>
  void SetUsernameHash(UsernameHashT&& value) {
    m_usernameHashHasBeenSet = true;
    m_usernameHash = std::forward<UsernameHashT>(value);
  }
  template <typename UsernameHashT = Aws::String>
  UpdateGuestUserRequest& WithUsernameHash(UsernameHashT&& value) {
    SetUsernameHash(std::forward<UsernameHashT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Set to true to block the guest user or false to unblock them.</p>
   */
  inline bool GetBlock() const { return m_block; }
  inline bool BlockHasBeenSet() const { return m_blockHasBeenSet; }
  inline void SetBlock(bool value) {
    m_blockHasBeenSet = true;
    m_block = value;
  }
  inline UpdateGuestUserRequest& WithBlock(bool value) {
    SetBlock(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkId;

  Aws::String m_usernameHash;

  bool m_block{false};
  bool m_networkIdHasBeenSet = false;
  bool m_usernameHashHasBeenSet = false;
  bool m_blockHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws

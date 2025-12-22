/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/WickrRequest.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/UpdateUserDetails.h>

#include <utility>

namespace Aws {
namespace Wickr {
namespace Model {

/**
 */
class UpdateUserRequest : public WickrRequest {
 public:
  AWS_WICKR_API UpdateUserRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateUser"; }

  AWS_WICKR_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Wickr network containing the user to update.</p>
   */
  inline const Aws::String& GetNetworkId() const { return m_networkId; }
  inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
  template <typename NetworkIdT = Aws::String>
  void SetNetworkId(NetworkIdT&& value) {
    m_networkIdHasBeenSet = true;
    m_networkId = std::forward<NetworkIdT>(value);
  }
  template <typename NetworkIdT = Aws::String>
  UpdateUserRequest& WithNetworkId(NetworkIdT&& value) {
    SetNetworkId(std::forward<NetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the user to update.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  UpdateUserRequest& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object containing the user details to be updated, such as name, password,
   * security groups, and invite code settings.</p>
   */
  inline const UpdateUserDetails& GetUserDetails() const { return m_userDetails; }
  inline bool UserDetailsHasBeenSet() const { return m_userDetailsHasBeenSet; }
  template <typename UserDetailsT = UpdateUserDetails>
  void SetUserDetails(UserDetailsT&& value) {
    m_userDetailsHasBeenSet = true;
    m_userDetails = std::forward<UserDetailsT>(value);
  }
  template <typename UserDetailsT = UpdateUserDetails>
  UpdateUserRequest& WithUserDetails(UserDetailsT&& value) {
    SetUserDetails(std::forward<UserDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkId;

  Aws::String m_userId;

  UpdateUserDetails m_userDetails;
  bool m_networkIdHasBeenSet = false;
  bool m_userIdHasBeenSet = false;
  bool m_userDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws

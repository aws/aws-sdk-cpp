/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/Wickr_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {

/**
 * <p>Represents a guest user who has been blocked from accessing a Wickr
 * network.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/BlockedGuestUser">AWS
 * API Reference</a></p>
 */
class BlockedGuestUser {
 public:
  AWS_WICKR_API BlockedGuestUser() = default;
  AWS_WICKR_API BlockedGuestUser(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API BlockedGuestUser& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The username of the blocked guest user.</p>
   */
  inline const Aws::String& GetUsername() const { return m_username; }
  inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
  template <typename UsernameT = Aws::String>
  void SetUsername(UsernameT&& value) {
    m_usernameHasBeenSet = true;
    m_username = std::forward<UsernameT>(value);
  }
  template <typename UsernameT = Aws::String>
  BlockedGuestUser& WithUsername(UsernameT&& value) {
    SetUsername(std::forward<UsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The username of the administrator who blocked this guest user.</p>
   */
  inline const Aws::String& GetAdmin() const { return m_admin; }
  inline bool AdminHasBeenSet() const { return m_adminHasBeenSet; }
  template <typename AdminT = Aws::String>
  void SetAdmin(AdminT&& value) {
    m_adminHasBeenSet = true;
    m_admin = std::forward<AdminT>(value);
  }
  template <typename AdminT = Aws::String>
  BlockedGuestUser& WithAdmin(AdminT&& value) {
    SetAdmin(std::forward<AdminT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the guest user was blocked or last modified.</p>
   */
  inline const Aws::String& GetModified() const { return m_modified; }
  inline bool ModifiedHasBeenSet() const { return m_modifiedHasBeenSet; }
  template <typename ModifiedT = Aws::String>
  void SetModified(ModifiedT&& value) {
    m_modifiedHasBeenSet = true;
    m_modified = std::forward<ModifiedT>(value);
  }
  template <typename ModifiedT = Aws::String>
  BlockedGuestUser& WithModified(ModifiedT&& value) {
    SetModified(std::forward<ModifiedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique username hash identifier for the blocked guest user.</p>
   */
  inline const Aws::String& GetUsernameHash() const { return m_usernameHash; }
  inline bool UsernameHashHasBeenSet() const { return m_usernameHashHasBeenSet; }
  template <typename UsernameHashT = Aws::String>
  void SetUsernameHash(UsernameHashT&& value) {
    m_usernameHashHasBeenSet = true;
    m_usernameHash = std::forward<UsernameHashT>(value);
  }
  template <typename UsernameHashT = Aws::String>
  BlockedGuestUser& WithUsernameHash(UsernameHashT&& value) {
    SetUsernameHash(std::forward<UsernameHashT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_username;

  Aws::String m_admin;

  Aws::String m_modified;

  Aws::String m_usernameHash;
  bool m_usernameHasBeenSet = false;
  bool m_adminHasBeenSet = false;
  bool m_modifiedHasBeenSet = false;
  bool m_usernameHashHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws

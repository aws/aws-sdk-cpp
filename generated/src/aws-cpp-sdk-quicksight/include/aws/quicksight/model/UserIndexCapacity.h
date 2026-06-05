/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>A summary of a user's index capacity consumption.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UserIndexCapacity">AWS
 * API Reference</a></p>
 */
class UserIndexCapacity {
 public:
  AWS_QUICKSIGHT_API UserIndexCapacity() = default;
  AWS_QUICKSIGHT_API UserIndexCapacity(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API UserIndexCapacity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the user.</p>
   */
  inline const Aws::String& GetUserArn() const { return m_userArn; }
  inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }
  template <typename UserArnT = Aws::String>
  void SetUserArn(UserArnT&& value) {
    m_userArnHasBeenSet = true;
    m_userArn = std::forward<UserArnT>(value);
  }
  template <typename UserArnT = Aws::String>
  UserIndexCapacity& WithUserArn(UserArnT&& value) {
    SetUserArn(std::forward<UserArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The username of the user.</p>
   */
  inline const Aws::String& GetUserName() const { return m_userName; }
  inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
  template <typename UserNameT = Aws::String>
  void SetUserName(UserNameT&& value) {
    m_userNameHasBeenSet = true;
    m_userName = std::forward<UserNameT>(value);
  }
  template <typename UserNameT = Aws::String>
  UserIndexCapacity& WithUserName(UserNameT&& value) {
    SetUserName(std::forward<UserNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The email address of the user.</p>
   */
  inline const Aws::String& GetEmail() const { return m_email; }
  inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
  template <typename EmailT = Aws::String>
  void SetEmail(EmailT&& value) {
    m_emailHasBeenSet = true;
    m_email = std::forward<EmailT>(value);
  }
  template <typename EmailT = Aws::String>
  UserIndexCapacity& WithEmail(EmailT&& value) {
    SetEmail(std::forward<EmailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The role of the user.</p>
   */
  inline const Aws::String& GetRole() const { return m_role; }
  inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
  template <typename RoleT = Aws::String>
  void SetRole(RoleT&& value) {
    m_roleHasBeenSet = true;
    m_role = std::forward<RoleT>(value);
  }
  template <typename RoleT = Aws::String>
  UserIndexCapacity& WithRole(RoleT&& value) {
    SetRole(std::forward<RoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total index capacity consumed by the user in bytes.</p>
   */
  inline long long GetTotalCapacityBytes() const { return m_totalCapacityBytes; }
  inline bool TotalCapacityBytesHasBeenSet() const { return m_totalCapacityBytesHasBeenSet; }
  inline void SetTotalCapacityBytes(long long value) {
    m_totalCapacityBytesHasBeenSet = true;
    m_totalCapacityBytes = value;
  }
  inline UserIndexCapacity& WithTotalCapacityBytes(long long value) {
    SetTotalCapacityBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total index capacity consumed by the user's knowledge bases in bytes.</p>
   */
  inline long long GetTotalKBCapacityBytes() const { return m_totalKBCapacityBytes; }
  inline bool TotalKBCapacityBytesHasBeenSet() const { return m_totalKBCapacityBytesHasBeenSet; }
  inline void SetTotalKBCapacityBytes(long long value) {
    m_totalKBCapacityBytesHasBeenSet = true;
    m_totalKBCapacityBytes = value;
  }
  inline UserIndexCapacity& WithTotalKBCapacityBytes(long long value) {
    SetTotalKBCapacityBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total index capacity consumed by the user's spaces in bytes.</p>
   */
  inline long long GetTotalSpaceCapacityBytes() const { return m_totalSpaceCapacityBytes; }
  inline bool TotalSpaceCapacityBytesHasBeenSet() const { return m_totalSpaceCapacityBytesHasBeenSet; }
  inline void SetTotalSpaceCapacityBytes(long long value) {
    m_totalSpaceCapacityBytesHasBeenSet = true;
    m_totalSpaceCapacityBytes = value;
  }
  inline UserIndexCapacity& WithTotalSpaceCapacityBytes(long long value) {
    SetTotalSpaceCapacityBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of knowledge bases owned by the user.</p>
   */
  inline int GetKbCount() const { return m_kbCount; }
  inline bool KbCountHasBeenSet() const { return m_kbCountHasBeenSet; }
  inline void SetKbCount(int value) {
    m_kbCountHasBeenSet = true;
    m_kbCount = value;
  }
  inline UserIndexCapacity& WithKbCount(int value) {
    SetKbCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of spaces owned by the user.</p>
   */
  inline int GetSpaceCount() const { return m_spaceCount; }
  inline bool SpaceCountHasBeenSet() const { return m_spaceCountHasBeenSet; }
  inline void SetSpaceCount(int value) {
    m_spaceCountHasBeenSet = true;
    m_spaceCount = value;
  }
  inline UserIndexCapacity& WithSpaceCount(int value) {
    SetSpaceCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_userArn;

  Aws::String m_userName;

  Aws::String m_email;

  Aws::String m_role;

  long long m_totalCapacityBytes{0};

  long long m_totalKBCapacityBytes{0};

  long long m_totalSpaceCapacityBytes{0};

  int m_kbCount{0};

  int m_spaceCount{0};
  bool m_userArnHasBeenSet = false;
  bool m_userNameHasBeenSet = false;
  bool m_emailHasBeenSet = false;
  bool m_roleHasBeenSet = false;
  bool m_totalCapacityBytesHasBeenSet = false;
  bool m_totalKBCapacityBytesHasBeenSet = false;
  bool m_totalSpaceCapacityBytesHasBeenSet = false;
  bool m_kbCountHasBeenSet = false;
  bool m_spaceCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws

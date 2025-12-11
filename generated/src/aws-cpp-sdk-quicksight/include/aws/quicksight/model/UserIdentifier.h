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
 * <p>A structure that contains information to identify a user.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UserIdentifier">AWS
 * API Reference</a></p>
 */
class UserIdentifier {
 public:
  AWS_QUICKSIGHT_API UserIdentifier() = default;
  AWS_QUICKSIGHT_API UserIdentifier(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API UserIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the user that you want to get identity context for.</p>
   */
  inline const Aws::String& GetUserName() const { return m_userName; }
  inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
  template <typename UserNameT = Aws::String>
  void SetUserName(UserNameT&& value) {
    m_userNameHasBeenSet = true;
    m_userName = std::forward<UserNameT>(value);
  }
  template <typename UserNameT = Aws::String>
  UserIdentifier& WithUserName(UserNameT&& value) {
    SetUserName(std::forward<UserNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The email address of the user that you want to get identity context for.</p>
   */
  inline const Aws::String& GetEmail() const { return m_email; }
  inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
  template <typename EmailT = Aws::String>
  void SetEmail(EmailT&& value) {
    m_emailHasBeenSet = true;
    m_email = std::forward<EmailT>(value);
  }
  template <typename EmailT = Aws::String>
  UserIdentifier& WithEmail(EmailT&& value) {
    SetEmail(std::forward<EmailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the user that you want to get identity
   * context for.</p>
   */
  inline const Aws::String& GetUserArn() const { return m_userArn; }
  inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }
  template <typename UserArnT = Aws::String>
  void SetUserArn(UserArnT&& value) {
    m_userArnHasBeenSet = true;
    m_userArn = std::forward<UserArnT>(value);
  }
  template <typename UserArnT = Aws::String>
  UserIdentifier& WithUserArn(UserArnT&& value) {
    SetUserArn(std::forward<UserArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userName;

  Aws::String m_email;

  Aws::String m_userArn;
  bool m_userNameHasBeenSet = false;
  bool m_emailHasBeenSet = false;
  bool m_userArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws

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
 * <p>Contains information about a username hash that was successfully resolved in
 * a batch uname lookup operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/BatchUnameSuccessResponseItem">AWS
 * API Reference</a></p>
 */
class BatchUnameSuccessResponseItem {
 public:
  AWS_WICKR_API BatchUnameSuccessResponseItem() = default;
  AWS_WICKR_API BatchUnameSuccessResponseItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API BatchUnameSuccessResponseItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The username hash that was successfully resolved.</p>
   */
  inline const Aws::String& GetUname() const { return m_uname; }
  inline bool UnameHasBeenSet() const { return m_unameHasBeenSet; }
  template <typename UnameT = Aws::String>
  void SetUname(UnameT&& value) {
    m_unameHasBeenSet = true;
    m_uname = std::forward<UnameT>(value);
  }
  template <typename UnameT = Aws::String>
  BatchUnameSuccessResponseItem& WithUname(UnameT&& value) {
    SetUname(std::forward<UnameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The email address or username corresponding to the username hash.</p>
   */
  inline const Aws::String& GetUsername() const { return m_username; }
  inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
  template <typename UsernameT = Aws::String>
  void SetUsername(UsernameT&& value) {
    m_usernameHasBeenSet = true;
    m_username = std::forward<UsernameT>(value);
  }
  template <typename UsernameT = Aws::String>
  BatchUnameSuccessResponseItem& WithUsername(UsernameT&& value) {
    SetUsername(std::forward<UsernameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_uname;

  Aws::String m_username;
  bool m_unameHasBeenSet = false;
  bool m_usernameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws

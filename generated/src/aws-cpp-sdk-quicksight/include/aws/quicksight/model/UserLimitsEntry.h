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
 * <p>Identifies a user for the <code>BatchDescribeUserLimits</code>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UserLimitsEntry">AWS
 * API Reference</a></p>
 */
class UserLimitsEntry {
 public:
  AWS_QUICKSIGHT_API UserLimitsEntry() = default;
  AWS_QUICKSIGHT_API UserLimitsEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API UserLimitsEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the user.</p>
   */
  inline const Aws::String& GetUserName() const { return m_userName; }
  inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
  template <typename UserNameT = Aws::String>
  void SetUserName(UserNameT&& value) {
    m_userNameHasBeenSet = true;
    m_userName = std::forward<UserNameT>(value);
  }
  template <typename UserNameT = Aws::String>
  UserLimitsEntry& WithUserName(UserNameT&& value) {
    SetUserName(std::forward<UserNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The namespace of the user.</p>
   */
  inline const Aws::String& GetNamespace() const { return m_namespace; }
  inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
  template <typename NamespaceT = Aws::String>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::String>
  UserLimitsEntry& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userName;

  Aws::String m_namespace;
  bool m_userNameHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws

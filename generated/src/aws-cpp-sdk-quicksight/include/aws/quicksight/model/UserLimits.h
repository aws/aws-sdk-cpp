/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/EffectiveLimit.h>

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
 * <p>The effective limits for an Amazon Quick Sight user.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UserLimits">AWS
 * API Reference</a></p>
 */
class UserLimits {
 public:
  AWS_QUICKSIGHT_API UserLimits() = default;
  AWS_QUICKSIGHT_API UserLimits(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API UserLimits& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  UserLimits& WithUserName(UserNameT&& value) {
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
  UserLimits& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of effective limits for the user.</p>
   */
  inline const Aws::Vector<EffectiveLimit>& GetEffectiveLimits() const { return m_effectiveLimits; }
  inline bool EffectiveLimitsHasBeenSet() const { return m_effectiveLimitsHasBeenSet; }
  template <typename EffectiveLimitsT = Aws::Vector<EffectiveLimit>>
  void SetEffectiveLimits(EffectiveLimitsT&& value) {
    m_effectiveLimitsHasBeenSet = true;
    m_effectiveLimits = std::forward<EffectiveLimitsT>(value);
  }
  template <typename EffectiveLimitsT = Aws::Vector<EffectiveLimit>>
  UserLimits& WithEffectiveLimits(EffectiveLimitsT&& value) {
    SetEffectiveLimits(std::forward<EffectiveLimitsT>(value));
    return *this;
  }
  template <typename EffectiveLimitsT = EffectiveLimit>
  UserLimits& AddEffectiveLimits(EffectiveLimitsT&& value) {
    m_effectiveLimitsHasBeenSet = true;
    m_effectiveLimits.emplace_back(std::forward<EffectiveLimitsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userName;

  Aws::String m_namespace;

  Aws::Vector<EffectiveLimit> m_effectiveLimits;
  bool m_userNameHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
  bool m_effectiveLimitsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws

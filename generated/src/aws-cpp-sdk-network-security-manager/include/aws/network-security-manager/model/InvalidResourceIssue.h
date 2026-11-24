/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkSecurityManager {
namespace Model {

/**
 * <p>Describes a single related resource whose configuration does not match the
 * intended configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/InvalidResourceIssue">AWS
 * API Reference</a></p>
 */
class InvalidResourceIssue {
 public:
  AWS_NETWORKSECURITYMANAGER_API InvalidResourceIssue() = default;
  AWS_NETWORKSECURITYMANAGER_API InvalidResourceIssue(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API InvalidResourceIssue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the resource, such as a subnet ARN.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  InvalidResourceIssue& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The attribute value that the policy configuration requires, such as the
   * connectivity type for a subnet.</p>
   */
  inline const Aws::String& GetExpectedValue() const { return m_expectedValue; }
  inline bool ExpectedValueHasBeenSet() const { return m_expectedValueHasBeenSet; }
  template <typename ExpectedValueT = Aws::String>
  void SetExpectedValue(ExpectedValueT&& value) {
    m_expectedValueHasBeenSet = true;
    m_expectedValue = std::forward<ExpectedValueT>(value);
  }
  template <typename ExpectedValueT = Aws::String>
  InvalidResourceIssue& WithExpectedValue(ExpectedValueT&& value) {
    SetExpectedValue(std::forward<ExpectedValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current attribute value on the resource.</p>
   */
  inline const Aws::String& GetActualValue() const { return m_actualValue; }
  inline bool ActualValueHasBeenSet() const { return m_actualValueHasBeenSet; }
  template <typename ActualValueT = Aws::String>
  void SetActualValue(ActualValueT&& value) {
    m_actualValueHasBeenSet = true;
    m_actualValue = std::forward<ActualValueT>(value);
  }
  template <typename ActualValueT = Aws::String>
  InvalidResourceIssue& WithActualValue(ActualValueT&& value) {
    SetActualValue(std::forward<ActualValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceId;

  Aws::String m_expectedValue;

  Aws::String m_actualValue;
  bool m_resourceIdHasBeenSet = false;
  bool m_expectedValueHasBeenSet = false;
  bool m_actualValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws

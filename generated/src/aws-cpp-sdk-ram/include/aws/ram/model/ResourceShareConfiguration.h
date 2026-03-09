/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RAM {
namespace Model {

/**
 * <p>The configuration of the resource share</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/ResourceShareConfiguration">AWS
 * API Reference</a></p>
 */
class ResourceShareConfiguration {
 public:
  AWS_RAM_API ResourceShareConfiguration() = default;
  AWS_RAM_API ResourceShareConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_RAM_API ResourceShareConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether the consumer account retains access to the resource share
   * after leaving the organization.</p>
   */
  inline bool GetRetainSharingOnAccountLeaveOrganization() const { return m_retainSharingOnAccountLeaveOrganization; }
  inline bool RetainSharingOnAccountLeaveOrganizationHasBeenSet() const { return m_retainSharingOnAccountLeaveOrganizationHasBeenSet; }
  inline void SetRetainSharingOnAccountLeaveOrganization(bool value) {
    m_retainSharingOnAccountLeaveOrganizationHasBeenSet = true;
    m_retainSharingOnAccountLeaveOrganization = value;
  }
  inline ResourceShareConfiguration& WithRetainSharingOnAccountLeaveOrganization(bool value) {
    SetRetainSharingOnAccountLeaveOrganization(value);
    return *this;
  }
  ///@}
 private:
  bool m_retainSharingOnAccountLeaveOrganization{false};
  bool m_retainSharingOnAccountLeaveOrganizationHasBeenSet = false;
};

}  // namespace Model
}  // namespace RAM
}  // namespace Aws

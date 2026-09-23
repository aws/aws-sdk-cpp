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
 * <p>A reference to an AWS Organizations organizational unit (OU), with optional
 * display metadata.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/OrganizationalUnitReference">AWS
 * API Reference</a></p>
 */
class OrganizationalUnitReference {
 public:
  AWS_NETWORKSECURITYMANAGER_API OrganizationalUnitReference() = default;
  AWS_NETWORKSECURITYMANAGER_API OrganizationalUnitReference(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API OrganizationalUnitReference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the AWS Organizations organizational unit (OU).</p>
   */
  inline const Aws::String& GetOuId() const { return m_ouId; }
  inline bool OuIdHasBeenSet() const { return m_ouIdHasBeenSet; }
  template <typename OuIdT = Aws::String>
  void SetOuId(OuIdT&& value) {
    m_ouIdHasBeenSet = true;
    m_ouId = std::forward<OuIdT>(value);
  }
  template <typename OuIdT = Aws::String>
  OrganizationalUnitReference& WithOuId(OuIdT&& value) {
    SetOuId(std::forward<OuIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the organizational unit.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  OrganizationalUnitReference& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ouId;

  Aws::String m_name;
  bool m_ouIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws

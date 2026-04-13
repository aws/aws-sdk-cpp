/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>Specifies an Organizations scope. Data from the specified organization or
 * organizational unit is included in the response.</p> <p>To scope to a specific
 * organizational unit, provide <code>OrganizationalUnitId</code>. You can
 * optionally include <code>OrganizationId</code>. If you omit
 * <code>OrganizationId</code>, Security Hub uses the caller's organization ID. To
 * scope to the delegated administrator's entire organization, provide only
 * <code>OrganizationId</code>.</p> <p>The organization ID and organizational unit
 * must belong to the delegated administrator's own organization. Each request must
 * use one scoping approach: either scope to the entire organization by providing
 * an <code>AwsOrganizationScope</code> entry with only
 * <code>OrganizationId</code>, or scope to specific organizational units by
 * providing <code>AwsOrganizationScope</code> entries with
 * <code>OrganizationalUnitId</code>. You can't combine both approaches in the same
 * request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsOrganizationScope">AWS
 * API Reference</a></p>
 */
class AwsOrganizationScope {
 public:
  AWS_SECURITYHUB_API AwsOrganizationScope() = default;
  AWS_SECURITYHUB_API AwsOrganizationScope(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API AwsOrganizationScope& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier (ID) of the organization (for example,
   * <code>o-abcd1234567890</code>). The organization must be the delegated
   * administrator's own organization. If you omit this value and provide
   * <code>OrganizationalUnitId</code>, Security Hub uses the caller's organization
   * ID.</p>
   */
  inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
  inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
  template <typename OrganizationIdT = Aws::String>
  void SetOrganizationId(OrganizationIdT&& value) {
    m_organizationIdHasBeenSet = true;
    m_organizationId = std::forward<OrganizationIdT>(value);
  }
  template <typename OrganizationIdT = Aws::String>
  AwsOrganizationScope& WithOrganizationId(OrganizationIdT&& value) {
    SetOrganizationId(std::forward<OrganizationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier (ID) of the organizational unit (OU) (for example,
   * <code>ou-ab12-cd345678</code>). The OU must exist within the delegated
   * administrator's own organization. When specified, the results include only data
   * from accounts in this OU.</p>
   */
  inline const Aws::String& GetOrganizationalUnitId() const { return m_organizationalUnitId; }
  inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }
  template <typename OrganizationalUnitIdT = Aws::String>
  void SetOrganizationalUnitId(OrganizationalUnitIdT&& value) {
    m_organizationalUnitIdHasBeenSet = true;
    m_organizationalUnitId = std::forward<OrganizationalUnitIdT>(value);
  }
  template <typename OrganizationalUnitIdT = Aws::String>
  AwsOrganizationScope& WithOrganizationalUnitId(OrganizationalUnitIdT&& value) {
    SetOrganizationalUnitId(std::forward<OrganizationalUnitIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_organizationId;

  Aws::String m_organizationalUnitId;
  bool m_organizationIdHasBeenSet = false;
  bool m_organizationalUnitIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws

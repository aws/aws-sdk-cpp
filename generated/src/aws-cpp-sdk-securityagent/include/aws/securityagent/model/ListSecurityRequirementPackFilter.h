/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/ManagementType.h>
#include <aws/securityagent/model/SecurityRequirementPackStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Filter criteria for listing security requirement packs.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ListSecurityRequirementPackFilter">AWS
 * API Reference</a></p>
 */
class ListSecurityRequirementPackFilter {
 public:
  AWS_SECURITYAGENT_API ListSecurityRequirementPackFilter() = default;
  AWS_SECURITYAGENT_API ListSecurityRequirementPackFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API ListSecurityRequirementPackFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filter packs by management type. Valid values are AWS_MANAGED and
   * CUSTOMER_MANAGED.</p>
   */
  inline ManagementType GetManagementType() const { return m_managementType; }
  inline bool ManagementTypeHasBeenSet() const { return m_managementTypeHasBeenSet; }
  inline void SetManagementType(ManagementType value) {
    m_managementTypeHasBeenSet = true;
    m_managementType = value;
  }
  inline ListSecurityRequirementPackFilter& WithManagementType(ManagementType value) {
    SetManagementType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter packs by status. Valid values are ENABLED and DISABLED.</p>
   */
  inline SecurityRequirementPackStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(SecurityRequirementPackStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListSecurityRequirementPackFilter& WithStatus(SecurityRequirementPackStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  ManagementType m_managementType{ManagementType::NOT_SET};

  SecurityRequirementPackStatus m_status{SecurityRequirementPackStatus::NOT_SET};
  bool m_managementTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws

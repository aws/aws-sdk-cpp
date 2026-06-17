/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Contains summary information about a security requirement pack.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/SecurityRequirementPackSummary">AWS
 * API Reference</a></p>
 */
class SecurityRequirementPackSummary {
 public:
  AWS_SECURITYAGENT_API SecurityRequirementPackSummary() = default;
  AWS_SECURITYAGENT_API SecurityRequirementPackSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API SecurityRequirementPackSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the security requirement pack.</p>
   */
  inline const Aws::String& GetPackId() const { return m_packId; }
  inline bool PackIdHasBeenSet() const { return m_packIdHasBeenSet; }
  template <typename PackIdT = Aws::String>
  void SetPackId(PackIdT&& value) {
    m_packIdHasBeenSet = true;
    m_packId = std::forward<PackIdT>(value);
  }
  template <typename PackIdT = Aws::String>
  SecurityRequirementPackSummary& WithPackId(PackIdT&& value) {
    SetPackId(std::forward<PackIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the security requirement pack.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  SecurityRequirementPackSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the security requirement pack.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  SecurityRequirementPackSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The vendor name for AWS managed packs.</p>
   */
  inline const Aws::String& GetVendorName() const { return m_vendorName; }
  inline bool VendorNameHasBeenSet() const { return m_vendorNameHasBeenSet; }
  template <typename VendorNameT = Aws::String>
  void SetVendorName(VendorNameT&& value) {
    m_vendorNameHasBeenSet = true;
    m_vendorName = std::forward<VendorNameT>(value);
  }
  template <typename VendorNameT = Aws::String>
  SecurityRequirementPackSummary& WithVendorName(VendorNameT&& value) {
    SetVendorName(std::forward<VendorNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The management type of the pack.</p>
   */
  inline ManagementType GetManagementType() const { return m_managementType; }
  inline bool ManagementTypeHasBeenSet() const { return m_managementTypeHasBeenSet; }
  inline void SetManagementType(ManagementType value) {
    m_managementTypeHasBeenSet = true;
    m_managementType = value;
  }
  inline SecurityRequirementPackSummary& WithManagementType(ManagementType value) {
    SetManagementType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the security requirement pack.</p>
   */
  inline SecurityRequirementPackStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(SecurityRequirementPackStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline SecurityRequirementPackSummary& WithStatus(SecurityRequirementPackStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the security requirement pack was created, in UTC
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  SecurityRequirementPackSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the security requirement pack was last updated, in UTC
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  SecurityRequirementPackSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_packId;

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_vendorName;

  ManagementType m_managementType{ManagementType::NOT_SET};

  SecurityRequirementPackStatus m_status{SecurityRequirementPackStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_packIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_vendorNameHasBeenSet = false;
  bool m_managementTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws

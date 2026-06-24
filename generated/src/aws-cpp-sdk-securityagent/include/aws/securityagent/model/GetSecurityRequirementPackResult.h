/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/ManagementType.h>
#include <aws/securityagent/model/SecurityRequirementPackImportStatus.h>
#include <aws/securityagent/model/SecurityRequirementPackStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {
class GetSecurityRequirementPackResult {
 public:
  AWS_SECURITYAGENT_API GetSecurityRequirementPackResult() = default;
  AWS_SECURITYAGENT_API GetSecurityRequirementPackResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API GetSecurityRequirementPackResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the security requirement pack.</p>
   */
  inline const Aws::String& GetPackId() const { return m_packId; }
  template <typename PackIdT = Aws::String>
  void SetPackId(PackIdT&& value) {
    m_packIdHasBeenSet = true;
    m_packId = std::forward<PackIdT>(value);
  }
  template <typename PackIdT = Aws::String>
  GetSecurityRequirementPackResult& WithPackId(PackIdT&& value) {
    SetPackId(std::forward<PackIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the security requirement pack.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetSecurityRequirementPackResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the security requirement pack.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetSecurityRequirementPackResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The vendor name for AWS managed packs, such as ISO or NIST.</p>
   */
  inline const Aws::String& GetVendorName() const { return m_vendorName; }
  template <typename VendorNameT = Aws::String>
  void SetVendorName(VendorNameT&& value) {
    m_vendorNameHasBeenSet = true;
    m_vendorName = std::forward<VendorNameT>(value);
  }
  template <typename VendorNameT = Aws::String>
  GetSecurityRequirementPackResult& WithVendorName(VendorNameT&& value) {
    SetVendorName(std::forward<VendorNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The management type of the pack. Valid values are AWS_MANAGED and
   * CUSTOMER_MANAGED.</p>
   */
  inline ManagementType GetManagementType() const { return m_managementType; }
  inline void SetManagementType(ManagementType value) {
    m_managementTypeHasBeenSet = true;
    m_managementType = value;
  }
  inline GetSecurityRequirementPackResult& WithManagementType(ManagementType value) {
    SetManagementType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the security requirement pack.</p>
   */
  inline SecurityRequirementPackStatus GetStatus() const { return m_status; }
  inline void SetStatus(SecurityRequirementPackStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetSecurityRequirementPackResult& WithStatus(SecurityRequirementPackStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the security requirements import workflow for this pack.</p>
   */
  inline SecurityRequirementPackImportStatus GetImportStatus() const { return m_importStatus; }
  inline void SetImportStatus(SecurityRequirementPackImportStatus value) {
    m_importStatusHasBeenSet = true;
    m_importStatus = value;
  }
  inline GetSecurityRequirementPackResult& WithImportStatus(SecurityRequirementPackImportStatus value) {
    SetImportStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the security requirement pack was created, in UTC
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetSecurityRequirementPackResult& WithCreatedAt(CreatedAtT&& value) {
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
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetSecurityRequirementPackResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the AWS KMS key used to encrypt pack contents.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  GetSecurityRequirementPackResult& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetSecurityRequirementPackResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_packId;

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_vendorName;

  ManagementType m_managementType{ManagementType::NOT_SET};

  SecurityRequirementPackStatus m_status{SecurityRequirementPackStatus::NOT_SET};

  SecurityRequirementPackImportStatus m_importStatus{SecurityRequirementPackImportStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_kmsKeyId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_packIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_vendorNameHasBeenSet = false;
  bool m_managementTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_importStatusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/AgreementCancellationRequestReasonCode.h>
#include <aws/marketplace-agreement/model/AgreementCancellationRequestStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>Summary view of an agreement cancellation request.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/AgreementCancellationRequestSummary">AWS
 * API Reference</a></p>
 */
class AgreementCancellationRequestSummary {
 public:
  AWS_AGREEMENTSERVICE_API AgreementCancellationRequestSummary() = default;
  AWS_AGREEMENTSERVICE_API AgreementCancellationRequestSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API AgreementCancellationRequestSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the cancellation request.</p>
   */
  inline const Aws::String& GetAgreementCancellationRequestId() const { return m_agreementCancellationRequestId; }
  inline bool AgreementCancellationRequestIdHasBeenSet() const { return m_agreementCancellationRequestIdHasBeenSet; }
  template <typename AgreementCancellationRequestIdT = Aws::String>
  void SetAgreementCancellationRequestId(AgreementCancellationRequestIdT&& value) {
    m_agreementCancellationRequestIdHasBeenSet = true;
    m_agreementCancellationRequestId = std::forward<AgreementCancellationRequestIdT>(value);
  }
  template <typename AgreementCancellationRequestIdT = Aws::String>
  AgreementCancellationRequestSummary& WithAgreementCancellationRequestId(AgreementCancellationRequestIdT&& value) {
    SetAgreementCancellationRequestId(std::forward<AgreementCancellationRequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agreement associated with this cancellation
   * request.</p>
   */
  inline const Aws::String& GetAgreementId() const { return m_agreementId; }
  inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }
  template <typename AgreementIdT = Aws::String>
  void SetAgreementId(AgreementIdT&& value) {
    m_agreementIdHasBeenSet = true;
    m_agreementId = std::forward<AgreementIdT>(value);
  }
  template <typename AgreementIdT = Aws::String>
  AgreementCancellationRequestSummary& WithAgreementId(AgreementIdT&& value) {
    SetAgreementId(std::forward<AgreementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the cancellation request. Possible values include
   * <code>PENDING_APPROVAL</code>, <code>APPROVED</code>, <code>REJECTED</code>,
   * <code>CANCELLED</code>, and <code>VALIDATION_FAILED</code>.</p>
   */
  inline AgreementCancellationRequestStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AgreementCancellationRequestStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AgreementCancellationRequestSummary& WithStatus(AgreementCancellationRequestStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason code provided for the cancellation.</p>
   */
  inline AgreementCancellationRequestReasonCode GetReasonCode() const { return m_reasonCode; }
  inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }
  inline void SetReasonCode(AgreementCancellationRequestReasonCode value) {
    m_reasonCodeHasBeenSet = true;
    m_reasonCode = value;
  }
  inline AgreementCancellationRequestSummary& WithReasonCode(AgreementCancellationRequestReasonCode value) {
    SetReasonCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of agreement.</p>
   */
  inline const Aws::String& GetAgreementType() const { return m_agreementType; }
  inline bool AgreementTypeHasBeenSet() const { return m_agreementTypeHasBeenSet; }
  template <typename AgreementTypeT = Aws::String>
  void SetAgreementType(AgreementTypeT&& value) {
    m_agreementTypeHasBeenSet = true;
    m_agreementType = std::forward<AgreementTypeT>(value);
  }
  template <typename AgreementTypeT = Aws::String>
  AgreementCancellationRequestSummary& WithAgreementType(AgreementTypeT&& value) {
    SetAgreementType(std::forward<AgreementTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The catalog in which the agreement was created.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  AgreementCancellationRequestSummary& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the cancellation request was created, as a POSIX
   * timestamp (Unix epoch seconds).</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  AgreementCancellationRequestSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the cancellation request was last updated, as a POSIX
   * timestamp (Unix epoch seconds).</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  AgreementCancellationRequestSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agreementCancellationRequestId;

  Aws::String m_agreementId;

  AgreementCancellationRequestStatus m_status{AgreementCancellationRequestStatus::NOT_SET};

  AgreementCancellationRequestReasonCode m_reasonCode{AgreementCancellationRequestReasonCode::NOT_SET};

  Aws::String m_agreementType;

  Aws::String m_catalog;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_agreementCancellationRequestIdHasBeenSet = false;
  bool m_agreementIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_reasonCodeHasBeenSet = false;
  bool m_agreementTypeHasBeenSet = false;
  bool m_catalogHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>Defines the conditions that will keep an agreement created from this offer
 * valid. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/ValidityTerm">AWS
 * API Reference</a></p>
 */
class ValidityTerm {
 public:
  AWS_AGREEMENTSERVICE_API ValidityTerm() = default;
  AWS_AGREEMENTSERVICE_API ValidityTerm(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API ValidityTerm& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Category of the term being updated. </p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  ValidityTerm& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the term.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  ValidityTerm& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defines the duration that the agreement remains active. If
   * <code>AgreementStartDate</code> isn’t provided, the agreement duration is
   * relative to the agreement signature time. The duration is represented in the
   * ISO_8601 format.</p>
   */
  inline const Aws::String& GetAgreementDuration() const { return m_agreementDuration; }
  inline bool AgreementDurationHasBeenSet() const { return m_agreementDurationHasBeenSet; }
  template <typename AgreementDurationT = Aws::String>
  void SetAgreementDuration(AgreementDurationT&& value) {
    m_agreementDurationHasBeenSet = true;
    m_agreementDuration = std::forward<AgreementDurationT>(value);
  }
  template <typename AgreementDurationT = Aws::String>
  ValidityTerm& WithAgreementDuration(AgreementDurationT&& value) {
    SetAgreementDuration(std::forward<AgreementDurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defines the date when agreement starts. The agreement starts at 00:00:00.000
   * UTC on the date provided. If <code>AgreementStartDate</code> isn’t provided, the
   * agreement start date is determined based on agreement signature time.</p>
   */
  inline const Aws::Utils::DateTime& GetAgreementStartDate() const { return m_agreementStartDate; }
  inline bool AgreementStartDateHasBeenSet() const { return m_agreementStartDateHasBeenSet; }
  template <typename AgreementStartDateT = Aws::Utils::DateTime>
  void SetAgreementStartDate(AgreementStartDateT&& value) {
    m_agreementStartDateHasBeenSet = true;
    m_agreementStartDate = std::forward<AgreementStartDateT>(value);
  }
  template <typename AgreementStartDateT = Aws::Utils::DateTime>
  ValidityTerm& WithAgreementStartDate(AgreementStartDateT&& value) {
    SetAgreementStartDate(std::forward<AgreementStartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defines the date when the agreement ends. The agreement ends at 23:59:59.999
   * UTC on the date provided. If <code>AgreementEndDate</code> isn’t provided, the
   * agreement end date is determined by the validity of individual terms.</p>
   */
  inline const Aws::Utils::DateTime& GetAgreementEndDate() const { return m_agreementEndDate; }
  inline bool AgreementEndDateHasBeenSet() const { return m_agreementEndDateHasBeenSet; }
  template <typename AgreementEndDateT = Aws::Utils::DateTime>
  void SetAgreementEndDate(AgreementEndDateT&& value) {
    m_agreementEndDateHasBeenSet = true;
    m_agreementEndDate = std::forward<AgreementEndDateT>(value);
  }
  template <typename AgreementEndDateT = Aws::Utils::DateTime>
  ValidityTerm& WithAgreementEndDate(AgreementEndDateT&& value) {
    SetAgreementEndDate(std::forward<AgreementEndDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_type;

  Aws::String m_id;

  Aws::String m_agreementDuration;

  Aws::Utils::DateTime m_agreementStartDate{};

  Aws::Utils::DateTime m_agreementEndDate{};
  bool m_typeHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_agreementDurationHasBeenSet = false;
  bool m_agreementStartDateHasBeenSet = false;
  bool m_agreementEndDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/TermType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>Defines a validity term that specifies the duration or date range of an
 * agreement.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/ValidityTerm">AWS
 * API Reference</a></p>
 */
class ValidityTerm {
 public:
  AWS_MARKETPLACEDISCOVERY_API ValidityTerm() = default;
  AWS_MARKETPLACEDISCOVERY_API ValidityTerm(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API ValidityTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the term.</p>
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
   * <p>The category of the term.</p>
   */
  inline TermType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(TermType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ValidityTerm& WithType(TermType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration of the agreement, in ISO 8601 format.</p>
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
   * <p>The date when the agreement ends.</p>
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

  ///@{
  /**
   * <p>The date when the agreement starts.</p>
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
 private:
  Aws::String m_id;

  TermType m_type{TermType::NOT_SET};

  Aws::String m_agreementDuration;

  Aws::Utils::DateTime m_agreementEndDate{};

  Aws::Utils::DateTime m_agreementStartDate{};
  bool m_idHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_agreementDurationHasBeenSet = false;
  bool m_agreementEndDateHasBeenSet = false;
  bool m_agreementStartDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws

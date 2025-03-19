/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AgreementService
{
namespace Model
{

  /**
   * <p>Defines the conditions that will keep an agreement created from this offer
   * valid. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/ValidityTerm">AWS
   * API Reference</a></p>
   */
  class ValidityTerm
  {
  public:
    AWS_AGREEMENTSERVICE_API ValidityTerm() = default;
    AWS_AGREEMENTSERVICE_API ValidityTerm(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API ValidityTerm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the duration that the agreement remains active. If
     * <code>AgreementStartDate</code> isn’t provided, the agreement duration is
     * relative to the agreement signature time. The duration is represented in the
     * ISO_8601 format.</p>
     */
    inline const Aws::String& GetAgreementDuration() const { return m_agreementDuration; }
    inline bool AgreementDurationHasBeenSet() const { return m_agreementDurationHasBeenSet; }
    template<typename AgreementDurationT = Aws::String>
    void SetAgreementDuration(AgreementDurationT&& value) { m_agreementDurationHasBeenSet = true; m_agreementDuration = std::forward<AgreementDurationT>(value); }
    template<typename AgreementDurationT = Aws::String>
    ValidityTerm& WithAgreementDuration(AgreementDurationT&& value) { SetAgreementDuration(std::forward<AgreementDurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the date when the agreement ends. The agreement ends at 23:59:59.999
     * UTC on the date provided. If <code>AgreementEndDate</code> isn’t provided, the
     * agreement end date is determined by the validity of individual terms.</p>
     */
    inline const Aws::Utils::DateTime& GetAgreementEndDate() const { return m_agreementEndDate; }
    inline bool AgreementEndDateHasBeenSet() const { return m_agreementEndDateHasBeenSet; }
    template<typename AgreementEndDateT = Aws::Utils::DateTime>
    void SetAgreementEndDate(AgreementEndDateT&& value) { m_agreementEndDateHasBeenSet = true; m_agreementEndDate = std::forward<AgreementEndDateT>(value); }
    template<typename AgreementEndDateT = Aws::Utils::DateTime>
    ValidityTerm& WithAgreementEndDate(AgreementEndDateT&& value) { SetAgreementEndDate(std::forward<AgreementEndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the date when agreement starts. The agreement starts at 00:00:00.000
     * UTC on the date provided. If <code>AgreementStartDate</code> isn’t provided, the
     * agreement start date is determined based on agreement signature time.</p>
     */
    inline const Aws::Utils::DateTime& GetAgreementStartDate() const { return m_agreementStartDate; }
    inline bool AgreementStartDateHasBeenSet() const { return m_agreementStartDateHasBeenSet; }
    template<typename AgreementStartDateT = Aws::Utils::DateTime>
    void SetAgreementStartDate(AgreementStartDateT&& value) { m_agreementStartDateHasBeenSet = true; m_agreementStartDate = std::forward<AgreementStartDateT>(value); }
    template<typename AgreementStartDateT = Aws::Utils::DateTime>
    ValidityTerm& WithAgreementStartDate(AgreementStartDateT&& value) { SetAgreementStartDate(std::forward<AgreementStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Category of the term being updated. </p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    ValidityTerm& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_agreementDuration;
    bool m_agreementDurationHasBeenSet = false;

    Aws::Utils::DateTime m_agreementEndDate{};
    bool m_agreementEndDateHasBeenSet = false;

    Aws::Utils::DateTime m_agreementStartDate{};
    bool m_agreementStartDateHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws

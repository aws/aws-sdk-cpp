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
    AWS_AGREEMENTSERVICE_API ValidityTerm();
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
    inline const Aws::String& GetAgreementDuration() const{ return m_agreementDuration; }
    inline bool AgreementDurationHasBeenSet() const { return m_agreementDurationHasBeenSet; }
    inline void SetAgreementDuration(const Aws::String& value) { m_agreementDurationHasBeenSet = true; m_agreementDuration = value; }
    inline void SetAgreementDuration(Aws::String&& value) { m_agreementDurationHasBeenSet = true; m_agreementDuration = std::move(value); }
    inline void SetAgreementDuration(const char* value) { m_agreementDurationHasBeenSet = true; m_agreementDuration.assign(value); }
    inline ValidityTerm& WithAgreementDuration(const Aws::String& value) { SetAgreementDuration(value); return *this;}
    inline ValidityTerm& WithAgreementDuration(Aws::String&& value) { SetAgreementDuration(std::move(value)); return *this;}
    inline ValidityTerm& WithAgreementDuration(const char* value) { SetAgreementDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the date when the agreement ends. The agreement ends at 23:59:59.999
     * UTC on the date provided. If <code>AgreementEndDate</code> isn’t provided, the
     * agreement end date is determined by the validity of individual terms.</p>
     */
    inline const Aws::Utils::DateTime& GetAgreementEndDate() const{ return m_agreementEndDate; }
    inline bool AgreementEndDateHasBeenSet() const { return m_agreementEndDateHasBeenSet; }
    inline void SetAgreementEndDate(const Aws::Utils::DateTime& value) { m_agreementEndDateHasBeenSet = true; m_agreementEndDate = value; }
    inline void SetAgreementEndDate(Aws::Utils::DateTime&& value) { m_agreementEndDateHasBeenSet = true; m_agreementEndDate = std::move(value); }
    inline ValidityTerm& WithAgreementEndDate(const Aws::Utils::DateTime& value) { SetAgreementEndDate(value); return *this;}
    inline ValidityTerm& WithAgreementEndDate(Aws::Utils::DateTime&& value) { SetAgreementEndDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the date when agreement starts. The agreement starts at 00:00:00.000
     * UTC on the date provided. If <code>AgreementStartDate</code> isn’t provided, the
     * agreement start date is determined based on agreement signature time.</p>
     */
    inline const Aws::Utils::DateTime& GetAgreementStartDate() const{ return m_agreementStartDate; }
    inline bool AgreementStartDateHasBeenSet() const { return m_agreementStartDateHasBeenSet; }
    inline void SetAgreementStartDate(const Aws::Utils::DateTime& value) { m_agreementStartDateHasBeenSet = true; m_agreementStartDate = value; }
    inline void SetAgreementStartDate(Aws::Utils::DateTime&& value) { m_agreementStartDateHasBeenSet = true; m_agreementStartDate = std::move(value); }
    inline ValidityTerm& WithAgreementStartDate(const Aws::Utils::DateTime& value) { SetAgreementStartDate(value); return *this;}
    inline ValidityTerm& WithAgreementStartDate(Aws::Utils::DateTime&& value) { SetAgreementStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Category of the term being updated. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline ValidityTerm& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline ValidityTerm& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline ValidityTerm& WithType(const char* value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_agreementDuration;
    bool m_agreementDurationHasBeenSet = false;

    Aws::Utils::DateTime m_agreementEndDate;
    bool m_agreementEndDateHasBeenSet = false;

    Aws::Utils::DateTime m_agreementStartDate;
    bool m_agreementStartDateHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws

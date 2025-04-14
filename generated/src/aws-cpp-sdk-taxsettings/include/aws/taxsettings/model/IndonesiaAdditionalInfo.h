/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/taxsettings/model/IndonesiaTaxRegistrationNumberType.h>
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
namespace TaxSettings
{
namespace Model
{

  /**
   * <p>Additional tax information associated with your TRN in
   * Indonesia.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/IndonesiaAdditionalInfo">AWS
   * API Reference</a></p>
   */
  class IndonesiaAdditionalInfo
  {
  public:
    AWS_TAXSETTINGS_API IndonesiaAdditionalInfo() = default;
    AWS_TAXSETTINGS_API IndonesiaAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API IndonesiaAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>VAT-exempt customers have a Directorate General of Taxation (DGT) exemption
     * letter or certificate (Surat Keterangan Bebas) decision number. Non-collected
     * VAT have a DGT letter or certificate (Surat Keterangan Tidak Dipungut).</p>
     */
    inline const Aws::String& GetDecisionNumber() const { return m_decisionNumber; }
    inline bool DecisionNumberHasBeenSet() const { return m_decisionNumberHasBeenSet; }
    template<typename DecisionNumberT = Aws::String>
    void SetDecisionNumber(DecisionNumberT&& value) { m_decisionNumberHasBeenSet = true; m_decisionNumber = std::forward<DecisionNumberT>(value); }
    template<typename DecisionNumberT = Aws::String>
    IndonesiaAdditionalInfo& WithDecisionNumber(DecisionNumberT&& value) { SetDecisionNumber(std::forward<DecisionNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Exception code if you are designated by Directorate General of Taxation (DGT)
     * as a VAT collector, non-collected VAT, or VAT-exempt customer.</p>
     */
    inline const Aws::String& GetPpnExceptionDesignationCode() const { return m_ppnExceptionDesignationCode; }
    inline bool PpnExceptionDesignationCodeHasBeenSet() const { return m_ppnExceptionDesignationCodeHasBeenSet; }
    template<typename PpnExceptionDesignationCodeT = Aws::String>
    void SetPpnExceptionDesignationCode(PpnExceptionDesignationCodeT&& value) { m_ppnExceptionDesignationCodeHasBeenSet = true; m_ppnExceptionDesignationCode = std::forward<PpnExceptionDesignationCodeT>(value); }
    template<typename PpnExceptionDesignationCodeT = Aws::String>
    IndonesiaAdditionalInfo& WithPpnExceptionDesignationCode(PpnExceptionDesignationCodeT&& value) { SetPpnExceptionDesignationCode(std::forward<PpnExceptionDesignationCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax registration number type.</p>
     */
    inline IndonesiaTaxRegistrationNumberType GetTaxRegistrationNumberType() const { return m_taxRegistrationNumberType; }
    inline bool TaxRegistrationNumberTypeHasBeenSet() const { return m_taxRegistrationNumberTypeHasBeenSet; }
    inline void SetTaxRegistrationNumberType(IndonesiaTaxRegistrationNumberType value) { m_taxRegistrationNumberTypeHasBeenSet = true; m_taxRegistrationNumberType = value; }
    inline IndonesiaAdditionalInfo& WithTaxRegistrationNumberType(IndonesiaTaxRegistrationNumberType value) { SetTaxRegistrationNumberType(value); return *this;}
    ///@}
  private:

    Aws::String m_decisionNumber;
    bool m_decisionNumberHasBeenSet = false;

    Aws::String m_ppnExceptionDesignationCode;
    bool m_ppnExceptionDesignationCodeHasBeenSet = false;

    IndonesiaTaxRegistrationNumberType m_taxRegistrationNumberType{IndonesiaTaxRegistrationNumberType::NOT_SET};
    bool m_taxRegistrationNumberTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws

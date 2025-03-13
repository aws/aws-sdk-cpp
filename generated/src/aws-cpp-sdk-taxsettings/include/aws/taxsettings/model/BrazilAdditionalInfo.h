/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Additional tax information associated with your TRN in Brazil.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/BrazilAdditionalInfo">AWS
   * API Reference</a></p>
   */
  class BrazilAdditionalInfo
  {
  public:
    AWS_TAXSETTINGS_API BrazilAdditionalInfo() = default;
    AWS_TAXSETTINGS_API BrazilAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API BrazilAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Cadastro de Contribuintes Mobiliários (CCM) code for your TRN in Brazil.
     * This only applies for a CNPJ tax type for the São Paulo municipality.</p>
     */
    inline const Aws::String& GetCcmCode() const { return m_ccmCode; }
    inline bool CcmCodeHasBeenSet() const { return m_ccmCodeHasBeenSet; }
    template<typename CcmCodeT = Aws::String>
    void SetCcmCode(CcmCodeT&& value) { m_ccmCodeHasBeenSet = true; m_ccmCode = std::forward<CcmCodeT>(value); }
    template<typename CcmCodeT = Aws::String>
    BrazilAdditionalInfo& WithCcmCode(CcmCodeT&& value) { SetCcmCode(std::forward<CcmCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Legal nature of business, based on your TRN in Brazil. This only applies for
     * a CNPJ tax type.</p>
     */
    inline const Aws::String& GetLegalNatureCode() const { return m_legalNatureCode; }
    inline bool LegalNatureCodeHasBeenSet() const { return m_legalNatureCodeHasBeenSet; }
    template<typename LegalNatureCodeT = Aws::String>
    void SetLegalNatureCode(LegalNatureCodeT&& value) { m_legalNatureCodeHasBeenSet = true; m_legalNatureCode = std::forward<LegalNatureCodeT>(value); }
    template<typename LegalNatureCodeT = Aws::String>
    BrazilAdditionalInfo& WithLegalNatureCode(LegalNatureCodeT&& value) { SetLegalNatureCode(std::forward<LegalNatureCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ccmCode;
    bool m_ccmCodeHasBeenSet = false;

    Aws::String m_legalNatureCode;
    bool m_legalNatureCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws

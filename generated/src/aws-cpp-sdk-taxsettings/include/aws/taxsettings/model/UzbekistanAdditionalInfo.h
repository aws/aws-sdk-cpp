/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/UzbekistanTaxRegistrationNumberType.h>
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
   * <p> Additional tax information to specify for a TRN in Uzbekistan.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/UzbekistanAdditionalInfo">AWS
   * API Reference</a></p>
   */
  class UzbekistanAdditionalInfo
  {
  public:
    AWS_TAXSETTINGS_API UzbekistanAdditionalInfo() = default;
    AWS_TAXSETTINGS_API UzbekistanAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API UzbekistanAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The tax registration number type. The tax registration number type valid
     * values are <code>Business</code> and <code>Individual</code>. </p>
     */
    inline UzbekistanTaxRegistrationNumberType GetTaxRegistrationNumberType() const { return m_taxRegistrationNumberType; }
    inline bool TaxRegistrationNumberTypeHasBeenSet() const { return m_taxRegistrationNumberTypeHasBeenSet; }
    inline void SetTaxRegistrationNumberType(UzbekistanTaxRegistrationNumberType value) { m_taxRegistrationNumberTypeHasBeenSet = true; m_taxRegistrationNumberType = value; }
    inline UzbekistanAdditionalInfo& WithTaxRegistrationNumberType(UzbekistanTaxRegistrationNumberType value) { SetTaxRegistrationNumberType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique 12-digit number issued to identify VAT-registered identities in
     * Uzbekistan. </p>
     */
    inline const Aws::String& GetVatRegistrationNumber() const { return m_vatRegistrationNumber; }
    inline bool VatRegistrationNumberHasBeenSet() const { return m_vatRegistrationNumberHasBeenSet; }
    template<typename VatRegistrationNumberT = Aws::String>
    void SetVatRegistrationNumber(VatRegistrationNumberT&& value) { m_vatRegistrationNumberHasBeenSet = true; m_vatRegistrationNumber = std::forward<VatRegistrationNumberT>(value); }
    template<typename VatRegistrationNumberT = Aws::String>
    UzbekistanAdditionalInfo& WithVatRegistrationNumber(VatRegistrationNumberT&& value) { SetVatRegistrationNumber(std::forward<VatRegistrationNumberT>(value)); return *this;}
    ///@}
  private:

    UzbekistanTaxRegistrationNumberType m_taxRegistrationNumberType{UzbekistanTaxRegistrationNumberType::NOT_SET};
    bool m_taxRegistrationNumberTypeHasBeenSet = false;

    Aws::String m_vatRegistrationNumber;
    bool m_vatRegistrationNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/SaudiArabiaTaxRegistrationNumberType.h>
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
   * <p> Additional tax information associated with your TRN in Saudi Arabia.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/SaudiArabiaAdditionalInfo">AWS
   * API Reference</a></p>
   */
  class SaudiArabiaAdditionalInfo
  {
  public:
    AWS_TAXSETTINGS_API SaudiArabiaAdditionalInfo() = default;
    AWS_TAXSETTINGS_API SaudiArabiaAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API SaudiArabiaAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The tax registration number type. </p>
     */
    inline SaudiArabiaTaxRegistrationNumberType GetTaxRegistrationNumberType() const { return m_taxRegistrationNumberType; }
    inline bool TaxRegistrationNumberTypeHasBeenSet() const { return m_taxRegistrationNumberTypeHasBeenSet; }
    inline void SetTaxRegistrationNumberType(SaudiArabiaTaxRegistrationNumberType value) { m_taxRegistrationNumberTypeHasBeenSet = true; m_taxRegistrationNumberType = value; }
    inline SaudiArabiaAdditionalInfo& WithTaxRegistrationNumberType(SaudiArabiaTaxRegistrationNumberType value) { SetTaxRegistrationNumberType(value); return *this;}
    ///@}
  private:

    SaudiArabiaTaxRegistrationNumberType m_taxRegistrationNumberType{SaudiArabiaTaxRegistrationNumberType::NOT_SET};
    bool m_taxRegistrationNumberTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws

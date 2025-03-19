/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/TaxRegistrationNumberType.h>
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
   * <p>Additional tax information to specify for a TRN in Romania. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/RomaniaAdditionalInfo">AWS
   * API Reference</a></p>
   */
  class RomaniaAdditionalInfo
  {
  public:
    AWS_TAXSETTINGS_API RomaniaAdditionalInfo() = default;
    AWS_TAXSETTINGS_API RomaniaAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API RomaniaAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The tax registration number type. The value can be
     * <code>TaxRegistrationNumber</code> or <code>LocalRegistrationNumber</code>. </p>
     */
    inline TaxRegistrationNumberType GetTaxRegistrationNumberType() const { return m_taxRegistrationNumberType; }
    inline bool TaxRegistrationNumberTypeHasBeenSet() const { return m_taxRegistrationNumberTypeHasBeenSet; }
    inline void SetTaxRegistrationNumberType(TaxRegistrationNumberType value) { m_taxRegistrationNumberTypeHasBeenSet = true; m_taxRegistrationNumberType = value; }
    inline RomaniaAdditionalInfo& WithTaxRegistrationNumberType(TaxRegistrationNumberType value) { SetTaxRegistrationNumberType(value); return *this;}
    ///@}
  private:

    TaxRegistrationNumberType m_taxRegistrationNumberType{TaxRegistrationNumberType::NOT_SET};
    bool m_taxRegistrationNumberTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws

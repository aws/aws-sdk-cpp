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
   * <p> Additional tax information associated with your TRN in Canada
   * .</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/CanadaAdditionalInfo">AWS
   * API Reference</a></p>
   */
  class CanadaAdditionalInfo
  {
  public:
    AWS_TAXSETTINGS_API CanadaAdditionalInfo();
    AWS_TAXSETTINGS_API CanadaAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API CanadaAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Quebec Sales Tax ID number. Leave blank if you do not have a Quebec
     * Sales Tax ID number. </p>
     */
    inline const Aws::String& GetCanadaQuebecSalesTaxNumber() const{ return m_canadaQuebecSalesTaxNumber; }
    inline bool CanadaQuebecSalesTaxNumberHasBeenSet() const { return m_canadaQuebecSalesTaxNumberHasBeenSet; }
    inline void SetCanadaQuebecSalesTaxNumber(const Aws::String& value) { m_canadaQuebecSalesTaxNumberHasBeenSet = true; m_canadaQuebecSalesTaxNumber = value; }
    inline void SetCanadaQuebecSalesTaxNumber(Aws::String&& value) { m_canadaQuebecSalesTaxNumberHasBeenSet = true; m_canadaQuebecSalesTaxNumber = std::move(value); }
    inline void SetCanadaQuebecSalesTaxNumber(const char* value) { m_canadaQuebecSalesTaxNumberHasBeenSet = true; m_canadaQuebecSalesTaxNumber.assign(value); }
    inline CanadaAdditionalInfo& WithCanadaQuebecSalesTaxNumber(const Aws::String& value) { SetCanadaQuebecSalesTaxNumber(value); return *this;}
    inline CanadaAdditionalInfo& WithCanadaQuebecSalesTaxNumber(Aws::String&& value) { SetCanadaQuebecSalesTaxNumber(std::move(value)); return *this;}
    inline CanadaAdditionalInfo& WithCanadaQuebecSalesTaxNumber(const char* value) { SetCanadaQuebecSalesTaxNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Manitoba Retail Sales Tax ID number. Customers purchasing Amazon Web
     * Services services for resale in Manitoba must provide a valid Retail Sales Tax
     * ID number for Manitoba. Leave this blank if you do not have a Retail Sales Tax
     * ID number in Manitoba or are not purchasing Amazon Web Services services for
     * resale. </p>
     */
    inline const Aws::String& GetCanadaRetailSalesTaxNumber() const{ return m_canadaRetailSalesTaxNumber; }
    inline bool CanadaRetailSalesTaxNumberHasBeenSet() const { return m_canadaRetailSalesTaxNumberHasBeenSet; }
    inline void SetCanadaRetailSalesTaxNumber(const Aws::String& value) { m_canadaRetailSalesTaxNumberHasBeenSet = true; m_canadaRetailSalesTaxNumber = value; }
    inline void SetCanadaRetailSalesTaxNumber(Aws::String&& value) { m_canadaRetailSalesTaxNumberHasBeenSet = true; m_canadaRetailSalesTaxNumber = std::move(value); }
    inline void SetCanadaRetailSalesTaxNumber(const char* value) { m_canadaRetailSalesTaxNumberHasBeenSet = true; m_canadaRetailSalesTaxNumber.assign(value); }
    inline CanadaAdditionalInfo& WithCanadaRetailSalesTaxNumber(const Aws::String& value) { SetCanadaRetailSalesTaxNumber(value); return *this;}
    inline CanadaAdditionalInfo& WithCanadaRetailSalesTaxNumber(Aws::String&& value) { SetCanadaRetailSalesTaxNumber(std::move(value)); return *this;}
    inline CanadaAdditionalInfo& WithCanadaRetailSalesTaxNumber(const char* value) { SetCanadaRetailSalesTaxNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The value for this parameter must be <code>true</code> if the
     * <code>provincialSalesTaxId</code> value is provided for a TRN in British
     * Columbia, Saskatchewan, or Manitoba provinces. </p> <p>To claim a provincial
     * sales tax (PST) and retail sales tax (RST) reseller exemption, you must confirm
     * that purchases from this account were made for resale. Otherwise, remove the PST
     * or RST number from the <code>provincialSalesTaxId</code> parameter from your
     * request.</p>
     */
    inline bool GetIsResellerAccount() const{ return m_isResellerAccount; }
    inline bool IsResellerAccountHasBeenSet() const { return m_isResellerAccountHasBeenSet; }
    inline void SetIsResellerAccount(bool value) { m_isResellerAccountHasBeenSet = true; m_isResellerAccount = value; }
    inline CanadaAdditionalInfo& WithIsResellerAccount(bool value) { SetIsResellerAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The provincial sales tax ID for your TRN in Canada. This parameter can
     * represent the following: </p> <ul> <li> <p>Provincial sales tax ID number for
     * British Columbia and Saskatchewan provinces</p> </li> <li> <p>Manitoba retail
     * sales tax ID number for Manitoba province</p> </li> <li> <p>Quebec sales tax ID
     * number for Quebec province</p> </li> </ul> <p>The Tax Setting API only accepts
     * this parameter if the TRN is specified for the previous provinces. For other
     * provinces, the Tax Settings API doesn't accept this parameter. </p>
     */
    inline const Aws::String& GetProvincialSalesTaxId() const{ return m_provincialSalesTaxId; }
    inline bool ProvincialSalesTaxIdHasBeenSet() const { return m_provincialSalesTaxIdHasBeenSet; }
    inline void SetProvincialSalesTaxId(const Aws::String& value) { m_provincialSalesTaxIdHasBeenSet = true; m_provincialSalesTaxId = value; }
    inline void SetProvincialSalesTaxId(Aws::String&& value) { m_provincialSalesTaxIdHasBeenSet = true; m_provincialSalesTaxId = std::move(value); }
    inline void SetProvincialSalesTaxId(const char* value) { m_provincialSalesTaxIdHasBeenSet = true; m_provincialSalesTaxId.assign(value); }
    inline CanadaAdditionalInfo& WithProvincialSalesTaxId(const Aws::String& value) { SetProvincialSalesTaxId(value); return *this;}
    inline CanadaAdditionalInfo& WithProvincialSalesTaxId(Aws::String&& value) { SetProvincialSalesTaxId(std::move(value)); return *this;}
    inline CanadaAdditionalInfo& WithProvincialSalesTaxId(const char* value) { SetProvincialSalesTaxId(value); return *this;}
    ///@}
  private:

    Aws::String m_canadaQuebecSalesTaxNumber;
    bool m_canadaQuebecSalesTaxNumberHasBeenSet = false;

    Aws::String m_canadaRetailSalesTaxNumber;
    bool m_canadaRetailSalesTaxNumberHasBeenSet = false;

    bool m_isResellerAccount;
    bool m_isResellerAccountHasBeenSet = false;

    Aws::String m_provincialSalesTaxId;
    bool m_provincialSalesTaxIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws

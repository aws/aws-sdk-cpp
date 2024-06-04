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
   * <p> Additional tax information associated with your TRN in Italy. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/ItalyAdditionalInfo">AWS
   * API Reference</a></p>
   */
  class ItalyAdditionalInfo
  {
  public:
    AWS_TAXSETTINGS_API ItalyAdditionalInfo();
    AWS_TAXSETTINGS_API ItalyAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API ItalyAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The tender procedure identification code. </p>
     */
    inline const Aws::String& GetCigNumber() const{ return m_cigNumber; }

    /**
     * <p> The tender procedure identification code. </p>
     */
    inline bool CigNumberHasBeenSet() const { return m_cigNumberHasBeenSet; }

    /**
     * <p> The tender procedure identification code. </p>
     */
    inline void SetCigNumber(const Aws::String& value) { m_cigNumberHasBeenSet = true; m_cigNumber = value; }

    /**
     * <p> The tender procedure identification code. </p>
     */
    inline void SetCigNumber(Aws::String&& value) { m_cigNumberHasBeenSet = true; m_cigNumber = std::move(value); }

    /**
     * <p> The tender procedure identification code. </p>
     */
    inline void SetCigNumber(const char* value) { m_cigNumberHasBeenSet = true; m_cigNumber.assign(value); }

    /**
     * <p> The tender procedure identification code. </p>
     */
    inline ItalyAdditionalInfo& WithCigNumber(const Aws::String& value) { SetCigNumber(value); return *this;}

    /**
     * <p> The tender procedure identification code. </p>
     */
    inline ItalyAdditionalInfo& WithCigNumber(Aws::String&& value) { SetCigNumber(std::move(value)); return *this;}

    /**
     * <p> The tender procedure identification code. </p>
     */
    inline ItalyAdditionalInfo& WithCigNumber(const char* value) { SetCigNumber(value); return *this;}


    /**
     * <p> Additional tax information to specify for a TRN in Italy. This is managed by
     * the Interministerial Committee for Economic Planning (CIPE) which characterizes
     * every public investment project (Individual Project Code). </p>
     */
    inline const Aws::String& GetCupNumber() const{ return m_cupNumber; }

    /**
     * <p> Additional tax information to specify for a TRN in Italy. This is managed by
     * the Interministerial Committee for Economic Planning (CIPE) which characterizes
     * every public investment project (Individual Project Code). </p>
     */
    inline bool CupNumberHasBeenSet() const { return m_cupNumberHasBeenSet; }

    /**
     * <p> Additional tax information to specify for a TRN in Italy. This is managed by
     * the Interministerial Committee for Economic Planning (CIPE) which characterizes
     * every public investment project (Individual Project Code). </p>
     */
    inline void SetCupNumber(const Aws::String& value) { m_cupNumberHasBeenSet = true; m_cupNumber = value; }

    /**
     * <p> Additional tax information to specify for a TRN in Italy. This is managed by
     * the Interministerial Committee for Economic Planning (CIPE) which characterizes
     * every public investment project (Individual Project Code). </p>
     */
    inline void SetCupNumber(Aws::String&& value) { m_cupNumberHasBeenSet = true; m_cupNumber = std::move(value); }

    /**
     * <p> Additional tax information to specify for a TRN in Italy. This is managed by
     * the Interministerial Committee for Economic Planning (CIPE) which characterizes
     * every public investment project (Individual Project Code). </p>
     */
    inline void SetCupNumber(const char* value) { m_cupNumberHasBeenSet = true; m_cupNumber.assign(value); }

    /**
     * <p> Additional tax information to specify for a TRN in Italy. This is managed by
     * the Interministerial Committee for Economic Planning (CIPE) which characterizes
     * every public investment project (Individual Project Code). </p>
     */
    inline ItalyAdditionalInfo& WithCupNumber(const Aws::String& value) { SetCupNumber(value); return *this;}

    /**
     * <p> Additional tax information to specify for a TRN in Italy. This is managed by
     * the Interministerial Committee for Economic Planning (CIPE) which characterizes
     * every public investment project (Individual Project Code). </p>
     */
    inline ItalyAdditionalInfo& WithCupNumber(Aws::String&& value) { SetCupNumber(std::move(value)); return *this;}

    /**
     * <p> Additional tax information to specify for a TRN in Italy. This is managed by
     * the Interministerial Committee for Economic Planning (CIPE) which characterizes
     * every public investment project (Individual Project Code). </p>
     */
    inline ItalyAdditionalInfo& WithCupNumber(const char* value) { SetCupNumber(value); return *this;}


    /**
     * <p> Additional tax information to specify for a TRN in Italy. Use
     * CodiceDestinatario to receive your invoices via web service (API) or FTP. </p>
     */
    inline const Aws::String& GetSdiAccountId() const{ return m_sdiAccountId; }

    /**
     * <p> Additional tax information to specify for a TRN in Italy. Use
     * CodiceDestinatario to receive your invoices via web service (API) or FTP. </p>
     */
    inline bool SdiAccountIdHasBeenSet() const { return m_sdiAccountIdHasBeenSet; }

    /**
     * <p> Additional tax information to specify for a TRN in Italy. Use
     * CodiceDestinatario to receive your invoices via web service (API) or FTP. </p>
     */
    inline void SetSdiAccountId(const Aws::String& value) { m_sdiAccountIdHasBeenSet = true; m_sdiAccountId = value; }

    /**
     * <p> Additional tax information to specify for a TRN in Italy. Use
     * CodiceDestinatario to receive your invoices via web service (API) or FTP. </p>
     */
    inline void SetSdiAccountId(Aws::String&& value) { m_sdiAccountIdHasBeenSet = true; m_sdiAccountId = std::move(value); }

    /**
     * <p> Additional tax information to specify for a TRN in Italy. Use
     * CodiceDestinatario to receive your invoices via web service (API) or FTP. </p>
     */
    inline void SetSdiAccountId(const char* value) { m_sdiAccountIdHasBeenSet = true; m_sdiAccountId.assign(value); }

    /**
     * <p> Additional tax information to specify for a TRN in Italy. Use
     * CodiceDestinatario to receive your invoices via web service (API) or FTP. </p>
     */
    inline ItalyAdditionalInfo& WithSdiAccountId(const Aws::String& value) { SetSdiAccountId(value); return *this;}

    /**
     * <p> Additional tax information to specify for a TRN in Italy. Use
     * CodiceDestinatario to receive your invoices via web service (API) or FTP. </p>
     */
    inline ItalyAdditionalInfo& WithSdiAccountId(Aws::String&& value) { SetSdiAccountId(std::move(value)); return *this;}

    /**
     * <p> Additional tax information to specify for a TRN in Italy. Use
     * CodiceDestinatario to receive your invoices via web service (API) or FTP. </p>
     */
    inline ItalyAdditionalInfo& WithSdiAccountId(const char* value) { SetSdiAccountId(value); return *this;}


    /**
     * <p>List of service tax codes for your TRN in Italy. You can use your customer
     * tax code as part of a VAT Group. </p>
     */
    inline const Aws::String& GetTaxCode() const{ return m_taxCode; }

    /**
     * <p>List of service tax codes for your TRN in Italy. You can use your customer
     * tax code as part of a VAT Group. </p>
     */
    inline bool TaxCodeHasBeenSet() const { return m_taxCodeHasBeenSet; }

    /**
     * <p>List of service tax codes for your TRN in Italy. You can use your customer
     * tax code as part of a VAT Group. </p>
     */
    inline void SetTaxCode(const Aws::String& value) { m_taxCodeHasBeenSet = true; m_taxCode = value; }

    /**
     * <p>List of service tax codes for your TRN in Italy. You can use your customer
     * tax code as part of a VAT Group. </p>
     */
    inline void SetTaxCode(Aws::String&& value) { m_taxCodeHasBeenSet = true; m_taxCode = std::move(value); }

    /**
     * <p>List of service tax codes for your TRN in Italy. You can use your customer
     * tax code as part of a VAT Group. </p>
     */
    inline void SetTaxCode(const char* value) { m_taxCodeHasBeenSet = true; m_taxCode.assign(value); }

    /**
     * <p>List of service tax codes for your TRN in Italy. You can use your customer
     * tax code as part of a VAT Group. </p>
     */
    inline ItalyAdditionalInfo& WithTaxCode(const Aws::String& value) { SetTaxCode(value); return *this;}

    /**
     * <p>List of service tax codes for your TRN in Italy. You can use your customer
     * tax code as part of a VAT Group. </p>
     */
    inline ItalyAdditionalInfo& WithTaxCode(Aws::String&& value) { SetTaxCode(std::move(value)); return *this;}

    /**
     * <p>List of service tax codes for your TRN in Italy. You can use your customer
     * tax code as part of a VAT Group. </p>
     */
    inline ItalyAdditionalInfo& WithTaxCode(const char* value) { SetTaxCode(value); return *this;}

  private:

    Aws::String m_cigNumber;
    bool m_cigNumberHasBeenSet = false;

    Aws::String m_cupNumber;
    bool m_cupNumberHasBeenSet = false;

    Aws::String m_sdiAccountId;
    bool m_sdiAccountIdHasBeenSet = false;

    Aws::String m_taxCode;
    bool m_taxCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws

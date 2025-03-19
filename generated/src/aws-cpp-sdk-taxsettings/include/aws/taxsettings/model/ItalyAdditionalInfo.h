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
    AWS_TAXSETTINGS_API ItalyAdditionalInfo() = default;
    AWS_TAXSETTINGS_API ItalyAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API ItalyAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The tender procedure identification code. </p>
     */
    inline const Aws::String& GetCigNumber() const { return m_cigNumber; }
    inline bool CigNumberHasBeenSet() const { return m_cigNumberHasBeenSet; }
    template<typename CigNumberT = Aws::String>
    void SetCigNumber(CigNumberT&& value) { m_cigNumberHasBeenSet = true; m_cigNumber = std::forward<CigNumberT>(value); }
    template<typename CigNumberT = Aws::String>
    ItalyAdditionalInfo& WithCigNumber(CigNumberT&& value) { SetCigNumber(std::forward<CigNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional tax information to specify for a TRN in Italy. This is managed by
     * the Interministerial Committee for Economic Planning (CIPE) which characterizes
     * every public investment project (Individual Project Code). </p>
     */
    inline const Aws::String& GetCupNumber() const { return m_cupNumber; }
    inline bool CupNumberHasBeenSet() const { return m_cupNumberHasBeenSet; }
    template<typename CupNumberT = Aws::String>
    void SetCupNumber(CupNumberT&& value) { m_cupNumberHasBeenSet = true; m_cupNumber = std::forward<CupNumberT>(value); }
    template<typename CupNumberT = Aws::String>
    ItalyAdditionalInfo& WithCupNumber(CupNumberT&& value) { SetCupNumber(std::forward<CupNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional tax information to specify for a TRN in Italy. Use
     * CodiceDestinatario to receive your invoices via web service (API) or FTP. </p>
     */
    inline const Aws::String& GetSdiAccountId() const { return m_sdiAccountId; }
    inline bool SdiAccountIdHasBeenSet() const { return m_sdiAccountIdHasBeenSet; }
    template<typename SdiAccountIdT = Aws::String>
    void SetSdiAccountId(SdiAccountIdT&& value) { m_sdiAccountIdHasBeenSet = true; m_sdiAccountId = std::forward<SdiAccountIdT>(value); }
    template<typename SdiAccountIdT = Aws::String>
    ItalyAdditionalInfo& WithSdiAccountId(SdiAccountIdT&& value) { SetSdiAccountId(std::forward<SdiAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of service tax codes for your TRN in Italy. You can use your customer
     * tax code as part of a VAT Group. </p>
     */
    inline const Aws::String& GetTaxCode() const { return m_taxCode; }
    inline bool TaxCodeHasBeenSet() const { return m_taxCodeHasBeenSet; }
    template<typename TaxCodeT = Aws::String>
    void SetTaxCode(TaxCodeT&& value) { m_taxCodeHasBeenSet = true; m_taxCode = std::forward<TaxCodeT>(value); }
    template<typename TaxCodeT = Aws::String>
    ItalyAdditionalInfo& WithTaxCode(TaxCodeT&& value) { SetTaxCode(std::forward<TaxCodeT>(value)); return *this;}
    ///@}
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

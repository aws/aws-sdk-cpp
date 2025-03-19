/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/Industries.h>
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
   * <p>Additional tax information associated with your TRN in Turkey.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/TurkeyAdditionalInfo">AWS
   * API Reference</a></p>
   */
  class TurkeyAdditionalInfo
  {
  public:
    AWS_TAXSETTINGS_API TurkeyAdditionalInfo() = default;
    AWS_TAXSETTINGS_API TurkeyAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API TurkeyAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The industry information that tells the Tax Settings API if you're subject to
     * additional withholding taxes. This information required for business-to-business
     * (B2B) customers. This information is conditionally mandatory for B2B customers
     * who are subject to KDV tax.</p>
     */
    inline Industries GetIndustries() const { return m_industries; }
    inline bool IndustriesHasBeenSet() const { return m_industriesHasBeenSet; }
    inline void SetIndustries(Industries value) { m_industriesHasBeenSet = true; m_industries = value; }
    inline TurkeyAdditionalInfo& WithIndustries(Industries value) { SetIndustries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Registered Electronic Mail (REM) that is used to send notarized
     * communication. This parameter is optional for business-to-business (B2B) and
     * business-to-government (B2G) customers. It's not required for
     * business-to-consumer (B2C) customers.</p>
     */
    inline const Aws::String& GetKepEmailId() const { return m_kepEmailId; }
    inline bool KepEmailIdHasBeenSet() const { return m_kepEmailIdHasBeenSet; }
    template<typename KepEmailIdT = Aws::String>
    void SetKepEmailId(KepEmailIdT&& value) { m_kepEmailIdHasBeenSet = true; m_kepEmailId = std::forward<KepEmailIdT>(value); }
    template<typename KepEmailIdT = Aws::String>
    TurkeyAdditionalInfo& WithKepEmailId(KepEmailIdT&& value) { SetKepEmailId(std::forward<KepEmailIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Secondary tax ID (“harcama birimi VKN”si”). If one isn't provided, we will
     * use your VKN as the secondary ID. </p>
     */
    inline const Aws::String& GetSecondaryTaxId() const { return m_secondaryTaxId; }
    inline bool SecondaryTaxIdHasBeenSet() const { return m_secondaryTaxIdHasBeenSet; }
    template<typename SecondaryTaxIdT = Aws::String>
    void SetSecondaryTaxId(SecondaryTaxIdT&& value) { m_secondaryTaxIdHasBeenSet = true; m_secondaryTaxId = std::forward<SecondaryTaxIdT>(value); }
    template<typename SecondaryTaxIdT = Aws::String>
    TurkeyAdditionalInfo& WithSecondaryTaxId(SecondaryTaxIdT&& value) { SetSecondaryTaxId(std::forward<SecondaryTaxIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax office where you're registered. You can enter this information as a
     * string. The Tax Settings API will add this information to your invoice. This
     * parameter is required for business-to-business (B2B) and business-to-government
     * customers. It's not required for business-to-consumer (B2C) customers.</p>
     */
    inline const Aws::String& GetTaxOffice() const { return m_taxOffice; }
    inline bool TaxOfficeHasBeenSet() const { return m_taxOfficeHasBeenSet; }
    template<typename TaxOfficeT = Aws::String>
    void SetTaxOffice(TaxOfficeT&& value) { m_taxOfficeHasBeenSet = true; m_taxOffice = std::forward<TaxOfficeT>(value); }
    template<typename TaxOfficeT = Aws::String>
    TurkeyAdditionalInfo& WithTaxOffice(TaxOfficeT&& value) { SetTaxOffice(std::forward<TaxOfficeT>(value)); return *this;}
    ///@}
  private:

    Industries m_industries{Industries::NOT_SET};
    bool m_industriesHasBeenSet = false;

    Aws::String m_kepEmailId;
    bool m_kepEmailIdHasBeenSet = false;

    Aws::String m_secondaryTaxId;
    bool m_secondaryTaxIdHasBeenSet = false;

    Aws::String m_taxOffice;
    bool m_taxOfficeHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws

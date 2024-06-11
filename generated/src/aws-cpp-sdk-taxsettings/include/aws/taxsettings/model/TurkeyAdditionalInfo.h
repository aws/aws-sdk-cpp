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
    AWS_TAXSETTINGS_API TurkeyAdditionalInfo();
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
    inline const Industries& GetIndustries() const{ return m_industries; }
    inline bool IndustriesHasBeenSet() const { return m_industriesHasBeenSet; }
    inline void SetIndustries(const Industries& value) { m_industriesHasBeenSet = true; m_industries = value; }
    inline void SetIndustries(Industries&& value) { m_industriesHasBeenSet = true; m_industries = std::move(value); }
    inline TurkeyAdditionalInfo& WithIndustries(const Industries& value) { SetIndustries(value); return *this;}
    inline TurkeyAdditionalInfo& WithIndustries(Industries&& value) { SetIndustries(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Registered Electronic Mail (REM) that is used to send notarized
     * communication. This parameter is optional for business-to-business (B2B) and
     * business-to-government (B2G) customers. It's not required for
     * business-to-consumer (B2C) customers.</p>
     */
    inline const Aws::String& GetKepEmailId() const{ return m_kepEmailId; }
    inline bool KepEmailIdHasBeenSet() const { return m_kepEmailIdHasBeenSet; }
    inline void SetKepEmailId(const Aws::String& value) { m_kepEmailIdHasBeenSet = true; m_kepEmailId = value; }
    inline void SetKepEmailId(Aws::String&& value) { m_kepEmailIdHasBeenSet = true; m_kepEmailId = std::move(value); }
    inline void SetKepEmailId(const char* value) { m_kepEmailIdHasBeenSet = true; m_kepEmailId.assign(value); }
    inline TurkeyAdditionalInfo& WithKepEmailId(const Aws::String& value) { SetKepEmailId(value); return *this;}
    inline TurkeyAdditionalInfo& WithKepEmailId(Aws::String&& value) { SetKepEmailId(std::move(value)); return *this;}
    inline TurkeyAdditionalInfo& WithKepEmailId(const char* value) { SetKepEmailId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Secondary tax ID (“harcama birimi VKN”si”). If one isn't provided, we will
     * use your VKN as the secondary ID. </p>
     */
    inline const Aws::String& GetSecondaryTaxId() const{ return m_secondaryTaxId; }
    inline bool SecondaryTaxIdHasBeenSet() const { return m_secondaryTaxIdHasBeenSet; }
    inline void SetSecondaryTaxId(const Aws::String& value) { m_secondaryTaxIdHasBeenSet = true; m_secondaryTaxId = value; }
    inline void SetSecondaryTaxId(Aws::String&& value) { m_secondaryTaxIdHasBeenSet = true; m_secondaryTaxId = std::move(value); }
    inline void SetSecondaryTaxId(const char* value) { m_secondaryTaxIdHasBeenSet = true; m_secondaryTaxId.assign(value); }
    inline TurkeyAdditionalInfo& WithSecondaryTaxId(const Aws::String& value) { SetSecondaryTaxId(value); return *this;}
    inline TurkeyAdditionalInfo& WithSecondaryTaxId(Aws::String&& value) { SetSecondaryTaxId(std::move(value)); return *this;}
    inline TurkeyAdditionalInfo& WithSecondaryTaxId(const char* value) { SetSecondaryTaxId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tax office where you're registered. You can enter this information as a
     * string. The Tax Settings API will add this information to your invoice. This
     * parameter is required for business-to-business (B2B) and business-to-government
     * customers. It's not required for business-to-consumer (B2C) customers.</p>
     */
    inline const Aws::String& GetTaxOffice() const{ return m_taxOffice; }
    inline bool TaxOfficeHasBeenSet() const { return m_taxOfficeHasBeenSet; }
    inline void SetTaxOffice(const Aws::String& value) { m_taxOfficeHasBeenSet = true; m_taxOffice = value; }
    inline void SetTaxOffice(Aws::String&& value) { m_taxOfficeHasBeenSet = true; m_taxOffice = std::move(value); }
    inline void SetTaxOffice(const char* value) { m_taxOfficeHasBeenSet = true; m_taxOffice.assign(value); }
    inline TurkeyAdditionalInfo& WithTaxOffice(const Aws::String& value) { SetTaxOffice(value); return *this;}
    inline TurkeyAdditionalInfo& WithTaxOffice(Aws::String&& value) { SetTaxOffice(std::move(value)); return *this;}
    inline TurkeyAdditionalInfo& WithTaxOffice(const char* value) { SetTaxOffice(value); return *this;}
    ///@}
  private:

    Industries m_industries;
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

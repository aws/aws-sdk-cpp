/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/CanadaAdditionalInfo.h>
#include <aws/taxsettings/model/EstoniaAdditionalInfo.h>
#include <aws/taxsettings/model/GeorgiaAdditionalInfo.h>
#include <aws/taxsettings/model/IsraelAdditionalInfo.h>
#include <aws/taxsettings/model/ItalyAdditionalInfo.h>
#include <aws/taxsettings/model/KenyaAdditionalInfo.h>
#include <aws/taxsettings/model/MalaysiaAdditionalInfo.h>
#include <aws/taxsettings/model/PolandAdditionalInfo.h>
#include <aws/taxsettings/model/RomaniaAdditionalInfo.h>
#include <aws/taxsettings/model/SaudiArabiaAdditionalInfo.h>
#include <aws/taxsettings/model/SouthKoreaAdditionalInfo.h>
#include <aws/taxsettings/model/SpainAdditionalInfo.h>
#include <aws/taxsettings/model/TurkeyAdditionalInfo.h>
#include <aws/taxsettings/model/UkraineAdditionalInfo.h>
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
   * <p>Additional tax information associated with your tax registration number
   * (TRN). Depending on the TRN for a specific country, you might need to specify
   * this information when you set your TRN. </p> <p>You can only specify one of the
   * following parameters and the value can't be empty. </p>  <p>The parameter
   * that you specify must match the country for the TRN, if available. For example,
   * if you set a TRN in Canada for specific provinces, you must also specify the
   * <code>canadaAdditionalInfo</code> parameter.</p> <p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/AdditionalInfoRequest">AWS
   * API Reference</a></p>
   */
  class AdditionalInfoRequest
  {
  public:
    AWS_TAXSETTINGS_API AdditionalInfoRequest();
    AWS_TAXSETTINGS_API AdditionalInfoRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API AdditionalInfoRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Additional tax information associated with your TRN in Canada.</p>
     */
    inline const CanadaAdditionalInfo& GetCanadaAdditionalInfo() const{ return m_canadaAdditionalInfo; }
    inline bool CanadaAdditionalInfoHasBeenSet() const { return m_canadaAdditionalInfoHasBeenSet; }
    inline void SetCanadaAdditionalInfo(const CanadaAdditionalInfo& value) { m_canadaAdditionalInfoHasBeenSet = true; m_canadaAdditionalInfo = value; }
    inline void SetCanadaAdditionalInfo(CanadaAdditionalInfo&& value) { m_canadaAdditionalInfoHasBeenSet = true; m_canadaAdditionalInfo = std::move(value); }
    inline AdditionalInfoRequest& WithCanadaAdditionalInfo(const CanadaAdditionalInfo& value) { SetCanadaAdditionalInfo(value); return *this;}
    inline AdditionalInfoRequest& WithCanadaAdditionalInfo(CanadaAdditionalInfo&& value) { SetCanadaAdditionalInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional tax information to specify for a TRN in Estonia.</p>
     */
    inline const EstoniaAdditionalInfo& GetEstoniaAdditionalInfo() const{ return m_estoniaAdditionalInfo; }
    inline bool EstoniaAdditionalInfoHasBeenSet() const { return m_estoniaAdditionalInfoHasBeenSet; }
    inline void SetEstoniaAdditionalInfo(const EstoniaAdditionalInfo& value) { m_estoniaAdditionalInfoHasBeenSet = true; m_estoniaAdditionalInfo = value; }
    inline void SetEstoniaAdditionalInfo(EstoniaAdditionalInfo&& value) { m_estoniaAdditionalInfoHasBeenSet = true; m_estoniaAdditionalInfo = std::move(value); }
    inline AdditionalInfoRequest& WithEstoniaAdditionalInfo(const EstoniaAdditionalInfo& value) { SetEstoniaAdditionalInfo(value); return *this;}
    inline AdditionalInfoRequest& WithEstoniaAdditionalInfo(EstoniaAdditionalInfo&& value) { SetEstoniaAdditionalInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional tax information to specify for a TRN in Georgia. </p>
     */
    inline const GeorgiaAdditionalInfo& GetGeorgiaAdditionalInfo() const{ return m_georgiaAdditionalInfo; }
    inline bool GeorgiaAdditionalInfoHasBeenSet() const { return m_georgiaAdditionalInfoHasBeenSet; }
    inline void SetGeorgiaAdditionalInfo(const GeorgiaAdditionalInfo& value) { m_georgiaAdditionalInfoHasBeenSet = true; m_georgiaAdditionalInfo = value; }
    inline void SetGeorgiaAdditionalInfo(GeorgiaAdditionalInfo&& value) { m_georgiaAdditionalInfoHasBeenSet = true; m_georgiaAdditionalInfo = std::move(value); }
    inline AdditionalInfoRequest& WithGeorgiaAdditionalInfo(const GeorgiaAdditionalInfo& value) { SetGeorgiaAdditionalInfo(value); return *this;}
    inline AdditionalInfoRequest& WithGeorgiaAdditionalInfo(GeorgiaAdditionalInfo&& value) { SetGeorgiaAdditionalInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional tax information to specify for a TRN in Israel.</p>
     */
    inline const IsraelAdditionalInfo& GetIsraelAdditionalInfo() const{ return m_israelAdditionalInfo; }
    inline bool IsraelAdditionalInfoHasBeenSet() const { return m_israelAdditionalInfoHasBeenSet; }
    inline void SetIsraelAdditionalInfo(const IsraelAdditionalInfo& value) { m_israelAdditionalInfoHasBeenSet = true; m_israelAdditionalInfo = value; }
    inline void SetIsraelAdditionalInfo(IsraelAdditionalInfo&& value) { m_israelAdditionalInfoHasBeenSet = true; m_israelAdditionalInfo = std::move(value); }
    inline AdditionalInfoRequest& WithIsraelAdditionalInfo(const IsraelAdditionalInfo& value) { SetIsraelAdditionalInfo(value); return *this;}
    inline AdditionalInfoRequest& WithIsraelAdditionalInfo(IsraelAdditionalInfo&& value) { SetIsraelAdditionalInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional tax information to specify for a TRN in Italy. </p>
     */
    inline const ItalyAdditionalInfo& GetItalyAdditionalInfo() const{ return m_italyAdditionalInfo; }
    inline bool ItalyAdditionalInfoHasBeenSet() const { return m_italyAdditionalInfoHasBeenSet; }
    inline void SetItalyAdditionalInfo(const ItalyAdditionalInfo& value) { m_italyAdditionalInfoHasBeenSet = true; m_italyAdditionalInfo = value; }
    inline void SetItalyAdditionalInfo(ItalyAdditionalInfo&& value) { m_italyAdditionalInfoHasBeenSet = true; m_italyAdditionalInfo = std::move(value); }
    inline AdditionalInfoRequest& WithItalyAdditionalInfo(const ItalyAdditionalInfo& value) { SetItalyAdditionalInfo(value); return *this;}
    inline AdditionalInfoRequest& WithItalyAdditionalInfo(ItalyAdditionalInfo&& value) { SetItalyAdditionalInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional tax information to specify for a TRN in Kenya.</p>
     */
    inline const KenyaAdditionalInfo& GetKenyaAdditionalInfo() const{ return m_kenyaAdditionalInfo; }
    inline bool KenyaAdditionalInfoHasBeenSet() const { return m_kenyaAdditionalInfoHasBeenSet; }
    inline void SetKenyaAdditionalInfo(const KenyaAdditionalInfo& value) { m_kenyaAdditionalInfoHasBeenSet = true; m_kenyaAdditionalInfo = value; }
    inline void SetKenyaAdditionalInfo(KenyaAdditionalInfo&& value) { m_kenyaAdditionalInfoHasBeenSet = true; m_kenyaAdditionalInfo = std::move(value); }
    inline AdditionalInfoRequest& WithKenyaAdditionalInfo(const KenyaAdditionalInfo& value) { SetKenyaAdditionalInfo(value); return *this;}
    inline AdditionalInfoRequest& WithKenyaAdditionalInfo(KenyaAdditionalInfo&& value) { SetKenyaAdditionalInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional tax information to specify for a TRN in Malaysia.</p>
     */
    inline const MalaysiaAdditionalInfo& GetMalaysiaAdditionalInfo() const{ return m_malaysiaAdditionalInfo; }
    inline bool MalaysiaAdditionalInfoHasBeenSet() const { return m_malaysiaAdditionalInfoHasBeenSet; }
    inline void SetMalaysiaAdditionalInfo(const MalaysiaAdditionalInfo& value) { m_malaysiaAdditionalInfoHasBeenSet = true; m_malaysiaAdditionalInfo = value; }
    inline void SetMalaysiaAdditionalInfo(MalaysiaAdditionalInfo&& value) { m_malaysiaAdditionalInfoHasBeenSet = true; m_malaysiaAdditionalInfo = std::move(value); }
    inline AdditionalInfoRequest& WithMalaysiaAdditionalInfo(const MalaysiaAdditionalInfo& value) { SetMalaysiaAdditionalInfo(value); return *this;}
    inline AdditionalInfoRequest& WithMalaysiaAdditionalInfo(MalaysiaAdditionalInfo&& value) { SetMalaysiaAdditionalInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional tax information associated with your TRN in Poland. </p>
     */
    inline const PolandAdditionalInfo& GetPolandAdditionalInfo() const{ return m_polandAdditionalInfo; }
    inline bool PolandAdditionalInfoHasBeenSet() const { return m_polandAdditionalInfoHasBeenSet; }
    inline void SetPolandAdditionalInfo(const PolandAdditionalInfo& value) { m_polandAdditionalInfoHasBeenSet = true; m_polandAdditionalInfo = value; }
    inline void SetPolandAdditionalInfo(PolandAdditionalInfo&& value) { m_polandAdditionalInfoHasBeenSet = true; m_polandAdditionalInfo = std::move(value); }
    inline AdditionalInfoRequest& WithPolandAdditionalInfo(const PolandAdditionalInfo& value) { SetPolandAdditionalInfo(value); return *this;}
    inline AdditionalInfoRequest& WithPolandAdditionalInfo(PolandAdditionalInfo&& value) { SetPolandAdditionalInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional tax information to specify for a TRN in Romania.</p>
     */
    inline const RomaniaAdditionalInfo& GetRomaniaAdditionalInfo() const{ return m_romaniaAdditionalInfo; }
    inline bool RomaniaAdditionalInfoHasBeenSet() const { return m_romaniaAdditionalInfoHasBeenSet; }
    inline void SetRomaniaAdditionalInfo(const RomaniaAdditionalInfo& value) { m_romaniaAdditionalInfoHasBeenSet = true; m_romaniaAdditionalInfo = value; }
    inline void SetRomaniaAdditionalInfo(RomaniaAdditionalInfo&& value) { m_romaniaAdditionalInfoHasBeenSet = true; m_romaniaAdditionalInfo = std::move(value); }
    inline AdditionalInfoRequest& WithRomaniaAdditionalInfo(const RomaniaAdditionalInfo& value) { SetRomaniaAdditionalInfo(value); return *this;}
    inline AdditionalInfoRequest& WithRomaniaAdditionalInfo(RomaniaAdditionalInfo&& value) { SetRomaniaAdditionalInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional tax information associated with your TRN in Saudi Arabia. </p>
     */
    inline const SaudiArabiaAdditionalInfo& GetSaudiArabiaAdditionalInfo() const{ return m_saudiArabiaAdditionalInfo; }
    inline bool SaudiArabiaAdditionalInfoHasBeenSet() const { return m_saudiArabiaAdditionalInfoHasBeenSet; }
    inline void SetSaudiArabiaAdditionalInfo(const SaudiArabiaAdditionalInfo& value) { m_saudiArabiaAdditionalInfoHasBeenSet = true; m_saudiArabiaAdditionalInfo = value; }
    inline void SetSaudiArabiaAdditionalInfo(SaudiArabiaAdditionalInfo&& value) { m_saudiArabiaAdditionalInfoHasBeenSet = true; m_saudiArabiaAdditionalInfo = std::move(value); }
    inline AdditionalInfoRequest& WithSaudiArabiaAdditionalInfo(const SaudiArabiaAdditionalInfo& value) { SetSaudiArabiaAdditionalInfo(value); return *this;}
    inline AdditionalInfoRequest& WithSaudiArabiaAdditionalInfo(SaudiArabiaAdditionalInfo&& value) { SetSaudiArabiaAdditionalInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional tax information to specify for a TRN in South Korea.</p>
     */
    inline const SouthKoreaAdditionalInfo& GetSouthKoreaAdditionalInfo() const{ return m_southKoreaAdditionalInfo; }
    inline bool SouthKoreaAdditionalInfoHasBeenSet() const { return m_southKoreaAdditionalInfoHasBeenSet; }
    inline void SetSouthKoreaAdditionalInfo(const SouthKoreaAdditionalInfo& value) { m_southKoreaAdditionalInfoHasBeenSet = true; m_southKoreaAdditionalInfo = value; }
    inline void SetSouthKoreaAdditionalInfo(SouthKoreaAdditionalInfo&& value) { m_southKoreaAdditionalInfoHasBeenSet = true; m_southKoreaAdditionalInfo = std::move(value); }
    inline AdditionalInfoRequest& WithSouthKoreaAdditionalInfo(const SouthKoreaAdditionalInfo& value) { SetSouthKoreaAdditionalInfo(value); return *this;}
    inline AdditionalInfoRequest& WithSouthKoreaAdditionalInfo(SouthKoreaAdditionalInfo&& value) { SetSouthKoreaAdditionalInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional tax information to specify for a TRN in Spain.</p>
     */
    inline const SpainAdditionalInfo& GetSpainAdditionalInfo() const{ return m_spainAdditionalInfo; }
    inline bool SpainAdditionalInfoHasBeenSet() const { return m_spainAdditionalInfoHasBeenSet; }
    inline void SetSpainAdditionalInfo(const SpainAdditionalInfo& value) { m_spainAdditionalInfoHasBeenSet = true; m_spainAdditionalInfo = value; }
    inline void SetSpainAdditionalInfo(SpainAdditionalInfo&& value) { m_spainAdditionalInfoHasBeenSet = true; m_spainAdditionalInfo = std::move(value); }
    inline AdditionalInfoRequest& WithSpainAdditionalInfo(const SpainAdditionalInfo& value) { SetSpainAdditionalInfo(value); return *this;}
    inline AdditionalInfoRequest& WithSpainAdditionalInfo(SpainAdditionalInfo&& value) { SetSpainAdditionalInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional tax information to specify for a TRN in Turkey.</p>
     */
    inline const TurkeyAdditionalInfo& GetTurkeyAdditionalInfo() const{ return m_turkeyAdditionalInfo; }
    inline bool TurkeyAdditionalInfoHasBeenSet() const { return m_turkeyAdditionalInfoHasBeenSet; }
    inline void SetTurkeyAdditionalInfo(const TurkeyAdditionalInfo& value) { m_turkeyAdditionalInfoHasBeenSet = true; m_turkeyAdditionalInfo = value; }
    inline void SetTurkeyAdditionalInfo(TurkeyAdditionalInfo&& value) { m_turkeyAdditionalInfoHasBeenSet = true; m_turkeyAdditionalInfo = std::move(value); }
    inline AdditionalInfoRequest& WithTurkeyAdditionalInfo(const TurkeyAdditionalInfo& value) { SetTurkeyAdditionalInfo(value); return *this;}
    inline AdditionalInfoRequest& WithTurkeyAdditionalInfo(TurkeyAdditionalInfo&& value) { SetTurkeyAdditionalInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional tax information associated with your TRN in Ukraine. </p>
     */
    inline const UkraineAdditionalInfo& GetUkraineAdditionalInfo() const{ return m_ukraineAdditionalInfo; }
    inline bool UkraineAdditionalInfoHasBeenSet() const { return m_ukraineAdditionalInfoHasBeenSet; }
    inline void SetUkraineAdditionalInfo(const UkraineAdditionalInfo& value) { m_ukraineAdditionalInfoHasBeenSet = true; m_ukraineAdditionalInfo = value; }
    inline void SetUkraineAdditionalInfo(UkraineAdditionalInfo&& value) { m_ukraineAdditionalInfoHasBeenSet = true; m_ukraineAdditionalInfo = std::move(value); }
    inline AdditionalInfoRequest& WithUkraineAdditionalInfo(const UkraineAdditionalInfo& value) { SetUkraineAdditionalInfo(value); return *this;}
    inline AdditionalInfoRequest& WithUkraineAdditionalInfo(UkraineAdditionalInfo&& value) { SetUkraineAdditionalInfo(std::move(value)); return *this;}
    ///@}
  private:

    CanadaAdditionalInfo m_canadaAdditionalInfo;
    bool m_canadaAdditionalInfoHasBeenSet = false;

    EstoniaAdditionalInfo m_estoniaAdditionalInfo;
    bool m_estoniaAdditionalInfoHasBeenSet = false;

    GeorgiaAdditionalInfo m_georgiaAdditionalInfo;
    bool m_georgiaAdditionalInfoHasBeenSet = false;

    IsraelAdditionalInfo m_israelAdditionalInfo;
    bool m_israelAdditionalInfoHasBeenSet = false;

    ItalyAdditionalInfo m_italyAdditionalInfo;
    bool m_italyAdditionalInfoHasBeenSet = false;

    KenyaAdditionalInfo m_kenyaAdditionalInfo;
    bool m_kenyaAdditionalInfoHasBeenSet = false;

    MalaysiaAdditionalInfo m_malaysiaAdditionalInfo;
    bool m_malaysiaAdditionalInfoHasBeenSet = false;

    PolandAdditionalInfo m_polandAdditionalInfo;
    bool m_polandAdditionalInfoHasBeenSet = false;

    RomaniaAdditionalInfo m_romaniaAdditionalInfo;
    bool m_romaniaAdditionalInfoHasBeenSet = false;

    SaudiArabiaAdditionalInfo m_saudiArabiaAdditionalInfo;
    bool m_saudiArabiaAdditionalInfoHasBeenSet = false;

    SouthKoreaAdditionalInfo m_southKoreaAdditionalInfo;
    bool m_southKoreaAdditionalInfoHasBeenSet = false;

    SpainAdditionalInfo m_spainAdditionalInfo;
    bool m_spainAdditionalInfoHasBeenSet = false;

    TurkeyAdditionalInfo m_turkeyAdditionalInfo;
    bool m_turkeyAdditionalInfoHasBeenSet = false;

    UkraineAdditionalInfo m_ukraineAdditionalInfo;
    bool m_ukraineAdditionalInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws

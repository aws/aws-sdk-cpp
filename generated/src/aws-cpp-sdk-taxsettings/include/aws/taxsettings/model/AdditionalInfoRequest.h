/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/CanadaAdditionalInfo.h>
#include <aws/taxsettings/model/EgyptAdditionalInfo.h>
#include <aws/taxsettings/model/EstoniaAdditionalInfo.h>
#include <aws/taxsettings/model/GeorgiaAdditionalInfo.h>
#include <aws/taxsettings/model/GreeceAdditionalInfo.h>
#include <aws/taxsettings/model/IndonesiaAdditionalInfo.h>
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
#include <aws/taxsettings/model/UzbekistanAdditionalInfo.h>
#include <aws/taxsettings/model/VietnamAdditionalInfo.h>
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
    AWS_TAXSETTINGS_API AdditionalInfoRequest() = default;
    AWS_TAXSETTINGS_API AdditionalInfoRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API AdditionalInfoRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Additional tax information associated with your TRN in Canada.</p>
     */
    inline const CanadaAdditionalInfo& GetCanadaAdditionalInfo() const { return m_canadaAdditionalInfo; }
    inline bool CanadaAdditionalInfoHasBeenSet() const { return m_canadaAdditionalInfoHasBeenSet; }
    template<typename CanadaAdditionalInfoT = CanadaAdditionalInfo>
    void SetCanadaAdditionalInfo(CanadaAdditionalInfoT&& value) { m_canadaAdditionalInfoHasBeenSet = true; m_canadaAdditionalInfo = std::forward<CanadaAdditionalInfoT>(value); }
    template<typename CanadaAdditionalInfoT = CanadaAdditionalInfo>
    AdditionalInfoRequest& WithCanadaAdditionalInfo(CanadaAdditionalInfoT&& value) { SetCanadaAdditionalInfo(std::forward<CanadaAdditionalInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional tax information to specify for a TRN in Egypt. </p>
     */
    inline const EgyptAdditionalInfo& GetEgyptAdditionalInfo() const { return m_egyptAdditionalInfo; }
    inline bool EgyptAdditionalInfoHasBeenSet() const { return m_egyptAdditionalInfoHasBeenSet; }
    template<typename EgyptAdditionalInfoT = EgyptAdditionalInfo>
    void SetEgyptAdditionalInfo(EgyptAdditionalInfoT&& value) { m_egyptAdditionalInfoHasBeenSet = true; m_egyptAdditionalInfo = std::forward<EgyptAdditionalInfoT>(value); }
    template<typename EgyptAdditionalInfoT = EgyptAdditionalInfo>
    AdditionalInfoRequest& WithEgyptAdditionalInfo(EgyptAdditionalInfoT&& value) { SetEgyptAdditionalInfo(std::forward<EgyptAdditionalInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional tax information to specify for a TRN in Estonia.</p>
     */
    inline const EstoniaAdditionalInfo& GetEstoniaAdditionalInfo() const { return m_estoniaAdditionalInfo; }
    inline bool EstoniaAdditionalInfoHasBeenSet() const { return m_estoniaAdditionalInfoHasBeenSet; }
    template<typename EstoniaAdditionalInfoT = EstoniaAdditionalInfo>
    void SetEstoniaAdditionalInfo(EstoniaAdditionalInfoT&& value) { m_estoniaAdditionalInfoHasBeenSet = true; m_estoniaAdditionalInfo = std::forward<EstoniaAdditionalInfoT>(value); }
    template<typename EstoniaAdditionalInfoT = EstoniaAdditionalInfo>
    AdditionalInfoRequest& WithEstoniaAdditionalInfo(EstoniaAdditionalInfoT&& value) { SetEstoniaAdditionalInfo(std::forward<EstoniaAdditionalInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional tax information to specify for a TRN in Georgia. </p>
     */
    inline const GeorgiaAdditionalInfo& GetGeorgiaAdditionalInfo() const { return m_georgiaAdditionalInfo; }
    inline bool GeorgiaAdditionalInfoHasBeenSet() const { return m_georgiaAdditionalInfoHasBeenSet; }
    template<typename GeorgiaAdditionalInfoT = GeorgiaAdditionalInfo>
    void SetGeorgiaAdditionalInfo(GeorgiaAdditionalInfoT&& value) { m_georgiaAdditionalInfoHasBeenSet = true; m_georgiaAdditionalInfo = std::forward<GeorgiaAdditionalInfoT>(value); }
    template<typename GeorgiaAdditionalInfoT = GeorgiaAdditionalInfo>
    AdditionalInfoRequest& WithGeorgiaAdditionalInfo(GeorgiaAdditionalInfoT&& value) { SetGeorgiaAdditionalInfo(std::forward<GeorgiaAdditionalInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional tax information to specify for a TRN in Greece.</p>
     */
    inline const GreeceAdditionalInfo& GetGreeceAdditionalInfo() const { return m_greeceAdditionalInfo; }
    inline bool GreeceAdditionalInfoHasBeenSet() const { return m_greeceAdditionalInfoHasBeenSet; }
    template<typename GreeceAdditionalInfoT = GreeceAdditionalInfo>
    void SetGreeceAdditionalInfo(GreeceAdditionalInfoT&& value) { m_greeceAdditionalInfoHasBeenSet = true; m_greeceAdditionalInfo = std::forward<GreeceAdditionalInfoT>(value); }
    template<typename GreeceAdditionalInfoT = GreeceAdditionalInfo>
    AdditionalInfoRequest& WithGreeceAdditionalInfo(GreeceAdditionalInfoT&& value) { SetGreeceAdditionalInfo(std::forward<GreeceAdditionalInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> </p>
     */
    inline const IndonesiaAdditionalInfo& GetIndonesiaAdditionalInfo() const { return m_indonesiaAdditionalInfo; }
    inline bool IndonesiaAdditionalInfoHasBeenSet() const { return m_indonesiaAdditionalInfoHasBeenSet; }
    template<typename IndonesiaAdditionalInfoT = IndonesiaAdditionalInfo>
    void SetIndonesiaAdditionalInfo(IndonesiaAdditionalInfoT&& value) { m_indonesiaAdditionalInfoHasBeenSet = true; m_indonesiaAdditionalInfo = std::forward<IndonesiaAdditionalInfoT>(value); }
    template<typename IndonesiaAdditionalInfoT = IndonesiaAdditionalInfo>
    AdditionalInfoRequest& WithIndonesiaAdditionalInfo(IndonesiaAdditionalInfoT&& value) { SetIndonesiaAdditionalInfo(std::forward<IndonesiaAdditionalInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional tax information to specify for a TRN in Israel.</p>
     */
    inline const IsraelAdditionalInfo& GetIsraelAdditionalInfo() const { return m_israelAdditionalInfo; }
    inline bool IsraelAdditionalInfoHasBeenSet() const { return m_israelAdditionalInfoHasBeenSet; }
    template<typename IsraelAdditionalInfoT = IsraelAdditionalInfo>
    void SetIsraelAdditionalInfo(IsraelAdditionalInfoT&& value) { m_israelAdditionalInfoHasBeenSet = true; m_israelAdditionalInfo = std::forward<IsraelAdditionalInfoT>(value); }
    template<typename IsraelAdditionalInfoT = IsraelAdditionalInfo>
    AdditionalInfoRequest& WithIsraelAdditionalInfo(IsraelAdditionalInfoT&& value) { SetIsraelAdditionalInfo(std::forward<IsraelAdditionalInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional tax information to specify for a TRN in Italy. </p>
     */
    inline const ItalyAdditionalInfo& GetItalyAdditionalInfo() const { return m_italyAdditionalInfo; }
    inline bool ItalyAdditionalInfoHasBeenSet() const { return m_italyAdditionalInfoHasBeenSet; }
    template<typename ItalyAdditionalInfoT = ItalyAdditionalInfo>
    void SetItalyAdditionalInfo(ItalyAdditionalInfoT&& value) { m_italyAdditionalInfoHasBeenSet = true; m_italyAdditionalInfo = std::forward<ItalyAdditionalInfoT>(value); }
    template<typename ItalyAdditionalInfoT = ItalyAdditionalInfo>
    AdditionalInfoRequest& WithItalyAdditionalInfo(ItalyAdditionalInfoT&& value) { SetItalyAdditionalInfo(std::forward<ItalyAdditionalInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional tax information to specify for a TRN in Kenya.</p>
     */
    inline const KenyaAdditionalInfo& GetKenyaAdditionalInfo() const { return m_kenyaAdditionalInfo; }
    inline bool KenyaAdditionalInfoHasBeenSet() const { return m_kenyaAdditionalInfoHasBeenSet; }
    template<typename KenyaAdditionalInfoT = KenyaAdditionalInfo>
    void SetKenyaAdditionalInfo(KenyaAdditionalInfoT&& value) { m_kenyaAdditionalInfoHasBeenSet = true; m_kenyaAdditionalInfo = std::forward<KenyaAdditionalInfoT>(value); }
    template<typename KenyaAdditionalInfoT = KenyaAdditionalInfo>
    AdditionalInfoRequest& WithKenyaAdditionalInfo(KenyaAdditionalInfoT&& value) { SetKenyaAdditionalInfo(std::forward<KenyaAdditionalInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional tax information to specify for a TRN in Malaysia.</p>
     */
    inline const MalaysiaAdditionalInfo& GetMalaysiaAdditionalInfo() const { return m_malaysiaAdditionalInfo; }
    inline bool MalaysiaAdditionalInfoHasBeenSet() const { return m_malaysiaAdditionalInfoHasBeenSet; }
    template<typename MalaysiaAdditionalInfoT = MalaysiaAdditionalInfo>
    void SetMalaysiaAdditionalInfo(MalaysiaAdditionalInfoT&& value) { m_malaysiaAdditionalInfoHasBeenSet = true; m_malaysiaAdditionalInfo = std::forward<MalaysiaAdditionalInfoT>(value); }
    template<typename MalaysiaAdditionalInfoT = MalaysiaAdditionalInfo>
    AdditionalInfoRequest& WithMalaysiaAdditionalInfo(MalaysiaAdditionalInfoT&& value) { SetMalaysiaAdditionalInfo(std::forward<MalaysiaAdditionalInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional tax information associated with your TRN in Poland. </p>
     */
    inline const PolandAdditionalInfo& GetPolandAdditionalInfo() const { return m_polandAdditionalInfo; }
    inline bool PolandAdditionalInfoHasBeenSet() const { return m_polandAdditionalInfoHasBeenSet; }
    template<typename PolandAdditionalInfoT = PolandAdditionalInfo>
    void SetPolandAdditionalInfo(PolandAdditionalInfoT&& value) { m_polandAdditionalInfoHasBeenSet = true; m_polandAdditionalInfo = std::forward<PolandAdditionalInfoT>(value); }
    template<typename PolandAdditionalInfoT = PolandAdditionalInfo>
    AdditionalInfoRequest& WithPolandAdditionalInfo(PolandAdditionalInfoT&& value) { SetPolandAdditionalInfo(std::forward<PolandAdditionalInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional tax information to specify for a TRN in Romania.</p>
     */
    inline const RomaniaAdditionalInfo& GetRomaniaAdditionalInfo() const { return m_romaniaAdditionalInfo; }
    inline bool RomaniaAdditionalInfoHasBeenSet() const { return m_romaniaAdditionalInfoHasBeenSet; }
    template<typename RomaniaAdditionalInfoT = RomaniaAdditionalInfo>
    void SetRomaniaAdditionalInfo(RomaniaAdditionalInfoT&& value) { m_romaniaAdditionalInfoHasBeenSet = true; m_romaniaAdditionalInfo = std::forward<RomaniaAdditionalInfoT>(value); }
    template<typename RomaniaAdditionalInfoT = RomaniaAdditionalInfo>
    AdditionalInfoRequest& WithRomaniaAdditionalInfo(RomaniaAdditionalInfoT&& value) { SetRomaniaAdditionalInfo(std::forward<RomaniaAdditionalInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional tax information associated with your TRN in Saudi Arabia. </p>
     */
    inline const SaudiArabiaAdditionalInfo& GetSaudiArabiaAdditionalInfo() const { return m_saudiArabiaAdditionalInfo; }
    inline bool SaudiArabiaAdditionalInfoHasBeenSet() const { return m_saudiArabiaAdditionalInfoHasBeenSet; }
    template<typename SaudiArabiaAdditionalInfoT = SaudiArabiaAdditionalInfo>
    void SetSaudiArabiaAdditionalInfo(SaudiArabiaAdditionalInfoT&& value) { m_saudiArabiaAdditionalInfoHasBeenSet = true; m_saudiArabiaAdditionalInfo = std::forward<SaudiArabiaAdditionalInfoT>(value); }
    template<typename SaudiArabiaAdditionalInfoT = SaudiArabiaAdditionalInfo>
    AdditionalInfoRequest& WithSaudiArabiaAdditionalInfo(SaudiArabiaAdditionalInfoT&& value) { SetSaudiArabiaAdditionalInfo(std::forward<SaudiArabiaAdditionalInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional tax information to specify for a TRN in South Korea.</p>
     */
    inline const SouthKoreaAdditionalInfo& GetSouthKoreaAdditionalInfo() const { return m_southKoreaAdditionalInfo; }
    inline bool SouthKoreaAdditionalInfoHasBeenSet() const { return m_southKoreaAdditionalInfoHasBeenSet; }
    template<typename SouthKoreaAdditionalInfoT = SouthKoreaAdditionalInfo>
    void SetSouthKoreaAdditionalInfo(SouthKoreaAdditionalInfoT&& value) { m_southKoreaAdditionalInfoHasBeenSet = true; m_southKoreaAdditionalInfo = std::forward<SouthKoreaAdditionalInfoT>(value); }
    template<typename SouthKoreaAdditionalInfoT = SouthKoreaAdditionalInfo>
    AdditionalInfoRequest& WithSouthKoreaAdditionalInfo(SouthKoreaAdditionalInfoT&& value) { SetSouthKoreaAdditionalInfo(std::forward<SouthKoreaAdditionalInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional tax information to specify for a TRN in Spain.</p>
     */
    inline const SpainAdditionalInfo& GetSpainAdditionalInfo() const { return m_spainAdditionalInfo; }
    inline bool SpainAdditionalInfoHasBeenSet() const { return m_spainAdditionalInfoHasBeenSet; }
    template<typename SpainAdditionalInfoT = SpainAdditionalInfo>
    void SetSpainAdditionalInfo(SpainAdditionalInfoT&& value) { m_spainAdditionalInfoHasBeenSet = true; m_spainAdditionalInfo = std::forward<SpainAdditionalInfoT>(value); }
    template<typename SpainAdditionalInfoT = SpainAdditionalInfo>
    AdditionalInfoRequest& WithSpainAdditionalInfo(SpainAdditionalInfoT&& value) { SetSpainAdditionalInfo(std::forward<SpainAdditionalInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional tax information to specify for a TRN in Turkey.</p>
     */
    inline const TurkeyAdditionalInfo& GetTurkeyAdditionalInfo() const { return m_turkeyAdditionalInfo; }
    inline bool TurkeyAdditionalInfoHasBeenSet() const { return m_turkeyAdditionalInfoHasBeenSet; }
    template<typename TurkeyAdditionalInfoT = TurkeyAdditionalInfo>
    void SetTurkeyAdditionalInfo(TurkeyAdditionalInfoT&& value) { m_turkeyAdditionalInfoHasBeenSet = true; m_turkeyAdditionalInfo = std::forward<TurkeyAdditionalInfoT>(value); }
    template<typename TurkeyAdditionalInfoT = TurkeyAdditionalInfo>
    AdditionalInfoRequest& WithTurkeyAdditionalInfo(TurkeyAdditionalInfoT&& value) { SetTurkeyAdditionalInfo(std::forward<TurkeyAdditionalInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional tax information associated with your TRN in Ukraine. </p>
     */
    inline const UkraineAdditionalInfo& GetUkraineAdditionalInfo() const { return m_ukraineAdditionalInfo; }
    inline bool UkraineAdditionalInfoHasBeenSet() const { return m_ukraineAdditionalInfoHasBeenSet; }
    template<typename UkraineAdditionalInfoT = UkraineAdditionalInfo>
    void SetUkraineAdditionalInfo(UkraineAdditionalInfoT&& value) { m_ukraineAdditionalInfoHasBeenSet = true; m_ukraineAdditionalInfo = std::forward<UkraineAdditionalInfoT>(value); }
    template<typename UkraineAdditionalInfoT = UkraineAdditionalInfo>
    AdditionalInfoRequest& WithUkraineAdditionalInfo(UkraineAdditionalInfoT&& value) { SetUkraineAdditionalInfo(std::forward<UkraineAdditionalInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Additional tax information to specify for a TRN in Uzbekistan. </p>
     */
    inline const UzbekistanAdditionalInfo& GetUzbekistanAdditionalInfo() const { return m_uzbekistanAdditionalInfo; }
    inline bool UzbekistanAdditionalInfoHasBeenSet() const { return m_uzbekistanAdditionalInfoHasBeenSet; }
    template<typename UzbekistanAdditionalInfoT = UzbekistanAdditionalInfo>
    void SetUzbekistanAdditionalInfo(UzbekistanAdditionalInfoT&& value) { m_uzbekistanAdditionalInfoHasBeenSet = true; m_uzbekistanAdditionalInfo = std::forward<UzbekistanAdditionalInfoT>(value); }
    template<typename UzbekistanAdditionalInfoT = UzbekistanAdditionalInfo>
    AdditionalInfoRequest& WithUzbekistanAdditionalInfo(UzbekistanAdditionalInfoT&& value) { SetUzbekistanAdditionalInfo(std::forward<UzbekistanAdditionalInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional tax information to specify for a TRN in Vietnam. </p>
     */
    inline const VietnamAdditionalInfo& GetVietnamAdditionalInfo() const { return m_vietnamAdditionalInfo; }
    inline bool VietnamAdditionalInfoHasBeenSet() const { return m_vietnamAdditionalInfoHasBeenSet; }
    template<typename VietnamAdditionalInfoT = VietnamAdditionalInfo>
    void SetVietnamAdditionalInfo(VietnamAdditionalInfoT&& value) { m_vietnamAdditionalInfoHasBeenSet = true; m_vietnamAdditionalInfo = std::forward<VietnamAdditionalInfoT>(value); }
    template<typename VietnamAdditionalInfoT = VietnamAdditionalInfo>
    AdditionalInfoRequest& WithVietnamAdditionalInfo(VietnamAdditionalInfoT&& value) { SetVietnamAdditionalInfo(std::forward<VietnamAdditionalInfoT>(value)); return *this;}
    ///@}
  private:

    CanadaAdditionalInfo m_canadaAdditionalInfo;
    bool m_canadaAdditionalInfoHasBeenSet = false;

    EgyptAdditionalInfo m_egyptAdditionalInfo;
    bool m_egyptAdditionalInfoHasBeenSet = false;

    EstoniaAdditionalInfo m_estoniaAdditionalInfo;
    bool m_estoniaAdditionalInfoHasBeenSet = false;

    GeorgiaAdditionalInfo m_georgiaAdditionalInfo;
    bool m_georgiaAdditionalInfoHasBeenSet = false;

    GreeceAdditionalInfo m_greeceAdditionalInfo;
    bool m_greeceAdditionalInfoHasBeenSet = false;

    IndonesiaAdditionalInfo m_indonesiaAdditionalInfo;
    bool m_indonesiaAdditionalInfoHasBeenSet = false;

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

    UzbekistanAdditionalInfo m_uzbekistanAdditionalInfo;
    bool m_uzbekistanAdditionalInfoHasBeenSet = false;

    VietnamAdditionalInfo m_vietnamAdditionalInfo;
    bool m_vietnamAdditionalInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/DurationUnits.h>
#include <aws/mediaconnect/model/PriceUnits.h>
#include <aws/mediaconnect/model/ResourceSpecification.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * <p> A savings plan that reserves a certain amount of outbound bandwidth usage at
   * a discounted rate each month over a period of time. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Offering">AWS
   * API Reference</a></p>
   */
  class Offering
  {
  public:
    AWS_MEDIACONNECT_API Offering() = default;
    AWS_MEDIACONNECT_API Offering(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Offering& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of currency that is used for billing. The currencyCode used for all
     * reservations is US dollars.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    Offering& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The length of time that your reservation would be active.</p>
     */
    inline int GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline Offering& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unit of measurement for the duration of the offering.</p>
     */
    inline DurationUnits GetDurationUnits() const { return m_durationUnits; }
    inline bool DurationUnitsHasBeenSet() const { return m_durationUnitsHasBeenSet; }
    inline void SetDurationUnits(DurationUnits value) { m_durationUnitsHasBeenSet = true; m_durationUnits = value; }
    inline Offering& WithDurationUnits(DurationUnits value) { SetDurationUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) that MediaConnect assigns to the
     * offering.</p>
     */
    inline const Aws::String& GetOfferingArn() const { return m_offeringArn; }
    inline bool OfferingArnHasBeenSet() const { return m_offeringArnHasBeenSet; }
    template<typename OfferingArnT = Aws::String>
    void SetOfferingArn(OfferingArnT&& value) { m_offeringArnHasBeenSet = true; m_offeringArn = std::forward<OfferingArnT>(value); }
    template<typename OfferingArnT = Aws::String>
    Offering& WithOfferingArn(OfferingArnT&& value) { SetOfferingArn(std::forward<OfferingArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the offering.</p>
     */
    inline const Aws::String& GetOfferingDescription() const { return m_offeringDescription; }
    inline bool OfferingDescriptionHasBeenSet() const { return m_offeringDescriptionHasBeenSet; }
    template<typename OfferingDescriptionT = Aws::String>
    void SetOfferingDescription(OfferingDescriptionT&& value) { m_offeringDescriptionHasBeenSet = true; m_offeringDescription = std::forward<OfferingDescriptionT>(value); }
    template<typename OfferingDescriptionT = Aws::String>
    Offering& WithOfferingDescription(OfferingDescriptionT&& value) { SetOfferingDescription(std::forward<OfferingDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The cost of a single unit. This value, in combination with priceUnits, makes
     * up the rate.</p>
     */
    inline const Aws::String& GetPricePerUnit() const { return m_pricePerUnit; }
    inline bool PricePerUnitHasBeenSet() const { return m_pricePerUnitHasBeenSet; }
    template<typename PricePerUnitT = Aws::String>
    void SetPricePerUnit(PricePerUnitT&& value) { m_pricePerUnitHasBeenSet = true; m_pricePerUnit = std::forward<PricePerUnitT>(value); }
    template<typename PricePerUnitT = Aws::String>
    Offering& WithPricePerUnit(PricePerUnitT&& value) { SetPricePerUnit(std::forward<PricePerUnitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unit of measurement that is used for billing. This value, in combination
     * with pricePerUnit, makes up the rate.</p>
     */
    inline PriceUnits GetPriceUnits() const { return m_priceUnits; }
    inline bool PriceUnitsHasBeenSet() const { return m_priceUnitsHasBeenSet; }
    inline void SetPriceUnits(PriceUnits value) { m_priceUnitsHasBeenSet = true; m_priceUnits = value; }
    inline Offering& WithPriceUnits(PriceUnits value) { SetPriceUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A definition of the amount of outbound bandwidth that you would be reserving
     * if you purchase the offering.</p>
     */
    inline const ResourceSpecification& GetResourceSpecification() const { return m_resourceSpecification; }
    inline bool ResourceSpecificationHasBeenSet() const { return m_resourceSpecificationHasBeenSet; }
    template<typename ResourceSpecificationT = ResourceSpecification>
    void SetResourceSpecification(ResourceSpecificationT&& value) { m_resourceSpecificationHasBeenSet = true; m_resourceSpecification = std::forward<ResourceSpecificationT>(value); }
    template<typename ResourceSpecificationT = ResourceSpecification>
    Offering& WithResourceSpecification(ResourceSpecificationT&& value) { SetResourceSpecification(std::forward<ResourceSpecificationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    int m_duration{0};
    bool m_durationHasBeenSet = false;

    DurationUnits m_durationUnits{DurationUnits::NOT_SET};
    bool m_durationUnitsHasBeenSet = false;

    Aws::String m_offeringArn;
    bool m_offeringArnHasBeenSet = false;

    Aws::String m_offeringDescription;
    bool m_offeringDescriptionHasBeenSet = false;

    Aws::String m_pricePerUnit;
    bool m_pricePerUnitHasBeenSet = false;

    PriceUnits m_priceUnits{PriceUnits::NOT_SET};
    bool m_priceUnitsHasBeenSet = false;

    ResourceSpecification m_resourceSpecification;
    bool m_resourceSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws

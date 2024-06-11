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
   * A savings plan that reserves a certain amount of outbound bandwidth usage at a
   * discounted rate each month over a period of time.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Offering">AWS
   * API Reference</a></p>
   */
  class Offering
  {
  public:
    AWS_MEDIACONNECT_API Offering();
    AWS_MEDIACONNECT_API Offering(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Offering& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The type of currency that is used for billing. The currencyCode used for all
     * reservations is US dollars.
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }
    inline Offering& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}
    inline Offering& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}
    inline Offering& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * The length of time that your reservation would be active.
     */
    inline int GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline Offering& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * The unit of measurement for the duration of the offering.
     */
    inline const DurationUnits& GetDurationUnits() const{ return m_durationUnits; }
    inline bool DurationUnitsHasBeenSet() const { return m_durationUnitsHasBeenSet; }
    inline void SetDurationUnits(const DurationUnits& value) { m_durationUnitsHasBeenSet = true; m_durationUnits = value; }
    inline void SetDurationUnits(DurationUnits&& value) { m_durationUnitsHasBeenSet = true; m_durationUnits = std::move(value); }
    inline Offering& WithDurationUnits(const DurationUnits& value) { SetDurationUnits(value); return *this;}
    inline Offering& WithDurationUnits(DurationUnits&& value) { SetDurationUnits(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The Amazon Resource Name (ARN) that MediaConnect assigns to the offering.
     */
    inline const Aws::String& GetOfferingArn() const{ return m_offeringArn; }
    inline bool OfferingArnHasBeenSet() const { return m_offeringArnHasBeenSet; }
    inline void SetOfferingArn(const Aws::String& value) { m_offeringArnHasBeenSet = true; m_offeringArn = value; }
    inline void SetOfferingArn(Aws::String&& value) { m_offeringArnHasBeenSet = true; m_offeringArn = std::move(value); }
    inline void SetOfferingArn(const char* value) { m_offeringArnHasBeenSet = true; m_offeringArn.assign(value); }
    inline Offering& WithOfferingArn(const Aws::String& value) { SetOfferingArn(value); return *this;}
    inline Offering& WithOfferingArn(Aws::String&& value) { SetOfferingArn(std::move(value)); return *this;}
    inline Offering& WithOfferingArn(const char* value) { SetOfferingArn(value); return *this;}
    ///@}

    ///@{
    /**
     * A description of the offering.
     */
    inline const Aws::String& GetOfferingDescription() const{ return m_offeringDescription; }
    inline bool OfferingDescriptionHasBeenSet() const { return m_offeringDescriptionHasBeenSet; }
    inline void SetOfferingDescription(const Aws::String& value) { m_offeringDescriptionHasBeenSet = true; m_offeringDescription = value; }
    inline void SetOfferingDescription(Aws::String&& value) { m_offeringDescriptionHasBeenSet = true; m_offeringDescription = std::move(value); }
    inline void SetOfferingDescription(const char* value) { m_offeringDescriptionHasBeenSet = true; m_offeringDescription.assign(value); }
    inline Offering& WithOfferingDescription(const Aws::String& value) { SetOfferingDescription(value); return *this;}
    inline Offering& WithOfferingDescription(Aws::String&& value) { SetOfferingDescription(std::move(value)); return *this;}
    inline Offering& WithOfferingDescription(const char* value) { SetOfferingDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * The cost of a single unit. This value, in combination with priceUnits, makes up
     * the rate.
     */
    inline const Aws::String& GetPricePerUnit() const{ return m_pricePerUnit; }
    inline bool PricePerUnitHasBeenSet() const { return m_pricePerUnitHasBeenSet; }
    inline void SetPricePerUnit(const Aws::String& value) { m_pricePerUnitHasBeenSet = true; m_pricePerUnit = value; }
    inline void SetPricePerUnit(Aws::String&& value) { m_pricePerUnitHasBeenSet = true; m_pricePerUnit = std::move(value); }
    inline void SetPricePerUnit(const char* value) { m_pricePerUnitHasBeenSet = true; m_pricePerUnit.assign(value); }
    inline Offering& WithPricePerUnit(const Aws::String& value) { SetPricePerUnit(value); return *this;}
    inline Offering& WithPricePerUnit(Aws::String&& value) { SetPricePerUnit(std::move(value)); return *this;}
    inline Offering& WithPricePerUnit(const char* value) { SetPricePerUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * The unit of measurement that is used for billing. This value, in combination
     * with pricePerUnit, makes up the rate.
     */
    inline const PriceUnits& GetPriceUnits() const{ return m_priceUnits; }
    inline bool PriceUnitsHasBeenSet() const { return m_priceUnitsHasBeenSet; }
    inline void SetPriceUnits(const PriceUnits& value) { m_priceUnitsHasBeenSet = true; m_priceUnits = value; }
    inline void SetPriceUnits(PriceUnits&& value) { m_priceUnitsHasBeenSet = true; m_priceUnits = std::move(value); }
    inline Offering& WithPriceUnits(const PriceUnits& value) { SetPriceUnits(value); return *this;}
    inline Offering& WithPriceUnits(PriceUnits&& value) { SetPriceUnits(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A definition of the amount of outbound bandwidth that you would be reserving if
     * you purchase the offering.
     */
    inline const ResourceSpecification& GetResourceSpecification() const{ return m_resourceSpecification; }
    inline bool ResourceSpecificationHasBeenSet() const { return m_resourceSpecificationHasBeenSet; }
    inline void SetResourceSpecification(const ResourceSpecification& value) { m_resourceSpecificationHasBeenSet = true; m_resourceSpecification = value; }
    inline void SetResourceSpecification(ResourceSpecification&& value) { m_resourceSpecificationHasBeenSet = true; m_resourceSpecification = std::move(value); }
    inline Offering& WithResourceSpecification(const ResourceSpecification& value) { SetResourceSpecification(value); return *this;}
    inline Offering& WithResourceSpecification(ResourceSpecification&& value) { SetResourceSpecification(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;

    DurationUnits m_durationUnits;
    bool m_durationUnitsHasBeenSet = false;

    Aws::String m_offeringArn;
    bool m_offeringArnHasBeenSet = false;

    Aws::String m_offeringDescription;
    bool m_offeringDescriptionHasBeenSet = false;

    Aws::String m_pricePerUnit;
    bool m_pricePerUnitHasBeenSet = false;

    PriceUnits m_priceUnits;
    bool m_priceUnitsHasBeenSet = false;

    ResourceSpecification m_resourceSpecification;
    bool m_resourceSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws

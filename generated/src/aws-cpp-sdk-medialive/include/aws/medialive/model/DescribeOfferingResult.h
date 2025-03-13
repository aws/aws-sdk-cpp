/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/OfferingDurationUnits.h>
#include <aws/medialive/model/OfferingType.h>
#include <aws/medialive/model/ReservationResourceSpecification.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for DescribeOfferingResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeOfferingResponse">AWS
   * API Reference</a></p>
   */
  class DescribeOfferingResult
  {
  public:
    AWS_MEDIALIVE_API DescribeOfferingResult() = default;
    AWS_MEDIALIVE_API DescribeOfferingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API DescribeOfferingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * Unique offering ARN, e.g.
     * 'arn:aws:medialive:us-west-2:123456789012:offering:87654321'
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeOfferingResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Currency code for usagePrice and fixedPrice in ISO-4217 format, e.g. 'USD'
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    DescribeOfferingResult& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Lease duration, e.g. '12'
     */
    inline int GetDuration() const { return m_duration; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline DescribeOfferingResult& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * Units for duration, e.g. 'MONTHS'
     */
    inline OfferingDurationUnits GetDurationUnits() const { return m_durationUnits; }
    inline void SetDurationUnits(OfferingDurationUnits value) { m_durationUnitsHasBeenSet = true; m_durationUnits = value; }
    inline DescribeOfferingResult& WithDurationUnits(OfferingDurationUnits value) { SetDurationUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * One-time charge for each reserved resource, e.g. '0.0' for a NO_UPFRONT offering
     */
    inline double GetFixedPrice() const { return m_fixedPrice; }
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }
    inline DescribeOfferingResult& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * Offering description, e.g. 'HD AVC output at 10-20 Mbps, 30 fps, and standard VQ
     * in US West (Oregon)'
     */
    inline const Aws::String& GetOfferingDescription() const { return m_offeringDescription; }
    template<typename OfferingDescriptionT = Aws::String>
    void SetOfferingDescription(OfferingDescriptionT&& value) { m_offeringDescriptionHasBeenSet = true; m_offeringDescription = std::forward<OfferingDescriptionT>(value); }
    template<typename OfferingDescriptionT = Aws::String>
    DescribeOfferingResult& WithOfferingDescription(OfferingDescriptionT&& value) { SetOfferingDescription(std::forward<OfferingDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline const Aws::String& GetOfferingId() const { return m_offeringId; }
    template<typename OfferingIdT = Aws::String>
    void SetOfferingId(OfferingIdT&& value) { m_offeringIdHasBeenSet = true; m_offeringId = std::forward<OfferingIdT>(value); }
    template<typename OfferingIdT = Aws::String>
    DescribeOfferingResult& WithOfferingId(OfferingIdT&& value) { SetOfferingId(std::forward<OfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Offering type, e.g. 'NO_UPFRONT'
     */
    inline OfferingType GetOfferingType() const { return m_offeringType; }
    inline void SetOfferingType(OfferingType value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }
    inline DescribeOfferingResult& WithOfferingType(OfferingType value) { SetOfferingType(value); return *this;}
    ///@}

    ///@{
    /**
     * AWS region, e.g. 'us-west-2'
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    DescribeOfferingResult& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Resource configuration details
     */
    inline const ReservationResourceSpecification& GetResourceSpecification() const { return m_resourceSpecification; }
    template<typename ResourceSpecificationT = ReservationResourceSpecification>
    void SetResourceSpecification(ResourceSpecificationT&& value) { m_resourceSpecificationHasBeenSet = true; m_resourceSpecification = std::forward<ResourceSpecificationT>(value); }
    template<typename ResourceSpecificationT = ReservationResourceSpecification>
    DescribeOfferingResult& WithResourceSpecification(ResourceSpecificationT&& value) { SetResourceSpecification(std::forward<ResourceSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Recurring usage charge for each reserved resource, e.g. '157.0'
     */
    inline double GetUsagePrice() const { return m_usagePrice; }
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }
    inline DescribeOfferingResult& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeOfferingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    int m_duration{0};
    bool m_durationHasBeenSet = false;

    OfferingDurationUnits m_durationUnits{OfferingDurationUnits::NOT_SET};
    bool m_durationUnitsHasBeenSet = false;

    double m_fixedPrice{0.0};
    bool m_fixedPriceHasBeenSet = false;

    Aws::String m_offeringDescription;
    bool m_offeringDescriptionHasBeenSet = false;

    Aws::String m_offeringId;
    bool m_offeringIdHasBeenSet = false;

    OfferingType m_offeringType{OfferingType::NOT_SET};
    bool m_offeringTypeHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    ReservationResourceSpecification m_resourceSpecification;
    bool m_resourceSpecificationHasBeenSet = false;

    double m_usagePrice{0.0};
    bool m_usagePriceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

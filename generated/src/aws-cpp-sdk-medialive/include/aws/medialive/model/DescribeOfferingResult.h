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
    AWS_MEDIALIVE_API DescribeOfferingResult();
    AWS_MEDIALIVE_API DescribeOfferingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API DescribeOfferingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * Unique offering ARN, e.g.
     * 'arn:aws:medialive:us-west-2:123456789012:offering:87654321'
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline DescribeOfferingResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribeOfferingResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribeOfferingResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * Currency code for usagePrice and fixedPrice in ISO-4217 format, e.g. 'USD'
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCode = value; }
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCode = std::move(value); }
    inline void SetCurrencyCode(const char* value) { m_currencyCode.assign(value); }
    inline DescribeOfferingResult& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}
    inline DescribeOfferingResult& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}
    inline DescribeOfferingResult& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * Lease duration, e.g. '12'
     */
    inline int GetDuration() const{ return m_duration; }
    inline void SetDuration(int value) { m_duration = value; }
    inline DescribeOfferingResult& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * Units for duration, e.g. 'MONTHS'
     */
    inline const OfferingDurationUnits& GetDurationUnits() const{ return m_durationUnits; }
    inline void SetDurationUnits(const OfferingDurationUnits& value) { m_durationUnits = value; }
    inline void SetDurationUnits(OfferingDurationUnits&& value) { m_durationUnits = std::move(value); }
    inline DescribeOfferingResult& WithDurationUnits(const OfferingDurationUnits& value) { SetDurationUnits(value); return *this;}
    inline DescribeOfferingResult& WithDurationUnits(OfferingDurationUnits&& value) { SetDurationUnits(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * One-time charge for each reserved resource, e.g. '0.0' for a NO_UPFRONT offering
     */
    inline double GetFixedPrice() const{ return m_fixedPrice; }
    inline void SetFixedPrice(double value) { m_fixedPrice = value; }
    inline DescribeOfferingResult& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * Offering description, e.g. 'HD AVC output at 10-20 Mbps, 30 fps, and standard VQ
     * in US West (Oregon)'
     */
    inline const Aws::String& GetOfferingDescription() const{ return m_offeringDescription; }
    inline void SetOfferingDescription(const Aws::String& value) { m_offeringDescription = value; }
    inline void SetOfferingDescription(Aws::String&& value) { m_offeringDescription = std::move(value); }
    inline void SetOfferingDescription(const char* value) { m_offeringDescription.assign(value); }
    inline DescribeOfferingResult& WithOfferingDescription(const Aws::String& value) { SetOfferingDescription(value); return *this;}
    inline DescribeOfferingResult& WithOfferingDescription(Aws::String&& value) { SetOfferingDescription(std::move(value)); return *this;}
    inline DescribeOfferingResult& WithOfferingDescription(const char* value) { SetOfferingDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * Unique offering ID, e.g. '87654321'
     */
    inline const Aws::String& GetOfferingId() const{ return m_offeringId; }
    inline void SetOfferingId(const Aws::String& value) { m_offeringId = value; }
    inline void SetOfferingId(Aws::String&& value) { m_offeringId = std::move(value); }
    inline void SetOfferingId(const char* value) { m_offeringId.assign(value); }
    inline DescribeOfferingResult& WithOfferingId(const Aws::String& value) { SetOfferingId(value); return *this;}
    inline DescribeOfferingResult& WithOfferingId(Aws::String&& value) { SetOfferingId(std::move(value)); return *this;}
    inline DescribeOfferingResult& WithOfferingId(const char* value) { SetOfferingId(value); return *this;}
    ///@}

    ///@{
    /**
     * Offering type, e.g. 'NO_UPFRONT'
     */
    inline const OfferingType& GetOfferingType() const{ return m_offeringType; }
    inline void SetOfferingType(const OfferingType& value) { m_offeringType = value; }
    inline void SetOfferingType(OfferingType&& value) { m_offeringType = std::move(value); }
    inline DescribeOfferingResult& WithOfferingType(const OfferingType& value) { SetOfferingType(value); return *this;}
    inline DescribeOfferingResult& WithOfferingType(OfferingType&& value) { SetOfferingType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * AWS region, e.g. 'us-west-2'
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline void SetRegion(const Aws::String& value) { m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_region.assign(value); }
    inline DescribeOfferingResult& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline DescribeOfferingResult& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline DescribeOfferingResult& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * Resource configuration details
     */
    inline const ReservationResourceSpecification& GetResourceSpecification() const{ return m_resourceSpecification; }
    inline void SetResourceSpecification(const ReservationResourceSpecification& value) { m_resourceSpecification = value; }
    inline void SetResourceSpecification(ReservationResourceSpecification&& value) { m_resourceSpecification = std::move(value); }
    inline DescribeOfferingResult& WithResourceSpecification(const ReservationResourceSpecification& value) { SetResourceSpecification(value); return *this;}
    inline DescribeOfferingResult& WithResourceSpecification(ReservationResourceSpecification&& value) { SetResourceSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Recurring usage charge for each reserved resource, e.g. '157.0'
     */
    inline double GetUsagePrice() const{ return m_usagePrice; }
    inline void SetUsagePrice(double value) { m_usagePrice = value; }
    inline DescribeOfferingResult& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeOfferingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeOfferingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeOfferingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_currencyCode;

    int m_duration;

    OfferingDurationUnits m_durationUnits;

    double m_fixedPrice;

    Aws::String m_offeringDescription;

    Aws::String m_offeringId;

    OfferingType m_offeringType;

    Aws::String m_region;

    ReservationResourceSpecification m_resourceSpecification;

    double m_usagePrice;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

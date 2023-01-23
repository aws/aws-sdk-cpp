/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/model/OverallVolume.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-email/model/DailyVolume.h>
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
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>An object that includes statistics that are related to the domain that you
   * specified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetDomainStatisticsReportResponse">AWS
   * API Reference</a></p>
   */
  class GetDomainStatisticsReportResult
  {
  public:
    AWS_PINPOINTEMAIL_API GetDomainStatisticsReportResult();
    AWS_PINPOINTEMAIL_API GetDomainStatisticsReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTEMAIL_API GetDomainStatisticsReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains deliverability metrics for the domain that you
     * specified. The data in this object is a summary of all of the data that was
     * collected from the <code>StartDate</code> to the <code>EndDate</code>.</p>
     */
    inline const OverallVolume& GetOverallVolume() const{ return m_overallVolume; }

    /**
     * <p>An object that contains deliverability metrics for the domain that you
     * specified. The data in this object is a summary of all of the data that was
     * collected from the <code>StartDate</code> to the <code>EndDate</code>.</p>
     */
    inline void SetOverallVolume(const OverallVolume& value) { m_overallVolume = value; }

    /**
     * <p>An object that contains deliverability metrics for the domain that you
     * specified. The data in this object is a summary of all of the data that was
     * collected from the <code>StartDate</code> to the <code>EndDate</code>.</p>
     */
    inline void SetOverallVolume(OverallVolume&& value) { m_overallVolume = std::move(value); }

    /**
     * <p>An object that contains deliverability metrics for the domain that you
     * specified. The data in this object is a summary of all of the data that was
     * collected from the <code>StartDate</code> to the <code>EndDate</code>.</p>
     */
    inline GetDomainStatisticsReportResult& WithOverallVolume(const OverallVolume& value) { SetOverallVolume(value); return *this;}

    /**
     * <p>An object that contains deliverability metrics for the domain that you
     * specified. The data in this object is a summary of all of the data that was
     * collected from the <code>StartDate</code> to the <code>EndDate</code>.</p>
     */
    inline GetDomainStatisticsReportResult& WithOverallVolume(OverallVolume&& value) { SetOverallVolume(std::move(value)); return *this;}


    /**
     * <p>An object that contains deliverability metrics for the domain that you
     * specified. This object contains data for each day, starting on the
     * <code>StartDate</code> and ending on the <code>EndDate</code>.</p>
     */
    inline const Aws::Vector<DailyVolume>& GetDailyVolumes() const{ return m_dailyVolumes; }

    /**
     * <p>An object that contains deliverability metrics for the domain that you
     * specified. This object contains data for each day, starting on the
     * <code>StartDate</code> and ending on the <code>EndDate</code>.</p>
     */
    inline void SetDailyVolumes(const Aws::Vector<DailyVolume>& value) { m_dailyVolumes = value; }

    /**
     * <p>An object that contains deliverability metrics for the domain that you
     * specified. This object contains data for each day, starting on the
     * <code>StartDate</code> and ending on the <code>EndDate</code>.</p>
     */
    inline void SetDailyVolumes(Aws::Vector<DailyVolume>&& value) { m_dailyVolumes = std::move(value); }

    /**
     * <p>An object that contains deliverability metrics for the domain that you
     * specified. This object contains data for each day, starting on the
     * <code>StartDate</code> and ending on the <code>EndDate</code>.</p>
     */
    inline GetDomainStatisticsReportResult& WithDailyVolumes(const Aws::Vector<DailyVolume>& value) { SetDailyVolumes(value); return *this;}

    /**
     * <p>An object that contains deliverability metrics for the domain that you
     * specified. This object contains data for each day, starting on the
     * <code>StartDate</code> and ending on the <code>EndDate</code>.</p>
     */
    inline GetDomainStatisticsReportResult& WithDailyVolumes(Aws::Vector<DailyVolume>&& value) { SetDailyVolumes(std::move(value)); return *this;}

    /**
     * <p>An object that contains deliverability metrics for the domain that you
     * specified. This object contains data for each day, starting on the
     * <code>StartDate</code> and ending on the <code>EndDate</code>.</p>
     */
    inline GetDomainStatisticsReportResult& AddDailyVolumes(const DailyVolume& value) { m_dailyVolumes.push_back(value); return *this; }

    /**
     * <p>An object that contains deliverability metrics for the domain that you
     * specified. This object contains data for each day, starting on the
     * <code>StartDate</code> and ending on the <code>EndDate</code>.</p>
     */
    inline GetDomainStatisticsReportResult& AddDailyVolumes(DailyVolume&& value) { m_dailyVolumes.push_back(std::move(value)); return *this; }

  private:

    OverallVolume m_overallVolume;

    Aws::Vector<DailyVolume> m_dailyVolumes;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws

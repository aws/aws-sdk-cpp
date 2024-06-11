﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/OverallVolume.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/DailyVolume.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>An object that includes statistics that are related to the domain that you
   * specified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDomainStatisticsReportResponse">AWS
   * API Reference</a></p>
   */
  class GetDomainStatisticsReportResult
  {
  public:
    AWS_SESV2_API GetDomainStatisticsReportResult();
    AWS_SESV2_API GetDomainStatisticsReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetDomainStatisticsReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains deliverability metrics for the domain that you
     * specified. The data in this object is a summary of all of the data that was
     * collected from the <code>StartDate</code> to the <code>EndDate</code>.</p>
     */
    inline const OverallVolume& GetOverallVolume() const{ return m_overallVolume; }
    inline void SetOverallVolume(const OverallVolume& value) { m_overallVolume = value; }
    inline void SetOverallVolume(OverallVolume&& value) { m_overallVolume = std::move(value); }
    inline GetDomainStatisticsReportResult& WithOverallVolume(const OverallVolume& value) { SetOverallVolume(value); return *this;}
    inline GetDomainStatisticsReportResult& WithOverallVolume(OverallVolume&& value) { SetOverallVolume(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains deliverability metrics for the domain that you
     * specified. This object contains data for each day, starting on the
     * <code>StartDate</code> and ending on the <code>EndDate</code>.</p>
     */
    inline const Aws::Vector<DailyVolume>& GetDailyVolumes() const{ return m_dailyVolumes; }
    inline void SetDailyVolumes(const Aws::Vector<DailyVolume>& value) { m_dailyVolumes = value; }
    inline void SetDailyVolumes(Aws::Vector<DailyVolume>&& value) { m_dailyVolumes = std::move(value); }
    inline GetDomainStatisticsReportResult& WithDailyVolumes(const Aws::Vector<DailyVolume>& value) { SetDailyVolumes(value); return *this;}
    inline GetDomainStatisticsReportResult& WithDailyVolumes(Aws::Vector<DailyVolume>&& value) { SetDailyVolumes(std::move(value)); return *this;}
    inline GetDomainStatisticsReportResult& AddDailyVolumes(const DailyVolume& value) { m_dailyVolumes.push_back(value); return *this; }
    inline GetDomainStatisticsReportResult& AddDailyVolumes(DailyVolume&& value) { m_dailyVolumes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDomainStatisticsReportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDomainStatisticsReportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDomainStatisticsReportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    OverallVolume m_overallVolume;

    Aws::Vector<DailyVolume> m_dailyVolumes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws

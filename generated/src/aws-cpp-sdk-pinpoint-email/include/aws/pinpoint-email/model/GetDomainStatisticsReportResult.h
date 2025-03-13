/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/model/OverallVolume.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_PINPOINTEMAIL_API GetDomainStatisticsReportResult() = default;
    AWS_PINPOINTEMAIL_API GetDomainStatisticsReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTEMAIL_API GetDomainStatisticsReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains deliverability metrics for the domain that you
     * specified. The data in this object is a summary of all of the data that was
     * collected from the <code>StartDate</code> to the <code>EndDate</code>.</p>
     */
    inline const OverallVolume& GetOverallVolume() const { return m_overallVolume; }
    template<typename OverallVolumeT = OverallVolume>
    void SetOverallVolume(OverallVolumeT&& value) { m_overallVolumeHasBeenSet = true; m_overallVolume = std::forward<OverallVolumeT>(value); }
    template<typename OverallVolumeT = OverallVolume>
    GetDomainStatisticsReportResult& WithOverallVolume(OverallVolumeT&& value) { SetOverallVolume(std::forward<OverallVolumeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains deliverability metrics for the domain that you
     * specified. This object contains data for each day, starting on the
     * <code>StartDate</code> and ending on the <code>EndDate</code>.</p>
     */
    inline const Aws::Vector<DailyVolume>& GetDailyVolumes() const { return m_dailyVolumes; }
    template<typename DailyVolumesT = Aws::Vector<DailyVolume>>
    void SetDailyVolumes(DailyVolumesT&& value) { m_dailyVolumesHasBeenSet = true; m_dailyVolumes = std::forward<DailyVolumesT>(value); }
    template<typename DailyVolumesT = Aws::Vector<DailyVolume>>
    GetDomainStatisticsReportResult& WithDailyVolumes(DailyVolumesT&& value) { SetDailyVolumes(std::forward<DailyVolumesT>(value)); return *this;}
    template<typename DailyVolumesT = DailyVolume>
    GetDomainStatisticsReportResult& AddDailyVolumes(DailyVolumesT&& value) { m_dailyVolumesHasBeenSet = true; m_dailyVolumes.emplace_back(std::forward<DailyVolumesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDomainStatisticsReportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    OverallVolume m_overallVolume;
    bool m_overallVolumeHasBeenSet = false;

    Aws::Vector<DailyVolume> m_dailyVolumes;
    bool m_dailyVolumesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws

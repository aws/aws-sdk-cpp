/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/InsightImpactGraphService.h>
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
namespace XRay
{
namespace Model
{
  class GetInsightImpactGraphResult
  {
  public:
    AWS_XRAY_API GetInsightImpactGraphResult() = default;
    AWS_XRAY_API GetInsightImpactGraphResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetInsightImpactGraphResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The insight's unique identifier.</p>
     */
    inline const Aws::String& GetInsightId() const { return m_insightId; }
    template<typename InsightIdT = Aws::String>
    void SetInsightId(InsightIdT&& value) { m_insightIdHasBeenSet = true; m_insightId = std::forward<InsightIdT>(value); }
    template<typename InsightIdT = Aws::String>
    GetInsightImpactGraphResult& WithInsightId(InsightIdT&& value) { SetInsightId(std::forward<InsightIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provided start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetInsightImpactGraphResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provided end time. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetInsightImpactGraphResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in Unix seconds, at which the service graph started.</p>
     */
    inline const Aws::Utils::DateTime& GetServiceGraphStartTime() const { return m_serviceGraphStartTime; }
    template<typename ServiceGraphStartTimeT = Aws::Utils::DateTime>
    void SetServiceGraphStartTime(ServiceGraphStartTimeT&& value) { m_serviceGraphStartTimeHasBeenSet = true; m_serviceGraphStartTime = std::forward<ServiceGraphStartTimeT>(value); }
    template<typename ServiceGraphStartTimeT = Aws::Utils::DateTime>
    GetInsightImpactGraphResult& WithServiceGraphStartTime(ServiceGraphStartTimeT&& value) { SetServiceGraphStartTime(std::forward<ServiceGraphStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in Unix seconds, at which the service graph ended.</p>
     */
    inline const Aws::Utils::DateTime& GetServiceGraphEndTime() const { return m_serviceGraphEndTime; }
    template<typename ServiceGraphEndTimeT = Aws::Utils::DateTime>
    void SetServiceGraphEndTime(ServiceGraphEndTimeT&& value) { m_serviceGraphEndTimeHasBeenSet = true; m_serviceGraphEndTime = std::forward<ServiceGraphEndTimeT>(value); }
    template<typename ServiceGraphEndTimeT = Aws::Utils::DateTime>
    GetInsightImpactGraphResult& WithServiceGraphEndTime(ServiceGraphEndTimeT&& value) { SetServiceGraphEndTime(std::forward<ServiceGraphEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services instrumented services related to the insight.</p>
     */
    inline const Aws::Vector<InsightImpactGraphService>& GetServices() const { return m_services; }
    template<typename ServicesT = Aws::Vector<InsightImpactGraphService>>
    void SetServices(ServicesT&& value) { m_servicesHasBeenSet = true; m_services = std::forward<ServicesT>(value); }
    template<typename ServicesT = Aws::Vector<InsightImpactGraphService>>
    GetInsightImpactGraphResult& WithServices(ServicesT&& value) { SetServices(std::forward<ServicesT>(value)); return *this;}
    template<typename ServicesT = InsightImpactGraphService>
    GetInsightImpactGraphResult& AddServices(ServicesT&& value) { m_servicesHasBeenSet = true; m_services.emplace_back(std::forward<ServicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetInsightImpactGraphResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInsightImpactGraphResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_insightId;
    bool m_insightIdHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_serviceGraphStartTime{};
    bool m_serviceGraphStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_serviceGraphEndTime{};
    bool m_serviceGraphEndTimeHasBeenSet = false;

    Aws::Vector<InsightImpactGraphService> m_services;
    bool m_servicesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws

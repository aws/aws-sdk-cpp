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
    AWS_XRAY_API GetInsightImpactGraphResult();
    AWS_XRAY_API GetInsightImpactGraphResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetInsightImpactGraphResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The insight's unique identifier.</p>
     */
    inline const Aws::String& GetInsightId() const{ return m_insightId; }
    inline void SetInsightId(const Aws::String& value) { m_insightId = value; }
    inline void SetInsightId(Aws::String&& value) { m_insightId = std::move(value); }
    inline void SetInsightId(const char* value) { m_insightId.assign(value); }
    inline GetInsightImpactGraphResult& WithInsightId(const Aws::String& value) { SetInsightId(value); return *this;}
    inline GetInsightImpactGraphResult& WithInsightId(Aws::String&& value) { SetInsightId(std::move(value)); return *this;}
    inline GetInsightImpactGraphResult& WithInsightId(const char* value) { SetInsightId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provided start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline GetInsightImpactGraphResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetInsightImpactGraphResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provided end time. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline GetInsightImpactGraphResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetInsightImpactGraphResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in Unix seconds, at which the service graph started.</p>
     */
    inline const Aws::Utils::DateTime& GetServiceGraphStartTime() const{ return m_serviceGraphStartTime; }
    inline void SetServiceGraphStartTime(const Aws::Utils::DateTime& value) { m_serviceGraphStartTime = value; }
    inline void SetServiceGraphStartTime(Aws::Utils::DateTime&& value) { m_serviceGraphStartTime = std::move(value); }
    inline GetInsightImpactGraphResult& WithServiceGraphStartTime(const Aws::Utils::DateTime& value) { SetServiceGraphStartTime(value); return *this;}
    inline GetInsightImpactGraphResult& WithServiceGraphStartTime(Aws::Utils::DateTime&& value) { SetServiceGraphStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in Unix seconds, at which the service graph ended.</p>
     */
    inline const Aws::Utils::DateTime& GetServiceGraphEndTime() const{ return m_serviceGraphEndTime; }
    inline void SetServiceGraphEndTime(const Aws::Utils::DateTime& value) { m_serviceGraphEndTime = value; }
    inline void SetServiceGraphEndTime(Aws::Utils::DateTime&& value) { m_serviceGraphEndTime = std::move(value); }
    inline GetInsightImpactGraphResult& WithServiceGraphEndTime(const Aws::Utils::DateTime& value) { SetServiceGraphEndTime(value); return *this;}
    inline GetInsightImpactGraphResult& WithServiceGraphEndTime(Aws::Utils::DateTime&& value) { SetServiceGraphEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services instrumented services related to the insight.</p>
     */
    inline const Aws::Vector<InsightImpactGraphService>& GetServices() const{ return m_services; }
    inline void SetServices(const Aws::Vector<InsightImpactGraphService>& value) { m_services = value; }
    inline void SetServices(Aws::Vector<InsightImpactGraphService>&& value) { m_services = std::move(value); }
    inline GetInsightImpactGraphResult& WithServices(const Aws::Vector<InsightImpactGraphService>& value) { SetServices(value); return *this;}
    inline GetInsightImpactGraphResult& WithServices(Aws::Vector<InsightImpactGraphService>&& value) { SetServices(std::move(value)); return *this;}
    inline GetInsightImpactGraphResult& AddServices(const InsightImpactGraphService& value) { m_services.push_back(value); return *this; }
    inline GetInsightImpactGraphResult& AddServices(InsightImpactGraphService&& value) { m_services.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetInsightImpactGraphResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetInsightImpactGraphResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetInsightImpactGraphResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetInsightImpactGraphResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetInsightImpactGraphResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetInsightImpactGraphResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_insightId;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;

    Aws::Utils::DateTime m_serviceGraphStartTime;

    Aws::Utils::DateTime m_serviceGraphEndTime;

    Aws::Vector<InsightImpactGraphService> m_services;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws

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


    /**
     * <p>The insight's unique identifier.</p>
     */
    inline const Aws::String& GetInsightId() const{ return m_insightId; }

    /**
     * <p>The insight's unique identifier.</p>
     */
    inline void SetInsightId(const Aws::String& value) { m_insightId = value; }

    /**
     * <p>The insight's unique identifier.</p>
     */
    inline void SetInsightId(Aws::String&& value) { m_insightId = std::move(value); }

    /**
     * <p>The insight's unique identifier.</p>
     */
    inline void SetInsightId(const char* value) { m_insightId.assign(value); }

    /**
     * <p>The insight's unique identifier.</p>
     */
    inline GetInsightImpactGraphResult& WithInsightId(const Aws::String& value) { SetInsightId(value); return *this;}

    /**
     * <p>The insight's unique identifier.</p>
     */
    inline GetInsightImpactGraphResult& WithInsightId(Aws::String&& value) { SetInsightId(std::move(value)); return *this;}

    /**
     * <p>The insight's unique identifier.</p>
     */
    inline GetInsightImpactGraphResult& WithInsightId(const char* value) { SetInsightId(value); return *this;}


    /**
     * <p>The provided start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The provided start time.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>The provided start time.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>The provided start time.</p>
     */
    inline GetInsightImpactGraphResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The provided start time.</p>
     */
    inline GetInsightImpactGraphResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The provided end time. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The provided end time. </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }

    /**
     * <p>The provided end time. </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }

    /**
     * <p>The provided end time. </p>
     */
    inline GetInsightImpactGraphResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The provided end time. </p>
     */
    inline GetInsightImpactGraphResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The time, in Unix seconds, at which the service graph started.</p>
     */
    inline const Aws::Utils::DateTime& GetServiceGraphStartTime() const{ return m_serviceGraphStartTime; }

    /**
     * <p>The time, in Unix seconds, at which the service graph started.</p>
     */
    inline void SetServiceGraphStartTime(const Aws::Utils::DateTime& value) { m_serviceGraphStartTime = value; }

    /**
     * <p>The time, in Unix seconds, at which the service graph started.</p>
     */
    inline void SetServiceGraphStartTime(Aws::Utils::DateTime&& value) { m_serviceGraphStartTime = std::move(value); }

    /**
     * <p>The time, in Unix seconds, at which the service graph started.</p>
     */
    inline GetInsightImpactGraphResult& WithServiceGraphStartTime(const Aws::Utils::DateTime& value) { SetServiceGraphStartTime(value); return *this;}

    /**
     * <p>The time, in Unix seconds, at which the service graph started.</p>
     */
    inline GetInsightImpactGraphResult& WithServiceGraphStartTime(Aws::Utils::DateTime&& value) { SetServiceGraphStartTime(std::move(value)); return *this;}


    /**
     * <p>The time, in Unix seconds, at which the service graph ended.</p>
     */
    inline const Aws::Utils::DateTime& GetServiceGraphEndTime() const{ return m_serviceGraphEndTime; }

    /**
     * <p>The time, in Unix seconds, at which the service graph ended.</p>
     */
    inline void SetServiceGraphEndTime(const Aws::Utils::DateTime& value) { m_serviceGraphEndTime = value; }

    /**
     * <p>The time, in Unix seconds, at which the service graph ended.</p>
     */
    inline void SetServiceGraphEndTime(Aws::Utils::DateTime&& value) { m_serviceGraphEndTime = std::move(value); }

    /**
     * <p>The time, in Unix seconds, at which the service graph ended.</p>
     */
    inline GetInsightImpactGraphResult& WithServiceGraphEndTime(const Aws::Utils::DateTime& value) { SetServiceGraphEndTime(value); return *this;}

    /**
     * <p>The time, in Unix seconds, at which the service graph ended.</p>
     */
    inline GetInsightImpactGraphResult& WithServiceGraphEndTime(Aws::Utils::DateTime&& value) { SetServiceGraphEndTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services instrumented services related to the insight.</p>
     */
    inline const Aws::Vector<InsightImpactGraphService>& GetServices() const{ return m_services; }

    /**
     * <p>The Amazon Web Services instrumented services related to the insight.</p>
     */
    inline void SetServices(const Aws::Vector<InsightImpactGraphService>& value) { m_services = value; }

    /**
     * <p>The Amazon Web Services instrumented services related to the insight.</p>
     */
    inline void SetServices(Aws::Vector<InsightImpactGraphService>&& value) { m_services = std::move(value); }

    /**
     * <p>The Amazon Web Services instrumented services related to the insight.</p>
     */
    inline GetInsightImpactGraphResult& WithServices(const Aws::Vector<InsightImpactGraphService>& value) { SetServices(value); return *this;}

    /**
     * <p>The Amazon Web Services instrumented services related to the insight.</p>
     */
    inline GetInsightImpactGraphResult& WithServices(Aws::Vector<InsightImpactGraphService>&& value) { SetServices(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services instrumented services related to the insight.</p>
     */
    inline GetInsightImpactGraphResult& AddServices(const InsightImpactGraphService& value) { m_services.push_back(value); return *this; }

    /**
     * <p>The Amazon Web Services instrumented services related to the insight.</p>
     */
    inline GetInsightImpactGraphResult& AddServices(InsightImpactGraphService&& value) { m_services.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token.</p>
     */
    inline GetInsightImpactGraphResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token.</p>
     */
    inline GetInsightImpactGraphResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token.</p>
     */
    inline GetInsightImpactGraphResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_insightId;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;

    Aws::Utils::DateTime m_serviceGraphStartTime;

    Aws::Utils::DateTime m_serviceGraphEndTime;

    Aws::Vector<InsightImpactGraphService> m_services;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws

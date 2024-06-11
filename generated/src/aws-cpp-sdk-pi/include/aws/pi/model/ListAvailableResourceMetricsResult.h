﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pi/model/ResponseResourceMetric.h>
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
namespace PI
{
namespace Model
{
  class ListAvailableResourceMetricsResult
  {
  public:
    AWS_PI_API ListAvailableResourceMetricsResult();
    AWS_PI_API ListAvailableResourceMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PI_API ListAvailableResourceMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of metrics available to query. Each array element contains the full
     * name, description, and unit of the metric. </p>
     */
    inline const Aws::Vector<ResponseResourceMetric>& GetMetrics() const{ return m_metrics; }
    inline void SetMetrics(const Aws::Vector<ResponseResourceMetric>& value) { m_metrics = value; }
    inline void SetMetrics(Aws::Vector<ResponseResourceMetric>&& value) { m_metrics = std::move(value); }
    inline ListAvailableResourceMetricsResult& WithMetrics(const Aws::Vector<ResponseResourceMetric>& value) { SetMetrics(value); return *this;}
    inline ListAvailableResourceMetricsResult& WithMetrics(Aws::Vector<ResponseResourceMetric>&& value) { SetMetrics(std::move(value)); return *this;}
    inline ListAvailableResourceMetricsResult& AddMetrics(const ResponseResourceMetric& value) { m_metrics.push_back(value); return *this; }
    inline ListAvailableResourceMetricsResult& AddMetrics(ResponseResourceMetric&& value) { m_metrics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token that indicates the response didn’t return all available
     * records because <code>MaxRecords</code> was specified in the previous request.
     * To get the remaining records, specify <code>NextToken</code> in a separate
     * request with this value. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAvailableResourceMetricsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAvailableResourceMetricsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAvailableResourceMetricsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAvailableResourceMetricsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAvailableResourceMetricsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAvailableResourceMetricsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ResponseResourceMetric> m_metrics;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PI
} // namespace Aws

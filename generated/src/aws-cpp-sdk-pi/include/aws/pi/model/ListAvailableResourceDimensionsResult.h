/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pi/model/MetricDimensionGroups.h>
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
  class ListAvailableResourceDimensionsResult
  {
  public:
    AWS_PI_API ListAvailableResourceDimensionsResult();
    AWS_PI_API ListAvailableResourceDimensionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PI_API ListAvailableResourceDimensionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The dimension information returned for requested metric types.</p>
     */
    inline const Aws::Vector<MetricDimensionGroups>& GetMetricDimensions() const{ return m_metricDimensions; }
    inline void SetMetricDimensions(const Aws::Vector<MetricDimensionGroups>& value) { m_metricDimensions = value; }
    inline void SetMetricDimensions(Aws::Vector<MetricDimensionGroups>&& value) { m_metricDimensions = std::move(value); }
    inline ListAvailableResourceDimensionsResult& WithMetricDimensions(const Aws::Vector<MetricDimensionGroups>& value) { SetMetricDimensions(value); return *this;}
    inline ListAvailableResourceDimensionsResult& WithMetricDimensions(Aws::Vector<MetricDimensionGroups>&& value) { SetMetricDimensions(std::move(value)); return *this;}
    inline ListAvailableResourceDimensionsResult& AddMetricDimensions(const MetricDimensionGroups& value) { m_metricDimensions.push_back(value); return *this; }
    inline ListAvailableResourceDimensionsResult& AddMetricDimensions(MetricDimensionGroups&& value) { m_metricDimensions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAvailableResourceDimensionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAvailableResourceDimensionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAvailableResourceDimensionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAvailableResourceDimensionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAvailableResourceDimensionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAvailableResourceDimensionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MetricDimensionGroups> m_metricDimensions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PI
} // namespace Aws

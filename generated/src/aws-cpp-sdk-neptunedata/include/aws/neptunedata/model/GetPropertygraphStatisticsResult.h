/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptunedata/model/Statistics.h>
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
namespace neptunedata
{
namespace Model
{
  class GetPropertygraphStatisticsResult
  {
  public:
    AWS_NEPTUNEDATA_API GetPropertygraphStatisticsResult();
    AWS_NEPTUNEDATA_API GetPropertygraphStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API GetPropertygraphStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The HTTP return code of the request. If the request succeeded, the code is
     * 200. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/neptune-dfe-statistics.html#neptune-dfe-statistics-errors">Common
     * error codes for DFE statistics request</a> for a list of common errors.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP return code of the request. If the request succeeded, the code is
     * 200. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/neptune-dfe-statistics.html#neptune-dfe-statistics-errors">Common
     * error codes for DFE statistics request</a> for a list of common errors.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The HTTP return code of the request. If the request succeeded, the code is
     * 200. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/neptune-dfe-statistics.html#neptune-dfe-statistics-errors">Common
     * error codes for DFE statistics request</a> for a list of common errors.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The HTTP return code of the request. If the request succeeded, the code is
     * 200. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/neptune-dfe-statistics.html#neptune-dfe-statistics-errors">Common
     * error codes for DFE statistics request</a> for a list of common errors.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The HTTP return code of the request. If the request succeeded, the code is
     * 200. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/neptune-dfe-statistics.html#neptune-dfe-statistics-errors">Common
     * error codes for DFE statistics request</a> for a list of common errors.</p>
     */
    inline GetPropertygraphStatisticsResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The HTTP return code of the request. If the request succeeded, the code is
     * 200. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/neptune-dfe-statistics.html#neptune-dfe-statistics-errors">Common
     * error codes for DFE statistics request</a> for a list of common errors.</p>
     */
    inline GetPropertygraphStatisticsResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The HTTP return code of the request. If the request succeeded, the code is
     * 200. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/neptune-dfe-statistics.html#neptune-dfe-statistics-errors">Common
     * error codes for DFE statistics request</a> for a list of common errors.</p>
     */
    inline GetPropertygraphStatisticsResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Statistics for property-graph data.</p>
     */
    inline const Statistics& GetPayload() const{ return m_payload; }

    /**
     * <p>Statistics for property-graph data.</p>
     */
    inline void SetPayload(const Statistics& value) { m_payload = value; }

    /**
     * <p>Statistics for property-graph data.</p>
     */
    inline void SetPayload(Statistics&& value) { m_payload = std::move(value); }

    /**
     * <p>Statistics for property-graph data.</p>
     */
    inline GetPropertygraphStatisticsResult& WithPayload(const Statistics& value) { SetPayload(value); return *this;}

    /**
     * <p>Statistics for property-graph data.</p>
     */
    inline GetPropertygraphStatisticsResult& WithPayload(Statistics&& value) { SetPayload(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPropertygraphStatisticsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPropertygraphStatisticsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPropertygraphStatisticsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_status;

    Statistics m_payload;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws

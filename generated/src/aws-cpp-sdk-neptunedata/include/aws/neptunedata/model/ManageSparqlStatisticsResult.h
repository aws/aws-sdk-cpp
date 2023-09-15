/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptunedata/model/RefreshStatisticsIdMap.h>
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
  class ManageSparqlStatisticsResult
  {
  public:
    AWS_NEPTUNEDATA_API ManageSparqlStatisticsResult();
    AWS_NEPTUNEDATA_API ManageSparqlStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API ManageSparqlStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The HTTP return code of the request. If the request succeeded, the code is
     * 200.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP return code of the request. If the request succeeded, the code is
     * 200.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The HTTP return code of the request. If the request succeeded, the code is
     * 200.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The HTTP return code of the request. If the request succeeded, the code is
     * 200.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The HTTP return code of the request. If the request succeeded, the code is
     * 200.</p>
     */
    inline ManageSparqlStatisticsResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The HTTP return code of the request. If the request succeeded, the code is
     * 200.</p>
     */
    inline ManageSparqlStatisticsResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The HTTP return code of the request. If the request succeeded, the code is
     * 200.</p>
     */
    inline ManageSparqlStatisticsResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>This is only returned for refresh mode.</p>
     */
    inline const RefreshStatisticsIdMap& GetPayload() const{ return m_payload; }

    /**
     * <p>This is only returned for refresh mode.</p>
     */
    inline void SetPayload(const RefreshStatisticsIdMap& value) { m_payload = value; }

    /**
     * <p>This is only returned for refresh mode.</p>
     */
    inline void SetPayload(RefreshStatisticsIdMap&& value) { m_payload = std::move(value); }

    /**
     * <p>This is only returned for refresh mode.</p>
     */
    inline ManageSparqlStatisticsResult& WithPayload(const RefreshStatisticsIdMap& value) { SetPayload(value); return *this;}

    /**
     * <p>This is only returned for refresh mode.</p>
     */
    inline ManageSparqlStatisticsResult& WithPayload(RefreshStatisticsIdMap&& value) { SetPayload(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ManageSparqlStatisticsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ManageSparqlStatisticsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ManageSparqlStatisticsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_status;

    RefreshStatisticsIdMap m_payload;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws

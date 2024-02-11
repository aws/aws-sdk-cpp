/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptunedata/model/LoaderIdResult.h>
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
  class ListLoaderJobsResult
  {
  public:
    AWS_NEPTUNEDATA_API ListLoaderJobsResult();
    AWS_NEPTUNEDATA_API ListLoaderJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API ListLoaderJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the status of the job list request.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Returns the status of the job list request.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>Returns the status of the job list request.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>Returns the status of the job list request.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>Returns the status of the job list request.</p>
     */
    inline ListLoaderJobsResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Returns the status of the job list request.</p>
     */
    inline ListLoaderJobsResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Returns the status of the job list request.</p>
     */
    inline ListLoaderJobsResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The requested list of job IDs.</p>
     */
    inline const LoaderIdResult& GetPayload() const{ return m_payload; }

    /**
     * <p>The requested list of job IDs.</p>
     */
    inline void SetPayload(const LoaderIdResult& value) { m_payload = value; }

    /**
     * <p>The requested list of job IDs.</p>
     */
    inline void SetPayload(LoaderIdResult&& value) { m_payload = std::move(value); }

    /**
     * <p>The requested list of job IDs.</p>
     */
    inline ListLoaderJobsResult& WithPayload(const LoaderIdResult& value) { SetPayload(value); return *this;}

    /**
     * <p>The requested list of job IDs.</p>
     */
    inline ListLoaderJobsResult& WithPayload(LoaderIdResult&& value) { SetPayload(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListLoaderJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListLoaderJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListLoaderJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_status;

    LoaderIdResult m_payload;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws

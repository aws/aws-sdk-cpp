/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
  class GetLoaderJobStatusResult
  {
  public:
    AWS_NEPTUNEDATA_API GetLoaderJobStatusResult();
    AWS_NEPTUNEDATA_API GetLoaderJobStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API GetLoaderJobStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The HTTP response code for the request.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP response code for the request.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The HTTP response code for the request.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The HTTP response code for the request.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The HTTP response code for the request.</p>
     */
    inline GetLoaderJobStatusResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The HTTP response code for the request.</p>
     */
    inline GetLoaderJobStatusResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The HTTP response code for the request.</p>
     */
    inline GetLoaderJobStatusResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Status information about the load job, in a layout that could look like
     * this:</p>
     */
    inline Aws::Utils::DocumentView GetPayload() const{ return m_payload; }

    /**
     * <p>Status information about the load job, in a layout that could look like
     * this:</p>
     */
    inline void SetPayload(const Aws::Utils::Document& value) { m_payload = value; }

    /**
     * <p>Status information about the load job, in a layout that could look like
     * this:</p>
     */
    inline void SetPayload(Aws::Utils::Document&& value) { m_payload = std::move(value); }

    /**
     * <p>Status information about the load job, in a layout that could look like
     * this:</p>
     */
    inline GetLoaderJobStatusResult& WithPayload(const Aws::Utils::Document& value) { SetPayload(value); return *this;}

    /**
     * <p>Status information about the load job, in a layout that could look like
     * this:</p>
     */
    inline GetLoaderJobStatusResult& WithPayload(Aws::Utils::Document&& value) { SetPayload(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetLoaderJobStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetLoaderJobStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetLoaderJobStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_status;

    Aws::Utils::Document m_payload;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws

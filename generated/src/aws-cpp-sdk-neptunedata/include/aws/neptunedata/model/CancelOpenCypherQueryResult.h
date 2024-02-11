/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CancelOpenCypherQueryResult
  {
  public:
    AWS_NEPTUNEDATA_API CancelOpenCypherQueryResult();
    AWS_NEPTUNEDATA_API CancelOpenCypherQueryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API CancelOpenCypherQueryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The cancellation status of the openCypher query.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The cancellation status of the openCypher query.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The cancellation status of the openCypher query.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The cancellation status of the openCypher query.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The cancellation status of the openCypher query.</p>
     */
    inline CancelOpenCypherQueryResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The cancellation status of the openCypher query.</p>
     */
    inline CancelOpenCypherQueryResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The cancellation status of the openCypher query.</p>
     */
    inline CancelOpenCypherQueryResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The cancelation payload for the openCypher query.</p>
     */
    inline bool GetPayload() const{ return m_payload; }

    /**
     * <p>The cancelation payload for the openCypher query.</p>
     */
    inline void SetPayload(bool value) { m_payload = value; }

    /**
     * <p>The cancelation payload for the openCypher query.</p>
     */
    inline CancelOpenCypherQueryResult& WithPayload(bool value) { SetPayload(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CancelOpenCypherQueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CancelOpenCypherQueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CancelOpenCypherQueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_status;

    bool m_payload;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/neptunedata/model/RDFGraphSummaryValueMap.h>
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
  class GetRDFGraphSummaryResult
  {
  public:
    AWS_NEPTUNEDATA_API GetRDFGraphSummaryResult();
    AWS_NEPTUNEDATA_API GetRDFGraphSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API GetRDFGraphSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The HTTP return code of the request. If the request succeeded, the code is
     * 200.</p>
     */
    inline int GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The HTTP return code of the request. If the request succeeded, the code is
     * 200.</p>
     */
    inline void SetStatusCode(int value) { m_statusCode = value; }

    /**
     * <p>The HTTP return code of the request. If the request succeeded, the code is
     * 200.</p>
     */
    inline GetRDFGraphSummaryResult& WithStatusCode(int value) { SetStatusCode(value); return *this;}


    /**
     * <p>Payload for an RDF graph summary response</p>
     */
    inline const RDFGraphSummaryValueMap& GetPayload() const{ return m_payload; }

    /**
     * <p>Payload for an RDF graph summary response</p>
     */
    inline void SetPayload(const RDFGraphSummaryValueMap& value) { m_payload = value; }

    /**
     * <p>Payload for an RDF graph summary response</p>
     */
    inline void SetPayload(RDFGraphSummaryValueMap&& value) { m_payload = std::move(value); }

    /**
     * <p>Payload for an RDF graph summary response</p>
     */
    inline GetRDFGraphSummaryResult& WithPayload(const RDFGraphSummaryValueMap& value) { SetPayload(value); return *this;}

    /**
     * <p>Payload for an RDF graph summary response</p>
     */
    inline GetRDFGraphSummaryResult& WithPayload(RDFGraphSummaryValueMap&& value) { SetPayload(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRDFGraphSummaryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRDFGraphSummaryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRDFGraphSummaryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_statusCode;

    RDFGraphSummaryValueMap m_payload;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws

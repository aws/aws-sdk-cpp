/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace neptunedata
{
namespace Model
{
  class ExecuteOpenCypherExplainQueryResult
  {
  public:
    AWS_NEPTUNEDATA_API ExecuteOpenCypherExplainQueryResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_NEPTUNEDATA_API ExecuteOpenCypherExplainQueryResult(ExecuteOpenCypherExplainQueryResult&&);
    AWS_NEPTUNEDATA_API ExecuteOpenCypherExplainQueryResult& operator=(ExecuteOpenCypherExplainQueryResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    ExecuteOpenCypherExplainQueryResult(const ExecuteOpenCypherExplainQueryResult&) = delete;
    ExecuteOpenCypherExplainQueryResult& operator=(const ExecuteOpenCypherExplainQueryResult&) = delete;


    AWS_NEPTUNEDATA_API ExecuteOpenCypherExplainQueryResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_NEPTUNEDATA_API ExecuteOpenCypherExplainQueryResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>A text blob containing the openCypher <code>explain</code> results.</p>
     */
    inline Aws::IOStream& GetResults() const { return m_results.GetUnderlyingStream(); }

    /**
     * <p>A text blob containing the openCypher <code>explain</code> results.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_results = Aws::Utils::Stream::ResponseStream(body); }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ExecuteOpenCypherExplainQueryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ExecuteOpenCypherExplainQueryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ExecuteOpenCypherExplainQueryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::Stream::ResponseStream m_results;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws

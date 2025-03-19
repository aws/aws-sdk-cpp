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
    AWS_NEPTUNEDATA_API ExecuteOpenCypherExplainQueryResult() = default;
    AWS_NEPTUNEDATA_API ExecuteOpenCypherExplainQueryResult(ExecuteOpenCypherExplainQueryResult&&) = default;
    AWS_NEPTUNEDATA_API ExecuteOpenCypherExplainQueryResult& operator=(ExecuteOpenCypherExplainQueryResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    ExecuteOpenCypherExplainQueryResult(const ExecuteOpenCypherExplainQueryResult&) = delete;
    ExecuteOpenCypherExplainQueryResult& operator=(const ExecuteOpenCypherExplainQueryResult&) = delete;


    AWS_NEPTUNEDATA_API ExecuteOpenCypherExplainQueryResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_NEPTUNEDATA_API ExecuteOpenCypherExplainQueryResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>A text blob containing the openCypher <code>explain</code> results.</p>
     */
    inline Aws::IOStream& GetResults() const { return m_results.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_results = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ExecuteOpenCypherExplainQueryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_results{};
    bool m_resultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws

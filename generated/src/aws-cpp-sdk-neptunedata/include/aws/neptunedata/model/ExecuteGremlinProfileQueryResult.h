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
  class ExecuteGremlinProfileQueryResult
  {
  public:
    AWS_NEPTUNEDATA_API ExecuteGremlinProfileQueryResult() = default;
    AWS_NEPTUNEDATA_API ExecuteGremlinProfileQueryResult(ExecuteGremlinProfileQueryResult&&) = default;
    AWS_NEPTUNEDATA_API ExecuteGremlinProfileQueryResult& operator=(ExecuteGremlinProfileQueryResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    ExecuteGremlinProfileQueryResult(const ExecuteGremlinProfileQueryResult&) = delete;
    ExecuteGremlinProfileQueryResult& operator=(const ExecuteGremlinProfileQueryResult&) = delete;


    AWS_NEPTUNEDATA_API ExecuteGremlinProfileQueryResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_NEPTUNEDATA_API ExecuteGremlinProfileQueryResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>A text blob containing the Gremlin Profile result. See <a
     * href="https://docs.aws.amazon.com/neptune/latest/userguide/gremlin-profile-api.html">Gremlin
     * profile API in Neptune</a> for details.</p>
     */
    inline Aws::IOStream& GetOutput() const { return m_output.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_output = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ExecuteGremlinProfileQueryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_output{};
    bool m_outputHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws

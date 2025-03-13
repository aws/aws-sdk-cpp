/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/CanaryRun.h>
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
namespace Synthetics
{
namespace Model
{
  class GetCanaryRunsResult
  {
  public:
    AWS_SYNTHETICS_API GetCanaryRunsResult() = default;
    AWS_SYNTHETICS_API GetCanaryRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SYNTHETICS_API GetCanaryRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of structures. Each structure contains the details of one of the
     * retrieved canary runs.</p>
     */
    inline const Aws::Vector<CanaryRun>& GetCanaryRuns() const { return m_canaryRuns; }
    template<typename CanaryRunsT = Aws::Vector<CanaryRun>>
    void SetCanaryRuns(CanaryRunsT&& value) { m_canaryRunsHasBeenSet = true; m_canaryRuns = std::forward<CanaryRunsT>(value); }
    template<typename CanaryRunsT = Aws::Vector<CanaryRun>>
    GetCanaryRunsResult& WithCanaryRuns(CanaryRunsT&& value) { SetCanaryRuns(std::forward<CanaryRunsT>(value)); return *this;}
    template<typename CanaryRunsT = CanaryRun>
    GetCanaryRunsResult& AddCanaryRuns(CanaryRunsT&& value) { m_canaryRunsHasBeenSet = true; m_canaryRuns.emplace_back(std::forward<CanaryRunsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>GetCanaryRuns</code> operation to retrieve the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetCanaryRunsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCanaryRunsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CanaryRun> m_canaryRuns;
    bool m_canaryRunsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws

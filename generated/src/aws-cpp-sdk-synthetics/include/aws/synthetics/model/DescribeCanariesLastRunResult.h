/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/CanaryLastRun.h>
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
  class DescribeCanariesLastRunResult
  {
  public:
    AWS_SYNTHETICS_API DescribeCanariesLastRunResult() = default;
    AWS_SYNTHETICS_API DescribeCanariesLastRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SYNTHETICS_API DescribeCanariesLastRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array that contains the information from the most recent run of each
     * canary.</p>
     */
    inline const Aws::Vector<CanaryLastRun>& GetCanariesLastRun() const { return m_canariesLastRun; }
    template<typename CanariesLastRunT = Aws::Vector<CanaryLastRun>>
    void SetCanariesLastRun(CanariesLastRunT&& value) { m_canariesLastRunHasBeenSet = true; m_canariesLastRun = std::forward<CanariesLastRunT>(value); }
    template<typename CanariesLastRunT = Aws::Vector<CanaryLastRun>>
    DescribeCanariesLastRunResult& WithCanariesLastRun(CanariesLastRunT&& value) { SetCanariesLastRun(std::forward<CanariesLastRunT>(value)); return *this;}
    template<typename CanariesLastRunT = CanaryLastRun>
    DescribeCanariesLastRunResult& AddCanariesLastRun(CanariesLastRunT&& value) { m_canariesLastRunHasBeenSet = true; m_canariesLastRun.emplace_back(std::forward<CanariesLastRunT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeCanariesLastRun</code> operation to retrieve
     * the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeCanariesLastRunResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCanariesLastRunResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CanaryLastRun> m_canariesLastRun;
    bool m_canariesLastRunHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/MapRunListItem.h>
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
namespace SFN
{
namespace Model
{
  class ListMapRunsResult
  {
  public:
    AWS_SFN_API ListMapRunsResult() = default;
    AWS_SFN_API ListMapRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API ListMapRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array that lists information related to a Map Run, such as the Amazon
     * Resource Name (ARN) of the Map Run and the ARN of the state machine that started
     * the Map Run.</p>
     */
    inline const Aws::Vector<MapRunListItem>& GetMapRuns() const { return m_mapRuns; }
    template<typename MapRunsT = Aws::Vector<MapRunListItem>>
    void SetMapRuns(MapRunsT&& value) { m_mapRunsHasBeenSet = true; m_mapRuns = std::forward<MapRunsT>(value); }
    template<typename MapRunsT = Aws::Vector<MapRunListItem>>
    ListMapRunsResult& WithMapRuns(MapRunsT&& value) { SetMapRuns(std::forward<MapRunsT>(value)); return *this;}
    template<typename MapRunsT = MapRunListItem>
    ListMapRunsResult& AddMapRuns(MapRunsT&& value) { m_mapRunsHasBeenSet = true; m_mapRuns.emplace_back(std::forward<MapRunsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken</i>
     * error.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMapRunsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMapRunsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MapRunListItem> m_mapRuns;
    bool m_mapRunsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-thin-client/model/SoftwareSetSummary.h>
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
namespace WorkSpacesThinClient
{
namespace Model
{
  class ListSoftwareSetsResult
  {
  public:
    AWS_WORKSPACESTHINCLIENT_API ListSoftwareSetsResult() = default;
    AWS_WORKSPACESTHINCLIENT_API ListSoftwareSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESTHINCLIENT_API ListSoftwareSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes software sets.</p>
     */
    inline const Aws::Vector<SoftwareSetSummary>& GetSoftwareSets() const { return m_softwareSets; }
    template<typename SoftwareSetsT = Aws::Vector<SoftwareSetSummary>>
    void SetSoftwareSets(SoftwareSetsT&& value) { m_softwareSetsHasBeenSet = true; m_softwareSets = std::forward<SoftwareSetsT>(value); }
    template<typename SoftwareSetsT = Aws::Vector<SoftwareSetSummary>>
    ListSoftwareSetsResult& WithSoftwareSets(SoftwareSetsT&& value) { SetSoftwareSets(std::forward<SoftwareSetsT>(value)); return *this;}
    template<typename SoftwareSetsT = SoftwareSetSummary>
    ListSoftwareSetsResult& AddSoftwareSets(SoftwareSetsT&& value) { m_softwareSetsHasBeenSet = true; m_softwareSets.emplace_back(std::forward<SoftwareSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken
     * error</i>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSoftwareSetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSoftwareSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SoftwareSetSummary> m_softwareSets;
    bool m_softwareSetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws

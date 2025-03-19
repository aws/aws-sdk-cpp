/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/ShareInvitationSummary.h>
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
namespace WellArchitected
{
namespace Model
{
  /**
   * <p>Input for List Share Invitations</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListShareInvitationsOutput">AWS
   * API Reference</a></p>
   */
  class ListShareInvitationsResult
  {
  public:
    AWS_WELLARCHITECTED_API ListShareInvitationsResult() = default;
    AWS_WELLARCHITECTED_API ListShareInvitationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListShareInvitationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of share invitation summaries in a workload.</p>
     */
    inline const Aws::Vector<ShareInvitationSummary>& GetShareInvitationSummaries() const { return m_shareInvitationSummaries; }
    template<typename ShareInvitationSummariesT = Aws::Vector<ShareInvitationSummary>>
    void SetShareInvitationSummaries(ShareInvitationSummariesT&& value) { m_shareInvitationSummariesHasBeenSet = true; m_shareInvitationSummaries = std::forward<ShareInvitationSummariesT>(value); }
    template<typename ShareInvitationSummariesT = Aws::Vector<ShareInvitationSummary>>
    ListShareInvitationsResult& WithShareInvitationSummaries(ShareInvitationSummariesT&& value) { SetShareInvitationSummaries(std::forward<ShareInvitationSummariesT>(value)); return *this;}
    template<typename ShareInvitationSummariesT = ShareInvitationSummary>
    ListShareInvitationsResult& AddShareInvitationSummaries(ShareInvitationSummariesT&& value) { m_shareInvitationSummariesHasBeenSet = true; m_shareInvitationSummaries.emplace_back(std::forward<ShareInvitationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListShareInvitationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListShareInvitationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ShareInvitationSummary> m_shareInvitationSummaries;
    bool m_shareInvitationSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/VoteSummary.h>
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
namespace ManagedBlockchain
{
namespace Model
{
  class ListProposalVotesResult
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API ListProposalVotesResult() = default;
    AWS_MANAGEDBLOCKCHAIN_API ListProposalVotesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAIN_API ListProposalVotesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of votes. </p>
     */
    inline const Aws::Vector<VoteSummary>& GetProposalVotes() const { return m_proposalVotes; }
    template<typename ProposalVotesT = Aws::Vector<VoteSummary>>
    void SetProposalVotes(ProposalVotesT&& value) { m_proposalVotesHasBeenSet = true; m_proposalVotes = std::forward<ProposalVotesT>(value); }
    template<typename ProposalVotesT = Aws::Vector<VoteSummary>>
    ListProposalVotesResult& WithProposalVotes(ProposalVotesT&& value) { SetProposalVotes(std::forward<ProposalVotesT>(value)); return *this;}
    template<typename ProposalVotesT = VoteSummary>
    ListProposalVotesResult& AddProposalVotes(ProposalVotesT&& value) { m_proposalVotesHasBeenSet = true; m_proposalVotes.emplace_back(std::forward<ProposalVotesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProposalVotesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProposalVotesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VoteSummary> m_proposalVotes;
    bool m_proposalVotesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws

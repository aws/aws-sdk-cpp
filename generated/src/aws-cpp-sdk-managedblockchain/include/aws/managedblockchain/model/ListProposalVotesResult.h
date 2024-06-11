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
    AWS_MANAGEDBLOCKCHAIN_API ListProposalVotesResult();
    AWS_MANAGEDBLOCKCHAIN_API ListProposalVotesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAIN_API ListProposalVotesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The list of votes. </p>
     */
    inline const Aws::Vector<VoteSummary>& GetProposalVotes() const{ return m_proposalVotes; }
    inline void SetProposalVotes(const Aws::Vector<VoteSummary>& value) { m_proposalVotes = value; }
    inline void SetProposalVotes(Aws::Vector<VoteSummary>&& value) { m_proposalVotes = std::move(value); }
    inline ListProposalVotesResult& WithProposalVotes(const Aws::Vector<VoteSummary>& value) { SetProposalVotes(value); return *this;}
    inline ListProposalVotesResult& WithProposalVotes(Aws::Vector<VoteSummary>&& value) { SetProposalVotes(std::move(value)); return *this;}
    inline ListProposalVotesResult& AddProposalVotes(const VoteSummary& value) { m_proposalVotes.push_back(value); return *this; }
    inline ListProposalVotesResult& AddProposalVotes(VoteSummary&& value) { m_proposalVotes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListProposalVotesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListProposalVotesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListProposalVotesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListProposalVotesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListProposalVotesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListProposalVotesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<VoteSummary> m_proposalVotes;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/ProposalSummary.h>
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
  class ListProposalsResult
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API ListProposalsResult();
    AWS_MANAGEDBLOCKCHAIN_API ListProposalsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAIN_API ListProposalsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summary of each proposal made on the network.</p>
     */
    inline const Aws::Vector<ProposalSummary>& GetProposals() const{ return m_proposals; }
    inline void SetProposals(const Aws::Vector<ProposalSummary>& value) { m_proposals = value; }
    inline void SetProposals(Aws::Vector<ProposalSummary>&& value) { m_proposals = std::move(value); }
    inline ListProposalsResult& WithProposals(const Aws::Vector<ProposalSummary>& value) { SetProposals(value); return *this;}
    inline ListProposalsResult& WithProposals(Aws::Vector<ProposalSummary>&& value) { SetProposals(std::move(value)); return *this;}
    inline ListProposalsResult& AddProposals(const ProposalSummary& value) { m_proposals.push_back(value); return *this; }
    inline ListProposalsResult& AddProposals(ProposalSummary&& value) { m_proposals.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListProposalsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListProposalsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListProposalsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListProposalsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListProposalsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListProposalsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ProposalSummary> m_proposals;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws

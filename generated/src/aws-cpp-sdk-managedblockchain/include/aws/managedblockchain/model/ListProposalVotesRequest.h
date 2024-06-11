/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/ManagedBlockchainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ManagedBlockchain
{
namespace Model
{

  /**
   */
  class ListProposalVotesRequest : public ManagedBlockchainRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API ListProposalVotesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProposalVotes"; }

    AWS_MANAGEDBLOCKCHAIN_API Aws::String SerializePayload() const override;

    AWS_MANAGEDBLOCKCHAIN_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> The unique identifier of the network. </p>
     */
    inline const Aws::String& GetNetworkId() const{ return m_networkId; }
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
    inline void SetNetworkId(const Aws::String& value) { m_networkIdHasBeenSet = true; m_networkId = value; }
    inline void SetNetworkId(Aws::String&& value) { m_networkIdHasBeenSet = true; m_networkId = std::move(value); }
    inline void SetNetworkId(const char* value) { m_networkIdHasBeenSet = true; m_networkId.assign(value); }
    inline ListProposalVotesRequest& WithNetworkId(const Aws::String& value) { SetNetworkId(value); return *this;}
    inline ListProposalVotesRequest& WithNetworkId(Aws::String&& value) { SetNetworkId(std::move(value)); return *this;}
    inline ListProposalVotesRequest& WithNetworkId(const char* value) { SetNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the proposal. </p>
     */
    inline const Aws::String& GetProposalId() const{ return m_proposalId; }
    inline bool ProposalIdHasBeenSet() const { return m_proposalIdHasBeenSet; }
    inline void SetProposalId(const Aws::String& value) { m_proposalIdHasBeenSet = true; m_proposalId = value; }
    inline void SetProposalId(Aws::String&& value) { m_proposalIdHasBeenSet = true; m_proposalId = std::move(value); }
    inline void SetProposalId(const char* value) { m_proposalIdHasBeenSet = true; m_proposalId.assign(value); }
    inline ListProposalVotesRequest& WithProposalId(const Aws::String& value) { SetProposalId(value); return *this;}
    inline ListProposalVotesRequest& WithProposalId(Aws::String&& value) { SetProposalId(std::move(value)); return *this;}
    inline ListProposalVotesRequest& WithProposalId(const char* value) { SetProposalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of votes to return. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListProposalVotesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListProposalVotesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListProposalVotesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListProposalVotesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet = false;

    Aws::String m_proposalId;
    bool m_proposalIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws

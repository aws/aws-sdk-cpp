/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/managedblockchain/ManagedBlockchainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/MemberStatus.h>
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
  class ListMembersRequest : public ManagedBlockchainRequest
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API ListMembersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMembers"; }

    AWS_MANAGEDBLOCKCHAIN_API Aws::String SerializePayload() const override;

    AWS_MANAGEDBLOCKCHAIN_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier of the network for which to list members.</p>
     */
    inline const Aws::String& GetNetworkId() const{ return m_networkId; }
    inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
    inline void SetNetworkId(const Aws::String& value) { m_networkIdHasBeenSet = true; m_networkId = value; }
    inline void SetNetworkId(Aws::String&& value) { m_networkIdHasBeenSet = true; m_networkId = std::move(value); }
    inline void SetNetworkId(const char* value) { m_networkIdHasBeenSet = true; m_networkId.assign(value); }
    inline ListMembersRequest& WithNetworkId(const Aws::String& value) { SetNetworkId(value); return *this;}
    inline ListMembersRequest& WithNetworkId(Aws::String&& value) { SetNetworkId(std::move(value)); return *this;}
    inline ListMembersRequest& WithNetworkId(const char* value) { SetNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional name of the member to list.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ListMembersRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ListMembersRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ListMembersRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional status specifier. If provided, only members currently in this
     * status are listed.</p>
     */
    inline const MemberStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const MemberStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(MemberStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListMembersRequest& WithStatus(const MemberStatus& value) { SetStatus(value); return *this;}
    inline ListMembersRequest& WithStatus(MemberStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional Boolean value. If provided, the request is limited either to
     * members that the current Amazon Web Services account owns (<code>true</code>) or
     * that other Amazon Web Services accountsn own (<code>false</code>). If omitted,
     * all members are listed.</p>
     */
    inline bool GetIsOwned() const{ return m_isOwned; }
    inline bool IsOwnedHasBeenSet() const { return m_isOwnedHasBeenSet; }
    inline void SetIsOwned(bool value) { m_isOwnedHasBeenSet = true; m_isOwned = value; }
    inline ListMembersRequest& WithIsOwned(bool value) { SetIsOwned(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of members to return in the request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListMembersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListMembersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMembersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMembersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_networkId;
    bool m_networkIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    MemberStatus m_status;
    bool m_statusHasBeenSet = false;

    bool m_isOwned;
    bool m_isOwnedHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws

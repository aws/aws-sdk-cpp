/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/SSMContactsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-contacts/model/ContactType.h>
#include <utility>

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

  /**
   */
  class ListContactsRequest : public SSMContactsRequest
  {
  public:
    AWS_SSMCONTACTS_API ListContactsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListContacts"; }

    AWS_SSMCONTACTS_API Aws::String SerializePayload() const override;

    AWS_SSMCONTACTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListContactsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of contacts and escalation plans per page of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListContactsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to list only contacts who's aliases start with the specified prefix.</p>
     */
    inline const Aws::String& GetAliasPrefix() const { return m_aliasPrefix; }
    inline bool AliasPrefixHasBeenSet() const { return m_aliasPrefixHasBeenSet; }
    template<typename AliasPrefixT = Aws::String>
    void SetAliasPrefix(AliasPrefixT&& value) { m_aliasPrefixHasBeenSet = true; m_aliasPrefix = std::forward<AliasPrefixT>(value); }
    template<typename AliasPrefixT = Aws::String>
    ListContactsRequest& WithAliasPrefix(AliasPrefixT&& value) { SetAliasPrefix(std::forward<AliasPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of contact.</p>
     */
    inline ContactType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ContactType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ListContactsRequest& WithType(ContactType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_aliasPrefix;
    bool m_aliasPrefixHasBeenSet = false;

    ContactType m_type{ContactType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws

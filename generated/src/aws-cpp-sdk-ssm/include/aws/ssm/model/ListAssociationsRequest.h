/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/AssociationFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class ListAssociationsRequest : public SSMRequest
  {
  public:
    AWS_SSM_API ListAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssociations"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * results.</p>  <p>Filtering associations using the <code>InstanceID</code>
     * attribute only returns legacy associations created using the
     * <code>InstanceID</code> attribute. Associations targeting the managed node that
     * are part of the Target Attributes <code>ResourceGroup</code> or
     * <code>Tags</code> aren't returned.</p> 
     */
    inline const Aws::Vector<AssociationFilter>& GetAssociationFilterList() const{ return m_associationFilterList; }
    inline bool AssociationFilterListHasBeenSet() const { return m_associationFilterListHasBeenSet; }
    inline void SetAssociationFilterList(const Aws::Vector<AssociationFilter>& value) { m_associationFilterListHasBeenSet = true; m_associationFilterList = value; }
    inline void SetAssociationFilterList(Aws::Vector<AssociationFilter>&& value) { m_associationFilterListHasBeenSet = true; m_associationFilterList = std::move(value); }
    inline ListAssociationsRequest& WithAssociationFilterList(const Aws::Vector<AssociationFilter>& value) { SetAssociationFilterList(value); return *this;}
    inline ListAssociationsRequest& WithAssociationFilterList(Aws::Vector<AssociationFilter>&& value) { SetAssociationFilterList(std::move(value)); return *this;}
    inline ListAssociationsRequest& AddAssociationFilterList(const AssociationFilter& value) { m_associationFilterListHasBeenSet = true; m_associationFilterList.push_back(value); return *this; }
    inline ListAssociationsRequest& AddAssociationFilterList(AssociationFilter&& value) { m_associationFilterListHasBeenSet = true; m_associationFilterList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssociationFilter> m_associationFilterList;
    bool m_associationFilterListHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

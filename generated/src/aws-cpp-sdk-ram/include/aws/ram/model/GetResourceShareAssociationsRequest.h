/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/RAMRequest.h>
#include <aws/ram/model/ResourceShareAssociationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/ResourceShareAssociationStatus.h>
#include <utility>

namespace Aws
{
namespace RAM
{
namespace Model
{

  /**
   */
  class GetResourceShareAssociationsRequest : public RAMRequest
  {
  public:
    AWS_RAM_API GetResourceShareAssociationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceShareAssociations"; }

    AWS_RAM_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies whether you want to retrieve the associations that involve a
     * specified resource or principal.</p> <ul> <li> <p> <code>PRINCIPAL</code> – list
     * the principals whose associations you want to see.</p> </li> <li> <p>
     * <code>RESOURCE</code> – list the resources whose associations you want to
     * see.</p> </li> </ul>
     */
    inline ResourceShareAssociationType GetAssociationType() const { return m_associationType; }
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }
    inline void SetAssociationType(ResourceShareAssociationType value) { m_associationTypeHasBeenSet = true; m_associationType = value; }
    inline GetResourceShareAssociationsRequest& WithAssociationType(ResourceShareAssociationType value) { SetAssociationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resource share whose associations you want to
     * retrieve.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceShareArns() const { return m_resourceShareArns; }
    inline bool ResourceShareArnsHasBeenSet() const { return m_resourceShareArnsHasBeenSet; }
    template<typename ResourceShareArnsT = Aws::Vector<Aws::String>>
    void SetResourceShareArns(ResourceShareArnsT&& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns = std::forward<ResourceShareArnsT>(value); }
    template<typename ResourceShareArnsT = Aws::Vector<Aws::String>>
    GetResourceShareAssociationsRequest& WithResourceShareArns(ResourceShareArnsT&& value) { SetResourceShareArns(std::forward<ResourceShareArnsT>(value)); return *this;}
    template<typename ResourceShareArnsT = Aws::String>
    GetResourceShareAssociationsRequest& AddResourceShareArns(ResourceShareArnsT&& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns.emplace_back(std::forward<ResourceShareArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of a resource whose resource shares you want to
     * retrieve.</p> <p>You cannot specify this parameter if the association type is
     * <code>PRINCIPAL</code>.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    GetResourceShareAssociationsRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the ID of the principal whose resource shares you want to retrieve.
     * This can be an Amazon Web Services account ID, an organization ID, an
     * organizational unit ID, or the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of an individual IAM role or user.</p> <p>You cannot
     * specify this parameter if the association type is <code>RESOURCE</code>.</p>
     */
    inline const Aws::String& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = Aws::String>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = Aws::String>
    GetResourceShareAssociationsRequest& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that you want to retrieve only associations that have this
     * status.</p>
     */
    inline ResourceShareAssociationStatus GetAssociationStatus() const { return m_associationStatus; }
    inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }
    inline void SetAssociationStatus(ResourceShareAssociationStatus value) { m_associationStatusHasBeenSet = true; m_associationStatus = value; }
    inline GetResourceShareAssociationsRequest& WithAssociationStatus(ResourceShareAssociationStatus value) { SetAssociationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetResourceShareAssociationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the total number of results that you want included on each page of
     * the response. If you do not include this parameter, it defaults to a value that
     * is specific to the operation. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> response element is returned with a value
     * (not null). Include the specified value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetResourceShareAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    ResourceShareAssociationType m_associationType{ResourceShareAssociationType::NOT_SET};
    bool m_associationTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceShareArns;
    bool m_resourceShareArnsHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;

    ResourceShareAssociationStatus m_associationStatus{ResourceShareAssociationStatus::NOT_SET};
    bool m_associationStatusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/RAMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ram/model/ResourceShareStatus.h>
#include <aws/ram/model/ResourceOwner.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/TagFilter.h>
#include <utility>

namespace Aws
{
namespace RAM
{
namespace Model
{

  /**
   */
  class GetResourceSharesRequest : public RAMRequest
  {
  public:
    AWS_RAM_API GetResourceSharesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceShares"; }

    AWS_RAM_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of individual resource shares that you want
     * information about.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceShareArns() const { return m_resourceShareArns; }
    inline bool ResourceShareArnsHasBeenSet() const { return m_resourceShareArnsHasBeenSet; }
    template<typename ResourceShareArnsT = Aws::Vector<Aws::String>>
    void SetResourceShareArns(ResourceShareArnsT&& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns = std::forward<ResourceShareArnsT>(value); }
    template<typename ResourceShareArnsT = Aws::Vector<Aws::String>>
    GetResourceSharesRequest& WithResourceShareArns(ResourceShareArnsT&& value) { SetResourceShareArns(std::forward<ResourceShareArnsT>(value)); return *this;}
    template<typename ResourceShareArnsT = Aws::String>
    GetResourceSharesRequest& AddResourceShareArns(ResourceShareArnsT&& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns.emplace_back(std::forward<ResourceShareArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that have this status.</p>
     */
    inline ResourceShareStatus GetResourceShareStatus() const { return m_resourceShareStatus; }
    inline bool ResourceShareStatusHasBeenSet() const { return m_resourceShareStatusHasBeenSet; }
    inline void SetResourceShareStatus(ResourceShareStatus value) { m_resourceShareStatusHasBeenSet = true; m_resourceShareStatus = value; }
    inline GetResourceSharesRequest& WithResourceShareStatus(ResourceShareStatus value) { SetResourceShareStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that match the following:</p> <ul> <li> <p> <b> <code>SELF</code> </b> –
     * resource shares that your account shares with other accounts</p> </li> <li> <p>
     * <b> <code>OTHER-ACCOUNTS</code> </b> – resource shares that other accounts share
     * with your account</p> </li> </ul>
     */
    inline ResourceOwner GetResourceOwner() const { return m_resourceOwner; }
    inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }
    inline void SetResourceOwner(ResourceOwner value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = value; }
    inline GetResourceSharesRequest& WithResourceOwner(ResourceOwner value) { SetResourceOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of an individual resource share that you want to retrieve
     * details about.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetResourceSharesRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that match the specified tag keys and values.</p>
     */
    inline const Aws::Vector<TagFilter>& GetTagFilters() const { return m_tagFilters; }
    inline bool TagFiltersHasBeenSet() const { return m_tagFiltersHasBeenSet; }
    template<typename TagFiltersT = Aws::Vector<TagFilter>>
    void SetTagFilters(TagFiltersT&& value) { m_tagFiltersHasBeenSet = true; m_tagFilters = std::forward<TagFiltersT>(value); }
    template<typename TagFiltersT = Aws::Vector<TagFilter>>
    GetResourceSharesRequest& WithTagFilters(TagFiltersT&& value) { SetTagFilters(std::forward<TagFiltersT>(value)); return *this;}
    template<typename TagFiltersT = TagFilter>
    GetResourceSharesRequest& AddTagFilters(TagFiltersT&& value) { m_tagFiltersHasBeenSet = true; m_tagFilters.emplace_back(std::forward<TagFiltersT>(value)); return *this; }
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
    GetResourceSharesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
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
    inline GetResourceSharesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that use the managed permission with this <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a>.</p>
     */
    inline const Aws::String& GetPermissionArn() const { return m_permissionArn; }
    inline bool PermissionArnHasBeenSet() const { return m_permissionArnHasBeenSet; }
    template<typename PermissionArnT = Aws::String>
    void SetPermissionArn(PermissionArnT&& value) { m_permissionArnHasBeenSet = true; m_permissionArn = std::forward<PermissionArnT>(value); }
    template<typename PermissionArnT = Aws::String>
    GetResourceSharesRequest& WithPermissionArn(PermissionArnT&& value) { SetPermissionArn(std::forward<PermissionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that you want to retrieve details for only those resource shares
     * that use the specified version of the managed permission.</p>
     */
    inline int GetPermissionVersion() const { return m_permissionVersion; }
    inline bool PermissionVersionHasBeenSet() const { return m_permissionVersionHasBeenSet; }
    inline void SetPermissionVersion(int value) { m_permissionVersionHasBeenSet = true; m_permissionVersion = value; }
    inline GetResourceSharesRequest& WithPermissionVersion(int value) { SetPermissionVersion(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_resourceShareArns;
    bool m_resourceShareArnsHasBeenSet = false;

    ResourceShareStatus m_resourceShareStatus{ResourceShareStatus::NOT_SET};
    bool m_resourceShareStatusHasBeenSet = false;

    ResourceOwner m_resourceOwner{ResourceOwner::NOT_SET};
    bool m_resourceOwnerHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<TagFilter> m_tagFilters;
    bool m_tagFiltersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_permissionArn;
    bool m_permissionArnHasBeenSet = false;

    int m_permissionVersion{0};
    bool m_permissionVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws

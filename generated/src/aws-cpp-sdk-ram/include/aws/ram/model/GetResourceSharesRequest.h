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
    AWS_RAM_API GetResourceSharesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceShares"; }

    AWS_RAM_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of individual resource shares that you want
     * information about.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceShareArns() const{ return m_resourceShareArns; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of individual resource shares that you want
     * information about.</p>
     */
    inline bool ResourceShareArnsHasBeenSet() const { return m_resourceShareArnsHasBeenSet; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of individual resource shares that you want
     * information about.</p>
     */
    inline void SetResourceShareArns(const Aws::Vector<Aws::String>& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns = value; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of individual resource shares that you want
     * information about.</p>
     */
    inline void SetResourceShareArns(Aws::Vector<Aws::String>&& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns = std::move(value); }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of individual resource shares that you want
     * information about.</p>
     */
    inline GetResourceSharesRequest& WithResourceShareArns(const Aws::Vector<Aws::String>& value) { SetResourceShareArns(value); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of individual resource shares that you want
     * information about.</p>
     */
    inline GetResourceSharesRequest& WithResourceShareArns(Aws::Vector<Aws::String>&& value) { SetResourceShareArns(std::move(value)); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of individual resource shares that you want
     * information about.</p>
     */
    inline GetResourceSharesRequest& AddResourceShareArns(const Aws::String& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns.push_back(value); return *this; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of individual resource shares that you want
     * information about.</p>
     */
    inline GetResourceSharesRequest& AddResourceShareArns(Aws::String&& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of individual resource shares that you want
     * information about.</p>
     */
    inline GetResourceSharesRequest& AddResourceShareArns(const char* value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns.push_back(value); return *this; }


    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that have this status.</p>
     */
    inline const ResourceShareStatus& GetResourceShareStatus() const{ return m_resourceShareStatus; }

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that have this status.</p>
     */
    inline bool ResourceShareStatusHasBeenSet() const { return m_resourceShareStatusHasBeenSet; }

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that have this status.</p>
     */
    inline void SetResourceShareStatus(const ResourceShareStatus& value) { m_resourceShareStatusHasBeenSet = true; m_resourceShareStatus = value; }

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that have this status.</p>
     */
    inline void SetResourceShareStatus(ResourceShareStatus&& value) { m_resourceShareStatusHasBeenSet = true; m_resourceShareStatus = std::move(value); }

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that have this status.</p>
     */
    inline GetResourceSharesRequest& WithResourceShareStatus(const ResourceShareStatus& value) { SetResourceShareStatus(value); return *this;}

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that have this status.</p>
     */
    inline GetResourceSharesRequest& WithResourceShareStatus(ResourceShareStatus&& value) { SetResourceShareStatus(std::move(value)); return *this;}


    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that match the following:</p> <ul> <li> <p> <b> <code>SELF</code> </b> –
     * resource shares that your account shares with other accounts</p> </li> <li> <p>
     * <b> <code>OTHER-ACCOUNTS</code> </b> – resource shares that other accounts share
     * with your account</p> </li> </ul>
     */
    inline const ResourceOwner& GetResourceOwner() const{ return m_resourceOwner; }

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that match the following:</p> <ul> <li> <p> <b> <code>SELF</code> </b> –
     * resource shares that your account shares with other accounts</p> </li> <li> <p>
     * <b> <code>OTHER-ACCOUNTS</code> </b> – resource shares that other accounts share
     * with your account</p> </li> </ul>
     */
    inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that match the following:</p> <ul> <li> <p> <b> <code>SELF</code> </b> –
     * resource shares that your account shares with other accounts</p> </li> <li> <p>
     * <b> <code>OTHER-ACCOUNTS</code> </b> – resource shares that other accounts share
     * with your account</p> </li> </ul>
     */
    inline void SetResourceOwner(const ResourceOwner& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = value; }

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that match the following:</p> <ul> <li> <p> <b> <code>SELF</code> </b> –
     * resource shares that your account shares with other accounts</p> </li> <li> <p>
     * <b> <code>OTHER-ACCOUNTS</code> </b> – resource shares that other accounts share
     * with your account</p> </li> </ul>
     */
    inline void SetResourceOwner(ResourceOwner&& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = std::move(value); }

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that match the following:</p> <ul> <li> <p> <b> <code>SELF</code> </b> –
     * resource shares that your account shares with other accounts</p> </li> <li> <p>
     * <b> <code>OTHER-ACCOUNTS</code> </b> – resource shares that other accounts share
     * with your account</p> </li> </ul>
     */
    inline GetResourceSharesRequest& WithResourceOwner(const ResourceOwner& value) { SetResourceOwner(value); return *this;}

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that match the following:</p> <ul> <li> <p> <b> <code>SELF</code> </b> –
     * resource shares that your account shares with other accounts</p> </li> <li> <p>
     * <b> <code>OTHER-ACCOUNTS</code> </b> – resource shares that other accounts share
     * with your account</p> </li> </ul>
     */
    inline GetResourceSharesRequest& WithResourceOwner(ResourceOwner&& value) { SetResourceOwner(std::move(value)); return *this;}


    /**
     * <p>Specifies the name of an individual resource share that you want to retrieve
     * details about.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Specifies the name of an individual resource share that you want to retrieve
     * details about.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specifies the name of an individual resource share that you want to retrieve
     * details about.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies the name of an individual resource share that you want to retrieve
     * details about.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specifies the name of an individual resource share that you want to retrieve
     * details about.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Specifies the name of an individual resource share that you want to retrieve
     * details about.</p>
     */
    inline GetResourceSharesRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Specifies the name of an individual resource share that you want to retrieve
     * details about.</p>
     */
    inline GetResourceSharesRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of an individual resource share that you want to retrieve
     * details about.</p>
     */
    inline GetResourceSharesRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that match the specified tag keys and values.</p>
     */
    inline const Aws::Vector<TagFilter>& GetTagFilters() const{ return m_tagFilters; }

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that match the specified tag keys and values.</p>
     */
    inline bool TagFiltersHasBeenSet() const { return m_tagFiltersHasBeenSet; }

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that match the specified tag keys and values.</p>
     */
    inline void SetTagFilters(const Aws::Vector<TagFilter>& value) { m_tagFiltersHasBeenSet = true; m_tagFilters = value; }

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that match the specified tag keys and values.</p>
     */
    inline void SetTagFilters(Aws::Vector<TagFilter>&& value) { m_tagFiltersHasBeenSet = true; m_tagFilters = std::move(value); }

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that match the specified tag keys and values.</p>
     */
    inline GetResourceSharesRequest& WithTagFilters(const Aws::Vector<TagFilter>& value) { SetTagFilters(value); return *this;}

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that match the specified tag keys and values.</p>
     */
    inline GetResourceSharesRequest& WithTagFilters(Aws::Vector<TagFilter>&& value) { SetTagFilters(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that match the specified tag keys and values.</p>
     */
    inline GetResourceSharesRequest& AddTagFilters(const TagFilter& value) { m_tagFiltersHasBeenSet = true; m_tagFilters.push_back(value); return *this; }

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that match the specified tag keys and values.</p>
     */
    inline GetResourceSharesRequest& AddTagFilters(TagFilter&& value) { m_tagFiltersHasBeenSet = true; m_tagFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline GetResourceSharesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline GetResourceSharesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline GetResourceSharesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline int GetMaxResults() const{ return m_maxResults; }

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
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

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
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

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
    inline GetResourceSharesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that use the RAM permission with this <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a>.</p>
     */
    inline const Aws::String& GetPermissionArn() const{ return m_permissionArn; }

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that use the RAM permission with this <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a>.</p>
     */
    inline bool PermissionArnHasBeenSet() const { return m_permissionArnHasBeenSet; }

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that use the RAM permission with this <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a>.</p>
     */
    inline void SetPermissionArn(const Aws::String& value) { m_permissionArnHasBeenSet = true; m_permissionArn = value; }

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that use the RAM permission with this <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a>.</p>
     */
    inline void SetPermissionArn(Aws::String&& value) { m_permissionArnHasBeenSet = true; m_permissionArn = std::move(value); }

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that use the RAM permission with this <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a>.</p>
     */
    inline void SetPermissionArn(const char* value) { m_permissionArnHasBeenSet = true; m_permissionArn.assign(value); }

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that use the RAM permission with this <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a>.</p>
     */
    inline GetResourceSharesRequest& WithPermissionArn(const Aws::String& value) { SetPermissionArn(value); return *this;}

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that use the RAM permission with this <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a>.</p>
     */
    inline GetResourceSharesRequest& WithPermissionArn(Aws::String&& value) { SetPermissionArn(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to retrieve details of only those resource shares
     * that use the RAM permission with this <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a>.</p>
     */
    inline GetResourceSharesRequest& WithPermissionArn(const char* value) { SetPermissionArn(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_resourceShareArns;
    bool m_resourceShareArnsHasBeenSet = false;

    ResourceShareStatus m_resourceShareStatus;
    bool m_resourceShareStatusHasBeenSet = false;

    ResourceOwner m_resourceOwner;
    bool m_resourceOwnerHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<TagFilter> m_tagFilters;
    bool m_tagFiltersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_permissionArn;
    bool m_permissionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws

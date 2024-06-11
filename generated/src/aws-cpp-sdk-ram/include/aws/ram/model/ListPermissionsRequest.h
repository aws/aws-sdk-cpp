﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/RAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/PermissionTypeFilter.h>
#include <utility>

namespace Aws
{
namespace RAM
{
namespace Model
{

  /**
   */
  class ListPermissionsRequest : public RAMRequest
  {
  public:
    AWS_RAM_API ListPermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPermissions"; }

    AWS_RAM_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies that you want to list only those permissions that apply to the
     * specified resource type. This parameter is not case sensitive.</p> <p>For
     * example, to list only permissions that apply to Amazon EC2 subnets, specify
     * <code>ec2:subnet</code>. You can use the <a>ListResourceTypes</a> operation to
     * get the specific string required.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline ListPermissionsRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline ListPermissionsRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline ListPermissionsRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListPermissionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPermissionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPermissionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
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
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListPermissionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that you want to list only permissions of this type:</p> <ul> <li>
     * <p> <code>AWS</code> – returns only Amazon Web Services managed permissions.</p>
     * </li> <li> <p> <code>LOCAL</code> – returns only customer managed
     * permissions</p> </li> <li> <p> <code>ALL</code> – returns both Amazon Web
     * Services managed permissions and customer managed permissions.</p> </li> </ul>
     * <p>If you don't specify this parameter, the default is <code>All</code>.</p>
     */
    inline const PermissionTypeFilter& GetPermissionType() const{ return m_permissionType; }
    inline bool PermissionTypeHasBeenSet() const { return m_permissionTypeHasBeenSet; }
    inline void SetPermissionType(const PermissionTypeFilter& value) { m_permissionTypeHasBeenSet = true; m_permissionType = value; }
    inline void SetPermissionType(PermissionTypeFilter&& value) { m_permissionTypeHasBeenSet = true; m_permissionType = std::move(value); }
    inline ListPermissionsRequest& WithPermissionType(const PermissionTypeFilter& value) { SetPermissionType(value); return *this;}
    inline ListPermissionsRequest& WithPermissionType(PermissionTypeFilter&& value) { SetPermissionType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    PermissionTypeFilter m_permissionType;
    bool m_permissionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws

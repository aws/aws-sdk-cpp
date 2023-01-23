/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/rolesanywhere/RolesAnywhereRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace RolesAnywhere
{
namespace Model
{

  /**
   */
  class ListCrlsRequest : public RolesAnywhereRequest
  {
  public:
    AWS_ROLESANYWHERE_API ListCrlsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCrls"; }

    AWS_ROLESANYWHERE_API Aws::String SerializePayload() const override;

    AWS_ROLESANYWHERE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline ListCrlsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline ListCrlsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where the output should continue from, if a previous
     * operation did not show all results. To get the next results, call the operation
     * again with this value.</p>
     */
    inline ListCrlsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The number of resources in the paginated list. </p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The number of resources in the paginated list. </p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The number of resources in the paginated list. </p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The number of resources in the paginated list. </p>
     */
    inline ListCrlsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws

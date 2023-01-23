/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/SyntheticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Synthetics
{
namespace Model
{

  /**
   */
  class ListGroupResourcesRequest : public SyntheticsRequest
  {
  public:
    AWS_SYNTHETICS_API ListGroupResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListGroupResources"; }

    AWS_SYNTHETICS_API Aws::String SerializePayload() const override;


    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent operation to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent operation to retrieve the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent operation to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent operation to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent operation to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent operation to retrieve the next set of results.</p>
     */
    inline ListGroupResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent operation to retrieve the next set of results.</p>
     */
    inline ListGroupResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent operation to retrieve the next set of results.</p>
     */
    inline ListGroupResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specify this parameter to limit how many canary ARNs are returned each time
     * you use the <code>ListGroupResources</code> operation. If you omit this
     * parameter, the default of 20 is used.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specify this parameter to limit how many canary ARNs are returned each time
     * you use the <code>ListGroupResources</code> operation. If you omit this
     * parameter, the default of 20 is used.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specify this parameter to limit how many canary ARNs are returned each time
     * you use the <code>ListGroupResources</code> operation. If you omit this
     * parameter, the default of 20 is used.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specify this parameter to limit how many canary ARNs are returned each time
     * you use the <code>ListGroupResources</code> operation. If you omit this
     * parameter, the default of 20 is used.</p>
     */
    inline ListGroupResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Specifies the group to return information for. You can specify the group
     * name, the ARN, or the group ID as the <code>GroupIdentifier</code>.</p>
     */
    inline const Aws::String& GetGroupIdentifier() const{ return m_groupIdentifier; }

    /**
     * <p>Specifies the group to return information for. You can specify the group
     * name, the ARN, or the group ID as the <code>GroupIdentifier</code>.</p>
     */
    inline bool GroupIdentifierHasBeenSet() const { return m_groupIdentifierHasBeenSet; }

    /**
     * <p>Specifies the group to return information for. You can specify the group
     * name, the ARN, or the group ID as the <code>GroupIdentifier</code>.</p>
     */
    inline void SetGroupIdentifier(const Aws::String& value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier = value; }

    /**
     * <p>Specifies the group to return information for. You can specify the group
     * name, the ARN, or the group ID as the <code>GroupIdentifier</code>.</p>
     */
    inline void SetGroupIdentifier(Aws::String&& value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier = std::move(value); }

    /**
     * <p>Specifies the group to return information for. You can specify the group
     * name, the ARN, or the group ID as the <code>GroupIdentifier</code>.</p>
     */
    inline void SetGroupIdentifier(const char* value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier.assign(value); }

    /**
     * <p>Specifies the group to return information for. You can specify the group
     * name, the ARN, or the group ID as the <code>GroupIdentifier</code>.</p>
     */
    inline ListGroupResourcesRequest& WithGroupIdentifier(const Aws::String& value) { SetGroupIdentifier(value); return *this;}

    /**
     * <p>Specifies the group to return information for. You can specify the group
     * name, the ARN, or the group ID as the <code>GroupIdentifier</code>.</p>
     */
    inline ListGroupResourcesRequest& WithGroupIdentifier(Aws::String&& value) { SetGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specifies the group to return information for. You can specify the group
     * name, the ARN, or the group ID as the <code>GroupIdentifier</code>.</p>
     */
    inline ListGroupResourcesRequest& WithGroupIdentifier(const char* value) { SetGroupIdentifier(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_groupIdentifier;
    bool m_groupIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws

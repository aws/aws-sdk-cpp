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
  class DescribeRuntimeVersionsRequest : public SyntheticsRequest
  {
  public:
    AWS_SYNTHETICS_API DescribeRuntimeVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRuntimeVersions"; }

    AWS_SYNTHETICS_API Aws::String SerializePayload() const override;


    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeRuntimeVersions</code> operation to retrieve
     * the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeRuntimeVersions</code> operation to retrieve
     * the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeRuntimeVersions</code> operation to retrieve
     * the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeRuntimeVersions</code> operation to retrieve
     * the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeRuntimeVersions</code> operation to retrieve
     * the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeRuntimeVersions</code> operation to retrieve
     * the next set of results.</p>
     */
    inline DescribeRuntimeVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeRuntimeVersions</code> operation to retrieve
     * the next set of results.</p>
     */
    inline DescribeRuntimeVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeRuntimeVersions</code> operation to retrieve
     * the next set of results.</p>
     */
    inline DescribeRuntimeVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specify this parameter to limit how many runs are returned each time you use
     * the <code>DescribeRuntimeVersions</code> operation. If you omit this parameter,
     * the default of 100 is used.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specify this parameter to limit how many runs are returned each time you use
     * the <code>DescribeRuntimeVersions</code> operation. If you omit this parameter,
     * the default of 100 is used.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specify this parameter to limit how many runs are returned each time you use
     * the <code>DescribeRuntimeVersions</code> operation. If you omit this parameter,
     * the default of 100 is used.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specify this parameter to limit how many runs are returned each time you use
     * the <code>DescribeRuntimeVersions</code> operation. If you omit this parameter,
     * the default of 100 is used.</p>
     */
    inline DescribeRuntimeVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws

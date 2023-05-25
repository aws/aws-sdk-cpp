/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3outposts/S3Outposts_EXPORTS.h>
#include <aws/s3outposts/S3OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace S3Outposts
{
namespace Model
{

  /**
   */
  class ListOutpostsWithS3Request : public S3OutpostsRequest
  {
  public:
    AWS_S3OUTPOSTS_API ListOutpostsWithS3Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOutpostsWithS3"; }

    AWS_S3OUTPOSTS_API Aws::String SerializePayload() const override;

    AWS_S3OUTPOSTS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>When you can get additional results from the <code>ListOutpostsWithS3</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional Outposts.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When you can get additional results from the <code>ListOutpostsWithS3</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional Outposts.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>When you can get additional results from the <code>ListOutpostsWithS3</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional Outposts.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>When you can get additional results from the <code>ListOutpostsWithS3</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional Outposts.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>When you can get additional results from the <code>ListOutpostsWithS3</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional Outposts.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>When you can get additional results from the <code>ListOutpostsWithS3</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional Outposts.</p>
     */
    inline ListOutpostsWithS3Request& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When you can get additional results from the <code>ListOutpostsWithS3</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional Outposts.</p>
     */
    inline ListOutpostsWithS3Request& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When you can get additional results from the <code>ListOutpostsWithS3</code>
     * call, a <code>NextToken</code> parameter is returned in the output. You can then
     * pass in a subsequent command to the <code>NextToken</code> parameter to continue
     * listing additional Outposts.</p>
     */
    inline ListOutpostsWithS3Request& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of Outposts to return. The limit is 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of Outposts to return. The limit is 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of Outposts to return. The limit is 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of Outposts to return. The limit is 100.</p>
     */
    inline ListOutpostsWithS3Request& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Outposts
} // namespace Aws

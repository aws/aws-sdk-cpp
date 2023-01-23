/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/ImageType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class DescribeWorkspaceImagesRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API DescribeWorkspaceImagesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeWorkspaceImages"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the image.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageIds() const{ return m_imageIds; }

    /**
     * <p>The identifier of the image.</p>
     */
    inline bool ImageIdsHasBeenSet() const { return m_imageIdsHasBeenSet; }

    /**
     * <p>The identifier of the image.</p>
     */
    inline void SetImageIds(const Aws::Vector<Aws::String>& value) { m_imageIdsHasBeenSet = true; m_imageIds = value; }

    /**
     * <p>The identifier of the image.</p>
     */
    inline void SetImageIds(Aws::Vector<Aws::String>&& value) { m_imageIdsHasBeenSet = true; m_imageIds = std::move(value); }

    /**
     * <p>The identifier of the image.</p>
     */
    inline DescribeWorkspaceImagesRequest& WithImageIds(const Aws::Vector<Aws::String>& value) { SetImageIds(value); return *this;}

    /**
     * <p>The identifier of the image.</p>
     */
    inline DescribeWorkspaceImagesRequest& WithImageIds(Aws::Vector<Aws::String>&& value) { SetImageIds(std::move(value)); return *this;}

    /**
     * <p>The identifier of the image.</p>
     */
    inline DescribeWorkspaceImagesRequest& AddImageIds(const Aws::String& value) { m_imageIdsHasBeenSet = true; m_imageIds.push_back(value); return *this; }

    /**
     * <p>The identifier of the image.</p>
     */
    inline DescribeWorkspaceImagesRequest& AddImageIds(Aws::String&& value) { m_imageIdsHasBeenSet = true; m_imageIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifier of the image.</p>
     */
    inline DescribeWorkspaceImagesRequest& AddImageIds(const char* value) { m_imageIdsHasBeenSet = true; m_imageIds.push_back(value); return *this; }


    /**
     * <p>The type (owned or shared) of the image.</p>
     */
    inline const ImageType& GetImageType() const{ return m_imageType; }

    /**
     * <p>The type (owned or shared) of the image.</p>
     */
    inline bool ImageTypeHasBeenSet() const { return m_imageTypeHasBeenSet; }

    /**
     * <p>The type (owned or shared) of the image.</p>
     */
    inline void SetImageType(const ImageType& value) { m_imageTypeHasBeenSet = true; m_imageType = value; }

    /**
     * <p>The type (owned or shared) of the image.</p>
     */
    inline void SetImageType(ImageType&& value) { m_imageTypeHasBeenSet = true; m_imageType = std::move(value); }

    /**
     * <p>The type (owned or shared) of the image.</p>
     */
    inline DescribeWorkspaceImagesRequest& WithImageType(const ImageType& value) { SetImageType(value); return *this;}

    /**
     * <p>The type (owned or shared) of the image.</p>
     */
    inline DescribeWorkspaceImagesRequest& WithImageType(ImageType&& value) { SetImageType(std::move(value)); return *this;}


    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline DescribeWorkspaceImagesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline DescribeWorkspaceImagesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline DescribeWorkspaceImagesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline DescribeWorkspaceImagesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_imageIds;
    bool m_imageIdsHasBeenSet = false;

    ImageType m_imageType;
    bool m_imageTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws

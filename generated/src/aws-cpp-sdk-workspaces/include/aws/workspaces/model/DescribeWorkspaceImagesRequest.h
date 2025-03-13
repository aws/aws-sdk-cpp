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
    AWS_WORKSPACES_API DescribeWorkspaceImagesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeWorkspaceImages"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the image.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageIds() const { return m_imageIds; }
    inline bool ImageIdsHasBeenSet() const { return m_imageIdsHasBeenSet; }
    template<typename ImageIdsT = Aws::Vector<Aws::String>>
    void SetImageIds(ImageIdsT&& value) { m_imageIdsHasBeenSet = true; m_imageIds = std::forward<ImageIdsT>(value); }
    template<typename ImageIdsT = Aws::Vector<Aws::String>>
    DescribeWorkspaceImagesRequest& WithImageIds(ImageIdsT&& value) { SetImageIds(std::forward<ImageIdsT>(value)); return *this;}
    template<typename ImageIdsT = Aws::String>
    DescribeWorkspaceImagesRequest& AddImageIds(ImageIdsT&& value) { m_imageIdsHasBeenSet = true; m_imageIds.emplace_back(std::forward<ImageIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type (owned or shared) of the image.</p>
     */
    inline ImageType GetImageType() const { return m_imageType; }
    inline bool ImageTypeHasBeenSet() const { return m_imageTypeHasBeenSet; }
    inline void SetImageType(ImageType value) { m_imageTypeHasBeenSet = true; m_imageType = value; }
    inline DescribeWorkspaceImagesRequest& WithImageType(ImageType value) { SetImageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeWorkspaceImagesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeWorkspaceImagesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_imageIds;
    bool m_imageIdsHasBeenSet = false;

    ImageType m_imageType{ImageType::NOT_SET};
    bool m_imageTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws

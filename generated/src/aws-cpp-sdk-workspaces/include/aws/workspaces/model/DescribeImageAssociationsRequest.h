/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/ImageAssociatedResourceType.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class DescribeImageAssociationsRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API DescribeImageAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeImageAssociations"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the image.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The identifier of the image.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The identifier of the image.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The identifier of the image.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The identifier of the image.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The identifier of the image.</p>
     */
    inline DescribeImageAssociationsRequest& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The identifier of the image.</p>
     */
    inline DescribeImageAssociationsRequest& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the image.</p>
     */
    inline DescribeImageAssociationsRequest& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The resource types of the associated resource.</p>
     */
    inline const Aws::Vector<ImageAssociatedResourceType>& GetAssociatedResourceTypes() const{ return m_associatedResourceTypes; }

    /**
     * <p>The resource types of the associated resource.</p>
     */
    inline bool AssociatedResourceTypesHasBeenSet() const { return m_associatedResourceTypesHasBeenSet; }

    /**
     * <p>The resource types of the associated resource.</p>
     */
    inline void SetAssociatedResourceTypes(const Aws::Vector<ImageAssociatedResourceType>& value) { m_associatedResourceTypesHasBeenSet = true; m_associatedResourceTypes = value; }

    /**
     * <p>The resource types of the associated resource.</p>
     */
    inline void SetAssociatedResourceTypes(Aws::Vector<ImageAssociatedResourceType>&& value) { m_associatedResourceTypesHasBeenSet = true; m_associatedResourceTypes = std::move(value); }

    /**
     * <p>The resource types of the associated resource.</p>
     */
    inline DescribeImageAssociationsRequest& WithAssociatedResourceTypes(const Aws::Vector<ImageAssociatedResourceType>& value) { SetAssociatedResourceTypes(value); return *this;}

    /**
     * <p>The resource types of the associated resource.</p>
     */
    inline DescribeImageAssociationsRequest& WithAssociatedResourceTypes(Aws::Vector<ImageAssociatedResourceType>&& value) { SetAssociatedResourceTypes(std::move(value)); return *this;}

    /**
     * <p>The resource types of the associated resource.</p>
     */
    inline DescribeImageAssociationsRequest& AddAssociatedResourceTypes(const ImageAssociatedResourceType& value) { m_associatedResourceTypesHasBeenSet = true; m_associatedResourceTypes.push_back(value); return *this; }

    /**
     * <p>The resource types of the associated resource.</p>
     */
    inline DescribeImageAssociationsRequest& AddAssociatedResourceTypes(ImageAssociatedResourceType&& value) { m_associatedResourceTypesHasBeenSet = true; m_associatedResourceTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::Vector<ImageAssociatedResourceType> m_associatedResourceTypes;
    bool m_associatedResourceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws

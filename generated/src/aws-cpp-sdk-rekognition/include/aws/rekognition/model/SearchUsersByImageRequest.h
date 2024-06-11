/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/Image.h>
#include <aws/rekognition/model/QualityFilter.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class SearchUsersByImageRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API SearchUsersByImageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchUsersByImage"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of an existing collection containing the UserID.</p>
     */
    inline const Aws::String& GetCollectionId() const{ return m_collectionId; }
    inline bool CollectionIdHasBeenSet() const { return m_collectionIdHasBeenSet; }
    inline void SetCollectionId(const Aws::String& value) { m_collectionIdHasBeenSet = true; m_collectionId = value; }
    inline void SetCollectionId(Aws::String&& value) { m_collectionIdHasBeenSet = true; m_collectionId = std::move(value); }
    inline void SetCollectionId(const char* value) { m_collectionIdHasBeenSet = true; m_collectionId.assign(value); }
    inline SearchUsersByImageRequest& WithCollectionId(const Aws::String& value) { SetCollectionId(value); return *this;}
    inline SearchUsersByImageRequest& WithCollectionId(Aws::String&& value) { SetCollectionId(std::move(value)); return *this;}
    inline SearchUsersByImageRequest& WithCollectionId(const char* value) { SetCollectionId(value); return *this;}
    ///@}

    ///@{
    
    inline const Image& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const Image& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(Image&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline SearchUsersByImageRequest& WithImage(const Image& value) { SetImage(value); return *this;}
    inline SearchUsersByImageRequest& WithImage(Image&& value) { SetImage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the minimum confidence in the UserID match to return. Default value
     * is 80.</p>
     */
    inline double GetUserMatchThreshold() const{ return m_userMatchThreshold; }
    inline bool UserMatchThresholdHasBeenSet() const { return m_userMatchThresholdHasBeenSet; }
    inline void SetUserMatchThreshold(double value) { m_userMatchThresholdHasBeenSet = true; m_userMatchThreshold = value; }
    inline SearchUsersByImageRequest& WithUserMatchThreshold(double value) { SetUserMatchThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of UserIDs to return.</p>
     */
    inline int GetMaxUsers() const{ return m_maxUsers; }
    inline bool MaxUsersHasBeenSet() const { return m_maxUsersHasBeenSet; }
    inline void SetMaxUsers(int value) { m_maxUsersHasBeenSet = true; m_maxUsers = value; }
    inline SearchUsersByImageRequest& WithMaxUsers(int value) { SetMaxUsers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that specifies a quality bar for how much filtering is done to
     * identify faces. Filtered faces aren't searched for in the collection. The
     * default value is NONE.</p>
     */
    inline const QualityFilter& GetQualityFilter() const{ return m_qualityFilter; }
    inline bool QualityFilterHasBeenSet() const { return m_qualityFilterHasBeenSet; }
    inline void SetQualityFilter(const QualityFilter& value) { m_qualityFilterHasBeenSet = true; m_qualityFilter = value; }
    inline void SetQualityFilter(QualityFilter&& value) { m_qualityFilterHasBeenSet = true; m_qualityFilter = std::move(value); }
    inline SearchUsersByImageRequest& WithQualityFilter(const QualityFilter& value) { SetQualityFilter(value); return *this;}
    inline SearchUsersByImageRequest& WithQualityFilter(QualityFilter&& value) { SetQualityFilter(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_collectionId;
    bool m_collectionIdHasBeenSet = false;

    Image m_image;
    bool m_imageHasBeenSet = false;

    double m_userMatchThreshold;
    bool m_userMatchThresholdHasBeenSet = false;

    int m_maxUsers;
    bool m_maxUsersHasBeenSet = false;

    QualityFilter m_qualityFilter;
    bool m_qualityFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws

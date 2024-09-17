/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class SearchFacesRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API SearchFacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchFaces"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>ID of the collection the face belongs to.</p>
     */
    inline const Aws::String& GetCollectionId() const{ return m_collectionId; }
    inline bool CollectionIdHasBeenSet() const { return m_collectionIdHasBeenSet; }
    inline void SetCollectionId(const Aws::String& value) { m_collectionIdHasBeenSet = true; m_collectionId = value; }
    inline void SetCollectionId(Aws::String&& value) { m_collectionIdHasBeenSet = true; m_collectionId = std::move(value); }
    inline void SetCollectionId(const char* value) { m_collectionIdHasBeenSet = true; m_collectionId.assign(value); }
    inline SearchFacesRequest& WithCollectionId(const Aws::String& value) { SetCollectionId(value); return *this;}
    inline SearchFacesRequest& WithCollectionId(Aws::String&& value) { SetCollectionId(std::move(value)); return *this;}
    inline SearchFacesRequest& WithCollectionId(const char* value) { SetCollectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of a face to find matches for in the collection.</p>
     */
    inline const Aws::String& GetFaceId() const{ return m_faceId; }
    inline bool FaceIdHasBeenSet() const { return m_faceIdHasBeenSet; }
    inline void SetFaceId(const Aws::String& value) { m_faceIdHasBeenSet = true; m_faceId = value; }
    inline void SetFaceId(Aws::String&& value) { m_faceIdHasBeenSet = true; m_faceId = std::move(value); }
    inline void SetFaceId(const char* value) { m_faceIdHasBeenSet = true; m_faceId.assign(value); }
    inline SearchFacesRequest& WithFaceId(const Aws::String& value) { SetFaceId(value); return *this;}
    inline SearchFacesRequest& WithFaceId(Aws::String&& value) { SetFaceId(std::move(value)); return *this;}
    inline SearchFacesRequest& WithFaceId(const char* value) { SetFaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of faces to return. The operation returns the maximum number
     * of faces with the highest confidence in the match.</p>
     */
    inline int GetMaxFaces() const{ return m_maxFaces; }
    inline bool MaxFacesHasBeenSet() const { return m_maxFacesHasBeenSet; }
    inline void SetMaxFaces(int value) { m_maxFacesHasBeenSet = true; m_maxFaces = value; }
    inline SearchFacesRequest& WithMaxFaces(int value) { SetMaxFaces(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional value specifying the minimum confidence in the face match to return.
     * For example, don't return any matches where confidence in matches is less than
     * 70%. The default value is 80%. </p>
     */
    inline double GetFaceMatchThreshold() const{ return m_faceMatchThreshold; }
    inline bool FaceMatchThresholdHasBeenSet() const { return m_faceMatchThresholdHasBeenSet; }
    inline void SetFaceMatchThreshold(double value) { m_faceMatchThresholdHasBeenSet = true; m_faceMatchThreshold = value; }
    inline SearchFacesRequest& WithFaceMatchThreshold(double value) { SetFaceMatchThreshold(value); return *this;}
    ///@}
  private:

    Aws::String m_collectionId;
    bool m_collectionIdHasBeenSet = false;

    Aws::String m_faceId;
    bool m_faceIdHasBeenSet = false;

    int m_maxFaces;
    bool m_maxFacesHasBeenSet = false;

    double m_faceMatchThreshold;
    bool m_faceMatchThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws

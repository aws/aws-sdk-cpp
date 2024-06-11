/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/BoundingBox.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Describes the face properties such as the bounding box, face ID, image ID of
   * the input image, and external image ID that you assigned. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Face">AWS
   * API Reference</a></p>
   */
  class Face
  {
  public:
    AWS_REKOGNITION_API Face();
    AWS_REKOGNITION_API Face(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Face& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier that Amazon Rekognition assigns to the face.</p>
     */
    inline const Aws::String& GetFaceId() const{ return m_faceId; }
    inline bool FaceIdHasBeenSet() const { return m_faceIdHasBeenSet; }
    inline void SetFaceId(const Aws::String& value) { m_faceIdHasBeenSet = true; m_faceId = value; }
    inline void SetFaceId(Aws::String&& value) { m_faceIdHasBeenSet = true; m_faceId = std::move(value); }
    inline void SetFaceId(const char* value) { m_faceIdHasBeenSet = true; m_faceId.assign(value); }
    inline Face& WithFaceId(const Aws::String& value) { SetFaceId(value); return *this;}
    inline Face& WithFaceId(Aws::String&& value) { SetFaceId(std::move(value)); return *this;}
    inline Face& WithFaceId(const char* value) { SetFaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Bounding box of the face.</p>
     */
    inline const BoundingBox& GetBoundingBox() const{ return m_boundingBox; }
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
    inline void SetBoundingBox(const BoundingBox& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }
    inline void SetBoundingBox(BoundingBox&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::move(value); }
    inline Face& WithBoundingBox(const BoundingBox& value) { SetBoundingBox(value); return *this;}
    inline Face& WithBoundingBox(BoundingBox&& value) { SetBoundingBox(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier that Amazon Rekognition assigns to the input image.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }
    inline Face& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}
    inline Face& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}
    inline Face& WithImageId(const char* value) { SetImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier that you assign to all the faces in the input image.</p>
     */
    inline const Aws::String& GetExternalImageId() const{ return m_externalImageId; }
    inline bool ExternalImageIdHasBeenSet() const { return m_externalImageIdHasBeenSet; }
    inline void SetExternalImageId(const Aws::String& value) { m_externalImageIdHasBeenSet = true; m_externalImageId = value; }
    inline void SetExternalImageId(Aws::String&& value) { m_externalImageIdHasBeenSet = true; m_externalImageId = std::move(value); }
    inline void SetExternalImageId(const char* value) { m_externalImageIdHasBeenSet = true; m_externalImageId.assign(value); }
    inline Face& WithExternalImageId(const Aws::String& value) { SetExternalImageId(value); return *this;}
    inline Face& WithExternalImageId(Aws::String&& value) { SetExternalImageId(std::move(value)); return *this;}
    inline Face& WithExternalImageId(const char* value) { SetExternalImageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Confidence level that the bounding box contains a face (and not a different
     * object such as a tree).</p>
     */
    inline double GetConfidence() const{ return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline Face& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version of the face detect and storage model that was used when indexing
     * the face vector. </p>
     */
    inline const Aws::String& GetIndexFacesModelVersion() const{ return m_indexFacesModelVersion; }
    inline bool IndexFacesModelVersionHasBeenSet() const { return m_indexFacesModelVersionHasBeenSet; }
    inline void SetIndexFacesModelVersion(const Aws::String& value) { m_indexFacesModelVersionHasBeenSet = true; m_indexFacesModelVersion = value; }
    inline void SetIndexFacesModelVersion(Aws::String&& value) { m_indexFacesModelVersionHasBeenSet = true; m_indexFacesModelVersion = std::move(value); }
    inline void SetIndexFacesModelVersion(const char* value) { m_indexFacesModelVersionHasBeenSet = true; m_indexFacesModelVersion.assign(value); }
    inline Face& WithIndexFacesModelVersion(const Aws::String& value) { SetIndexFacesModelVersion(value); return *this;}
    inline Face& WithIndexFacesModelVersion(Aws::String&& value) { SetIndexFacesModelVersion(std::move(value)); return *this;}
    inline Face& WithIndexFacesModelVersion(const char* value) { SetIndexFacesModelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier assigned to the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline Face& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline Face& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline Face& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}
  private:

    Aws::String m_faceId;
    bool m_faceIdHasBeenSet = false;

    BoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_externalImageId;
    bool m_externalImageIdHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;

    Aws::String m_indexFacesModelVersion;
    bool m_indexFacesModelVersionHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws

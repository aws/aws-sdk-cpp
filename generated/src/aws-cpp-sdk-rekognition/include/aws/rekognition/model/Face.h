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
    AWS_REKOGNITION_API Face() = default;
    AWS_REKOGNITION_API Face(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Face& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier that Amazon Rekognition assigns to the face.</p>
     */
    inline const Aws::String& GetFaceId() const { return m_faceId; }
    inline bool FaceIdHasBeenSet() const { return m_faceIdHasBeenSet; }
    template<typename FaceIdT = Aws::String>
    void SetFaceId(FaceIdT&& value) { m_faceIdHasBeenSet = true; m_faceId = std::forward<FaceIdT>(value); }
    template<typename FaceIdT = Aws::String>
    Face& WithFaceId(FaceIdT&& value) { SetFaceId(std::forward<FaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Bounding box of the face.</p>
     */
    inline const BoundingBox& GetBoundingBox() const { return m_boundingBox; }
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
    template<typename BoundingBoxT = BoundingBox>
    void SetBoundingBox(BoundingBoxT&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::forward<BoundingBoxT>(value); }
    template<typename BoundingBoxT = BoundingBox>
    Face& WithBoundingBox(BoundingBoxT&& value) { SetBoundingBox(std::forward<BoundingBoxT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier that Amazon Rekognition assigns to the input image.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    Face& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier that you assign to all the faces in the input image.</p>
     */
    inline const Aws::String& GetExternalImageId() const { return m_externalImageId; }
    inline bool ExternalImageIdHasBeenSet() const { return m_externalImageIdHasBeenSet; }
    template<typename ExternalImageIdT = Aws::String>
    void SetExternalImageId(ExternalImageIdT&& value) { m_externalImageIdHasBeenSet = true; m_externalImageId = std::forward<ExternalImageIdT>(value); }
    template<typename ExternalImageIdT = Aws::String>
    Face& WithExternalImageId(ExternalImageIdT&& value) { SetExternalImageId(std::forward<ExternalImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Confidence level that the bounding box contains a face (and not a different
     * object such as a tree).</p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline Face& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The version of the face detect and storage model that was used when indexing
     * the face vector. </p>
     */
    inline const Aws::String& GetIndexFacesModelVersion() const { return m_indexFacesModelVersion; }
    inline bool IndexFacesModelVersionHasBeenSet() const { return m_indexFacesModelVersionHasBeenSet; }
    template<typename IndexFacesModelVersionT = Aws::String>
    void SetIndexFacesModelVersion(IndexFacesModelVersionT&& value) { m_indexFacesModelVersionHasBeenSet = true; m_indexFacesModelVersion = std::forward<IndexFacesModelVersionT>(value); }
    template<typename IndexFacesModelVersionT = Aws::String>
    Face& WithIndexFacesModelVersion(IndexFacesModelVersionT&& value) { SetIndexFacesModelVersion(std::forward<IndexFacesModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier assigned to the user.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    Face& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
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

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;

    Aws::String m_indexFacesModelVersion;
    bool m_indexFacesModelVersionHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/Face.h>
#include <aws/rekognition/model/FaceDetail.h>
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
   * <p>Object containing both the face metadata (stored in the backend database),
   * and facial attributes that are detected but aren't stored in the
   * database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/FaceRecord">AWS
   * API Reference</a></p>
   */
  class FaceRecord
  {
  public:
    AWS_REKOGNITION_API FaceRecord() = default;
    AWS_REKOGNITION_API FaceRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API FaceRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes the face properties such as the bounding box, face ID, image ID of
     * the input image, and external image ID that you assigned. </p>
     */
    inline const Face& GetFace() const { return m_face; }
    inline bool FaceHasBeenSet() const { return m_faceHasBeenSet; }
    template<typename FaceT = Face>
    void SetFace(FaceT&& value) { m_faceHasBeenSet = true; m_face = std::forward<FaceT>(value); }
    template<typename FaceT = Face>
    FaceRecord& WithFace(FaceT&& value) { SetFace(std::forward<FaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Structure containing attributes of the face that the algorithm detected.</p>
     */
    inline const FaceDetail& GetFaceDetail() const { return m_faceDetail; }
    inline bool FaceDetailHasBeenSet() const { return m_faceDetailHasBeenSet; }
    template<typename FaceDetailT = FaceDetail>
    void SetFaceDetail(FaceDetailT&& value) { m_faceDetailHasBeenSet = true; m_faceDetail = std::forward<FaceDetailT>(value); }
    template<typename FaceDetailT = FaceDetail>
    FaceRecord& WithFaceDetail(FaceDetailT&& value) { SetFaceDetail(std::forward<FaceDetailT>(value)); return *this;}
    ///@}
  private:

    Face m_face;
    bool m_faceHasBeenSet = false;

    FaceDetail m_faceDetail;
    bool m_faceDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws

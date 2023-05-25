/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/BoundingBox.h>
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
   * <p>Details about a person detected in a video analysis request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/PersonDetail">AWS
   * API Reference</a></p>
   */
  class PersonDetail
  {
  public:
    AWS_REKOGNITION_API PersonDetail();
    AWS_REKOGNITION_API PersonDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API PersonDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifier for the person detected person within a video. Use to keep track
     * of the person throughout the video. The identifier is not stored by Amazon
     * Rekognition.</p>
     */
    inline long long GetIndex() const{ return m_index; }

    /**
     * <p>Identifier for the person detected person within a video. Use to keep track
     * of the person throughout the video. The identifier is not stored by Amazon
     * Rekognition.</p>
     */
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }

    /**
     * <p>Identifier for the person detected person within a video. Use to keep track
     * of the person throughout the video. The identifier is not stored by Amazon
     * Rekognition.</p>
     */
    inline void SetIndex(long long value) { m_indexHasBeenSet = true; m_index = value; }

    /**
     * <p>Identifier for the person detected person within a video. Use to keep track
     * of the person throughout the video. The identifier is not stored by Amazon
     * Rekognition.</p>
     */
    inline PersonDetail& WithIndex(long long value) { SetIndex(value); return *this;}


    /**
     * <p>Bounding box around the detected person.</p>
     */
    inline const BoundingBox& GetBoundingBox() const{ return m_boundingBox; }

    /**
     * <p>Bounding box around the detected person.</p>
     */
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }

    /**
     * <p>Bounding box around the detected person.</p>
     */
    inline void SetBoundingBox(const BoundingBox& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }

    /**
     * <p>Bounding box around the detected person.</p>
     */
    inline void SetBoundingBox(BoundingBox&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::move(value); }

    /**
     * <p>Bounding box around the detected person.</p>
     */
    inline PersonDetail& WithBoundingBox(const BoundingBox& value) { SetBoundingBox(value); return *this;}

    /**
     * <p>Bounding box around the detected person.</p>
     */
    inline PersonDetail& WithBoundingBox(BoundingBox&& value) { SetBoundingBox(std::move(value)); return *this;}


    /**
     * <p>Face details for the detected person.</p>
     */
    inline const FaceDetail& GetFace() const{ return m_face; }

    /**
     * <p>Face details for the detected person.</p>
     */
    inline bool FaceHasBeenSet() const { return m_faceHasBeenSet; }

    /**
     * <p>Face details for the detected person.</p>
     */
    inline void SetFace(const FaceDetail& value) { m_faceHasBeenSet = true; m_face = value; }

    /**
     * <p>Face details for the detected person.</p>
     */
    inline void SetFace(FaceDetail&& value) { m_faceHasBeenSet = true; m_face = std::move(value); }

    /**
     * <p>Face details for the detected person.</p>
     */
    inline PersonDetail& WithFace(const FaceDetail& value) { SetFace(value); return *this;}

    /**
     * <p>Face details for the detected person.</p>
     */
    inline PersonDetail& WithFace(FaceDetail&& value) { SetFace(std::move(value)); return *this;}

  private:

    long long m_index;
    bool m_indexHasBeenSet = false;

    BoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    FaceDetail m_face;
    bool m_faceHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
   * <p>Type that describes the face Amazon Rekognition chose to compare with the
   * faces in the target. This contains a bounding box for the selected face and
   * confidence level that the bounding box contains a face. Note that Amazon
   * Rekognition selects the largest face in the source image for this comparison.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ComparedSourceImageFace">AWS
   * API Reference</a></p>
   */
  class ComparedSourceImageFace
  {
  public:
    AWS_REKOGNITION_API ComparedSourceImageFace();
    AWS_REKOGNITION_API ComparedSourceImageFace(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ComparedSourceImageFace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Bounding box of the face.</p>
     */
    inline const BoundingBox& GetBoundingBox() const{ return m_boundingBox; }

    /**
     * <p>Bounding box of the face.</p>
     */
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }

    /**
     * <p>Bounding box of the face.</p>
     */
    inline void SetBoundingBox(const BoundingBox& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }

    /**
     * <p>Bounding box of the face.</p>
     */
    inline void SetBoundingBox(BoundingBox&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::move(value); }

    /**
     * <p>Bounding box of the face.</p>
     */
    inline ComparedSourceImageFace& WithBoundingBox(const BoundingBox& value) { SetBoundingBox(value); return *this;}

    /**
     * <p>Bounding box of the face.</p>
     */
    inline ComparedSourceImageFace& WithBoundingBox(BoundingBox&& value) { SetBoundingBox(std::move(value)); return *this;}


    /**
     * <p>Confidence level that the selected bounding box contains a face.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>Confidence level that the selected bounding box contains a face.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>Confidence level that the selected bounding box contains a face.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>Confidence level that the selected bounding box contains a face.</p>
     */
    inline ComparedSourceImageFace& WithConfidence(double value) { SetConfidence(value); return *this;}

  private:

    BoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws

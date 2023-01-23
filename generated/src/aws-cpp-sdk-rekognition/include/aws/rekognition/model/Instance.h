/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/BoundingBox.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/DominantColor.h>
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
   * <p>An instance of a label returned by Amazon Rekognition Image
   * (<a>DetectLabels</a>) or by Amazon Rekognition Video
   * (<a>GetLabelDetection</a>).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/Instance">AWS
   * API Reference</a></p>
   */
  class Instance
  {
  public:
    AWS_REKOGNITION_API Instance();
    AWS_REKOGNITION_API Instance(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Instance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The position of the label instance on the image.</p>
     */
    inline const BoundingBox& GetBoundingBox() const{ return m_boundingBox; }

    /**
     * <p>The position of the label instance on the image.</p>
     */
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }

    /**
     * <p>The position of the label instance on the image.</p>
     */
    inline void SetBoundingBox(const BoundingBox& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }

    /**
     * <p>The position of the label instance on the image.</p>
     */
    inline void SetBoundingBox(BoundingBox&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::move(value); }

    /**
     * <p>The position of the label instance on the image.</p>
     */
    inline Instance& WithBoundingBox(const BoundingBox& value) { SetBoundingBox(value); return *this;}

    /**
     * <p>The position of the label instance on the image.</p>
     */
    inline Instance& WithBoundingBox(BoundingBox&& value) { SetBoundingBox(std::move(value)); return *this;}


    /**
     * <p>The confidence that Amazon Rekognition has in the accuracy of the bounding
     * box.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>The confidence that Amazon Rekognition has in the accuracy of the bounding
     * box.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>The confidence that Amazon Rekognition has in the accuracy of the bounding
     * box.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>The confidence that Amazon Rekognition has in the accuracy of the bounding
     * box.</p>
     */
    inline Instance& WithConfidence(double value) { SetConfidence(value); return *this;}


    /**
     * <p>The dominant colors found in an individual instance of a label.</p>
     */
    inline const Aws::Vector<DominantColor>& GetDominantColors() const{ return m_dominantColors; }

    /**
     * <p>The dominant colors found in an individual instance of a label.</p>
     */
    inline bool DominantColorsHasBeenSet() const { return m_dominantColorsHasBeenSet; }

    /**
     * <p>The dominant colors found in an individual instance of a label.</p>
     */
    inline void SetDominantColors(const Aws::Vector<DominantColor>& value) { m_dominantColorsHasBeenSet = true; m_dominantColors = value; }

    /**
     * <p>The dominant colors found in an individual instance of a label.</p>
     */
    inline void SetDominantColors(Aws::Vector<DominantColor>&& value) { m_dominantColorsHasBeenSet = true; m_dominantColors = std::move(value); }

    /**
     * <p>The dominant colors found in an individual instance of a label.</p>
     */
    inline Instance& WithDominantColors(const Aws::Vector<DominantColor>& value) { SetDominantColors(value); return *this;}

    /**
     * <p>The dominant colors found in an individual instance of a label.</p>
     */
    inline Instance& WithDominantColors(Aws::Vector<DominantColor>&& value) { SetDominantColors(std::move(value)); return *this;}

    /**
     * <p>The dominant colors found in an individual instance of a label.</p>
     */
    inline Instance& AddDominantColors(const DominantColor& value) { m_dominantColorsHasBeenSet = true; m_dominantColors.push_back(value); return *this; }

    /**
     * <p>The dominant colors found in an individual instance of a label.</p>
     */
    inline Instance& AddDominantColors(DominantColor&& value) { m_dominantColorsHasBeenSet = true; m_dominantColors.push_back(std::move(value)); return *this; }

  private:

    BoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;

    Aws::Vector<DominantColor> m_dominantColors;
    bool m_dominantColorsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws

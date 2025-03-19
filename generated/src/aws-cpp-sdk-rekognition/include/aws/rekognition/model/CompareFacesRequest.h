/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
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
  class CompareFacesRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API CompareFacesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CompareFaces"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The input image as base64-encoded bytes or an S3 object. If you use the AWS
     * CLI to call Amazon Rekognition operations, passing base64-encoded image bytes is
     * not supported. </p> <p>If you are using an AWS SDK to call Amazon Rekognition,
     * you might not need to base64-encode image bytes passed using the
     * <code>Bytes</code> field. For more information, see Images in the Amazon
     * Rekognition developer guide.</p>
     */
    inline const Image& GetSourceImage() const { return m_sourceImage; }
    inline bool SourceImageHasBeenSet() const { return m_sourceImageHasBeenSet; }
    template<typename SourceImageT = Image>
    void SetSourceImage(SourceImageT&& value) { m_sourceImageHasBeenSet = true; m_sourceImage = std::forward<SourceImageT>(value); }
    template<typename SourceImageT = Image>
    CompareFacesRequest& WithSourceImage(SourceImageT&& value) { SetSourceImage(std::forward<SourceImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target image as base64-encoded bytes or an S3 object. If you use the AWS
     * CLI to call Amazon Rekognition operations, passing base64-encoded image bytes is
     * not supported. </p> <p>If you are using an AWS SDK to call Amazon Rekognition,
     * you might not need to base64-encode image bytes passed using the
     * <code>Bytes</code> field. For more information, see Images in the Amazon
     * Rekognition developer guide.</p>
     */
    inline const Image& GetTargetImage() const { return m_targetImage; }
    inline bool TargetImageHasBeenSet() const { return m_targetImageHasBeenSet; }
    template<typename TargetImageT = Image>
    void SetTargetImage(TargetImageT&& value) { m_targetImageHasBeenSet = true; m_targetImage = std::forward<TargetImageT>(value); }
    template<typename TargetImageT = Image>
    CompareFacesRequest& WithTargetImage(TargetImageT&& value) { SetTargetImage(std::forward<TargetImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum level of confidence in the face matches that a match must meet to
     * be included in the <code>FaceMatches</code> array.</p>
     */
    inline double GetSimilarityThreshold() const { return m_similarityThreshold; }
    inline bool SimilarityThresholdHasBeenSet() const { return m_similarityThresholdHasBeenSet; }
    inline void SetSimilarityThreshold(double value) { m_similarityThresholdHasBeenSet = true; m_similarityThreshold = value; }
    inline CompareFacesRequest& WithSimilarityThreshold(double value) { SetSimilarityThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that specifies a quality bar for how much filtering is done to
     * identify faces. Filtered faces aren't compared. If you specify
     * <code>AUTO</code>, Amazon Rekognition chooses the quality bar. If you specify
     * <code>LOW</code>, <code>MEDIUM</code>, or <code>HIGH</code>, filtering removes
     * all faces that don’t meet the chosen quality bar. The quality bar is based on a
     * variety of common use cases. Low-quality detections can occur for a number of
     * reasons. Some examples are an object that's misidentified as a face, a face
     * that's too blurry, or a face with a pose that's too extreme to use. If you
     * specify <code>NONE</code>, no filtering is performed. The default value is
     * <code>NONE</code>. </p> <p>To use quality filtering, the collection you are
     * using must be associated with version 3 of the face model or higher.</p>
     */
    inline QualityFilter GetQualityFilter() const { return m_qualityFilter; }
    inline bool QualityFilterHasBeenSet() const { return m_qualityFilterHasBeenSet; }
    inline void SetQualityFilter(QualityFilter value) { m_qualityFilterHasBeenSet = true; m_qualityFilter = value; }
    inline CompareFacesRequest& WithQualityFilter(QualityFilter value) { SetQualityFilter(value); return *this;}
    ///@}
  private:

    Image m_sourceImage;
    bool m_sourceImageHasBeenSet = false;

    Image m_targetImage;
    bool m_targetImageHasBeenSet = false;

    double m_similarityThreshold{0.0};
    bool m_similarityThresholdHasBeenSet = false;

    QualityFilter m_qualityFilter{QualityFilter::NOT_SET};
    bool m_qualityFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws

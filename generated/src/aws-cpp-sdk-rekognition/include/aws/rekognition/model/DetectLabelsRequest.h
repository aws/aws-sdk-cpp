/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/rekognition/model/Image.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/DetectLabelsSettings.h>
#include <aws/rekognition/model/DetectLabelsFeatureName.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class DetectLabelsRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API DetectLabelsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetectLabels"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The input image as base64-encoded bytes or an S3 object. If you use the AWS
     * CLI to call Amazon Rekognition operations, passing image bytes is not supported.
     * Images stored in an S3 Bucket do not need to be base64-encoded.</p> <p>If you
     * are using an AWS SDK to call Amazon Rekognition, you might not need to
     * base64-encode image bytes passed using the <code>Bytes</code> field. For more
     * information, see Images in the Amazon Rekognition developer guide.</p>
     */
    inline const Image& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = Image>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = Image>
    DetectLabelsRequest& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of labels you want the service to return in the response. The
     * service returns the specified number of highest confidence labels. Only valid
     * when GENERAL_LABELS is specified as a feature type in the Feature input
     * parameter.</p>
     */
    inline int GetMaxLabels() const { return m_maxLabels; }
    inline bool MaxLabelsHasBeenSet() const { return m_maxLabelsHasBeenSet; }
    inline void SetMaxLabels(int value) { m_maxLabelsHasBeenSet = true; m_maxLabels = value; }
    inline DetectLabelsRequest& WithMaxLabels(int value) { SetMaxLabels(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the minimum confidence level for the labels to return. Amazon
     * Rekognition doesn't return any labels with confidence lower than this specified
     * value.</p> <p>If <code>MinConfidence</code> is not specified, the operation
     * returns labels with a confidence values greater than or equal to 55 percent.
     * Only valid when GENERAL_LABELS is specified as a feature type in the Feature
     * input parameter.</p>
     */
    inline double GetMinConfidence() const { return m_minConfidence; }
    inline bool MinConfidenceHasBeenSet() const { return m_minConfidenceHasBeenSet; }
    inline void SetMinConfidence(double value) { m_minConfidenceHasBeenSet = true; m_minConfidence = value; }
    inline DetectLabelsRequest& WithMinConfidence(double value) { SetMinConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the types of analysis to perform. Specifying GENERAL_LABELS uses
     * the label detection feature, while specifying IMAGE_PROPERTIES returns
     * information regarding image color and quality. If no option is specified
     * GENERAL_LABELS is used by default.</p>
     */
    inline const Aws::Vector<DetectLabelsFeatureName>& GetFeatures() const { return m_features; }
    inline bool FeaturesHasBeenSet() const { return m_featuresHasBeenSet; }
    template<typename FeaturesT = Aws::Vector<DetectLabelsFeatureName>>
    void SetFeatures(FeaturesT&& value) { m_featuresHasBeenSet = true; m_features = std::forward<FeaturesT>(value); }
    template<typename FeaturesT = Aws::Vector<DetectLabelsFeatureName>>
    DetectLabelsRequest& WithFeatures(FeaturesT&& value) { SetFeatures(std::forward<FeaturesT>(value)); return *this;}
    inline DetectLabelsRequest& AddFeatures(DetectLabelsFeatureName value) { m_featuresHasBeenSet = true; m_features.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the filters to be applied to returned detected labels and image
     * properties. Specified filters can be inclusive, exclusive, or a combination of
     * both. Filters can be used for individual labels or label categories. The exact
     * label names or label categories must be supplied. For a full list of labels and
     * label categories, see <a
     * href="https://docs.aws.amazon.com/rekognition/latest/dg/labels.html">Detecting
     * labels</a>.</p>
     */
    inline const DetectLabelsSettings& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = DetectLabelsSettings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = DetectLabelsSettings>
    DetectLabelsRequest& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}
  private:

    Image m_image;
    bool m_imageHasBeenSet = false;

    int m_maxLabels{0};
    bool m_maxLabelsHasBeenSet = false;

    double m_minConfidence{0.0};
    bool m_minConfidenceHasBeenSet = false;

    Aws::Vector<DetectLabelsFeatureName> m_features;
    bool m_featuresHasBeenSet = false;

    DetectLabelsSettings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws

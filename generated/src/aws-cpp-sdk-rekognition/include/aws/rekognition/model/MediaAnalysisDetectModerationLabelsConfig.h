/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Configuration for Moderation Labels Detection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/MediaAnalysisDetectModerationLabelsConfig">AWS
   * API Reference</a></p>
   */
  class MediaAnalysisDetectModerationLabelsConfig
  {
  public:
    AWS_REKOGNITION_API MediaAnalysisDetectModerationLabelsConfig();
    AWS_REKOGNITION_API MediaAnalysisDetectModerationLabelsConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API MediaAnalysisDetectModerationLabelsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the minimum confidence level for the moderation labels to return.
     * Amazon Rekognition doesn't return any labels with a confidence level lower than
     * this specified value. </p>
     */
    inline double GetMinConfidence() const{ return m_minConfidence; }

    /**
     * <p>Specifies the minimum confidence level for the moderation labels to return.
     * Amazon Rekognition doesn't return any labels with a confidence level lower than
     * this specified value. </p>
     */
    inline bool MinConfidenceHasBeenSet() const { return m_minConfidenceHasBeenSet; }

    /**
     * <p>Specifies the minimum confidence level for the moderation labels to return.
     * Amazon Rekognition doesn't return any labels with a confidence level lower than
     * this specified value. </p>
     */
    inline void SetMinConfidence(double value) { m_minConfidenceHasBeenSet = true; m_minConfidence = value; }

    /**
     * <p>Specifies the minimum confidence level for the moderation labels to return.
     * Amazon Rekognition doesn't return any labels with a confidence level lower than
     * this specified value. </p>
     */
    inline MediaAnalysisDetectModerationLabelsConfig& WithMinConfidence(double value) { SetMinConfidence(value); return *this;}


    /**
     * <p>Specifies the custom moderation model to be used during the label detection
     * job. If not provided the pre-trained model is used.</p>
     */
    inline const Aws::String& GetProjectVersion() const{ return m_projectVersion; }

    /**
     * <p>Specifies the custom moderation model to be used during the label detection
     * job. If not provided the pre-trained model is used.</p>
     */
    inline bool ProjectVersionHasBeenSet() const { return m_projectVersionHasBeenSet; }

    /**
     * <p>Specifies the custom moderation model to be used during the label detection
     * job. If not provided the pre-trained model is used.</p>
     */
    inline void SetProjectVersion(const Aws::String& value) { m_projectVersionHasBeenSet = true; m_projectVersion = value; }

    /**
     * <p>Specifies the custom moderation model to be used during the label detection
     * job. If not provided the pre-trained model is used.</p>
     */
    inline void SetProjectVersion(Aws::String&& value) { m_projectVersionHasBeenSet = true; m_projectVersion = std::move(value); }

    /**
     * <p>Specifies the custom moderation model to be used during the label detection
     * job. If not provided the pre-trained model is used.</p>
     */
    inline void SetProjectVersion(const char* value) { m_projectVersionHasBeenSet = true; m_projectVersion.assign(value); }

    /**
     * <p>Specifies the custom moderation model to be used during the label detection
     * job. If not provided the pre-trained model is used.</p>
     */
    inline MediaAnalysisDetectModerationLabelsConfig& WithProjectVersion(const Aws::String& value) { SetProjectVersion(value); return *this;}

    /**
     * <p>Specifies the custom moderation model to be used during the label detection
     * job. If not provided the pre-trained model is used.</p>
     */
    inline MediaAnalysisDetectModerationLabelsConfig& WithProjectVersion(Aws::String&& value) { SetProjectVersion(std::move(value)); return *this;}

    /**
     * <p>Specifies the custom moderation model to be used during the label detection
     * job. If not provided the pre-trained model is used.</p>
     */
    inline MediaAnalysisDetectModerationLabelsConfig& WithProjectVersion(const char* value) { SetProjectVersion(value); return *this;}

  private:

    double m_minConfidence;
    bool m_minConfidenceHasBeenSet = false;

    Aws::String m_projectVersion;
    bool m_projectVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws

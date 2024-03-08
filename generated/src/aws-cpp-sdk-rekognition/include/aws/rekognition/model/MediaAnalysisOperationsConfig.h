/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/MediaAnalysisDetectModerationLabelsConfig.h>
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
   * <p>Configuration options for a media analysis job. Configuration is
   * operation-specific.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/MediaAnalysisOperationsConfig">AWS
   * API Reference</a></p>
   */
  class MediaAnalysisOperationsConfig
  {
  public:
    AWS_REKOGNITION_API MediaAnalysisOperationsConfig();
    AWS_REKOGNITION_API MediaAnalysisOperationsConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API MediaAnalysisOperationsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains configuration options for a DetectModerationLabels job.</p>
     */
    inline const MediaAnalysisDetectModerationLabelsConfig& GetDetectModerationLabels() const{ return m_detectModerationLabels; }

    /**
     * <p>Contains configuration options for a DetectModerationLabels job.</p>
     */
    inline bool DetectModerationLabelsHasBeenSet() const { return m_detectModerationLabelsHasBeenSet; }

    /**
     * <p>Contains configuration options for a DetectModerationLabels job.</p>
     */
    inline void SetDetectModerationLabels(const MediaAnalysisDetectModerationLabelsConfig& value) { m_detectModerationLabelsHasBeenSet = true; m_detectModerationLabels = value; }

    /**
     * <p>Contains configuration options for a DetectModerationLabels job.</p>
     */
    inline void SetDetectModerationLabels(MediaAnalysisDetectModerationLabelsConfig&& value) { m_detectModerationLabelsHasBeenSet = true; m_detectModerationLabels = std::move(value); }

    /**
     * <p>Contains configuration options for a DetectModerationLabels job.</p>
     */
    inline MediaAnalysisOperationsConfig& WithDetectModerationLabels(const MediaAnalysisDetectModerationLabelsConfig& value) { SetDetectModerationLabels(value); return *this;}

    /**
     * <p>Contains configuration options for a DetectModerationLabels job.</p>
     */
    inline MediaAnalysisOperationsConfig& WithDetectModerationLabels(MediaAnalysisDetectModerationLabelsConfig&& value) { SetDetectModerationLabels(std::move(value)); return *this;}

  private:

    MediaAnalysisDetectModerationLabelsConfig m_detectModerationLabels;
    bool m_detectModerationLabelsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws

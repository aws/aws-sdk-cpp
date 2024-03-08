/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>

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
   * <p>Configuration options for Content Moderation training.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CustomizationFeatureContentModerationConfig">AWS
   * API Reference</a></p>
   */
  class CustomizationFeatureContentModerationConfig
  {
  public:
    AWS_REKOGNITION_API CustomizationFeatureContentModerationConfig();
    AWS_REKOGNITION_API CustomizationFeatureContentModerationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API CustomizationFeatureContentModerationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The confidence level you plan to use to identify if unsafe content is present
     * during inference.</p>
     */
    inline double GetConfidenceThreshold() const{ return m_confidenceThreshold; }

    /**
     * <p>The confidence level you plan to use to identify if unsafe content is present
     * during inference.</p>
     */
    inline bool ConfidenceThresholdHasBeenSet() const { return m_confidenceThresholdHasBeenSet; }

    /**
     * <p>The confidence level you plan to use to identify if unsafe content is present
     * during inference.</p>
     */
    inline void SetConfidenceThreshold(double value) { m_confidenceThresholdHasBeenSet = true; m_confidenceThreshold = value; }

    /**
     * <p>The confidence level you plan to use to identify if unsafe content is present
     * during inference.</p>
     */
    inline CustomizationFeatureContentModerationConfig& WithConfidenceThreshold(double value) { SetConfidenceThreshold(value); return *this;}

  private:

    double m_confidenceThreshold;
    bool m_confidenceThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws

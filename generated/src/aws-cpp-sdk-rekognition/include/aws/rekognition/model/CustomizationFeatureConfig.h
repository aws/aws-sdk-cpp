/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/CustomizationFeatureContentModerationConfig.h>
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
   * <p>Feature specific configuration for the training job. Configuration provided
   * for the job must match the feature type parameter associated with project. If
   * configuration and feature type do not match an InvalidParameterException is
   * returned.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/CustomizationFeatureConfig">AWS
   * API Reference</a></p>
   */
  class CustomizationFeatureConfig
  {
  public:
    AWS_REKOGNITION_API CustomizationFeatureConfig() = default;
    AWS_REKOGNITION_API CustomizationFeatureConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API CustomizationFeatureConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration options for Custom Moderation training.</p>
     */
    inline const CustomizationFeatureContentModerationConfig& GetContentModeration() const { return m_contentModeration; }
    inline bool ContentModerationHasBeenSet() const { return m_contentModerationHasBeenSet; }
    template<typename ContentModerationT = CustomizationFeatureContentModerationConfig>
    void SetContentModeration(ContentModerationT&& value) { m_contentModerationHasBeenSet = true; m_contentModeration = std::forward<ContentModerationT>(value); }
    template<typename ContentModerationT = CustomizationFeatureContentModerationConfig>
    CustomizationFeatureConfig& WithContentModeration(ContentModerationT&& value) { SetContentModeration(std::forward<ContentModerationT>(value)); return *this;}
    ///@}
  private:

    CustomizationFeatureContentModerationConfig m_contentModeration;
    bool m_contentModerationHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws

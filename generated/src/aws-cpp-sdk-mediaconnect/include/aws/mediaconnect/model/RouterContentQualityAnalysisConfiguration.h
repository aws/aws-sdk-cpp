/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/ContentQualityAnalysisFeatureConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p>The content quality analysis configuration for the router input.</p>
 *  <p>The content quality analysis feature only monitors the first
 * video stream and the first audio stream it encounters within the router input
 * source.</p> <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/RouterContentQualityAnalysisConfiguration">AWS
 * API Reference</a></p>
 */
class RouterContentQualityAnalysisConfiguration {
 public:
  AWS_MEDIACONNECT_API RouterContentQualityAnalysisConfiguration() = default;
  AWS_MEDIACONNECT_API RouterContentQualityAnalysisConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API RouterContentQualityAnalysisConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The content quality analysis configuration.</p>
   */
  inline const ContentQualityAnalysisFeatureConfiguration& GetContentLevel() const { return m_contentLevel; }
  inline bool ContentLevelHasBeenSet() const { return m_contentLevelHasBeenSet; }
  template <typename ContentLevelT = ContentQualityAnalysisFeatureConfiguration>
  void SetContentLevel(ContentLevelT&& value) {
    m_contentLevelHasBeenSet = true;
    m_contentLevel = std::forward<ContentLevelT>(value);
  }
  template <typename ContentLevelT = ContentQualityAnalysisFeatureConfiguration>
  RouterContentQualityAnalysisConfiguration& WithContentLevel(ContentLevelT&& value) {
    SetContentLevel(std::forward<ContentLevelT>(value));
    return *this;
  }
  ///@}
 private:
  ContentQualityAnalysisFeatureConfiguration m_contentLevel;
  bool m_contentLevelHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

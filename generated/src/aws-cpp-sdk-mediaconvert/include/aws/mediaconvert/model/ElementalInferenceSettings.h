/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/ElementalInferenceFeedConfigurationSource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConvert {
namespace Model {

/**
 * The Elemental Inference settings used in this job.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ElementalInferenceSettings">AWS
 * API Reference</a></p>
 */
class ElementalInferenceSettings {
 public:
  AWS_MEDIACONVERT_API ElementalInferenceSettings() = default;
  AWS_MEDIACONVERT_API ElementalInferenceSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API ElementalInferenceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Optional. The source of your Elemental Inference Feed configuration.
   * MediaConvert will reference this configuration source when you specify job
   * settings which use Elemental Inference.
   */
  inline const ElementalInferenceFeedConfigurationSource& GetFeedConfigurationSource() const { return m_feedConfigurationSource; }
  inline bool FeedConfigurationSourceHasBeenSet() const { return m_feedConfigurationSourceHasBeenSet; }
  template <typename FeedConfigurationSourceT = ElementalInferenceFeedConfigurationSource>
  void SetFeedConfigurationSource(FeedConfigurationSourceT&& value) {
    m_feedConfigurationSourceHasBeenSet = true;
    m_feedConfigurationSource = std::forward<FeedConfigurationSourceT>(value);
  }
  template <typename FeedConfigurationSourceT = ElementalInferenceFeedConfigurationSource>
  ElementalInferenceSettings& WithFeedConfigurationSource(FeedConfigurationSourceT&& value) {
    SetFeedConfigurationSource(std::forward<FeedConfigurationSourceT>(value));
    return *this;
  }
  ///@}
 private:
  ElementalInferenceFeedConfigurationSource m_feedConfigurationSource;
  bool m_feedConfigurationSourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws

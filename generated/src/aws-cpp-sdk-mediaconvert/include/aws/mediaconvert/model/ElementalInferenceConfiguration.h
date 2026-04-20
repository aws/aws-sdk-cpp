/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/ElementalInferenceFeature.h>
#include <aws/mediaconvert/model/ElementalInferenceFeed.h>

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
 * The Elemental Inference configuration used in this job.<p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ElementalInferenceConfiguration">AWS
 * API Reference</a></p>
 */
class ElementalInferenceConfiguration {
 public:
  AWS_MEDIACONVERT_API ElementalInferenceConfiguration() = default;
  AWS_MEDIACONVERT_API ElementalInferenceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API ElementalInferenceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * A list of Elemental Inference features used in this job.
   */
  inline const Aws::Vector<ElementalInferenceFeature>& GetFeatures() const { return m_features; }
  inline bool FeaturesHasBeenSet() const { return m_featuresHasBeenSet; }
  template <typename FeaturesT = Aws::Vector<ElementalInferenceFeature>>
  void SetFeatures(FeaturesT&& value) {
    m_featuresHasBeenSet = true;
    m_features = std::forward<FeaturesT>(value);
  }
  template <typename FeaturesT = Aws::Vector<ElementalInferenceFeature>>
  ElementalInferenceConfiguration& WithFeatures(FeaturesT&& value) {
    SetFeatures(std::forward<FeaturesT>(value));
    return *this;
  }
  inline ElementalInferenceConfiguration& AddFeatures(ElementalInferenceFeature value) {
    m_featuresHasBeenSet = true;
    m_features.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * A list of Elemental Inference feeds used by this job.
   */
  inline const Aws::Vector<ElementalInferenceFeed>& GetFeeds() const { return m_feeds; }
  inline bool FeedsHasBeenSet() const { return m_feedsHasBeenSet; }
  template <typename FeedsT = Aws::Vector<ElementalInferenceFeed>>
  void SetFeeds(FeedsT&& value) {
    m_feedsHasBeenSet = true;
    m_feeds = std::forward<FeedsT>(value);
  }
  template <typename FeedsT = Aws::Vector<ElementalInferenceFeed>>
  ElementalInferenceConfiguration& WithFeeds(FeedsT&& value) {
    SetFeeds(std::forward<FeedsT>(value));
    return *this;
  }
  template <typename FeedsT = ElementalInferenceFeed>
  ElementalInferenceConfiguration& AddFeeds(FeedsT&& value) {
    m_feedsHasBeenSet = true;
    m_feeds.emplace_back(std::forward<FeedsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ElementalInferenceFeature> m_features;

  Aws::Vector<ElementalInferenceFeed> m_feeds;
  bool m_featuresHasBeenSet = false;
  bool m_feedsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws

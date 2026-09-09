/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/model/MultiviewLayoutType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mediapackagev2 {
namespace Model {

/**
 * <p>The multiview configuration for a channel. A multiview channel composites
 * video from several source channels into a single tiled output stream. Players
 * receive one standard HLS or DASH stream instead of several separate streams.
 * This setting is required when <code>InputType</code> is <code>MULTIVIEW</code>,
 * and can't be set for any other input type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/MultiviewConfiguration">AWS
 * API Reference</a></p>
 */
class MultiviewConfiguration {
 public:
  AWS_MEDIAPACKAGEV2_API MultiviewConfiguration() = default;
  AWS_MEDIAPACKAGEV2_API MultiviewConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIAPACKAGEV2_API MultiviewConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The channels that players can use as tiles in this multiview channel's
   * output. Each source channel must be in the same channel group as the multiview
   * channel, and must have an <code>InputType</code> of <code>CMAF</code>. Only the
   * channels that you list here are available as tiles.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAvailableSources() const { return m_availableSources; }
  inline bool AvailableSourcesHasBeenSet() const { return m_availableSourcesHasBeenSet; }
  template <typename AvailableSourcesT = Aws::Vector<Aws::String>>
  void SetAvailableSources(AvailableSourcesT&& value) {
    m_availableSourcesHasBeenSet = true;
    m_availableSources = std::forward<AvailableSourcesT>(value);
  }
  template <typename AvailableSourcesT = Aws::Vector<Aws::String>>
  MultiviewConfiguration& WithAvailableSources(AvailableSourcesT&& value) {
    SetAvailableSources(std::forward<AvailableSourcesT>(value));
    return *this;
  }
  template <typename AvailableSourcesT = Aws::String>
  MultiviewConfiguration& AddAvailableSources(AvailableSourcesT&& value) {
    m_availableSourcesHasBeenSet = true;
    m_availableSources.emplace_back(std::forward<AvailableSourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tile layouts that players can request from this multiview channel's
   * origin endpoints. Only the layouts that you list here are available. Each layout
   * must appear at most once.</p>
   */
  inline const Aws::Vector<MultiviewLayoutType>& GetAvailableLayouts() const { return m_availableLayouts; }
  inline bool AvailableLayoutsHasBeenSet() const { return m_availableLayoutsHasBeenSet; }
  template <typename AvailableLayoutsT = Aws::Vector<MultiviewLayoutType>>
  void SetAvailableLayouts(AvailableLayoutsT&& value) {
    m_availableLayoutsHasBeenSet = true;
    m_availableLayouts = std::forward<AvailableLayoutsT>(value);
  }
  template <typename AvailableLayoutsT = Aws::Vector<MultiviewLayoutType>>
  MultiviewConfiguration& WithAvailableLayouts(AvailableLayoutsT&& value) {
    SetAvailableLayouts(std::forward<AvailableLayoutsT>(value));
    return *this;
  }
  inline MultiviewConfiguration& AddAvailableLayouts(MultiviewLayoutType value) {
    m_availableLayoutsHasBeenSet = true;
    m_availableLayouts.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_availableSources;

  Aws::Vector<MultiviewLayoutType> m_availableLayouts;
  bool m_availableSourcesHasBeenSet = false;
  bool m_availableLayoutsHasBeenSet = false;
};

}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws

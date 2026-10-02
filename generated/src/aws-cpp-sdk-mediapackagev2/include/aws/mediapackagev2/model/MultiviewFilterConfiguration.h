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
 * <p>The multiview combination for a pinned manifest. MediaPackage serves the
 * manifest with this layout and these sources, so players request it without an
 * <code>aws.multiview</code> query parameter.</p> <p>If a request for a pinned
 * manifest also includes an <code>aws.multiview</code> query parameter,
 * MediaPackage rejects the request, even when that parameter requests the same
 * combination.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/MultiviewFilterConfiguration">AWS
 * API Reference</a></p>
 */
class MultiviewFilterConfiguration {
 public:
  AWS_MEDIAPACKAGEV2_API MultiviewFilterConfiguration() = default;
  AWS_MEDIAPACKAGEV2_API MultiviewFilterConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIAPACKAGEV2_API MultiviewFilterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The layout that MediaPackage uses to composite the tiles into a single
   * output. This layout must be one of the <code>AvailableLayouts</code> of the
   * channel that this origin endpoint is on.</p>
   */
  inline MultiviewLayoutType GetLayout() const { return m_layout; }
  inline bool LayoutHasBeenSet() const { return m_layoutHasBeenSet; }
  inline void SetLayout(MultiviewLayoutType value) {
    m_layoutHasBeenSet = true;
    m_layout = value;
  }
  inline MultiviewFilterConfiguration& WithLayout(MultiviewLayoutType value) {
    SetLayout(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source channels to composite, in tile order. Each channel must be one of
   * the <code>AvailableSources</code> of the channel that this origin endpoint is
   * on, and the number of channels must equal the number of tiles in
   * <code>Layout</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSources() const { return m_sources; }
  inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }
  template <typename SourcesT = Aws::Vector<Aws::String>>
  void SetSources(SourcesT&& value) {
    m_sourcesHasBeenSet = true;
    m_sources = std::forward<SourcesT>(value);
  }
  template <typename SourcesT = Aws::Vector<Aws::String>>
  MultiviewFilterConfiguration& WithSources(SourcesT&& value) {
    SetSources(std::forward<SourcesT>(value));
    return *this;
  }
  template <typename SourcesT = Aws::String>
  MultiviewFilterConfiguration& AddSources(SourcesT&& value) {
    m_sourcesHasBeenSet = true;
    m_sources.emplace_back(std::forward<SourcesT>(value));
    return *this;
  }
  ///@}
 private:
  MultiviewLayoutType m_layout{MultiviewLayoutType::NOT_SET};

  Aws::Vector<Aws::String> m_sources;
  bool m_layoutHasBeenSet = false;
  bool m_sourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws

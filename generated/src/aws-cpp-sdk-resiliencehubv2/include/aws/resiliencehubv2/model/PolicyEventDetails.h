/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/PolicyEventMetadata.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Contains the title, description, and event-specific metadata for a single
 * event on the timeline of a resilience policy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/PolicyEventDetails">AWS
 * API Reference</a></p>
 */
class PolicyEventDetails {
 public:
  AWS_RESILIENCEHUBV2_API PolicyEventDetails() = default;
  AWS_RESILIENCEHUBV2_API PolicyEventDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API PolicyEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A short summary of the event.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  PolicyEventDetails& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the event.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  PolicyEventDetails& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The event-specific metadata, with one member populated according to the event
   * type.</p>
   */
  inline const PolicyEventMetadata& GetEventMetadata() const { return m_eventMetadata; }
  inline bool EventMetadataHasBeenSet() const { return m_eventMetadataHasBeenSet; }
  template <typename EventMetadataT = PolicyEventMetadata>
  void SetEventMetadata(EventMetadataT&& value) {
    m_eventMetadataHasBeenSet = true;
    m_eventMetadata = std::forward<EventMetadataT>(value);
  }
  template <typename EventMetadataT = PolicyEventMetadata>
  PolicyEventDetails& WithEventMetadata(EventMetadataT&& value) {
    SetEventMetadata(std::forward<EventMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_title;

  Aws::String m_description;

  PolicyEventMetadata m_eventMetadata;
  bool m_titleHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_eventMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws

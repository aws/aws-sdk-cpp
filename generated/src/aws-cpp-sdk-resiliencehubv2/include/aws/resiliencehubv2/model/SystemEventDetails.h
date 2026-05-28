/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/SystemEventMetadata.h>

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
 * <p>Contains the details of a system event.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/SystemEventDetails">AWS
 * API Reference</a></p>
 */
class SystemEventDetails {
 public:
  AWS_RESILIENCEHUBV2_API SystemEventDetails() = default;
  AWS_RESILIENCEHUBV2_API SystemEventDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API SystemEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The title of the event.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  SystemEventDetails& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the event.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  SystemEventDetails& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const SystemEventMetadata& GetEventMetadata() const { return m_eventMetadata; }
  inline bool EventMetadataHasBeenSet() const { return m_eventMetadataHasBeenSet; }
  template <typename EventMetadataT = SystemEventMetadata>
  void SetEventMetadata(EventMetadataT&& value) {
    m_eventMetadataHasBeenSet = true;
    m_eventMetadata = std::forward<EventMetadataT>(value);
  }
  template <typename EventMetadataT = SystemEventMetadata>
  SystemEventDetails& WithEventMetadata(EventMetadataT&& value) {
    SetEventMetadata(std::forward<EventMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_title;

  Aws::String m_description;

  SystemEventMetadata m_eventMetadata;
  bool m_titleHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_eventMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws

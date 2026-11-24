/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/ApiSecurityEventDetail.h>
#include <aws/wafv2/model/EventCategory.h>
#include <aws/wafv2/model/EventStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WAFV2 {
namespace Model {

/**
 * <p>Information about an API security event, returned by <a>ListEvents</a>,
 * <a>ListEventsByWebACL</a>, and <a>GetEvent</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/EventDetailSummary">AWS
 * API Reference</a></p>
 */
class EventDetailSummary {
 public:
  AWS_WAFV2_API EventDetailSummary() = default;
  AWS_WAFV2_API EventDetailSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API EventDetailSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the event. You provide this to <a>GetEvent</a> to
   * retrieve the details of the event.</p>
   */
  inline const Aws::String& GetEventId() const { return m_eventId; }
  inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
  template <typename EventIdT = Aws::String>
  void SetEventId(EventIdT&& value) {
    m_eventIdHasBeenSet = true;
    m_eventId = std::forward<EventIdT>(value);
  }
  template <typename EventIdT = Aws::String>
  EventDetailSummary& WithEventId(EventIdT&& value) {
    SetEventId(std::forward<EventIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the event.</p>
   */
  inline EventStatus GetEventStatus() const { return m_eventStatus; }
  inline bool EventStatusHasBeenSet() const { return m_eventStatusHasBeenSet; }
  inline void SetEventStatus(EventStatus value) {
    m_eventStatusHasBeenSet = true;
    m_eventStatus = value;
  }
  inline EventDetailSummary& WithEventStatus(EventStatus value) {
    SetEventStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The category of the event. The only supported value is
   * <code>API_SECURITY</code>.</p>
   */
  inline EventCategory GetEventCategory() const { return m_eventCategory; }
  inline bool EventCategoryHasBeenSet() const { return m_eventCategoryHasBeenSet; }
  inline void SetEventCategory(EventCategory value) {
    m_eventCategoryHasBeenSet = true;
    m_eventCategory = value;
  }
  inline EventDetailSummary& WithEventCategory(EventCategory value) {
    SetEventCategory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the event started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  EventDetailSummary& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the event was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
  inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  void SetLastUpdatedTime(LastUpdatedTimeT&& value) {
    m_lastUpdatedTimeHasBeenSet = true;
    m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value);
  }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  EventDetailSummary& WithLastUpdatedTime(LastUpdatedTimeT&& value) {
    SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the event ended. This is not populated while the event is
   * ongoing.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  EventDetailSummary& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the protected resource that the event is
   * associated with.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  EventDetailSummary& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the web ACL that the event is associated
   * with.</p>
   */
  inline const Aws::String& GetWebAclArn() const { return m_webAclArn; }
  inline bool WebAclArnHasBeenSet() const { return m_webAclArnHasBeenSet; }
  template <typename WebAclArnT = Aws::String>
  void SetWebAclArn(WebAclArnT&& value) {
    m_webAclArnHasBeenSet = true;
    m_webAclArn = std::forward<WebAclArnT>(value);
  }
  template <typename WebAclArnT = Aws::String>
  EventDetailSummary& WithWebAclArn(WebAclArnT&& value) {
    SetWebAclArn(std::forward<WebAclArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The API security details of the event, such as the label, category,
   * confidence, API patterns, and event actors.</p>
   */
  inline const ApiSecurityEventDetail& GetApiSecurityEventDetail() const { return m_apiSecurityEventDetail; }
  inline bool ApiSecurityEventDetailHasBeenSet() const { return m_apiSecurityEventDetailHasBeenSet; }
  template <typename ApiSecurityEventDetailT = ApiSecurityEventDetail>
  void SetApiSecurityEventDetail(ApiSecurityEventDetailT&& value) {
    m_apiSecurityEventDetailHasBeenSet = true;
    m_apiSecurityEventDetail = std::forward<ApiSecurityEventDetailT>(value);
  }
  template <typename ApiSecurityEventDetailT = ApiSecurityEventDetail>
  EventDetailSummary& WithApiSecurityEventDetail(ApiSecurityEventDetailT&& value) {
    SetApiSecurityEventDetail(std::forward<ApiSecurityEventDetailT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventId;

  EventStatus m_eventStatus{EventStatus::NOT_SET};

  EventCategory m_eventCategory{EventCategory::NOT_SET};

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_lastUpdatedTime{};

  Aws::Utils::DateTime m_endTime{};

  Aws::String m_resourceArn;

  Aws::String m_webAclArn;

  ApiSecurityEventDetail m_apiSecurityEventDetail;
  bool m_eventIdHasBeenSet = false;
  bool m_eventStatusHasBeenSet = false;
  bool m_eventCategoryHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_lastUpdatedTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_resourceArnHasBeenSet = false;
  bool m_webAclArnHasBeenSet = false;
  bool m_apiSecurityEventDetailHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws

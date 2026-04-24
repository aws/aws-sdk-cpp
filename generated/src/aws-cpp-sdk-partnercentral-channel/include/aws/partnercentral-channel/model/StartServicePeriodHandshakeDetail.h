/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/ServicePeriodType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralChannel {
namespace Model {

/**
 * <p>Details specific to start service period handshakes.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/StartServicePeriodHandshakeDetail">AWS
 * API Reference</a></p>
 */
class StartServicePeriodHandshakeDetail {
 public:
  AWS_PARTNERCENTRALCHANNEL_API StartServicePeriodHandshakeDetail() = default;
  AWS_PARTNERCENTRALCHANNEL_API StartServicePeriodHandshakeDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API StartServicePeriodHandshakeDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A note providing additional information about the service period.</p>
   */
  inline const Aws::String& GetNote() const { return m_note; }
  inline bool NoteHasBeenSet() const { return m_noteHasBeenSet; }
  template <typename NoteT = Aws::String>
  void SetNote(NoteT&& value) {
    m_noteHasBeenSet = true;
    m_note = std::forward<NoteT>(value);
  }
  template <typename NoteT = Aws::String>
  StartServicePeriodHandshakeDetail& WithNote(NoteT&& value) {
    SetNote(std::forward<NoteT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of service period being started.</p>
   */
  inline ServicePeriodType GetServicePeriodType() const { return m_servicePeriodType; }
  inline bool ServicePeriodTypeHasBeenSet() const { return m_servicePeriodTypeHasBeenSet; }
  inline void SetServicePeriodType(ServicePeriodType value) {
    m_servicePeriodTypeHasBeenSet = true;
    m_servicePeriodType = value;
  }
  inline StartServicePeriodHandshakeDetail& WithServicePeriodType(ServicePeriodType value) {
    SetServicePeriodType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum number of days notice required for changes.</p>
   */
  inline const Aws::String& GetMinimumNoticeDays() const { return m_minimumNoticeDays; }
  inline bool MinimumNoticeDaysHasBeenSet() const { return m_minimumNoticeDaysHasBeenSet; }
  template <typename MinimumNoticeDaysT = Aws::String>
  void SetMinimumNoticeDays(MinimumNoticeDaysT&& value) {
    m_minimumNoticeDaysHasBeenSet = true;
    m_minimumNoticeDays = std::forward<MinimumNoticeDaysT>(value);
  }
  template <typename MinimumNoticeDaysT = Aws::String>
  StartServicePeriodHandshakeDetail& WithMinimumNoticeDays(MinimumNoticeDaysT&& value) {
    SetMinimumNoticeDays(std::forward<MinimumNoticeDaysT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start date of the service period.</p>
   */
  inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
  inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
  template <typename StartDateT = Aws::Utils::DateTime>
  void SetStartDate(StartDateT&& value) {
    m_startDateHasBeenSet = true;
    m_startDate = std::forward<StartDateT>(value);
  }
  template <typename StartDateT = Aws::Utils::DateTime>
  StartServicePeriodHandshakeDetail& WithStartDate(StartDateT&& value) {
    SetStartDate(std::forward<StartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end date of the service period.</p>
   */
  inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
  inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
  template <typename EndDateT = Aws::Utils::DateTime>
  void SetEndDate(EndDateT&& value) {
    m_endDateHasBeenSet = true;
    m_endDate = std::forward<EndDateT>(value);
  }
  template <typename EndDateT = Aws::Utils::DateTime>
  StartServicePeriodHandshakeDetail& WithEndDate(EndDateT&& value) {
    SetEndDate(std::forward<EndDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_note;

  ServicePeriodType m_servicePeriodType{ServicePeriodType::NOT_SET};

  Aws::String m_minimumNoticeDays;

  Aws::Utils::DateTime m_startDate{};

  Aws::Utils::DateTime m_endDate{};
  bool m_noteHasBeenSet = false;
  bool m_servicePeriodTypeHasBeenSet = false;
  bool m_minimumNoticeDaysHasBeenSet = false;
  bool m_startDateHasBeenSet = false;
  bool m_endDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws

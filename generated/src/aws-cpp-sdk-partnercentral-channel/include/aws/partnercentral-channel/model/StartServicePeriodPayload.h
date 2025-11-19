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
 * <p>Payload for start service period handshake requests.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/StartServicePeriodPayload">AWS
 * API Reference</a></p>
 */
class StartServicePeriodPayload {
 public:
  AWS_PARTNERCENTRALCHANNEL_API StartServicePeriodPayload() = default;
  AWS_PARTNERCENTRALCHANNEL_API StartServicePeriodPayload(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API StartServicePeriodPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the program management account.</p>
   */
  inline const Aws::String& GetProgramManagementAccountIdentifier() const { return m_programManagementAccountIdentifier; }
  inline bool ProgramManagementAccountIdentifierHasBeenSet() const { return m_programManagementAccountIdentifierHasBeenSet; }
  template <typename ProgramManagementAccountIdentifierT = Aws::String>
  void SetProgramManagementAccountIdentifier(ProgramManagementAccountIdentifierT&& value) {
    m_programManagementAccountIdentifierHasBeenSet = true;
    m_programManagementAccountIdentifier = std::forward<ProgramManagementAccountIdentifierT>(value);
  }
  template <typename ProgramManagementAccountIdentifierT = Aws::String>
  StartServicePeriodPayload& WithProgramManagementAccountIdentifier(ProgramManagementAccountIdentifierT&& value) {
    SetProgramManagementAccountIdentifier(std::forward<ProgramManagementAccountIdentifierT>(value));
    return *this;
  }
  ///@}

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
  StartServicePeriodPayload& WithNote(NoteT&& value) {
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
  inline StartServicePeriodPayload& WithServicePeriodType(ServicePeriodType value) {
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
  StartServicePeriodPayload& WithMinimumNoticeDays(MinimumNoticeDaysT&& value) {
    SetMinimumNoticeDays(std::forward<MinimumNoticeDaysT>(value));
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
  StartServicePeriodPayload& WithEndDate(EndDateT&& value) {
    SetEndDate(std::forward<EndDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_programManagementAccountIdentifier;
  bool m_programManagementAccountIdentifierHasBeenSet = false;

  Aws::String m_note;
  bool m_noteHasBeenSet = false;

  ServicePeriodType m_servicePeriodType{ServicePeriodType::NOT_SET};
  bool m_servicePeriodTypeHasBeenSet = false;

  Aws::String m_minimumNoticeDays;
  bool m_minimumNoticeDaysHasBeenSet = false;

  Aws::Utils::DateTime m_endDate{};
  bool m_endDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws

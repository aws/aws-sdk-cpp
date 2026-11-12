/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/AutoPidMapConfiguration.h>
#include <aws/mediaconnect/model/PidMapRule.h>
#include <aws/mediaconnect/model/ProgramClockReferencePidConfiguration.h>
#include <aws/mediaconnect/model/ProgramMapTablePidConfiguration.h>
#include <aws/mediaconnect/model/ProgramNumberConfiguration.h>
#include <aws/mediaconnect/model/TransportStreamIdConfiguration.h>

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
 * <p>The configuration settings for remapping the identification numbers of
 * elementary streams and program identifiers of a single-program transport
 * stream.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/SingleProgramTransportStreamPidMapConfiguration">AWS
 * API Reference</a></p>
 */
class SingleProgramTransportStreamPidMapConfiguration {
 public:
  AWS_MEDIACONNECT_API SingleProgramTransportStreamPidMapConfiguration() = default;
  AWS_MEDIACONNECT_API SingleProgramTransportStreamPidMapConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API SingleProgramTransportStreamPidMapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ordered list of up to 32 rules that determine the action for each
   * elementary stream. MediaConnect applies the first rule that matches.</p>
   */
  inline const Aws::Vector<PidMapRule>& GetRules() const { return m_rules; }
  inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
  template <typename RulesT = Aws::Vector<PidMapRule>>
  void SetRules(RulesT&& value) {
    m_rulesHasBeenSet = true;
    m_rules = std::forward<RulesT>(value);
  }
  template <typename RulesT = Aws::Vector<PidMapRule>>
  SingleProgramTransportStreamPidMapConfiguration& WithRules(RulesT&& value) {
    SetRules(std::forward<RulesT>(value));
    return *this;
  }
  template <typename RulesT = PidMapRule>
  SingleProgramTransportStreamPidMapConfiguration& AddRules(RulesT&& value) {
    m_rulesHasBeenSet = true;
    m_rules.emplace_back(std::forward<RulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action to apply to an elementary stream that doesn't match any rule.</p>
   */
  inline const Aws::String& GetDefaultAction() const { return m_defaultAction; }
  inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }
  template <typename DefaultActionT = Aws::String>
  void SetDefaultAction(DefaultActionT&& value) {
    m_defaultActionHasBeenSet = true;
    m_defaultAction = std::forward<DefaultActionT>(value);
  }
  template <typename DefaultActionT = Aws::String>
  SingleProgramTransportStreamPidMapConfiguration& WithDefaultAction(DefaultActionT&& value) {
    SetDefaultAction(std::forward<DefaultActionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The transport stream ID (TSID) settings for the router output. By default,
   * the router output passes through the TSID from the source.</p>
   */
  inline const TransportStreamIdConfiguration& GetTransportStreamId() const { return m_transportStreamId; }
  inline bool TransportStreamIdHasBeenSet() const { return m_transportStreamIdHasBeenSet; }
  template <typename TransportStreamIdT = TransportStreamIdConfiguration>
  void SetTransportStreamId(TransportStreamIdT&& value) {
    m_transportStreamIdHasBeenSet = true;
    m_transportStreamId = std::forward<TransportStreamIdT>(value);
  }
  template <typename TransportStreamIdT = TransportStreamIdConfiguration>
  SingleProgramTransportStreamPidMapConfiguration& WithTransportStreamId(TransportStreamIdT&& value) {
    SetTransportStreamId(std::forward<TransportStreamIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The program number settings for the router output. By default, the router
   * output passes through the program number from the source.</p>
   */
  inline const ProgramNumberConfiguration& GetProgramNumber() const { return m_programNumber; }
  inline bool ProgramNumberHasBeenSet() const { return m_programNumberHasBeenSet; }
  template <typename ProgramNumberT = ProgramNumberConfiguration>
  void SetProgramNumber(ProgramNumberT&& value) {
    m_programNumberHasBeenSet = true;
    m_programNumber = std::forward<ProgramNumberT>(value);
  }
  template <typename ProgramNumberT = ProgramNumberConfiguration>
  SingleProgramTransportStreamPidMapConfiguration& WithProgramNumber(ProgramNumberT&& value) {
    SetProgramNumber(std::forward<ProgramNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Program Map Table (PMT) PID settings for the router output. By default,
   * the router output passes through the PMT PID from the source.</p>
   */
  inline const ProgramMapTablePidConfiguration& GetProgramMapTablePid() const { return m_programMapTablePid; }
  inline bool ProgramMapTablePidHasBeenSet() const { return m_programMapTablePidHasBeenSet; }
  template <typename ProgramMapTablePidT = ProgramMapTablePidConfiguration>
  void SetProgramMapTablePid(ProgramMapTablePidT&& value) {
    m_programMapTablePidHasBeenSet = true;
    m_programMapTablePid = std::forward<ProgramMapTablePidT>(value);
  }
  template <typename ProgramMapTablePidT = ProgramMapTablePidConfiguration>
  SingleProgramTransportStreamPidMapConfiguration& WithProgramMapTablePid(ProgramMapTablePidT&& value) {
    SetProgramMapTablePid(std::forward<ProgramMapTablePidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Program Clock Reference (PCR) PID settings for the router output. By
   * default, the router output passes through the PCR PID from the source.</p>
   */
  inline const ProgramClockReferencePidConfiguration& GetProgramClockReferencePid() const { return m_programClockReferencePid; }
  inline bool ProgramClockReferencePidHasBeenSet() const { return m_programClockReferencePidHasBeenSet; }
  template <typename ProgramClockReferencePidT = ProgramClockReferencePidConfiguration>
  void SetProgramClockReferencePid(ProgramClockReferencePidT&& value) {
    m_programClockReferencePidHasBeenSet = true;
    m_programClockReferencePid = std::forward<ProgramClockReferencePidT>(value);
  }
  template <typename ProgramClockReferencePidT = ProgramClockReferencePidConfiguration>
  SingleProgramTransportStreamPidMapConfiguration& WithProgramClockReferencePid(ProgramClockReferencePidT&& value) {
    SetProgramClockReferencePid(std::forward<ProgramClockReferencePidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The settings for automatic Packet ID (PID) assignment. The default start PID
   * is 512, with 32 PIDs per program.</p>
   */
  inline const AutoPidMapConfiguration& GetAuto() const { return m_auto; }
  inline bool AutoHasBeenSet() const { return m_autoHasBeenSet; }
  template <typename AutoT = AutoPidMapConfiguration>
  void SetAuto(AutoT&& value) {
    m_autoHasBeenSet = true;
    m_auto = std::forward<AutoT>(value);
  }
  template <typename AutoT = AutoPidMapConfiguration>
  SingleProgramTransportStreamPidMapConfiguration& WithAuto(AutoT&& value) {
    SetAuto(std::forward<AutoT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PidMapRule> m_rules;

  Aws::String m_defaultAction;

  TransportStreamIdConfiguration m_transportStreamId;

  ProgramNumberConfiguration m_programNumber;

  ProgramMapTablePidConfiguration m_programMapTablePid;

  ProgramClockReferencePidConfiguration m_programClockReferencePid;

  AutoPidMapConfiguration m_auto;
  bool m_rulesHasBeenSet = false;
  bool m_defaultActionHasBeenSet = false;
  bool m_transportStreamIdHasBeenSet = false;
  bool m_programNumberHasBeenSet = false;
  bool m_programMapTablePidHasBeenSet = false;
  bool m_programClockReferencePidHasBeenSet = false;
  bool m_autoHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ExportDataType.h>
#include <aws/securityhub/model/ExportDestination.h>
#include <aws/securityhub/model/ExportFailureCode.h>
#include <aws/securityhub/model/ExportOutputSummary.h>
#include <aws/securityhub/model/ExportScopes.h>
#include <aws/securityhub/model/ExportStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>A summary of an export job, as returned by
 * <code>ListExportJobsV2</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ExportSummary">AWS
 * API Reference</a></p>
 */
class ExportSummary {
 public:
  AWS_SECURITYHUB_API ExportSummary() = default;
  AWS_SECURITYHUB_API ExportSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API ExportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the export job.</p>
   */
  inline const Aws::String& GetExportJobId() const { return m_exportJobId; }
  inline bool ExportJobIdHasBeenSet() const { return m_exportJobIdHasBeenSet; }
  template <typename ExportJobIdT = Aws::String>
  void SetExportJobId(ExportJobIdT&& value) {
    m_exportJobIdHasBeenSet = true;
    m_exportJobId = std::forward<ExportJobIdT>(value);
  }
  template <typename ExportJobIdT = Aws::String>
  ExportSummary& WithExportJobId(ExportJobIdT&& value) {
    SetExportJobId(std::forward<ExportJobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user-provided name of the export job, if one was specified.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ExportSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the export job.</p>
   */
  inline ExportStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ExportStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ExportSummary& WithStatus(ExportStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The category of data that the export job produces.</p>
   */
  inline ExportDataType GetDataType() const { return m_dataType; }
  inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
  inline void SetDataType(ExportDataType value) {
    m_dataTypeHasBeenSet = true;
    m_dataType = value;
  }
  inline ExportSummary& WithDataType(ExportDataType value) {
    SetDataType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output configuration of the export job. For findings exports, this
   * reports the output format. Present only for findings exports; absent for other
   * data types.</p>
   */
  inline const ExportOutputSummary& GetOutputConfiguration() const { return m_outputConfiguration; }
  inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }
  template <typename OutputConfigurationT = ExportOutputSummary>
  void SetOutputConfiguration(OutputConfigurationT&& value) {
    m_outputConfigurationHasBeenSet = true;
    m_outputConfiguration = std::forward<OutputConfigurationT>(value);
  }
  template <typename OutputConfigurationT = ExportOutputSummary>
  ExportSummary& WithOutputConfiguration(OutputConfigurationT&& value) {
    SetOutputConfiguration(std::forward<OutputConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The organization scopes that the export job was started with, echoed
   * verbatim. Absent if the caller didn't supply <code>Scopes</code>.</p>
   */
  inline const ExportScopes& GetScopes() const { return m_scopes; }
  inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
  template <typename ScopesT = ExportScopes>
  void SetScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes = std::forward<ScopesT>(value);
  }
  template <typename ScopesT = ExportScopes>
  ExportSummary& WithScopes(ScopesT&& value) {
    SetScopes(std::forward<ScopesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination that the export job writes to.</p>
   */
  inline const ExportDestination& GetDestination() const { return m_destination; }
  inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
  template <typename DestinationT = ExportDestination>
  void SetDestination(DestinationT&& value) {
    m_destinationHasBeenSet = true;
    m_destination = std::forward<DestinationT>(value);
  }
  template <typename DestinationT = ExportDestination>
  ExportSummary& WithDestination(DestinationT&& value) {
    SetDestination(std::forward<DestinationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A code that classifies why the export job failed. Present only when
   * <code>Status</code> is <code>FAILED</code>.</p>
   */
  inline ExportFailureCode GetFailureCode() const { return m_failureCode; }
  inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
  inline void SetFailureCode(ExportFailureCode value) {
    m_failureCodeHasBeenSet = true;
    m_failureCode = value;
  }
  inline ExportSummary& WithFailureCode(ExportFailureCode value) {
    SetFailureCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable message about why the export job failed. Present only when
   * <code>Status</code> is <code>FAILED</code>.</p>
   */
  inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
  inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
  template <typename FailureMessageT = Aws::String>
  void SetFailureMessage(FailureMessageT&& value) {
    m_failureMessageHasBeenSet = true;
    m_failureMessage = std::forward<FailureMessageT>(value);
  }
  template <typename FailureMessageT = Aws::String>
  ExportSummary& WithFailureMessage(FailureMessageT&& value) {
    SetFailureMessage(std::forward<FailureMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the export job was created.</p> <p>For more information about
   * the validation and formatting of timestamp fields in Security Hub, see <a
   * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  ExportSummary& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the export job reached a terminal state. Absent while the job
   * is <code>RUNNING</code>.</p> <p>For more information about the validation and
   * formatting of timestamp fields in Security Hub, see <a
   * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  ExportSummary& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_exportJobId;

  Aws::String m_name;

  ExportStatus m_status{ExportStatus::NOT_SET};

  ExportDataType m_dataType{ExportDataType::NOT_SET};

  ExportOutputSummary m_outputConfiguration;

  ExportScopes m_scopes;

  ExportDestination m_destination;

  ExportFailureCode m_failureCode{ExportFailureCode::NOT_SET};

  Aws::String m_failureMessage;

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_endedAt{};
  bool m_exportJobIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_dataTypeHasBeenSet = false;
  bool m_outputConfigurationHasBeenSet = false;
  bool m_scopesHasBeenSet = false;
  bool m_destinationHasBeenSet = false;
  bool m_failureCodeHasBeenSet = false;
  bool m_failureMessageHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws

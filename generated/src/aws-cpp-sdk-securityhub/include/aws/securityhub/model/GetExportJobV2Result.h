/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ExportDataType.h>
#include <aws/securityhub/model/ExportDestination.h>
#include <aws/securityhub/model/ExportFailureCode.h>
#include <aws/securityhub/model/ExportOutput.h>
#include <aws/securityhub/model/ExportScopes.h>
#include <aws/securityhub/model/ExportStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {
class GetExportJobV2Result {
 public:
  AWS_SECURITYHUB_API GetExportJobV2Result() = default;
  AWS_SECURITYHUB_API GetExportJobV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYHUB_API GetExportJobV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the export job.</p>
   */
  inline const Aws::String& GetExportJobId() const { return m_exportJobId; }
  template <typename ExportJobIdT = Aws::String>
  void SetExportJobId(ExportJobIdT&& value) {
    m_exportJobIdHasBeenSet = true;
    m_exportJobId = std::forward<ExportJobIdT>(value);
  }
  template <typename ExportJobIdT = Aws::String>
  GetExportJobV2Result& WithExportJobId(ExportJobIdT&& value) {
    SetExportJobId(std::forward<ExportJobIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user-provided name of the export job, if one was specified when the job
   * was started.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetExportJobV2Result& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the export job.</p>
   */
  inline ExportStatus GetStatus() const { return m_status; }
  inline void SetStatus(ExportStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetExportJobV2Result& WithStatus(ExportStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The category of data that the export job produces.</p>
   */
  inline ExportDataType GetDataType() const { return m_dataType; }
  inline void SetDataType(ExportDataType value) {
    m_dataTypeHasBeenSet = true;
    m_dataType = value;
  }
  inline GetExportJobV2Result& WithDataType(ExportDataType value) {
    SetDataType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output configuration that the export job was started with, including the
   * format and any filters or selected fields.</p>
   */
  inline const ExportOutput& GetOutputConfiguration() const { return m_outputConfiguration; }
  template <typename OutputConfigurationT = ExportOutput>
  void SetOutputConfiguration(OutputConfigurationT&& value) {
    m_outputConfigurationHasBeenSet = true;
    m_outputConfiguration = std::forward<OutputConfigurationT>(value);
  }
  template <typename OutputConfigurationT = ExportOutput>
  GetExportJobV2Result& WithOutputConfiguration(OutputConfigurationT&& value) {
    SetOutputConfiguration(std::forward<OutputConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The organization scopes that the export job was started with, echoed
   * verbatim. This parameter is absent if the caller didn't supply
   * <code>Scopes</code>. It contains only the organization or organizational unit
   * (OU) identifiers that the caller submitted; it never contains resolved
   * member-account identifiers.</p>
   */
  inline const ExportScopes& GetScopes() const { return m_scopes; }
  template <typename ScopesT = ExportScopes>
  void SetScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes = std::forward<ScopesT>(value);
  }
  template <typename ScopesT = ExportScopes>
  GetExportJobV2Result& WithScopes(ScopesT&& value) {
    SetScopes(std::forward<ScopesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination that the export job writes to.</p>
   */
  inline const ExportDestination& GetDestination() const { return m_destination; }
  template <typename DestinationT = ExportDestination>
  void SetDestination(DestinationT&& value) {
    m_destinationHasBeenSet = true;
    m_destination = std::forward<DestinationT>(value);
  }
  template <typename DestinationT = ExportDestination>
  GetExportJobV2Result& WithDestination(DestinationT&& value) {
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
  inline void SetFailureCode(ExportFailureCode value) {
    m_failureCodeHasBeenSet = true;
    m_failureCode = value;
  }
  inline GetExportJobV2Result& WithFailureCode(ExportFailureCode value) {
    SetFailureCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable message that provides more detail about why the export job
   * failed. Present only when <code>Status</code> is <code>FAILED</code>.</p>
   */
  inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
  template <typename FailureMessageT = Aws::String>
  void SetFailureMessage(FailureMessageT&& value) {
    m_failureMessageHasBeenSet = true;
    m_failureMessage = std::forward<FailureMessageT>(value);
  }
  template <typename FailureMessageT = Aws::String>
  GetExportJobV2Result& WithFailureMessage(FailureMessageT&& value) {
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
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  GetExportJobV2Result& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the export job reached a terminal state
   * (<code>SUCCEEDED</code>, <code>FAILED</code>, or <code>CANCELLED</code>). This
   * parameter is absent while the job is <code>RUNNING</code>.</p> <p>For more
   * information about the validation and formatting of timestamp fields in Security
   * Hub, see <a
   * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  GetExportJobV2Result& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetExportJobV2Result& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_exportJobId;

  Aws::String m_name;

  ExportStatus m_status{ExportStatus::NOT_SET};

  ExportDataType m_dataType{ExportDataType::NOT_SET};

  ExportOutput m_outputConfiguration;

  ExportScopes m_scopes;

  ExportDestination m_destination;

  ExportFailureCode m_failureCode{ExportFailureCode::NOT_SET};

  Aws::String m_failureMessage;

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_endedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
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
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws

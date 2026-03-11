/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/simpledbv2/SimpleDBv2_EXPORTS.h>
#include <aws/simpledbv2/model/ExportStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SimpleDBv2 {
namespace Model {

/**
 * <p>Summary information about an export, including its unique identifier, current
 * status, creation time, and the domain being exported.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/simpledbv2-2025-09-26/ExportSummary">AWS
 * API Reference</a></p>
 */
class ExportSummary {
 public:
  AWS_SIMPLEDBV2_API ExportSummary() = default;
  AWS_SIMPLEDBV2_API ExportSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIMPLEDBV2_API ExportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SIMPLEDBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unique ARN identifier of the export.</p>
   */
  inline const Aws::String& GetExportArn() const { return m_exportArn; }
  inline bool ExportArnHasBeenSet() const { return m_exportArnHasBeenSet; }
  template <typename ExportArnT = Aws::String>
  void SetExportArn(ExportArnT&& value) {
    m_exportArnHasBeenSet = true;
    m_exportArn = std::forward<ExportArnT>(value);
  }
  template <typename ExportArnT = Aws::String>
  ExportSummary& WithExportArn(ExportArnT&& value) {
    SetExportArn(std::forward<ExportArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the export. Current possible values include : PENDING -
   * export request received, IN_PROGRESS - export is being processed, SUCCEEDED -
   * export completed successfully, and FAILED - export encountered an error.</p>
   */
  inline ExportStatus GetExportStatus() const { return m_exportStatus; }
  inline bool ExportStatusHasBeenSet() const { return m_exportStatusHasBeenSet; }
  inline void SetExportStatus(ExportStatus value) {
    m_exportStatusHasBeenSet = true;
    m_exportStatus = value;
  }
  inline ExportSummary& WithExportStatus(ExportStatus value) {
    SetExportStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the export request was received by the service</p>
   */
  inline const Aws::Utils::DateTime& GetRequestedAt() const { return m_requestedAt; }
  inline bool RequestedAtHasBeenSet() const { return m_requestedAtHasBeenSet; }
  template <typename RequestedAtT = Aws::Utils::DateTime>
  void SetRequestedAt(RequestedAtT&& value) {
    m_requestedAtHasBeenSet = true;
    m_requestedAt = std::forward<RequestedAtT>(value);
  }
  template <typename RequestedAtT = Aws::Utils::DateTime>
  ExportSummary& WithRequestedAt(RequestedAtT&& value) {
    SetRequestedAt(std::forward<RequestedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the domain for which the export was created.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  ExportSummary& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_exportArn;

  ExportStatus m_exportStatus{ExportStatus::NOT_SET};

  Aws::Utils::DateTime m_requestedAt{};

  Aws::String m_domainName;
  bool m_exportArnHasBeenSet = false;
  bool m_exportStatusHasBeenSet = false;
  bool m_requestedAtHasBeenSet = false;
  bool m_domainNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace SimpleDBv2
}  // namespace Aws

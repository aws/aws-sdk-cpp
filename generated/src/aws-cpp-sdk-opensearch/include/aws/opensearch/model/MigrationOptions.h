/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/ExportOptions.h>
#include <aws/opensearch/model/MigrationSource.h>
#include <aws/opensearch/model/MigrationWorkspace.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchService {
namespace Model {

/**
 * <p>The configuration options for a saved objects migration job.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/MigrationOptions">AWS
 * API Reference</a></p>
 */
class MigrationOptions {
 public:
  AWS_OPENSEARCHSERVICE_API MigrationOptions() = default;
  AWS_OPENSEARCHSERVICE_API MigrationOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API MigrationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The data source from which to export saved objects.</p>
   */
  inline const MigrationSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = MigrationSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = MigrationSource>
  MigrationOptions& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target workspace configuration for importing saved objects. You can
   * specify an existing workspace or request creation of a new workspace.</p>
   */
  inline const MigrationWorkspace& GetWorkspace() const { return m_workspace; }
  inline bool WorkspaceHasBeenSet() const { return m_workspaceHasBeenSet; }
  template <typename WorkspaceT = MigrationWorkspace>
  void SetWorkspace(WorkspaceT&& value) {
    m_workspaceHasBeenSet = true;
    m_workspace = std::forward<WorkspaceT>(value);
  }
  template <typename WorkspaceT = MigrationWorkspace>
  MigrationOptions& WithWorkspace(WorkspaceT&& value) {
    SetWorkspace(std::forward<WorkspaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Options to filter the scope of saved objects to export from the source.</p>
   */
  inline const ExportOptions& GetExportOptions() const { return m_exportOptions; }
  inline bool ExportOptionsHasBeenSet() const { return m_exportOptionsHasBeenSet; }
  template <typename ExportOptionsT = ExportOptions>
  void SetExportOptions(ExportOptionsT&& value) {
    m_exportOptionsHasBeenSet = true;
    m_exportOptions = std::forward<ExportOptionsT>(value);
  }
  template <typename ExportOptionsT = ExportOptions>
  MigrationOptions& WithExportOptions(ExportOptionsT&& value) {
    SetExportOptions(std::forward<ExportOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The strategy for resolving conflicts when saved objects already exist in the
   * target workspace. Valid values are <code>CREATE_NEW_COPIES</code>, which creates
   * new objects with unique IDs, and <code>overwrite</code>, which replaces existing
   * objects.</p>
   */
  inline const Aws::String& GetConflictResolution() const { return m_conflictResolution; }
  inline bool ConflictResolutionHasBeenSet() const { return m_conflictResolutionHasBeenSet; }
  template <typename ConflictResolutionT = Aws::String>
  void SetConflictResolution(ConflictResolutionT&& value) {
    m_conflictResolutionHasBeenSet = true;
    m_conflictResolution = std::forward<ConflictResolutionT>(value);
  }
  template <typename ConflictResolutionT = Aws::String>
  MigrationOptions& WithConflictResolution(ConflictResolutionT&& value) {
    SetConflictResolution(std::forward<ConflictResolutionT>(value));
    return *this;
  }
  ///@}
 private:
  MigrationSource m_source;

  MigrationWorkspace m_workspace;

  ExportOptions m_exportOptions;

  Aws::String m_conflictResolution;
  bool m_sourceHasBeenSet = false;
  bool m_workspaceHasBeenSet = false;
  bool m_exportOptionsHasBeenSet = false;
  bool m_conflictResolutionHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/MigrationError.h>
#include <aws/opensearch/model/MigrationSource.h>

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
 * <p>A summary of a migration job, including its status and
 * progress.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/MigrationSummary">AWS
 * API Reference</a></p>
 */
class MigrationSummary {
 public:
  AWS_OPENSEARCHSERVICE_API MigrationSummary() = default;
  AWS_OPENSEARCHSERVICE_API MigrationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API MigrationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the migration job.</p>
   */
  inline const Aws::String& GetMigrationId() const { return m_migrationId; }
  inline bool MigrationIdHasBeenSet() const { return m_migrationIdHasBeenSet; }
  template <typename MigrationIdT = Aws::String>
  void SetMigrationId(MigrationIdT&& value) {
    m_migrationIdHasBeenSet = true;
    m_migrationId = std::forward<MigrationIdT>(value);
  }
  template <typename MigrationIdT = Aws::String>
  MigrationSummary& WithMigrationId(MigrationIdT&& value) {
    SetMigrationId(std::forward<MigrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the migration job.</p>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  MigrationSummary& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the OpenSearch application associated with the
   * migration.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  MigrationSummary& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source configuration for the migration.</p>
   */
  inline const MigrationSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = MigrationSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = MigrationSource>
  MigrationSummary& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of saved objects exported from the source data source.</p>
   */
  inline int GetExportedCount() const { return m_exportedCount; }
  inline bool ExportedCountHasBeenSet() const { return m_exportedCountHasBeenSet; }
  inline void SetExportedCount(int value) {
    m_exportedCountHasBeenSet = true;
    m_exportedCount = value;
  }
  inline MigrationSummary& WithExportedCount(int value) {
    SetExportedCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of saved objects successfully imported into the target
   * workspace.</p>
   */
  inline int GetImportedCount() const { return m_importedCount; }
  inline bool ImportedCountHasBeenSet() const { return m_importedCountHasBeenSet; }
  inline void SetImportedCount(int value) {
    m_importedCountHasBeenSet = true;
    m_importedCount = value;
  }
  inline MigrationSummary& WithImportedCount(int value) {
    SetImportedCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error details if the migration failed or completed with errors.</p>
   */
  inline const MigrationError& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = MigrationError>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = MigrationError>
  MigrationSummary& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the migration job was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  MigrationSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the migration job was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  MigrationSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_migrationId;

  Aws::String m_status;

  Aws::String m_applicationId;

  MigrationSource m_source;

  int m_exportedCount{0};

  int m_importedCount{0};

  MigrationError m_error;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_migrationIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_applicationIdHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_exportedCountHasBeenSet = false;
  bool m_importedCountHasBeenSet = false;
  bool m_errorHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws

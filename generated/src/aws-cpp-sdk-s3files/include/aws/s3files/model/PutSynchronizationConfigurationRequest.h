/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3files/S3FilesRequest.h>
#include <aws/s3files/S3Files_EXPORTS.h>
#include <aws/s3files/model/ExpirationDataRule.h>
#include <aws/s3files/model/ImportDataRule.h>

#include <utility>

namespace Aws {
namespace S3Files {
namespace Model {

/**
 */
class PutSynchronizationConfigurationRequest : public S3FilesRequest {
 public:
  AWS_S3FILES_API PutSynchronizationConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutSynchronizationConfiguration"; }

  AWS_S3FILES_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID or Amazon Resource Name (ARN) of the S3 File System to configure
   * synchronization for.</p>
   */
  inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
  inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
  template <typename FileSystemIdT = Aws::String>
  void SetFileSystemId(FileSystemIdT&& value) {
    m_fileSystemIdHasBeenSet = true;
    m_fileSystemId = std::forward<FileSystemIdT>(value);
  }
  template <typename FileSystemIdT = Aws::String>
  PutSynchronizationConfigurationRequest& WithFileSystemId(FileSystemIdT&& value) {
    SetFileSystemId(std::forward<FileSystemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version number of the current synchronization configuration. Omit this
   * value when creating a synchronization configuration for the first time. For
   * subsequent updates, provide this value for optimistic concurrency control. If
   * the version number does not match the current configuration, the request fails
   * with a <code>ConflictException</code>.</p>
   */
  inline int GetLatestVersionNumber() const { return m_latestVersionNumber; }
  inline bool LatestVersionNumberHasBeenSet() const { return m_latestVersionNumberHasBeenSet; }
  inline void SetLatestVersionNumber(int value) {
    m_latestVersionNumberHasBeenSet = true;
    m_latestVersionNumber = value;
  }
  inline PutSynchronizationConfigurationRequest& WithLatestVersionNumber(int value) {
    SetLatestVersionNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of import data rules that control how data is imported from S3 into
   * the file system.</p>
   */
  inline const Aws::Vector<ImportDataRule>& GetImportDataRules() const { return m_importDataRules; }
  inline bool ImportDataRulesHasBeenSet() const { return m_importDataRulesHasBeenSet; }
  template <typename ImportDataRulesT = Aws::Vector<ImportDataRule>>
  void SetImportDataRules(ImportDataRulesT&& value) {
    m_importDataRulesHasBeenSet = true;
    m_importDataRules = std::forward<ImportDataRulesT>(value);
  }
  template <typename ImportDataRulesT = Aws::Vector<ImportDataRule>>
  PutSynchronizationConfigurationRequest& WithImportDataRules(ImportDataRulesT&& value) {
    SetImportDataRules(std::forward<ImportDataRulesT>(value));
    return *this;
  }
  template <typename ImportDataRulesT = ImportDataRule>
  PutSynchronizationConfigurationRequest& AddImportDataRules(ImportDataRulesT&& value) {
    m_importDataRulesHasBeenSet = true;
    m_importDataRules.emplace_back(std::forward<ImportDataRulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of expiration data rules that control when cached data expires from
   * the file system.</p>
   */
  inline const Aws::Vector<ExpirationDataRule>& GetExpirationDataRules() const { return m_expirationDataRules; }
  inline bool ExpirationDataRulesHasBeenSet() const { return m_expirationDataRulesHasBeenSet; }
  template <typename ExpirationDataRulesT = Aws::Vector<ExpirationDataRule>>
  void SetExpirationDataRules(ExpirationDataRulesT&& value) {
    m_expirationDataRulesHasBeenSet = true;
    m_expirationDataRules = std::forward<ExpirationDataRulesT>(value);
  }
  template <typename ExpirationDataRulesT = Aws::Vector<ExpirationDataRule>>
  PutSynchronizationConfigurationRequest& WithExpirationDataRules(ExpirationDataRulesT&& value) {
    SetExpirationDataRules(std::forward<ExpirationDataRulesT>(value));
    return *this;
  }
  template <typename ExpirationDataRulesT = ExpirationDataRule>
  PutSynchronizationConfigurationRequest& AddExpirationDataRules(ExpirationDataRulesT&& value) {
    m_expirationDataRulesHasBeenSet = true;
    m_expirationDataRules.emplace_back(std::forward<ExpirationDataRulesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_fileSystemId;

  int m_latestVersionNumber{0};

  Aws::Vector<ImportDataRule> m_importDataRules;

  Aws::Vector<ExpirationDataRule> m_expirationDataRules;
  bool m_fileSystemIdHasBeenSet = false;
  bool m_latestVersionNumberHasBeenSet = false;
  bool m_importDataRulesHasBeenSet = false;
  bool m_expirationDataRulesHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Files
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/AccountLevel.h>
#include <aws/s3control/model/Exclude.h>
#include <aws/s3control/model/Include.h>
#include <aws/s3control/model/StorageLensAwsOrg.h>
#include <aws/s3control/model/StorageLensDataExport.h>
#include <aws/s3control/model/StorageLensExpandedPrefixesDataExport.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace S3Control {
namespace Model {

/**
 * <p>A container for the Amazon S3 Storage Lens configuration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/StorageLensConfiguration">AWS
 * API Reference</a></p>
 */
class StorageLensConfiguration {
 public:
  AWS_S3CONTROL_API StorageLensConfiguration() = default;
  AWS_S3CONTROL_API StorageLensConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3CONTROL_API StorageLensConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>A container for the Amazon S3 Storage Lens configuration ID.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  StorageLensConfiguration& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A container for all the account-level configurations of your S3 Storage Lens
   * configuration.</p>
   */
  inline const AccountLevel& GetAccountLevel() const { return m_accountLevel; }
  inline bool AccountLevelHasBeenSet() const { return m_accountLevelHasBeenSet; }
  template <typename AccountLevelT = AccountLevel>
  void SetAccountLevel(AccountLevelT&& value) {
    m_accountLevelHasBeenSet = true;
    m_accountLevel = std::forward<AccountLevelT>(value);
  }
  template <typename AccountLevelT = AccountLevel>
  StorageLensConfiguration& WithAccountLevel(AccountLevelT&& value) {
    SetAccountLevel(std::forward<AccountLevelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A container for what is included in this configuration. This container can
   * only be valid if there is no <code>Exclude</code> container submitted, and it's
   * not empty. </p>
   */
  inline const Include& GetInclude() const { return m_include; }
  inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
  template <typename IncludeT = Include>
  void SetInclude(IncludeT&& value) {
    m_includeHasBeenSet = true;
    m_include = std::forward<IncludeT>(value);
  }
  template <typename IncludeT = Include>
  StorageLensConfiguration& WithInclude(IncludeT&& value) {
    SetInclude(std::forward<IncludeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A container for what is excluded in this configuration. This container can
   * only be valid if there is no <code>Include</code> container submitted, and it's
   * not empty. </p>
   */
  inline const Exclude& GetExclude() const { return m_exclude; }
  inline bool ExcludeHasBeenSet() const { return m_excludeHasBeenSet; }
  template <typename ExcludeT = Exclude>
  void SetExclude(ExcludeT&& value) {
    m_excludeHasBeenSet = true;
    m_exclude = std::forward<ExcludeT>(value);
  }
  template <typename ExcludeT = Exclude>
  StorageLensConfiguration& WithExclude(ExcludeT&& value) {
    SetExclude(std::forward<ExcludeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A container to specify the properties of your S3 Storage Lens metrics export
   * including, the destination, schema and format.</p>
   */
  inline const StorageLensDataExport& GetDataExport() const { return m_dataExport; }
  inline bool DataExportHasBeenSet() const { return m_dataExportHasBeenSet; }
  template <typename DataExportT = StorageLensDataExport>
  void SetDataExport(DataExportT&& value) {
    m_dataExportHasBeenSet = true;
    m_dataExport = std::forward<DataExportT>(value);
  }
  template <typename DataExportT = StorageLensDataExport>
  StorageLensConfiguration& WithDataExport(DataExportT&& value) {
    SetDataExport(std::forward<DataExportT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A container that configures your S3 Storage Lens expanded prefixes metrics
   * report. </p>
   */
  inline const StorageLensExpandedPrefixesDataExport& GetExpandedPrefixesDataExport() const { return m_expandedPrefixesDataExport; }
  inline bool ExpandedPrefixesDataExportHasBeenSet() const { return m_expandedPrefixesDataExportHasBeenSet; }
  template <typename ExpandedPrefixesDataExportT = StorageLensExpandedPrefixesDataExport>
  void SetExpandedPrefixesDataExport(ExpandedPrefixesDataExportT&& value) {
    m_expandedPrefixesDataExportHasBeenSet = true;
    m_expandedPrefixesDataExport = std::forward<ExpandedPrefixesDataExportT>(value);
  }
  template <typename ExpandedPrefixesDataExportT = StorageLensExpandedPrefixesDataExport>
  StorageLensConfiguration& WithExpandedPrefixesDataExport(ExpandedPrefixesDataExportT&& value) {
    SetExpandedPrefixesDataExport(std::forward<ExpandedPrefixesDataExportT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A container for whether the S3 Storage Lens configuration is enabled.</p>
   */
  inline bool GetIsEnabled() const { return m_isEnabled; }
  inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }
  inline void SetIsEnabled(bool value) {
    m_isEnabledHasBeenSet = true;
    m_isEnabled = value;
  }
  inline StorageLensConfiguration& WithIsEnabled(bool value) {
    SetIsEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A container for the Amazon Web Services organization for this S3 Storage Lens
   * configuration.</p>
   */
  inline const StorageLensAwsOrg& GetAwsOrg() const { return m_awsOrg; }
  inline bool AwsOrgHasBeenSet() const { return m_awsOrgHasBeenSet; }
  template <typename AwsOrgT = StorageLensAwsOrg>
  void SetAwsOrg(AwsOrgT&& value) {
    m_awsOrgHasBeenSet = true;
    m_awsOrg = std::forward<AwsOrgT>(value);
  }
  template <typename AwsOrgT = StorageLensAwsOrg>
  StorageLensConfiguration& WithAwsOrg(AwsOrgT&& value) {
    SetAwsOrg(std::forward<AwsOrgT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the S3 Storage Lens configuration. This
   * property is read-only and follows the following format: <code>
   * arn:aws:s3:<i>us-east-1</i>:<i>example-account-id</i>:storage-lens/<i>your-dashboard-name</i>
   * </code> </p>
   */
  inline const Aws::String& GetStorageLensArn() const { return m_storageLensArn; }
  inline bool StorageLensArnHasBeenSet() const { return m_storageLensArnHasBeenSet; }
  template <typename StorageLensArnT = Aws::String>
  void SetStorageLensArn(StorageLensArnT&& value) {
    m_storageLensArnHasBeenSet = true;
    m_storageLensArn = std::forward<StorageLensArnT>(value);
  }
  template <typename StorageLensArnT = Aws::String>
  StorageLensConfiguration& WithStorageLensArn(StorageLensArnT&& value) {
    SetStorageLensArn(std::forward<StorageLensArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A container for all prefix delimiters that are used for object keys in this
   * S3 Storage Lens configuration. The prefix delimiters determine how S3 Storage
   * Lens counts prefix depth, by separating the hierarchical levels in object
   * keys.</p>  <ul> <li> <p>If either a prefix delimiter or existing delimiter
   * is undefined, Amazon S3 uses the delimiter that’s defined.</p> </li> <li> <p>If
   * both the prefix delimiter and existing delimiter are undefined, S3 uses
   * <code>/</code> as the default delimiter.</p> </li> <li> <p>When custom
   * delimiters are used, both the prefix delimiter and existing delimiter must
   * specify the same special character. Otherwise, your request results in an
   * error.</p> </li> </ul>
   */
  inline const Aws::String& GetPrefixDelimiter() const { return m_prefixDelimiter; }
  inline bool PrefixDelimiterHasBeenSet() const { return m_prefixDelimiterHasBeenSet; }
  template <typename PrefixDelimiterT = Aws::String>
  void SetPrefixDelimiter(PrefixDelimiterT&& value) {
    m_prefixDelimiterHasBeenSet = true;
    m_prefixDelimiter = std::forward<PrefixDelimiterT>(value);
  }
  template <typename PrefixDelimiterT = Aws::String>
  StorageLensConfiguration& WithPrefixDelimiter(PrefixDelimiterT&& value) {
    SetPrefixDelimiter(std::forward<PrefixDelimiterT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  AccountLevel m_accountLevel;

  Include m_include;

  Exclude m_exclude;

  StorageLensDataExport m_dataExport;

  StorageLensExpandedPrefixesDataExport m_expandedPrefixesDataExport;

  bool m_isEnabled{false};

  StorageLensAwsOrg m_awsOrg;

  Aws::String m_storageLensArn;

  Aws::String m_prefixDelimiter;
  bool m_idHasBeenSet = false;
  bool m_accountLevelHasBeenSet = false;
  bool m_includeHasBeenSet = false;
  bool m_excludeHasBeenSet = false;
  bool m_dataExportHasBeenSet = false;
  bool m_expandedPrefixesDataExportHasBeenSet = false;
  bool m_isEnabledHasBeenSet = false;
  bool m_awsOrgHasBeenSet = false;
  bool m_storageLensArnHasBeenSet = false;
  bool m_prefixDelimiterHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Control
}  // namespace Aws

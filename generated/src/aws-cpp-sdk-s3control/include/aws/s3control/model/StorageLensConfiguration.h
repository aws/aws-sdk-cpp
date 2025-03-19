/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/AccountLevel.h>
#include <aws/s3control/model/Include.h>
#include <aws/s3control/model/Exclude.h>
#include <aws/s3control/model/StorageLensDataExport.h>
#include <aws/s3control/model/StorageLensAwsOrg.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>A container for the Amazon S3 Storage Lens configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/StorageLensConfiguration">AWS
   * API Reference</a></p>
   */
  class StorageLensConfiguration
  {
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
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    StorageLensConfiguration& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for all the account-level configurations of your S3 Storage Lens
     * configuration.</p>
     */
    inline const AccountLevel& GetAccountLevel() const { return m_accountLevel; }
    inline bool AccountLevelHasBeenSet() const { return m_accountLevelHasBeenSet; }
    template<typename AccountLevelT = AccountLevel>
    void SetAccountLevel(AccountLevelT&& value) { m_accountLevelHasBeenSet = true; m_accountLevel = std::forward<AccountLevelT>(value); }
    template<typename AccountLevelT = AccountLevel>
    StorageLensConfiguration& WithAccountLevel(AccountLevelT&& value) { SetAccountLevel(std::forward<AccountLevelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for what is included in this configuration. This container can
     * only be valid if there is no <code>Exclude</code> container submitted, and it's
     * not empty. </p>
     */
    inline const Include& GetInclude() const { return m_include; }
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
    template<typename IncludeT = Include>
    void SetInclude(IncludeT&& value) { m_includeHasBeenSet = true; m_include = std::forward<IncludeT>(value); }
    template<typename IncludeT = Include>
    StorageLensConfiguration& WithInclude(IncludeT&& value) { SetInclude(std::forward<IncludeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for what is excluded in this configuration. This container can
     * only be valid if there is no <code>Include</code> container submitted, and it's
     * not empty. </p>
     */
    inline const Exclude& GetExclude() const { return m_exclude; }
    inline bool ExcludeHasBeenSet() const { return m_excludeHasBeenSet; }
    template<typename ExcludeT = Exclude>
    void SetExclude(ExcludeT&& value) { m_excludeHasBeenSet = true; m_exclude = std::forward<ExcludeT>(value); }
    template<typename ExcludeT = Exclude>
    StorageLensConfiguration& WithExclude(ExcludeT&& value) { SetExclude(std::forward<ExcludeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container to specify the properties of your S3 Storage Lens metrics export
     * including, the destination, schema and format.</p>
     */
    inline const StorageLensDataExport& GetDataExport() const { return m_dataExport; }
    inline bool DataExportHasBeenSet() const { return m_dataExportHasBeenSet; }
    template<typename DataExportT = StorageLensDataExport>
    void SetDataExport(DataExportT&& value) { m_dataExportHasBeenSet = true; m_dataExport = std::forward<DataExportT>(value); }
    template<typename DataExportT = StorageLensDataExport>
    StorageLensConfiguration& WithDataExport(DataExportT&& value) { SetDataExport(std::forward<DataExportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for whether the S3 Storage Lens configuration is enabled.</p>
     */
    inline bool GetIsEnabled() const { return m_isEnabled; }
    inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }
    inline void SetIsEnabled(bool value) { m_isEnabledHasBeenSet = true; m_isEnabled = value; }
    inline StorageLensConfiguration& WithIsEnabled(bool value) { SetIsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for the Amazon Web Services organization for this S3 Storage Lens
     * configuration.</p>
     */
    inline const StorageLensAwsOrg& GetAwsOrg() const { return m_awsOrg; }
    inline bool AwsOrgHasBeenSet() const { return m_awsOrgHasBeenSet; }
    template<typename AwsOrgT = StorageLensAwsOrg>
    void SetAwsOrg(AwsOrgT&& value) { m_awsOrgHasBeenSet = true; m_awsOrg = std::forward<AwsOrgT>(value); }
    template<typename AwsOrgT = StorageLensAwsOrg>
    StorageLensConfiguration& WithAwsOrg(AwsOrgT&& value) { SetAwsOrg(std::forward<AwsOrgT>(value)); return *this;}
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
    template<typename StorageLensArnT = Aws::String>
    void SetStorageLensArn(StorageLensArnT&& value) { m_storageLensArnHasBeenSet = true; m_storageLensArn = std::forward<StorageLensArnT>(value); }
    template<typename StorageLensArnT = Aws::String>
    StorageLensConfiguration& WithStorageLensArn(StorageLensArnT&& value) { SetStorageLensArn(std::forward<StorageLensArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    AccountLevel m_accountLevel;
    bool m_accountLevelHasBeenSet = false;

    Include m_include;
    bool m_includeHasBeenSet = false;

    Exclude m_exclude;
    bool m_excludeHasBeenSet = false;

    StorageLensDataExport m_dataExport;
    bool m_dataExportHasBeenSet = false;

    bool m_isEnabled{false};
    bool m_isEnabledHasBeenSet = false;

    StorageLensAwsOrg m_awsOrg;
    bool m_awsOrgHasBeenSet = false;

    Aws::String m_storageLensArn;
    bool m_storageLensArnHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

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
    AWS_S3CONTROL_API StorageLensConfiguration();
    AWS_S3CONTROL_API StorageLensConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API StorageLensConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A container for the Amazon S3 Storage Lens configuration ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A container for the Amazon S3 Storage Lens configuration ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A container for the Amazon S3 Storage Lens configuration ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A container for the Amazon S3 Storage Lens configuration ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A container for the Amazon S3 Storage Lens configuration ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A container for the Amazon S3 Storage Lens configuration ID.</p>
     */
    inline StorageLensConfiguration& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A container for the Amazon S3 Storage Lens configuration ID.</p>
     */
    inline StorageLensConfiguration& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A container for the Amazon S3 Storage Lens configuration ID.</p>
     */
    inline StorageLensConfiguration& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A container for all the account-level configurations of your S3 Storage Lens
     * configuration.</p>
     */
    inline const AccountLevel& GetAccountLevel() const{ return m_accountLevel; }

    /**
     * <p>A container for all the account-level configurations of your S3 Storage Lens
     * configuration.</p>
     */
    inline bool AccountLevelHasBeenSet() const { return m_accountLevelHasBeenSet; }

    /**
     * <p>A container for all the account-level configurations of your S3 Storage Lens
     * configuration.</p>
     */
    inline void SetAccountLevel(const AccountLevel& value) { m_accountLevelHasBeenSet = true; m_accountLevel = value; }

    /**
     * <p>A container for all the account-level configurations of your S3 Storage Lens
     * configuration.</p>
     */
    inline void SetAccountLevel(AccountLevel&& value) { m_accountLevelHasBeenSet = true; m_accountLevel = std::move(value); }

    /**
     * <p>A container for all the account-level configurations of your S3 Storage Lens
     * configuration.</p>
     */
    inline StorageLensConfiguration& WithAccountLevel(const AccountLevel& value) { SetAccountLevel(value); return *this;}

    /**
     * <p>A container for all the account-level configurations of your S3 Storage Lens
     * configuration.</p>
     */
    inline StorageLensConfiguration& WithAccountLevel(AccountLevel&& value) { SetAccountLevel(std::move(value)); return *this;}


    /**
     * <p>A container for what is included in this configuration. This container can
     * only be valid if there is no <code>Exclude</code> container submitted, and it's
     * not empty. </p>
     */
    inline const Include& GetInclude() const{ return m_include; }

    /**
     * <p>A container for what is included in this configuration. This container can
     * only be valid if there is no <code>Exclude</code> container submitted, and it's
     * not empty. </p>
     */
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }

    /**
     * <p>A container for what is included in this configuration. This container can
     * only be valid if there is no <code>Exclude</code> container submitted, and it's
     * not empty. </p>
     */
    inline void SetInclude(const Include& value) { m_includeHasBeenSet = true; m_include = value; }

    /**
     * <p>A container for what is included in this configuration. This container can
     * only be valid if there is no <code>Exclude</code> container submitted, and it's
     * not empty. </p>
     */
    inline void SetInclude(Include&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }

    /**
     * <p>A container for what is included in this configuration. This container can
     * only be valid if there is no <code>Exclude</code> container submitted, and it's
     * not empty. </p>
     */
    inline StorageLensConfiguration& WithInclude(const Include& value) { SetInclude(value); return *this;}

    /**
     * <p>A container for what is included in this configuration. This container can
     * only be valid if there is no <code>Exclude</code> container submitted, and it's
     * not empty. </p>
     */
    inline StorageLensConfiguration& WithInclude(Include&& value) { SetInclude(std::move(value)); return *this;}


    /**
     * <p>A container for what is excluded in this configuration. This container can
     * only be valid if there is no <code>Include</code> container submitted, and it's
     * not empty. </p>
     */
    inline const Exclude& GetExclude() const{ return m_exclude; }

    /**
     * <p>A container for what is excluded in this configuration. This container can
     * only be valid if there is no <code>Include</code> container submitted, and it's
     * not empty. </p>
     */
    inline bool ExcludeHasBeenSet() const { return m_excludeHasBeenSet; }

    /**
     * <p>A container for what is excluded in this configuration. This container can
     * only be valid if there is no <code>Include</code> container submitted, and it's
     * not empty. </p>
     */
    inline void SetExclude(const Exclude& value) { m_excludeHasBeenSet = true; m_exclude = value; }

    /**
     * <p>A container for what is excluded in this configuration. This container can
     * only be valid if there is no <code>Include</code> container submitted, and it's
     * not empty. </p>
     */
    inline void SetExclude(Exclude&& value) { m_excludeHasBeenSet = true; m_exclude = std::move(value); }

    /**
     * <p>A container for what is excluded in this configuration. This container can
     * only be valid if there is no <code>Include</code> container submitted, and it's
     * not empty. </p>
     */
    inline StorageLensConfiguration& WithExclude(const Exclude& value) { SetExclude(value); return *this;}

    /**
     * <p>A container for what is excluded in this configuration. This container can
     * only be valid if there is no <code>Include</code> container submitted, and it's
     * not empty. </p>
     */
    inline StorageLensConfiguration& WithExclude(Exclude&& value) { SetExclude(std::move(value)); return *this;}


    /**
     * <p>A container to specify the properties of your S3 Storage Lens metrics export
     * including, the destination, schema and format.</p>
     */
    inline const StorageLensDataExport& GetDataExport() const{ return m_dataExport; }

    /**
     * <p>A container to specify the properties of your S3 Storage Lens metrics export
     * including, the destination, schema and format.</p>
     */
    inline bool DataExportHasBeenSet() const { return m_dataExportHasBeenSet; }

    /**
     * <p>A container to specify the properties of your S3 Storage Lens metrics export
     * including, the destination, schema and format.</p>
     */
    inline void SetDataExport(const StorageLensDataExport& value) { m_dataExportHasBeenSet = true; m_dataExport = value; }

    /**
     * <p>A container to specify the properties of your S3 Storage Lens metrics export
     * including, the destination, schema and format.</p>
     */
    inline void SetDataExport(StorageLensDataExport&& value) { m_dataExportHasBeenSet = true; m_dataExport = std::move(value); }

    /**
     * <p>A container to specify the properties of your S3 Storage Lens metrics export
     * including, the destination, schema and format.</p>
     */
    inline StorageLensConfiguration& WithDataExport(const StorageLensDataExport& value) { SetDataExport(value); return *this;}

    /**
     * <p>A container to specify the properties of your S3 Storage Lens metrics export
     * including, the destination, schema and format.</p>
     */
    inline StorageLensConfiguration& WithDataExport(StorageLensDataExport&& value) { SetDataExport(std::move(value)); return *this;}


    /**
     * <p>A container for whether the S3 Storage Lens configuration is enabled.</p>
     */
    inline bool GetIsEnabled() const{ return m_isEnabled; }

    /**
     * <p>A container for whether the S3 Storage Lens configuration is enabled.</p>
     */
    inline bool IsEnabledHasBeenSet() const { return m_isEnabledHasBeenSet; }

    /**
     * <p>A container for whether the S3 Storage Lens configuration is enabled.</p>
     */
    inline void SetIsEnabled(bool value) { m_isEnabledHasBeenSet = true; m_isEnabled = value; }

    /**
     * <p>A container for whether the S3 Storage Lens configuration is enabled.</p>
     */
    inline StorageLensConfiguration& WithIsEnabled(bool value) { SetIsEnabled(value); return *this;}


    /**
     * <p>A container for the Amazon Web Services organization for this S3 Storage Lens
     * configuration.</p>
     */
    inline const StorageLensAwsOrg& GetAwsOrg() const{ return m_awsOrg; }

    /**
     * <p>A container for the Amazon Web Services organization for this S3 Storage Lens
     * configuration.</p>
     */
    inline bool AwsOrgHasBeenSet() const { return m_awsOrgHasBeenSet; }

    /**
     * <p>A container for the Amazon Web Services organization for this S3 Storage Lens
     * configuration.</p>
     */
    inline void SetAwsOrg(const StorageLensAwsOrg& value) { m_awsOrgHasBeenSet = true; m_awsOrg = value; }

    /**
     * <p>A container for the Amazon Web Services organization for this S3 Storage Lens
     * configuration.</p>
     */
    inline void SetAwsOrg(StorageLensAwsOrg&& value) { m_awsOrgHasBeenSet = true; m_awsOrg = std::move(value); }

    /**
     * <p>A container for the Amazon Web Services organization for this S3 Storage Lens
     * configuration.</p>
     */
    inline StorageLensConfiguration& WithAwsOrg(const StorageLensAwsOrg& value) { SetAwsOrg(value); return *this;}

    /**
     * <p>A container for the Amazon Web Services organization for this S3 Storage Lens
     * configuration.</p>
     */
    inline StorageLensConfiguration& WithAwsOrg(StorageLensAwsOrg&& value) { SetAwsOrg(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Storage Lens configuration. This
     * property is read-only and follows the following format: <code>
     * arn:aws:s3:<i>us-east-1</i>:<i>example-account-id</i>:storage-lens/<i>your-dashboard-name</i>
     * </code> </p>
     */
    inline const Aws::String& GetStorageLensArn() const{ return m_storageLensArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Storage Lens configuration. This
     * property is read-only and follows the following format: <code>
     * arn:aws:s3:<i>us-east-1</i>:<i>example-account-id</i>:storage-lens/<i>your-dashboard-name</i>
     * </code> </p>
     */
    inline bool StorageLensArnHasBeenSet() const { return m_storageLensArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Storage Lens configuration. This
     * property is read-only and follows the following format: <code>
     * arn:aws:s3:<i>us-east-1</i>:<i>example-account-id</i>:storage-lens/<i>your-dashboard-name</i>
     * </code> </p>
     */
    inline void SetStorageLensArn(const Aws::String& value) { m_storageLensArnHasBeenSet = true; m_storageLensArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Storage Lens configuration. This
     * property is read-only and follows the following format: <code>
     * arn:aws:s3:<i>us-east-1</i>:<i>example-account-id</i>:storage-lens/<i>your-dashboard-name</i>
     * </code> </p>
     */
    inline void SetStorageLensArn(Aws::String&& value) { m_storageLensArnHasBeenSet = true; m_storageLensArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Storage Lens configuration. This
     * property is read-only and follows the following format: <code>
     * arn:aws:s3:<i>us-east-1</i>:<i>example-account-id</i>:storage-lens/<i>your-dashboard-name</i>
     * </code> </p>
     */
    inline void SetStorageLensArn(const char* value) { m_storageLensArnHasBeenSet = true; m_storageLensArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Storage Lens configuration. This
     * property is read-only and follows the following format: <code>
     * arn:aws:s3:<i>us-east-1</i>:<i>example-account-id</i>:storage-lens/<i>your-dashboard-name</i>
     * </code> </p>
     */
    inline StorageLensConfiguration& WithStorageLensArn(const Aws::String& value) { SetStorageLensArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Storage Lens configuration. This
     * property is read-only and follows the following format: <code>
     * arn:aws:s3:<i>us-east-1</i>:<i>example-account-id</i>:storage-lens/<i>your-dashboard-name</i>
     * </code> </p>
     */
    inline StorageLensConfiguration& WithStorageLensArn(Aws::String&& value) { SetStorageLensArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 Storage Lens configuration. This
     * property is read-only and follows the following format: <code>
     * arn:aws:s3:<i>us-east-1</i>:<i>example-account-id</i>:storage-lens/<i>your-dashboard-name</i>
     * </code> </p>
     */
    inline StorageLensConfiguration& WithStorageLensArn(const char* value) { SetStorageLensArn(value); return *this;}

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

    bool m_isEnabled;
    bool m_isEnabledHasBeenSet = false;

    StorageLensAwsOrg m_awsOrg;
    bool m_awsOrgHasBeenSet = false;

    Aws::String m_storageLensArn;
    bool m_storageLensArnHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

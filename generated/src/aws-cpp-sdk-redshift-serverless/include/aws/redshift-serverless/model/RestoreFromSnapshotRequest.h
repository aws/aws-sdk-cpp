/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class RestoreFromSnapshotRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API RestoreFromSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreFromSnapshot"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Key Management Service (KMS) key used to encrypt and store the
     * namespace's admin credentials secret.</p>
     */
    inline const Aws::String& GetAdminPasswordSecretKmsKeyId() const { return m_adminPasswordSecretKmsKeyId; }
    inline bool AdminPasswordSecretKmsKeyIdHasBeenSet() const { return m_adminPasswordSecretKmsKeyIdHasBeenSet; }
    template<typename AdminPasswordSecretKmsKeyIdT = Aws::String>
    void SetAdminPasswordSecretKmsKeyId(AdminPasswordSecretKmsKeyIdT&& value) { m_adminPasswordSecretKmsKeyIdHasBeenSet = true; m_adminPasswordSecretKmsKeyId = std::forward<AdminPasswordSecretKmsKeyIdT>(value); }
    template<typename AdminPasswordSecretKmsKeyIdT = Aws::String>
    RestoreFromSnapshotRequest& WithAdminPasswordSecretKmsKeyId(AdminPasswordSecretKmsKeyIdT&& value) { SetAdminPasswordSecretKmsKeyId(std::forward<AdminPasswordSecretKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, Amazon Redshift uses Secrets Manager to manage the
     * restored snapshot's admin credentials. If <code>MmanageAdminPassword</code> is
     * false or not set, Amazon Redshift uses the admin credentials that the namespace
     * or cluster had at the time the snapshot was taken.</p>
     */
    inline bool GetManageAdminPassword() const { return m_manageAdminPassword; }
    inline bool ManageAdminPasswordHasBeenSet() const { return m_manageAdminPasswordHasBeenSet; }
    inline void SetManageAdminPassword(bool value) { m_manageAdminPasswordHasBeenSet = true; m_manageAdminPassword = value; }
    inline RestoreFromSnapshotRequest& WithManageAdminPassword(bool value) { SetManageAdminPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the namespace to restore the snapshot to.</p>
     */
    inline const Aws::String& GetNamespaceName() const { return m_namespaceName; }
    inline bool NamespaceNameHasBeenSet() const { return m_namespaceNameHasBeenSet; }
    template<typename NamespaceNameT = Aws::String>
    void SetNamespaceName(NamespaceNameT&& value) { m_namespaceNameHasBeenSet = true; m_namespaceName = std::forward<NamespaceNameT>(value); }
    template<typename NamespaceNameT = Aws::String>
    RestoreFromSnapshotRequest& WithNamespaceName(NamespaceNameT&& value) { SetNamespaceName(std::forward<NamespaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account that owns the snapshot.</p>
     */
    inline const Aws::String& GetOwnerAccount() const { return m_ownerAccount; }
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
    template<typename OwnerAccountT = Aws::String>
    void SetOwnerAccount(OwnerAccountT&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::forward<OwnerAccountT>(value); }
    template<typename OwnerAccountT = Aws::String>
    RestoreFromSnapshotRequest& WithOwnerAccount(OwnerAccountT&& value) { SetOwnerAccount(std::forward<OwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot to restore from. Required if
     * restoring from a provisioned cluster to Amazon Redshift Serverless. Must not be
     * specified at the same time as <code>snapshotName</code>.</p> <p>The format of
     * the ARN is
     * arn:aws:redshift:&lt;region&gt;:&lt;account_id&gt;:snapshot:&lt;cluster_identifier&gt;/&lt;snapshot_identifier&gt;.</p>
     */
    inline const Aws::String& GetSnapshotArn() const { return m_snapshotArn; }
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }
    template<typename SnapshotArnT = Aws::String>
    void SetSnapshotArn(SnapshotArnT&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::forward<SnapshotArnT>(value); }
    template<typename SnapshotArnT = Aws::String>
    RestoreFromSnapshotRequest& WithSnapshotArn(SnapshotArnT&& value) { SetSnapshotArn(std::forward<SnapshotArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the snapshot to restore from. Must not be specified at the same
     * time as <code>snapshotArn</code>.</p>
     */
    inline const Aws::String& GetSnapshotName() const { return m_snapshotName; }
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }
    template<typename SnapshotNameT = Aws::String>
    void SetSnapshotName(SnapshotNameT&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::forward<SnapshotNameT>(value); }
    template<typename SnapshotNameT = Aws::String>
    RestoreFromSnapshotRequest& WithSnapshotName(SnapshotNameT&& value) { SetSnapshotName(std::forward<SnapshotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workgroup used to restore the snapshot.</p>
     */
    inline const Aws::String& GetWorkgroupName() const { return m_workgroupName; }
    inline bool WorkgroupNameHasBeenSet() const { return m_workgroupNameHasBeenSet; }
    template<typename WorkgroupNameT = Aws::String>
    void SetWorkgroupName(WorkgroupNameT&& value) { m_workgroupNameHasBeenSet = true; m_workgroupName = std::forward<WorkgroupNameT>(value); }
    template<typename WorkgroupNameT = Aws::String>
    RestoreFromSnapshotRequest& WithWorkgroupName(WorkgroupNameT&& value) { SetWorkgroupName(std::forward<WorkgroupNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_adminPasswordSecretKmsKeyId;
    bool m_adminPasswordSecretKmsKeyIdHasBeenSet = false;

    bool m_manageAdminPassword{false};
    bool m_manageAdminPasswordHasBeenSet = false;

    Aws::String m_namespaceName;
    bool m_namespaceNameHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    Aws::String m_snapshotArn;
    bool m_snapshotArnHasBeenSet = false;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;

    Aws::String m_workgroupName;
    bool m_workgroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws

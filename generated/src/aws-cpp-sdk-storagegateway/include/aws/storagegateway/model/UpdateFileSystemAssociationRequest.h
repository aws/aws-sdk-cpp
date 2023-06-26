/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/CacheAttributes.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class UpdateFileSystemAssociationRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API UpdateFileSystemAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFileSystemAssociation"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the file system association that you want
     * to update.</p>
     */
    inline const Aws::String& GetFileSystemAssociationARN() const{ return m_fileSystemAssociationARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file system association that you want
     * to update.</p>
     */
    inline bool FileSystemAssociationARNHasBeenSet() const { return m_fileSystemAssociationARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file system association that you want
     * to update.</p>
     */
    inline void SetFileSystemAssociationARN(const Aws::String& value) { m_fileSystemAssociationARNHasBeenSet = true; m_fileSystemAssociationARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the file system association that you want
     * to update.</p>
     */
    inline void SetFileSystemAssociationARN(Aws::String&& value) { m_fileSystemAssociationARNHasBeenSet = true; m_fileSystemAssociationARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the file system association that you want
     * to update.</p>
     */
    inline void SetFileSystemAssociationARN(const char* value) { m_fileSystemAssociationARNHasBeenSet = true; m_fileSystemAssociationARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the file system association that you want
     * to update.</p>
     */
    inline UpdateFileSystemAssociationRequest& WithFileSystemAssociationARN(const Aws::String& value) { SetFileSystemAssociationARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the file system association that you want
     * to update.</p>
     */
    inline UpdateFileSystemAssociationRequest& WithFileSystemAssociationARN(Aws::String&& value) { SetFileSystemAssociationARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the file system association that you want
     * to update.</p>
     */
    inline UpdateFileSystemAssociationRequest& WithFileSystemAssociationARN(const char* value) { SetFileSystemAssociationARN(value); return *this;}


    /**
     * <p>The user name of the user credential that has permission to access the root
     * share D$ of the Amazon FSx file system. The user account must belong to the
     * Amazon FSx delegated admin user group.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The user name of the user credential that has permission to access the root
     * share D$ of the Amazon FSx file system. The user account must belong to the
     * Amazon FSx delegated admin user group.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The user name of the user credential that has permission to access the root
     * share D$ of the Amazon FSx file system. The user account must belong to the
     * Amazon FSx delegated admin user group.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The user name of the user credential that has permission to access the root
     * share D$ of the Amazon FSx file system. The user account must belong to the
     * Amazon FSx delegated admin user group.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The user name of the user credential that has permission to access the root
     * share D$ of the Amazon FSx file system. The user account must belong to the
     * Amazon FSx delegated admin user group.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The user name of the user credential that has permission to access the root
     * share D$ of the Amazon FSx file system. The user account must belong to the
     * Amazon FSx delegated admin user group.</p>
     */
    inline UpdateFileSystemAssociationRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The user name of the user credential that has permission to access the root
     * share D$ of the Amazon FSx file system. The user account must belong to the
     * Amazon FSx delegated admin user group.</p>
     */
    inline UpdateFileSystemAssociationRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The user name of the user credential that has permission to access the root
     * share D$ of the Amazon FSx file system. The user account must belong to the
     * Amazon FSx delegated admin user group.</p>
     */
    inline UpdateFileSystemAssociationRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The password of the user credential.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password of the user credential.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The password of the user credential.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password of the user credential.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The password of the user credential.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password of the user credential.</p>
     */
    inline UpdateFileSystemAssociationRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password of the user credential.</p>
     */
    inline UpdateFileSystemAssociationRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The password of the user credential.</p>
     */
    inline UpdateFileSystemAssociationRequest& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline const Aws::String& GetAuditDestinationARN() const{ return m_auditDestinationARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline bool AuditDestinationARNHasBeenSet() const { return m_auditDestinationARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline void SetAuditDestinationARN(const Aws::String& value) { m_auditDestinationARNHasBeenSet = true; m_auditDestinationARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline void SetAuditDestinationARN(Aws::String&& value) { m_auditDestinationARNHasBeenSet = true; m_auditDestinationARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline void SetAuditDestinationARN(const char* value) { m_auditDestinationARNHasBeenSet = true; m_auditDestinationARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline UpdateFileSystemAssociationRequest& WithAuditDestinationARN(const Aws::String& value) { SetAuditDestinationARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline UpdateFileSystemAssociationRequest& WithAuditDestinationARN(Aws::String&& value) { SetAuditDestinationARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline UpdateFileSystemAssociationRequest& WithAuditDestinationARN(const char* value) { SetAuditDestinationARN(value); return *this;}


    
    inline const CacheAttributes& GetCacheAttributes() const{ return m_cacheAttributes; }

    
    inline bool CacheAttributesHasBeenSet() const { return m_cacheAttributesHasBeenSet; }

    
    inline void SetCacheAttributes(const CacheAttributes& value) { m_cacheAttributesHasBeenSet = true; m_cacheAttributes = value; }

    
    inline void SetCacheAttributes(CacheAttributes&& value) { m_cacheAttributesHasBeenSet = true; m_cacheAttributes = std::move(value); }

    
    inline UpdateFileSystemAssociationRequest& WithCacheAttributes(const CacheAttributes& value) { SetCacheAttributes(value); return *this;}

    
    inline UpdateFileSystemAssociationRequest& WithCacheAttributes(CacheAttributes&& value) { SetCacheAttributes(std::move(value)); return *this;}

  private:

    Aws::String m_fileSystemAssociationARN;
    bool m_fileSystemAssociationARNHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::String m_auditDestinationARN;
    bool m_auditDestinationARNHasBeenSet = false;

    CacheAttributes m_cacheAttributes;
    bool m_cacheAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

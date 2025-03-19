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
    AWS_STORAGEGATEWAY_API UpdateFileSystemAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFileSystemAssociation"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the file system association that you want
     * to update.</p>
     */
    inline const Aws::String& GetFileSystemAssociationARN() const { return m_fileSystemAssociationARN; }
    inline bool FileSystemAssociationARNHasBeenSet() const { return m_fileSystemAssociationARNHasBeenSet; }
    template<typename FileSystemAssociationARNT = Aws::String>
    void SetFileSystemAssociationARN(FileSystemAssociationARNT&& value) { m_fileSystemAssociationARNHasBeenSet = true; m_fileSystemAssociationARN = std::forward<FileSystemAssociationARNT>(value); }
    template<typename FileSystemAssociationARNT = Aws::String>
    UpdateFileSystemAssociationRequest& WithFileSystemAssociationARN(FileSystemAssociationARNT&& value) { SetFileSystemAssociationARN(std::forward<FileSystemAssociationARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name of the user credential that has permission to access the root
     * share D$ of the Amazon FSx file system. The user account must belong to the
     * Amazon FSx delegated admin user group.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    UpdateFileSystemAssociationRequest& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password of the user credential.</p>
     */
    inline const Aws::String& GetPassword() const { return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    template<typename PasswordT = Aws::String>
    void SetPassword(PasswordT&& value) { m_passwordHasBeenSet = true; m_password = std::forward<PasswordT>(value); }
    template<typename PasswordT = Aws::String>
    UpdateFileSystemAssociationRequest& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for the audit logs.</p>
     */
    inline const Aws::String& GetAuditDestinationARN() const { return m_auditDestinationARN; }
    inline bool AuditDestinationARNHasBeenSet() const { return m_auditDestinationARNHasBeenSet; }
    template<typename AuditDestinationARNT = Aws::String>
    void SetAuditDestinationARN(AuditDestinationARNT&& value) { m_auditDestinationARNHasBeenSet = true; m_auditDestinationARN = std::forward<AuditDestinationARNT>(value); }
    template<typename AuditDestinationARNT = Aws::String>
    UpdateFileSystemAssociationRequest& WithAuditDestinationARN(AuditDestinationARNT&& value) { SetAuditDestinationARN(std::forward<AuditDestinationARNT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CacheAttributes& GetCacheAttributes() const { return m_cacheAttributes; }
    inline bool CacheAttributesHasBeenSet() const { return m_cacheAttributesHasBeenSet; }
    template<typename CacheAttributesT = CacheAttributes>
    void SetCacheAttributes(CacheAttributesT&& value) { m_cacheAttributesHasBeenSet = true; m_cacheAttributes = std::forward<CacheAttributesT>(value); }
    template<typename CacheAttributesT = CacheAttributes>
    UpdateFileSystemAssociationRequest& WithCacheAttributes(CacheAttributesT&& value) { SetCacheAttributes(std::forward<CacheAttributesT>(value)); return *this;}
    ///@}
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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/EncryptionType.h>
#include <aws/storagegateway/model/ObjectACL.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/CaseSensitivity.h>
#include <aws/storagegateway/model/CacheAttributes.h>
#include <aws/storagegateway/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>The Windows file permissions and ownership information assigned, by default,
   * to native S3 objects when S3 File Gateway discovers them in S3 buckets. This
   * operation is only supported for S3 File Gateways.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/SMBFileShareInfo">AWS
   * API Reference</a></p>
   */
  class SMBFileShareInfo
  {
  public:
    AWS_STORAGEGATEWAY_API SMBFileShareInfo() = default;
    AWS_STORAGEGATEWAY_API SMBFileShareInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API SMBFileShareInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetFileShareARN() const { return m_fileShareARN; }
    inline bool FileShareARNHasBeenSet() const { return m_fileShareARNHasBeenSet; }
    template<typename FileShareARNT = Aws::String>
    void SetFileShareARN(FileShareARNT&& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = std::forward<FileShareARNT>(value); }
    template<typename FileShareARNT = Aws::String>
    SMBFileShareInfo& WithFileShareARN(FileShareARNT&& value) { SetFileShareARN(std::forward<FileShareARNT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFileShareId() const { return m_fileShareId; }
    inline bool FileShareIdHasBeenSet() const { return m_fileShareIdHasBeenSet; }
    template<typename FileShareIdT = Aws::String>
    void SetFileShareId(FileShareIdT&& value) { m_fileShareIdHasBeenSet = true; m_fileShareId = std::forward<FileShareIdT>(value); }
    template<typename FileShareIdT = Aws::String>
    SMBFileShareInfo& WithFileShareId(FileShareIdT&& value) { SetFileShareId(std::forward<FileShareIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFileShareStatus() const { return m_fileShareStatus; }
    inline bool FileShareStatusHasBeenSet() const { return m_fileShareStatusHasBeenSet; }
    template<typename FileShareStatusT = Aws::String>
    void SetFileShareStatus(FileShareStatusT&& value) { m_fileShareStatusHasBeenSet = true; m_fileShareStatus = std::forward<FileShareStatusT>(value); }
    template<typename FileShareStatusT = Aws::String>
    SMBFileShareInfo& WithFileShareStatus(FileShareStatusT&& value) { SetFileShareStatus(std::forward<FileShareStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    SMBFileShareInfo& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies the type of server-side encryption that the file share
     * will use for the data that it stores in Amazon S3.</p>  <p>We recommend
     * using <code>EncryptionType</code> instead of <code>KMSEncrypted</code> to set
     * the file share encryption method. You do not need to provide values for both
     * parameters.</p> <p>If values for both parameters exist in the same request, then
     * the specified encryption methods must not conflict. For example, if
     * <code>EncryptionType</code> is <code>SseS3</code>, then
     * <code>KMSEncrypted</code> must be <code>false</code>. If
     * <code>EncryptionType</code> is <code>SseKms</code> or <code>DsseKms</code>, then
     * <code>KMSEncrypted</code> must be <code>true</code>.</p> 
     */
    inline EncryptionType GetEncryptionType() const { return m_encryptionType; }
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
    inline void SetEncryptionType(EncryptionType value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline SMBFileShareInfo& WithEncryptionType(EncryptionType value) { SetEncryptionType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetKMSKey() const { return m_kMSKey; }
    inline bool KMSKeyHasBeenSet() const { return m_kMSKeyHasBeenSet; }
    template<typename KMSKeyT = Aws::String>
    void SetKMSKey(KMSKeyT&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::forward<KMSKeyT>(value); }
    template<typename KMSKeyT = Aws::String>
    SMBFileShareInfo& WithKMSKey(KMSKeyT&& value) { SetKMSKey(std::forward<KMSKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file share path used by the SMB client to identify the mount point.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    SMBFileShareInfo& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    SMBFileShareInfo& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLocationARN() const { return m_locationARN; }
    inline bool LocationARNHasBeenSet() const { return m_locationARNHasBeenSet; }
    template<typename LocationARNT = Aws::String>
    void SetLocationARN(LocationARNT&& value) { m_locationARNHasBeenSet = true; m_locationARN = std::forward<LocationARNT>(value); }
    template<typename LocationARNT = Aws::String>
    SMBFileShareInfo& WithLocationARN(LocationARNT&& value) { SetLocationARN(std::forward<LocationARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the S3
     * File Gateway. The default value is <code>S3_STANDARD</code>. Optional.</p>
     * <p>Valid Values: <code>S3_STANDARD</code> | <code>S3_INTELLIGENT_TIERING</code>
     * | <code>S3_STANDARD_IA</code> | <code>S3_ONEZONE_IA</code> </p>
     */
    inline const Aws::String& GetDefaultStorageClass() const { return m_defaultStorageClass; }
    inline bool DefaultStorageClassHasBeenSet() const { return m_defaultStorageClassHasBeenSet; }
    template<typename DefaultStorageClassT = Aws::String>
    void SetDefaultStorageClass(DefaultStorageClassT&& value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass = std::forward<DefaultStorageClassT>(value); }
    template<typename DefaultStorageClassT = Aws::String>
    SMBFileShareInfo& WithDefaultStorageClass(DefaultStorageClassT&& value) { SetDefaultStorageClass(std::forward<DefaultStorageClassT>(value)); return *this;}
    ///@}

    ///@{
    
    inline ObjectACL GetObjectACL() const { return m_objectACL; }
    inline bool ObjectACLHasBeenSet() const { return m_objectACLHasBeenSet; }
    inline void SetObjectACL(ObjectACL value) { m_objectACLHasBeenSet = true; m_objectACL = value; }
    inline SMBFileShareInfo& WithObjectACL(ObjectACL value) { SetObjectACL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that sets the write status of a file share. Set this value to
     * <code>true</code> to set the write status to read-only, otherwise set to
     * <code>false</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline bool GetReadOnly() const { return m_readOnly; }
    inline bool ReadOnlyHasBeenSet() const { return m_readOnlyHasBeenSet; }
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }
    inline SMBFileShareInfo& WithReadOnly(bool value) { SetReadOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that enables guessing of the MIME type for uploaded objects based on
     * file extensions. Set this value to <code>true</code> to enable MIME type
     * guessing, otherwise set to <code>false</code>. The default value is
     * <code>true</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline bool GetGuessMIMETypeEnabled() const { return m_guessMIMETypeEnabled; }
    inline bool GuessMIMETypeEnabledHasBeenSet() const { return m_guessMIMETypeEnabledHasBeenSet; }
    inline void SetGuessMIMETypeEnabled(bool value) { m_guessMIMETypeEnabledHasBeenSet = true; m_guessMIMETypeEnabled = value; }
    inline SMBFileShareInfo& WithGuessMIMETypeEnabled(bool value) { SetGuessMIMETypeEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that sets who pays the cost of the request and the cost associated
     * with data download from the S3 bucket. If this value is set to
     * <code>true</code>, the requester pays the costs; otherwise, the S3 bucket owner
     * pays. However, the S3 bucket owner always pays the cost of storing data.</p>
     *  <p> <code>RequesterPays</code> is a configuration for the S3 bucket that
     * backs the file share, so make sure that the configuration on the file share is
     * the same as the S3 bucket configuration.</p>  <p>Valid Values:
     * <code>true</code> | <code>false</code> </p>
     */
    inline bool GetRequesterPays() const { return m_requesterPays; }
    inline bool RequesterPaysHasBeenSet() const { return m_requesterPaysHasBeenSet; }
    inline void SetRequesterPays(bool value) { m_requesterPaysHasBeenSet = true; m_requesterPays = value; }
    inline SMBFileShareInfo& WithRequesterPays(bool value) { SetRequesterPays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this value is set to <code>true</code>, it indicates that access control
     * list (ACL) is enabled on the SMB file share. If it is set to <code>false</code>,
     * it indicates that file and directory permissions are mapped to the POSIX
     * permission.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/filegateway/latest/files3/smb-acl.html">Using
     * Windows ACLs to limit SMB file share access</a> in the <i>Amazon S3 File Gateway
     * User Guide</i>.</p>
     */
    inline bool GetSMBACLEnabled() const { return m_sMBACLEnabled; }
    inline bool SMBACLEnabledHasBeenSet() const { return m_sMBACLEnabledHasBeenSet; }
    inline void SetSMBACLEnabled(bool value) { m_sMBACLEnabledHasBeenSet = true; m_sMBACLEnabled = value; }
    inline SMBFileShareInfo& WithSMBACLEnabled(bool value) { SetSMBACLEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether <code>AccessBasedEnumeration</code> is enabled.</p>
     */
    inline bool GetAccessBasedEnumeration() const { return m_accessBasedEnumeration; }
    inline bool AccessBasedEnumerationHasBeenSet() const { return m_accessBasedEnumerationHasBeenSet; }
    inline void SetAccessBasedEnumeration(bool value) { m_accessBasedEnumerationHasBeenSet = true; m_accessBasedEnumeration = value; }
    inline SMBFileShareInfo& WithAccessBasedEnumeration(bool value) { SetAccessBasedEnumeration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of users or groups in the Active Directory that have administrator
     * rights to the file share. A group must be prefixed with the @ character.
     * Acceptable formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdminUserList() const { return m_adminUserList; }
    inline bool AdminUserListHasBeenSet() const { return m_adminUserListHasBeenSet; }
    template<typename AdminUserListT = Aws::Vector<Aws::String>>
    void SetAdminUserList(AdminUserListT&& value) { m_adminUserListHasBeenSet = true; m_adminUserList = std::forward<AdminUserListT>(value); }
    template<typename AdminUserListT = Aws::Vector<Aws::String>>
    SMBFileShareInfo& WithAdminUserList(AdminUserListT&& value) { SetAdminUserList(std::forward<AdminUserListT>(value)); return *this;}
    template<typename AdminUserListT = Aws::String>
    SMBFileShareInfo& AddAdminUserList(AdminUserListT&& value) { m_adminUserListHasBeenSet = true; m_adminUserList.emplace_back(std::forward<AdminUserListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValidUserList() const { return m_validUserList; }
    inline bool ValidUserListHasBeenSet() const { return m_validUserListHasBeenSet; }
    template<typename ValidUserListT = Aws::Vector<Aws::String>>
    void SetValidUserList(ValidUserListT&& value) { m_validUserListHasBeenSet = true; m_validUserList = std::forward<ValidUserListT>(value); }
    template<typename ValidUserListT = Aws::Vector<Aws::String>>
    SMBFileShareInfo& WithValidUserList(ValidUserListT&& value) { SetValidUserList(std::forward<ValidUserListT>(value)); return *this;}
    template<typename ValidUserListT = Aws::String>
    SMBFileShareInfo& AddValidUserList(ValidUserListT&& value) { m_validUserListHasBeenSet = true; m_validUserList.emplace_back(std::forward<ValidUserListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInvalidUserList() const { return m_invalidUserList; }
    inline bool InvalidUserListHasBeenSet() const { return m_invalidUserListHasBeenSet; }
    template<typename InvalidUserListT = Aws::Vector<Aws::String>>
    void SetInvalidUserList(InvalidUserListT&& value) { m_invalidUserListHasBeenSet = true; m_invalidUserList = std::forward<InvalidUserListT>(value); }
    template<typename InvalidUserListT = Aws::Vector<Aws::String>>
    SMBFileShareInfo& WithInvalidUserList(InvalidUserListT&& value) { SetInvalidUserList(std::forward<InvalidUserListT>(value)); return *this;}
    template<typename InvalidUserListT = Aws::String>
    SMBFileShareInfo& AddInvalidUserList(InvalidUserListT&& value) { m_invalidUserListHasBeenSet = true; m_invalidUserList.emplace_back(std::forward<InvalidUserListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for audit logs.</p>
     */
    inline const Aws::String& GetAuditDestinationARN() const { return m_auditDestinationARN; }
    inline bool AuditDestinationARNHasBeenSet() const { return m_auditDestinationARNHasBeenSet; }
    template<typename AuditDestinationARNT = Aws::String>
    void SetAuditDestinationARN(AuditDestinationARNT&& value) { m_auditDestinationARNHasBeenSet = true; m_auditDestinationARN = std::forward<AuditDestinationARNT>(value); }
    template<typename AuditDestinationARNT = Aws::String>
    SMBFileShareInfo& WithAuditDestinationARN(AuditDestinationARNT&& value) { SetAuditDestinationARN(std::forward<AuditDestinationARNT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetAuthentication() const { return m_authentication; }
    inline bool AuthenticationHasBeenSet() const { return m_authenticationHasBeenSet; }
    template<typename AuthenticationT = Aws::String>
    void SetAuthentication(AuthenticationT&& value) { m_authenticationHasBeenSet = true; m_authentication = std::forward<AuthenticationT>(value); }
    template<typename AuthenticationT = Aws::String>
    SMBFileShareInfo& WithAuthentication(AuthenticationT&& value) { SetAuthentication(std::forward<AuthenticationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The case of an object name in an Amazon S3 bucket. For
     * <code>ClientSpecified</code>, the client determines the case sensitivity. For
     * <code>CaseSensitive</code>, the gateway determines the case sensitivity. The
     * default value is <code>ClientSpecified</code>.</p>
     */
    inline CaseSensitivity GetCaseSensitivity() const { return m_caseSensitivity; }
    inline bool CaseSensitivityHasBeenSet() const { return m_caseSensitivityHasBeenSet; }
    inline void SetCaseSensitivity(CaseSensitivity value) { m_caseSensitivityHasBeenSet = true; m_caseSensitivity = value; }
    inline SMBFileShareInfo& WithCaseSensitivity(CaseSensitivity value) { SetCaseSensitivity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 50 tags assigned to the SMB file share, sorted alphabetically
     * by key name. Each tag is a key-value pair. For a gateway with more than 10 tags
     * assigned, you can view all tags using the <code>ListTagsForResource</code> API
     * operation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    SMBFileShareInfo& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    SMBFileShareInfo& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>, or if an access point or access point alias is
     * used.</p> 
     */
    inline const Aws::String& GetFileShareName() const { return m_fileShareName; }
    inline bool FileShareNameHasBeenSet() const { return m_fileShareNameHasBeenSet; }
    template<typename FileShareNameT = Aws::String>
    void SetFileShareName(FileShareNameT&& value) { m_fileShareNameHasBeenSet = true; m_fileShareName = std::forward<FileShareNameT>(value); }
    template<typename FileShareNameT = Aws::String>
    SMBFileShareInfo& WithFileShareName(FileShareNameT&& value) { SetFileShareName(std::forward<FileShareNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Refresh cache information for the file share.</p>
     */
    inline const CacheAttributes& GetCacheAttributes() const { return m_cacheAttributes; }
    inline bool CacheAttributesHasBeenSet() const { return m_cacheAttributesHasBeenSet; }
    template<typename CacheAttributesT = CacheAttributes>
    void SetCacheAttributes(CacheAttributesT&& value) { m_cacheAttributesHasBeenSet = true; m_cacheAttributes = std::forward<CacheAttributesT>(value); }
    template<typename CacheAttributesT = CacheAttributes>
    SMBFileShareInfo& WithCacheAttributes(CacheAttributesT&& value) { SetCacheAttributes(std::forward<CacheAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notification policy of the file share. <code>SettlingTimeInSeconds</code>
     * controls the number of seconds to wait after the last point in time a client
     * wrote to a file before generating an <code>ObjectUploaded</code> notification.
     * Because clients can make many small writes to files, it's best to set this
     * parameter for as long as possible to avoid generating multiple notifications for
     * the same file in a small time period.</p>  <p>
     * <code>SettlingTimeInSeconds</code> has no effect on the timing of the object
     * uploading to Amazon S3, only the timing of the notification.</p> <p>This setting
     * is not meant to specify an exact time at which the notification will be sent. In
     * some cases, the gateway might require more than the specified delay time to
     * generate and send notifications.</p>  <p>The following example sets
     * <code>NotificationPolicy</code> on with <code>SettlingTimeInSeconds</code> set
     * to 60.</p> <p> <code>{\"Upload\": {\"SettlingTimeInSeconds\": 60}}</code> </p>
     * <p>The following example sets <code>NotificationPolicy</code> off.</p> <p>
     * <code>{}</code> </p>
     */
    inline const Aws::String& GetNotificationPolicy() const { return m_notificationPolicy; }
    inline bool NotificationPolicyHasBeenSet() const { return m_notificationPolicyHasBeenSet; }
    template<typename NotificationPolicyT = Aws::String>
    void SetNotificationPolicy(NotificationPolicyT&& value) { m_notificationPolicyHasBeenSet = true; m_notificationPolicy = std::forward<NotificationPolicyT>(value); }
    template<typename NotificationPolicyT = Aws::String>
    SMBFileShareInfo& WithNotificationPolicy(NotificationPolicyT&& value) { SetNotificationPolicy(std::forward<NotificationPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the DNS name for the VPC endpoint that the SMB file share uses to
     * connect to Amazon S3.</p>  <p>This parameter is required for SMB file
     * shares that connect to Amazon S3 through a VPC endpoint, a VPC access point, or
     * an access point alias that points to a VPC access point.</p> 
     */
    inline const Aws::String& GetVPCEndpointDNSName() const { return m_vPCEndpointDNSName; }
    inline bool VPCEndpointDNSNameHasBeenSet() const { return m_vPCEndpointDNSNameHasBeenSet; }
    template<typename VPCEndpointDNSNameT = Aws::String>
    void SetVPCEndpointDNSName(VPCEndpointDNSNameT&& value) { m_vPCEndpointDNSNameHasBeenSet = true; m_vPCEndpointDNSName = std::forward<VPCEndpointDNSNameT>(value); }
    template<typename VPCEndpointDNSNameT = Aws::String>
    SMBFileShareInfo& WithVPCEndpointDNSName(VPCEndpointDNSNameT&& value) { SetVPCEndpointDNSName(std::forward<VPCEndpointDNSNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Region of the S3 bucket where the SMB file share stores
     * files.</p>  <p>This parameter is required for SMB file shares that connect
     * to Amazon S3 through a VPC endpoint, a VPC access point, or an access point
     * alias that points to a VPC access point.</p> 
     */
    inline const Aws::String& GetBucketRegion() const { return m_bucketRegion; }
    inline bool BucketRegionHasBeenSet() const { return m_bucketRegionHasBeenSet; }
    template<typename BucketRegionT = Aws::String>
    void SetBucketRegion(BucketRegionT&& value) { m_bucketRegionHasBeenSet = true; m_bucketRegion = std::forward<BucketRegionT>(value); }
    template<typename BucketRegionT = Aws::String>
    SMBFileShareInfo& WithBucketRegion(BucketRegionT&& value) { SetBucketRegion(std::forward<BucketRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether opportunistic locking is enabled for the SMB file
     * share.</p>  <p>Enabling opportunistic locking on case-sensitive shares is
     * not recommended for workloads that involve access to files with the same name in
     * different case.</p>  <p>Valid Values: <code>true</code> |
     * <code>false</code> </p>
     */
    inline bool GetOplocksEnabled() const { return m_oplocksEnabled; }
    inline bool OplocksEnabledHasBeenSet() const { return m_oplocksEnabledHasBeenSet; }
    inline void SetOplocksEnabled(bool value) { m_oplocksEnabledHasBeenSet = true; m_oplocksEnabled = value; }
    inline SMBFileShareInfo& WithOplocksEnabled(bool value) { SetOplocksEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_fileShareARN;
    bool m_fileShareARNHasBeenSet = false;

    Aws::String m_fileShareId;
    bool m_fileShareIdHasBeenSet = false;

    Aws::String m_fileShareStatus;
    bool m_fileShareStatusHasBeenSet = false;

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    EncryptionType m_encryptionType{EncryptionType::NOT_SET};
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_kMSKey;
    bool m_kMSKeyHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_locationARN;
    bool m_locationARNHasBeenSet = false;

    Aws::String m_defaultStorageClass;
    bool m_defaultStorageClassHasBeenSet = false;

    ObjectACL m_objectACL{ObjectACL::NOT_SET};
    bool m_objectACLHasBeenSet = false;

    bool m_readOnly{false};
    bool m_readOnlyHasBeenSet = false;

    bool m_guessMIMETypeEnabled{false};
    bool m_guessMIMETypeEnabledHasBeenSet = false;

    bool m_requesterPays{false};
    bool m_requesterPaysHasBeenSet = false;

    bool m_sMBACLEnabled{false};
    bool m_sMBACLEnabledHasBeenSet = false;

    bool m_accessBasedEnumeration{false};
    bool m_accessBasedEnumerationHasBeenSet = false;

    Aws::Vector<Aws::String> m_adminUserList;
    bool m_adminUserListHasBeenSet = false;

    Aws::Vector<Aws::String> m_validUserList;
    bool m_validUserListHasBeenSet = false;

    Aws::Vector<Aws::String> m_invalidUserList;
    bool m_invalidUserListHasBeenSet = false;

    Aws::String m_auditDestinationARN;
    bool m_auditDestinationARNHasBeenSet = false;

    Aws::String m_authentication;
    bool m_authenticationHasBeenSet = false;

    CaseSensitivity m_caseSensitivity{CaseSensitivity::NOT_SET};
    bool m_caseSensitivityHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_fileShareName;
    bool m_fileShareNameHasBeenSet = false;

    CacheAttributes m_cacheAttributes;
    bool m_cacheAttributesHasBeenSet = false;

    Aws::String m_notificationPolicy;
    bool m_notificationPolicyHasBeenSet = false;

    Aws::String m_vPCEndpointDNSName;
    bool m_vPCEndpointDNSNameHasBeenSet = false;

    Aws::String m_bucketRegion;
    bool m_bucketRegionHasBeenSet = false;

    bool m_oplocksEnabled{false};
    bool m_oplocksEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

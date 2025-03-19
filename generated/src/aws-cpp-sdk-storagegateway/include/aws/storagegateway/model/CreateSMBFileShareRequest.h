/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>CreateSMBFileShareInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateSMBFileShareInput">AWS
   * API Reference</a></p>
   */
  class CreateSMBFileShareRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API CreateSMBFileShareRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSMBFileShare"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique string value that you supply that is used by S3 File Gateway to
     * ensure idempotent file share creation.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateSMBFileShareRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the S3 File Gateway on which you want to create a file share.</p>
     */
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    CreateSMBFileShareRequest& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
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
    inline CreateSMBFileShareRequest& WithEncryptionType(EncryptionType value) { SetEncryptionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. The Amazon Resource Name (ARN) of a symmetric customer master key
     * (CMK) used for Amazon S3 server-side encryption. Storage Gateway does not
     * support asymmetric CMKs. This value must be set if <code>KMSEncrypted</code> is
     * <code>true</code>, or if <code>EncryptionType</code> is <code>SseKms</code> or
     * <code>DsseKms</code>.</p>
     */
    inline const Aws::String& GetKMSKey() const { return m_kMSKey; }
    inline bool KMSKeyHasBeenSet() const { return m_kMSKeyHasBeenSet; }
    template<typename KMSKeyT = Aws::String>
    void SetKMSKey(KMSKeyT&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::forward<KMSKeyT>(value); }
    template<typename KMSKeyT = Aws::String>
    CreateSMBFileShareRequest& WithKMSKey(KMSKeyT&& value) { SetKMSKey(std::forward<KMSKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Identity and Access Management (IAM) role that an S3 File
     * Gateway assumes when it accesses the underlying storage.</p>
     */
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    CreateSMBFileShareRequest& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom ARN for the backend storage used for storing data for file shares.
     * It includes a resource ARN with an optional prefix concatenation. The prefix
     * must end with a forward slash (/).</p>  <p>You can specify LocationARN as
     * a bucket ARN, access point ARN or access point alias, as shown in the following
     * examples.</p> <p>Bucket ARN:</p> <p>
     * <code>arn:aws:s3:::amzn-s3-demo-bucket/prefix/</code> </p> <p>Access point
     * ARN:</p> <p>
     * <code>arn:aws:s3:region:account-id:accesspoint/access-point-name/prefix/</code>
     * </p> <p>If you specify an access point, the bucket policy must be configured to
     * delegate access control to the access point. For information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points-policies.html#access-points-delegating-control">Delegating
     * access control to access points</a> in the <i>Amazon S3 User Guide</i>.</p>
     * <p>Access point alias:</p> <p>
     * <code>test-ap-ab123cdef4gehijklmn5opqrstuvuse1a-s3alias</code> </p> 
     */
    inline const Aws::String& GetLocationARN() const { return m_locationARN; }
    inline bool LocationARNHasBeenSet() const { return m_locationARNHasBeenSet; }
    template<typename LocationARNT = Aws::String>
    void SetLocationARN(LocationARNT&& value) { m_locationARNHasBeenSet = true; m_locationARN = std::forward<LocationARNT>(value); }
    template<typename LocationARNT = Aws::String>
    CreateSMBFileShareRequest& WithLocationARN(LocationARNT&& value) { SetLocationARN(std::forward<LocationARNT>(value)); return *this;}
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
    CreateSMBFileShareRequest& WithDefaultStorageClass(DefaultStorageClassT&& value) { SetDefaultStorageClass(std::forward<DefaultStorageClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that sets the access control list (ACL) permission for objects in the
     * S3 bucket that a S3 File Gateway puts objects into. The default value is
     * <code>private</code>.</p>
     */
    inline ObjectACL GetObjectACL() const { return m_objectACL; }
    inline bool ObjectACLHasBeenSet() const { return m_objectACLHasBeenSet; }
    inline void SetObjectACL(ObjectACL value) { m_objectACLHasBeenSet = true; m_objectACL = value; }
    inline CreateSMBFileShareRequest& WithObjectACL(ObjectACL value) { SetObjectACL(value); return *this;}
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
    inline CreateSMBFileShareRequest& WithReadOnly(bool value) { SetReadOnly(value); return *this;}
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
    inline CreateSMBFileShareRequest& WithGuessMIMETypeEnabled(bool value) { SetGuessMIMETypeEnabled(value); return *this;}
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
    inline CreateSMBFileShareRequest& WithRequesterPays(bool value) { SetRequesterPays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this value to <code>true</code> to enable access control list (ACL) on
     * the SMB file share. Set it to <code>false</code> to map file and directory
     * permissions to the POSIX permissions.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/filegateway/latest/files3/smb-acl.html">Using
     * Windows ACLs to limit SMB file share access</a> in the <i>Amazon S3 File Gateway
     * User Guide</i>.</p> <p>Valid Values: <code>true</code> | <code>false</code> </p>
     */
    inline bool GetSMBACLEnabled() const { return m_sMBACLEnabled; }
    inline bool SMBACLEnabledHasBeenSet() const { return m_sMBACLEnabledHasBeenSet; }
    inline void SetSMBACLEnabled(bool value) { m_sMBACLEnabledHasBeenSet = true; m_sMBACLEnabled = value; }
    inline CreateSMBFileShareRequest& WithSMBACLEnabled(bool value) { SetSMBACLEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The files and folders on this share will only be visible to users with read
     * access.</p>
     */
    inline bool GetAccessBasedEnumeration() const { return m_accessBasedEnumeration; }
    inline bool AccessBasedEnumerationHasBeenSet() const { return m_accessBasedEnumerationHasBeenSet; }
    inline void SetAccessBasedEnumeration(bool value) { m_accessBasedEnumerationHasBeenSet = true; m_accessBasedEnumeration = value; }
    inline CreateSMBFileShareRequest& WithAccessBasedEnumeration(bool value) { SetAccessBasedEnumeration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of users or groups in the Active Directory that will be granted
     * administrator privileges on the file share. These users can do all file
     * operations as the super-user. Acceptable formats include:
     * <code>DOMAIN\User1</code>, <code>user1</code>, <code>@group1</code>, and
     * <code>@DOMAIN\group1</code>.</p>  <p>Use this option very carefully,
     * because any user in this list can do anything they like on the file share,
     * regardless of file permissions.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetAdminUserList() const { return m_adminUserList; }
    inline bool AdminUserListHasBeenSet() const { return m_adminUserListHasBeenSet; }
    template<typename AdminUserListT = Aws::Vector<Aws::String>>
    void SetAdminUserList(AdminUserListT&& value) { m_adminUserListHasBeenSet = true; m_adminUserList = std::forward<AdminUserListT>(value); }
    template<typename AdminUserListT = Aws::Vector<Aws::String>>
    CreateSMBFileShareRequest& WithAdminUserList(AdminUserListT&& value) { SetAdminUserList(std::forward<AdminUserListT>(value)); return *this;}
    template<typename AdminUserListT = Aws::String>
    CreateSMBFileShareRequest& AddAdminUserList(AdminUserListT&& value) { m_adminUserListHasBeenSet = true; m_adminUserList.emplace_back(std::forward<AdminUserListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file <a href=""/> share. A group must be prefixed with the @ character.
     * Acceptable formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValidUserList() const { return m_validUserList; }
    inline bool ValidUserListHasBeenSet() const { return m_validUserListHasBeenSet; }
    template<typename ValidUserListT = Aws::Vector<Aws::String>>
    void SetValidUserList(ValidUserListT&& value) { m_validUserListHasBeenSet = true; m_validUserList = std::forward<ValidUserListT>(value); }
    template<typename ValidUserListT = Aws::Vector<Aws::String>>
    CreateSMBFileShareRequest& WithValidUserList(ValidUserListT&& value) { SetValidUserList(std::forward<ValidUserListT>(value)); return *this;}
    template<typename ValidUserListT = Aws::String>
    CreateSMBFileShareRequest& AddValidUserList(ValidUserListT&& value) { m_validUserListHasBeenSet = true; m_validUserList.emplace_back(std::forward<ValidUserListT>(value)); return *this; }
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
    CreateSMBFileShareRequest& WithInvalidUserList(InvalidUserListT&& value) { SetInvalidUserList(std::forward<InvalidUserListT>(value)); return *this;}
    template<typename InvalidUserListT = Aws::String>
    CreateSMBFileShareRequest& AddInvalidUserList(InvalidUserListT&& value) { m_invalidUserListHasBeenSet = true; m_invalidUserList.emplace_back(std::forward<InvalidUserListT>(value)); return *this; }
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
    CreateSMBFileShareRequest& WithAuditDestinationARN(AuditDestinationARNT&& value) { SetAuditDestinationARN(std::forward<AuditDestinationARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication method that users use to access the file share. The
     * default is <code>ActiveDirectory</code>.</p> <p>Valid Values:
     * <code>ActiveDirectory</code> | <code>GuestAccess</code> </p>
     */
    inline const Aws::String& GetAuthentication() const { return m_authentication; }
    inline bool AuthenticationHasBeenSet() const { return m_authenticationHasBeenSet; }
    template<typename AuthenticationT = Aws::String>
    void SetAuthentication(AuthenticationT&& value) { m_authenticationHasBeenSet = true; m_authentication = std::forward<AuthenticationT>(value); }
    template<typename AuthenticationT = Aws::String>
    CreateSMBFileShareRequest& WithAuthentication(AuthenticationT&& value) { SetAuthentication(std::forward<AuthenticationT>(value)); return *this;}
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
    inline CreateSMBFileShareRequest& WithCaseSensitivity(CaseSensitivity value) { SetCaseSensitivity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 50 tags that can be assigned to the NFS file share. Each tag
     * is a key-value pair.</p>  <p>Valid characters for key and value are
     * letters, spaces, and numbers representable in UTF-8 format, and the following
     * special characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateSMBFileShareRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateSMBFileShareRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>, or if an access point or access point alias is
     * used.</p> <p>A valid SMB file share name cannot contain the following
     * characters:
     * <code>[</code>,<code>]</code>,<code>#</code>,<code>;</code>,<code>&lt;</code>,<code>&gt;</code>,<code>:</code>,<code>"</code>,<code>\</code>,<code>/</code>,<code>|</code>,<code>?</code>,<code>*</code>,<code>+</code>,
     * or ASCII control characters <code>1-31</code>.</p> 
     */
    inline const Aws::String& GetFileShareName() const { return m_fileShareName; }
    inline bool FileShareNameHasBeenSet() const { return m_fileShareNameHasBeenSet; }
    template<typename FileShareNameT = Aws::String>
    void SetFileShareName(FileShareNameT&& value) { m_fileShareNameHasBeenSet = true; m_fileShareName = std::forward<FileShareNameT>(value); }
    template<typename FileShareNameT = Aws::String>
    CreateSMBFileShareRequest& WithFileShareName(FileShareNameT&& value) { SetFileShareName(std::forward<FileShareNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies refresh cache information for the file share.</p>
     */
    inline const CacheAttributes& GetCacheAttributes() const { return m_cacheAttributes; }
    inline bool CacheAttributesHasBeenSet() const { return m_cacheAttributesHasBeenSet; }
    template<typename CacheAttributesT = CacheAttributes>
    void SetCacheAttributes(CacheAttributesT&& value) { m_cacheAttributesHasBeenSet = true; m_cacheAttributes = std::forward<CacheAttributesT>(value); }
    template<typename CacheAttributesT = CacheAttributes>
    CreateSMBFileShareRequest& WithCacheAttributes(CacheAttributesT&& value) { SetCacheAttributes(std::forward<CacheAttributesT>(value)); return *this;}
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
    CreateSMBFileShareRequest& WithNotificationPolicy(NotificationPolicyT&& value) { SetNotificationPolicy(std::forward<NotificationPolicyT>(value)); return *this;}
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
    CreateSMBFileShareRequest& WithVPCEndpointDNSName(VPCEndpointDNSNameT&& value) { SetVPCEndpointDNSName(std::forward<VPCEndpointDNSNameT>(value)); return *this;}
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
    CreateSMBFileShareRequest& WithBucketRegion(BucketRegionT&& value) { SetBucketRegion(std::forward<BucketRegionT>(value)); return *this;}
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
    inline CreateSMBFileShareRequest& WithOplocksEnabled(bool value) { SetOplocksEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    EncryptionType m_encryptionType{EncryptionType::NOT_SET};
    bool m_encryptionTypeHasBeenSet = false;

    Aws::String m_kMSKey;
    bool m_kMSKeyHasBeenSet = false;

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

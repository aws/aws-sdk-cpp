/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/model/NFSFileShareDefaults.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/EncryptionType.h>
#include <aws/storagegateway/model/ObjectACL.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The Unix file permissions and ownership information assigned, by default, to
   * native S3 objects when an S3 File Gateway discovers them in S3 buckets. This
   * operation is only supported in S3 File Gateways.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/NFSFileShareInfo">AWS
   * API Reference</a></p>
   */
  class NFSFileShareInfo
  {
  public:
    AWS_STORAGEGATEWAY_API NFSFileShareInfo() = default;
    AWS_STORAGEGATEWAY_API NFSFileShareInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API NFSFileShareInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const NFSFileShareDefaults& GetNFSFileShareDefaults() const { return m_nFSFileShareDefaults; }
    inline bool NFSFileShareDefaultsHasBeenSet() const { return m_nFSFileShareDefaultsHasBeenSet; }
    template<typename NFSFileShareDefaultsT = NFSFileShareDefaults>
    void SetNFSFileShareDefaults(NFSFileShareDefaultsT&& value) { m_nFSFileShareDefaultsHasBeenSet = true; m_nFSFileShareDefaults = std::forward<NFSFileShareDefaultsT>(value); }
    template<typename NFSFileShareDefaultsT = NFSFileShareDefaults>
    NFSFileShareInfo& WithNFSFileShareDefaults(NFSFileShareDefaultsT&& value) { SetNFSFileShareDefaults(std::forward<NFSFileShareDefaultsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFileShareARN() const { return m_fileShareARN; }
    inline bool FileShareARNHasBeenSet() const { return m_fileShareARNHasBeenSet; }
    template<typename FileShareARNT = Aws::String>
    void SetFileShareARN(FileShareARNT&& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = std::forward<FileShareARNT>(value); }
    template<typename FileShareARNT = Aws::String>
    NFSFileShareInfo& WithFileShareARN(FileShareARNT&& value) { SetFileShareARN(std::forward<FileShareARNT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFileShareId() const { return m_fileShareId; }
    inline bool FileShareIdHasBeenSet() const { return m_fileShareIdHasBeenSet; }
    template<typename FileShareIdT = Aws::String>
    void SetFileShareId(FileShareIdT&& value) { m_fileShareIdHasBeenSet = true; m_fileShareId = std::forward<FileShareIdT>(value); }
    template<typename FileShareIdT = Aws::String>
    NFSFileShareInfo& WithFileShareId(FileShareIdT&& value) { SetFileShareId(std::forward<FileShareIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFileShareStatus() const { return m_fileShareStatus; }
    inline bool FileShareStatusHasBeenSet() const { return m_fileShareStatusHasBeenSet; }
    template<typename FileShareStatusT = Aws::String>
    void SetFileShareStatus(FileShareStatusT&& value) { m_fileShareStatusHasBeenSet = true; m_fileShareStatus = std::forward<FileShareStatusT>(value); }
    template<typename FileShareStatusT = Aws::String>
    NFSFileShareInfo& WithFileShareStatus(FileShareStatusT&& value) { SetFileShareStatus(std::forward<FileShareStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    NFSFileShareInfo& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
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
    inline NFSFileShareInfo& WithEncryptionType(EncryptionType value) { SetEncryptionType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetKMSKey() const { return m_kMSKey; }
    inline bool KMSKeyHasBeenSet() const { return m_kMSKeyHasBeenSet; }
    template<typename KMSKeyT = Aws::String>
    void SetKMSKey(KMSKeyT&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::forward<KMSKeyT>(value); }
    template<typename KMSKeyT = Aws::String>
    NFSFileShareInfo& WithKMSKey(KMSKeyT&& value) { SetKMSKey(std::forward<KMSKeyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    NFSFileShareInfo& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    template<typename RoleT = Aws::String>
    void SetRole(RoleT&& value) { m_roleHasBeenSet = true; m_role = std::forward<RoleT>(value); }
    template<typename RoleT = Aws::String>
    NFSFileShareInfo& WithRole(RoleT&& value) { SetRole(std::forward<RoleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLocationARN() const { return m_locationARN; }
    inline bool LocationARNHasBeenSet() const { return m_locationARNHasBeenSet; }
    template<typename LocationARNT = Aws::String>
    void SetLocationARN(LocationARNT&& value) { m_locationARNHasBeenSet = true; m_locationARN = std::forward<LocationARNT>(value); }
    template<typename LocationARNT = Aws::String>
    NFSFileShareInfo& WithLocationARN(LocationARNT&& value) { SetLocationARN(std::forward<LocationARNT>(value)); return *this;}
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
    NFSFileShareInfo& WithDefaultStorageClass(DefaultStorageClassT&& value) { SetDefaultStorageClass(std::forward<DefaultStorageClassT>(value)); return *this;}
    ///@}

    ///@{
    
    inline ObjectACL GetObjectACL() const { return m_objectACL; }
    inline bool ObjectACLHasBeenSet() const { return m_objectACLHasBeenSet; }
    inline void SetObjectACL(ObjectACL value) { m_objectACLHasBeenSet = true; m_objectACL = value; }
    inline NFSFileShareInfo& WithObjectACL(ObjectACL value) { SetObjectACL(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetClientList() const { return m_clientList; }
    inline bool ClientListHasBeenSet() const { return m_clientListHasBeenSet; }
    template<typename ClientListT = Aws::Vector<Aws::String>>
    void SetClientList(ClientListT&& value) { m_clientListHasBeenSet = true; m_clientList = std::forward<ClientListT>(value); }
    template<typename ClientListT = Aws::Vector<Aws::String>>
    NFSFileShareInfo& WithClientList(ClientListT&& value) { SetClientList(std::forward<ClientListT>(value)); return *this;}
    template<typename ClientListT = Aws::String>
    NFSFileShareInfo& AddClientList(ClientListT&& value) { m_clientListHasBeenSet = true; m_clientList.emplace_back(std::forward<ClientListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetSquash() const { return m_squash; }
    inline bool SquashHasBeenSet() const { return m_squashHasBeenSet; }
    template<typename SquashT = Aws::String>
    void SetSquash(SquashT&& value) { m_squashHasBeenSet = true; m_squash = std::forward<SquashT>(value); }
    template<typename SquashT = Aws::String>
    NFSFileShareInfo& WithSquash(SquashT&& value) { SetSquash(std::forward<SquashT>(value)); return *this;}
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
    inline NFSFileShareInfo& WithReadOnly(bool value) { SetReadOnly(value); return *this;}
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
    inline NFSFileShareInfo& WithGuessMIMETypeEnabled(bool value) { SetGuessMIMETypeEnabled(value); return *this;}
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
    inline NFSFileShareInfo& WithRequesterPays(bool value) { SetRequesterPays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 50 tags assigned to the NFS file share, sorted alphabetically
     * by key name. Each tag is a key-value pair. For a gateway with more than 10 tags
     * assigned, you can view all tags using the <code>ListTagsForResource</code> API
     * operation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    NFSFileShareInfo& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    NFSFileShareInfo& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    NFSFileShareInfo& WithFileShareName(FileShareNameT&& value) { SetFileShareName(std::forward<FileShareNameT>(value)); return *this;}
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
    NFSFileShareInfo& WithCacheAttributes(CacheAttributesT&& value) { SetCacheAttributes(std::forward<CacheAttributesT>(value)); return *this;}
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
    NFSFileShareInfo& WithNotificationPolicy(NotificationPolicyT&& value) { SetNotificationPolicy(std::forward<NotificationPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the DNS name for the VPC endpoint that the NFS file share uses to
     * connect to Amazon S3.</p>  <p>This parameter is required for NFS file
     * shares that connect to Amazon S3 through a VPC endpoint, a VPC access point, or
     * an access point alias that points to a VPC access point.</p> 
     */
    inline const Aws::String& GetVPCEndpointDNSName() const { return m_vPCEndpointDNSName; }
    inline bool VPCEndpointDNSNameHasBeenSet() const { return m_vPCEndpointDNSNameHasBeenSet; }
    template<typename VPCEndpointDNSNameT = Aws::String>
    void SetVPCEndpointDNSName(VPCEndpointDNSNameT&& value) { m_vPCEndpointDNSNameHasBeenSet = true; m_vPCEndpointDNSName = std::forward<VPCEndpointDNSNameT>(value); }
    template<typename VPCEndpointDNSNameT = Aws::String>
    NFSFileShareInfo& WithVPCEndpointDNSName(VPCEndpointDNSNameT&& value) { SetVPCEndpointDNSName(std::forward<VPCEndpointDNSNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Region of the S3 bucket where the NFS file share stores
     * files.</p>  <p>This parameter is required for NFS file shares that connect
     * to Amazon S3 through a VPC endpoint, a VPC access point, or an access point
     * alias that points to a VPC access point.</p> 
     */
    inline const Aws::String& GetBucketRegion() const { return m_bucketRegion; }
    inline bool BucketRegionHasBeenSet() const { return m_bucketRegionHasBeenSet; }
    template<typename BucketRegionT = Aws::String>
    void SetBucketRegion(BucketRegionT&& value) { m_bucketRegionHasBeenSet = true; m_bucketRegion = std::forward<BucketRegionT>(value); }
    template<typename BucketRegionT = Aws::String>
    NFSFileShareInfo& WithBucketRegion(BucketRegionT&& value) { SetBucketRegion(std::forward<BucketRegionT>(value)); return *this;}
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
    NFSFileShareInfo& WithAuditDestinationARN(AuditDestinationARNT&& value) { SetAuditDestinationARN(std::forward<AuditDestinationARNT>(value)); return *this;}
    ///@}
  private:

    NFSFileShareDefaults m_nFSFileShareDefaults;
    bool m_nFSFileShareDefaultsHasBeenSet = false;

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

    Aws::Vector<Aws::String> m_clientList;
    bool m_clientListHasBeenSet = false;

    Aws::String m_squash;
    bool m_squashHasBeenSet = false;

    bool m_readOnly{false};
    bool m_readOnlyHasBeenSet = false;

    bool m_guessMIMETypeEnabled{false};
    bool m_guessMIMETypeEnabledHasBeenSet = false;

    bool m_requesterPays{false};
    bool m_requesterPaysHasBeenSet = false;

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

    Aws::String m_auditDestinationARN;
    bool m_auditDestinationARNHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

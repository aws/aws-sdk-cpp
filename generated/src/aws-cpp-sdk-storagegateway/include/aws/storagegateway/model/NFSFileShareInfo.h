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
    AWS_STORAGEGATEWAY_API NFSFileShareInfo();
    AWS_STORAGEGATEWAY_API NFSFileShareInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API NFSFileShareInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const NFSFileShareDefaults& GetNFSFileShareDefaults() const{ return m_nFSFileShareDefaults; }
    inline bool NFSFileShareDefaultsHasBeenSet() const { return m_nFSFileShareDefaultsHasBeenSet; }
    inline void SetNFSFileShareDefaults(const NFSFileShareDefaults& value) { m_nFSFileShareDefaultsHasBeenSet = true; m_nFSFileShareDefaults = value; }
    inline void SetNFSFileShareDefaults(NFSFileShareDefaults&& value) { m_nFSFileShareDefaultsHasBeenSet = true; m_nFSFileShareDefaults = std::move(value); }
    inline NFSFileShareInfo& WithNFSFileShareDefaults(const NFSFileShareDefaults& value) { SetNFSFileShareDefaults(value); return *this;}
    inline NFSFileShareInfo& WithNFSFileShareDefaults(NFSFileShareDefaults&& value) { SetNFSFileShareDefaults(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFileShareARN() const{ return m_fileShareARN; }
    inline bool FileShareARNHasBeenSet() const { return m_fileShareARNHasBeenSet; }
    inline void SetFileShareARN(const Aws::String& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = value; }
    inline void SetFileShareARN(Aws::String&& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = std::move(value); }
    inline void SetFileShareARN(const char* value) { m_fileShareARNHasBeenSet = true; m_fileShareARN.assign(value); }
    inline NFSFileShareInfo& WithFileShareARN(const Aws::String& value) { SetFileShareARN(value); return *this;}
    inline NFSFileShareInfo& WithFileShareARN(Aws::String&& value) { SetFileShareARN(std::move(value)); return *this;}
    inline NFSFileShareInfo& WithFileShareARN(const char* value) { SetFileShareARN(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFileShareId() const{ return m_fileShareId; }
    inline bool FileShareIdHasBeenSet() const { return m_fileShareIdHasBeenSet; }
    inline void SetFileShareId(const Aws::String& value) { m_fileShareIdHasBeenSet = true; m_fileShareId = value; }
    inline void SetFileShareId(Aws::String&& value) { m_fileShareIdHasBeenSet = true; m_fileShareId = std::move(value); }
    inline void SetFileShareId(const char* value) { m_fileShareIdHasBeenSet = true; m_fileShareId.assign(value); }
    inline NFSFileShareInfo& WithFileShareId(const Aws::String& value) { SetFileShareId(value); return *this;}
    inline NFSFileShareInfo& WithFileShareId(Aws::String&& value) { SetFileShareId(std::move(value)); return *this;}
    inline NFSFileShareInfo& WithFileShareId(const char* value) { SetFileShareId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFileShareStatus() const{ return m_fileShareStatus; }
    inline bool FileShareStatusHasBeenSet() const { return m_fileShareStatusHasBeenSet; }
    inline void SetFileShareStatus(const Aws::String& value) { m_fileShareStatusHasBeenSet = true; m_fileShareStatus = value; }
    inline void SetFileShareStatus(Aws::String&& value) { m_fileShareStatusHasBeenSet = true; m_fileShareStatus = std::move(value); }
    inline void SetFileShareStatus(const char* value) { m_fileShareStatusHasBeenSet = true; m_fileShareStatus.assign(value); }
    inline NFSFileShareInfo& WithFileShareStatus(const Aws::String& value) { SetFileShareStatus(value); return *this;}
    inline NFSFileShareInfo& WithFileShareStatus(Aws::String&& value) { SetFileShareStatus(std::move(value)); return *this;}
    inline NFSFileShareInfo& WithFileShareStatus(const char* value) { SetFileShareStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }
    inline NFSFileShareInfo& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}
    inline NFSFileShareInfo& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}
    inline NFSFileShareInfo& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}
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
    inline const EncryptionType& GetEncryptionType() const{ return m_encryptionType; }
    inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
    inline void SetEncryptionType(const EncryptionType& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = value; }
    inline void SetEncryptionType(EncryptionType&& value) { m_encryptionTypeHasBeenSet = true; m_encryptionType = std::move(value); }
    inline NFSFileShareInfo& WithEncryptionType(const EncryptionType& value) { SetEncryptionType(value); return *this;}
    inline NFSFileShareInfo& WithEncryptionType(EncryptionType&& value) { SetEncryptionType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetKMSKey() const{ return m_kMSKey; }
    inline bool KMSKeyHasBeenSet() const { return m_kMSKeyHasBeenSet; }
    inline void SetKMSKey(const Aws::String& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }
    inline void SetKMSKey(Aws::String&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::move(value); }
    inline void SetKMSKey(const char* value) { m_kMSKeyHasBeenSet = true; m_kMSKey.assign(value); }
    inline NFSFileShareInfo& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}
    inline NFSFileShareInfo& WithKMSKey(Aws::String&& value) { SetKMSKey(std::move(value)); return *this;}
    inline NFSFileShareInfo& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }
    inline NFSFileShareInfo& WithPath(const Aws::String& value) { SetPath(value); return *this;}
    inline NFSFileShareInfo& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}
    inline NFSFileShareInfo& WithPath(const char* value) { SetPath(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }
    inline NFSFileShareInfo& WithRole(const Aws::String& value) { SetRole(value); return *this;}
    inline NFSFileShareInfo& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}
    inline NFSFileShareInfo& WithRole(const char* value) { SetRole(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLocationARN() const{ return m_locationARN; }
    inline bool LocationARNHasBeenSet() const { return m_locationARNHasBeenSet; }
    inline void SetLocationARN(const Aws::String& value) { m_locationARNHasBeenSet = true; m_locationARN = value; }
    inline void SetLocationARN(Aws::String&& value) { m_locationARNHasBeenSet = true; m_locationARN = std::move(value); }
    inline void SetLocationARN(const char* value) { m_locationARNHasBeenSet = true; m_locationARN.assign(value); }
    inline NFSFileShareInfo& WithLocationARN(const Aws::String& value) { SetLocationARN(value); return *this;}
    inline NFSFileShareInfo& WithLocationARN(Aws::String&& value) { SetLocationARN(std::move(value)); return *this;}
    inline NFSFileShareInfo& WithLocationARN(const char* value) { SetLocationARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the S3
     * File Gateway. The default value is <code>S3_STANDARD</code>. Optional.</p>
     * <p>Valid Values: <code>S3_STANDARD</code> | <code>S3_INTELLIGENT_TIERING</code>
     * | <code>S3_STANDARD_IA</code> | <code>S3_ONEZONE_IA</code> </p>
     */
    inline const Aws::String& GetDefaultStorageClass() const{ return m_defaultStorageClass; }
    inline bool DefaultStorageClassHasBeenSet() const { return m_defaultStorageClassHasBeenSet; }
    inline void SetDefaultStorageClass(const Aws::String& value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass = value; }
    inline void SetDefaultStorageClass(Aws::String&& value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass = std::move(value); }
    inline void SetDefaultStorageClass(const char* value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass.assign(value); }
    inline NFSFileShareInfo& WithDefaultStorageClass(const Aws::String& value) { SetDefaultStorageClass(value); return *this;}
    inline NFSFileShareInfo& WithDefaultStorageClass(Aws::String&& value) { SetDefaultStorageClass(std::move(value)); return *this;}
    inline NFSFileShareInfo& WithDefaultStorageClass(const char* value) { SetDefaultStorageClass(value); return *this;}
    ///@}

    ///@{
    
    inline const ObjectACL& GetObjectACL() const{ return m_objectACL; }
    inline bool ObjectACLHasBeenSet() const { return m_objectACLHasBeenSet; }
    inline void SetObjectACL(const ObjectACL& value) { m_objectACLHasBeenSet = true; m_objectACL = value; }
    inline void SetObjectACL(ObjectACL&& value) { m_objectACLHasBeenSet = true; m_objectACL = std::move(value); }
    inline NFSFileShareInfo& WithObjectACL(const ObjectACL& value) { SetObjectACL(value); return *this;}
    inline NFSFileShareInfo& WithObjectACL(ObjectACL&& value) { SetObjectACL(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetClientList() const{ return m_clientList; }
    inline bool ClientListHasBeenSet() const { return m_clientListHasBeenSet; }
    inline void SetClientList(const Aws::Vector<Aws::String>& value) { m_clientListHasBeenSet = true; m_clientList = value; }
    inline void SetClientList(Aws::Vector<Aws::String>&& value) { m_clientListHasBeenSet = true; m_clientList = std::move(value); }
    inline NFSFileShareInfo& WithClientList(const Aws::Vector<Aws::String>& value) { SetClientList(value); return *this;}
    inline NFSFileShareInfo& WithClientList(Aws::Vector<Aws::String>&& value) { SetClientList(std::move(value)); return *this;}
    inline NFSFileShareInfo& AddClientList(const Aws::String& value) { m_clientListHasBeenSet = true; m_clientList.push_back(value); return *this; }
    inline NFSFileShareInfo& AddClientList(Aws::String&& value) { m_clientListHasBeenSet = true; m_clientList.push_back(std::move(value)); return *this; }
    inline NFSFileShareInfo& AddClientList(const char* value) { m_clientListHasBeenSet = true; m_clientList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetSquash() const{ return m_squash; }
    inline bool SquashHasBeenSet() const { return m_squashHasBeenSet; }
    inline void SetSquash(const Aws::String& value) { m_squashHasBeenSet = true; m_squash = value; }
    inline void SetSquash(Aws::String&& value) { m_squashHasBeenSet = true; m_squash = std::move(value); }
    inline void SetSquash(const char* value) { m_squashHasBeenSet = true; m_squash.assign(value); }
    inline NFSFileShareInfo& WithSquash(const Aws::String& value) { SetSquash(value); return *this;}
    inline NFSFileShareInfo& WithSquash(Aws::String&& value) { SetSquash(std::move(value)); return *this;}
    inline NFSFileShareInfo& WithSquash(const char* value) { SetSquash(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that sets the write status of a file share. Set this value to
     * <code>true</code> to set the write status to read-only, otherwise set to
     * <code>false</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline bool GetReadOnly() const{ return m_readOnly; }
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
    inline bool GetGuessMIMETypeEnabled() const{ return m_guessMIMETypeEnabled; }
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
    inline bool GetRequesterPays() const{ return m_requesterPays; }
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
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline NFSFileShareInfo& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline NFSFileShareInfo& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline NFSFileShareInfo& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline NFSFileShareInfo& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>, or if an access point or access point alias is
     * used.</p> 
     */
    inline const Aws::String& GetFileShareName() const{ return m_fileShareName; }
    inline bool FileShareNameHasBeenSet() const { return m_fileShareNameHasBeenSet; }
    inline void SetFileShareName(const Aws::String& value) { m_fileShareNameHasBeenSet = true; m_fileShareName = value; }
    inline void SetFileShareName(Aws::String&& value) { m_fileShareNameHasBeenSet = true; m_fileShareName = std::move(value); }
    inline void SetFileShareName(const char* value) { m_fileShareNameHasBeenSet = true; m_fileShareName.assign(value); }
    inline NFSFileShareInfo& WithFileShareName(const Aws::String& value) { SetFileShareName(value); return *this;}
    inline NFSFileShareInfo& WithFileShareName(Aws::String&& value) { SetFileShareName(std::move(value)); return *this;}
    inline NFSFileShareInfo& WithFileShareName(const char* value) { SetFileShareName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Refresh cache information for the file share.</p>
     */
    inline const CacheAttributes& GetCacheAttributes() const{ return m_cacheAttributes; }
    inline bool CacheAttributesHasBeenSet() const { return m_cacheAttributesHasBeenSet; }
    inline void SetCacheAttributes(const CacheAttributes& value) { m_cacheAttributesHasBeenSet = true; m_cacheAttributes = value; }
    inline void SetCacheAttributes(CacheAttributes&& value) { m_cacheAttributesHasBeenSet = true; m_cacheAttributes = std::move(value); }
    inline NFSFileShareInfo& WithCacheAttributes(const CacheAttributes& value) { SetCacheAttributes(value); return *this;}
    inline NFSFileShareInfo& WithCacheAttributes(CacheAttributes&& value) { SetCacheAttributes(std::move(value)); return *this;}
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
    inline const Aws::String& GetNotificationPolicy() const{ return m_notificationPolicy; }
    inline bool NotificationPolicyHasBeenSet() const { return m_notificationPolicyHasBeenSet; }
    inline void SetNotificationPolicy(const Aws::String& value) { m_notificationPolicyHasBeenSet = true; m_notificationPolicy = value; }
    inline void SetNotificationPolicy(Aws::String&& value) { m_notificationPolicyHasBeenSet = true; m_notificationPolicy = std::move(value); }
    inline void SetNotificationPolicy(const char* value) { m_notificationPolicyHasBeenSet = true; m_notificationPolicy.assign(value); }
    inline NFSFileShareInfo& WithNotificationPolicy(const Aws::String& value) { SetNotificationPolicy(value); return *this;}
    inline NFSFileShareInfo& WithNotificationPolicy(Aws::String&& value) { SetNotificationPolicy(std::move(value)); return *this;}
    inline NFSFileShareInfo& WithNotificationPolicy(const char* value) { SetNotificationPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the DNS name for the VPC endpoint that the NFS file share uses to
     * connect to Amazon S3.</p>  <p>This parameter is required for NFS file
     * shares that connect to Amazon S3 through a VPC endpoint, a VPC access point, or
     * an access point alias that points to a VPC access point.</p> 
     */
    inline const Aws::String& GetVPCEndpointDNSName() const{ return m_vPCEndpointDNSName; }
    inline bool VPCEndpointDNSNameHasBeenSet() const { return m_vPCEndpointDNSNameHasBeenSet; }
    inline void SetVPCEndpointDNSName(const Aws::String& value) { m_vPCEndpointDNSNameHasBeenSet = true; m_vPCEndpointDNSName = value; }
    inline void SetVPCEndpointDNSName(Aws::String&& value) { m_vPCEndpointDNSNameHasBeenSet = true; m_vPCEndpointDNSName = std::move(value); }
    inline void SetVPCEndpointDNSName(const char* value) { m_vPCEndpointDNSNameHasBeenSet = true; m_vPCEndpointDNSName.assign(value); }
    inline NFSFileShareInfo& WithVPCEndpointDNSName(const Aws::String& value) { SetVPCEndpointDNSName(value); return *this;}
    inline NFSFileShareInfo& WithVPCEndpointDNSName(Aws::String&& value) { SetVPCEndpointDNSName(std::move(value)); return *this;}
    inline NFSFileShareInfo& WithVPCEndpointDNSName(const char* value) { SetVPCEndpointDNSName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Region of the S3 bucket where the NFS file share stores
     * files.</p>  <p>This parameter is required for NFS file shares that connect
     * to Amazon S3 through a VPC endpoint, a VPC access point, or an access point
     * alias that points to a VPC access point.</p> 
     */
    inline const Aws::String& GetBucketRegion() const{ return m_bucketRegion; }
    inline bool BucketRegionHasBeenSet() const { return m_bucketRegionHasBeenSet; }
    inline void SetBucketRegion(const Aws::String& value) { m_bucketRegionHasBeenSet = true; m_bucketRegion = value; }
    inline void SetBucketRegion(Aws::String&& value) { m_bucketRegionHasBeenSet = true; m_bucketRegion = std::move(value); }
    inline void SetBucketRegion(const char* value) { m_bucketRegionHasBeenSet = true; m_bucketRegion.assign(value); }
    inline NFSFileShareInfo& WithBucketRegion(const Aws::String& value) { SetBucketRegion(value); return *this;}
    inline NFSFileShareInfo& WithBucketRegion(Aws::String&& value) { SetBucketRegion(std::move(value)); return *this;}
    inline NFSFileShareInfo& WithBucketRegion(const char* value) { SetBucketRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for audit logs.</p>
     */
    inline const Aws::String& GetAuditDestinationARN() const{ return m_auditDestinationARN; }
    inline bool AuditDestinationARNHasBeenSet() const { return m_auditDestinationARNHasBeenSet; }
    inline void SetAuditDestinationARN(const Aws::String& value) { m_auditDestinationARNHasBeenSet = true; m_auditDestinationARN = value; }
    inline void SetAuditDestinationARN(Aws::String&& value) { m_auditDestinationARNHasBeenSet = true; m_auditDestinationARN = std::move(value); }
    inline void SetAuditDestinationARN(const char* value) { m_auditDestinationARNHasBeenSet = true; m_auditDestinationARN.assign(value); }
    inline NFSFileShareInfo& WithAuditDestinationARN(const Aws::String& value) { SetAuditDestinationARN(value); return *this;}
    inline NFSFileShareInfo& WithAuditDestinationARN(Aws::String&& value) { SetAuditDestinationARN(std::move(value)); return *this;}
    inline NFSFileShareInfo& WithAuditDestinationARN(const char* value) { SetAuditDestinationARN(value); return *this;}
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

    EncryptionType m_encryptionType;
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

    ObjectACL m_objectACL;
    bool m_objectACLHasBeenSet = false;

    Aws::Vector<Aws::String> m_clientList;
    bool m_clientListHasBeenSet = false;

    Aws::String m_squash;
    bool m_squashHasBeenSet = false;

    bool m_readOnly;
    bool m_readOnlyHasBeenSet = false;

    bool m_guessMIMETypeEnabled;
    bool m_guessMIMETypeEnabledHasBeenSet = false;

    bool m_requesterPays;
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

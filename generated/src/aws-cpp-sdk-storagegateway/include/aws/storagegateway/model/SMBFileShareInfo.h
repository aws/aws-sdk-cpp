/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_STORAGEGATEWAY_API SMBFileShareInfo();
    AWS_STORAGEGATEWAY_API SMBFileShareInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API SMBFileShareInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetFileShareARN() const{ return m_fileShareARN; }

    
    inline bool FileShareARNHasBeenSet() const { return m_fileShareARNHasBeenSet; }

    
    inline void SetFileShareARN(const Aws::String& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = value; }

    
    inline void SetFileShareARN(Aws::String&& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = std::move(value); }

    
    inline void SetFileShareARN(const char* value) { m_fileShareARNHasBeenSet = true; m_fileShareARN.assign(value); }

    
    inline SMBFileShareInfo& WithFileShareARN(const Aws::String& value) { SetFileShareARN(value); return *this;}

    
    inline SMBFileShareInfo& WithFileShareARN(Aws::String&& value) { SetFileShareARN(std::move(value)); return *this;}

    
    inline SMBFileShareInfo& WithFileShareARN(const char* value) { SetFileShareARN(value); return *this;}


    
    inline const Aws::String& GetFileShareId() const{ return m_fileShareId; }

    
    inline bool FileShareIdHasBeenSet() const { return m_fileShareIdHasBeenSet; }

    
    inline void SetFileShareId(const Aws::String& value) { m_fileShareIdHasBeenSet = true; m_fileShareId = value; }

    
    inline void SetFileShareId(Aws::String&& value) { m_fileShareIdHasBeenSet = true; m_fileShareId = std::move(value); }

    
    inline void SetFileShareId(const char* value) { m_fileShareIdHasBeenSet = true; m_fileShareId.assign(value); }

    
    inline SMBFileShareInfo& WithFileShareId(const Aws::String& value) { SetFileShareId(value); return *this;}

    
    inline SMBFileShareInfo& WithFileShareId(Aws::String&& value) { SetFileShareId(std::move(value)); return *this;}

    
    inline SMBFileShareInfo& WithFileShareId(const char* value) { SetFileShareId(value); return *this;}


    
    inline const Aws::String& GetFileShareStatus() const{ return m_fileShareStatus; }

    
    inline bool FileShareStatusHasBeenSet() const { return m_fileShareStatusHasBeenSet; }

    
    inline void SetFileShareStatus(const Aws::String& value) { m_fileShareStatusHasBeenSet = true; m_fileShareStatus = value; }

    
    inline void SetFileShareStatus(Aws::String&& value) { m_fileShareStatusHasBeenSet = true; m_fileShareStatus = std::move(value); }

    
    inline void SetFileShareStatus(const char* value) { m_fileShareStatusHasBeenSet = true; m_fileShareStatus.assign(value); }

    
    inline SMBFileShareInfo& WithFileShareStatus(const Aws::String& value) { SetFileShareStatus(value); return *this;}

    
    inline SMBFileShareInfo& WithFileShareStatus(Aws::String&& value) { SetFileShareStatus(std::move(value)); return *this;}

    
    inline SMBFileShareInfo& WithFileShareStatus(const char* value) { SetFileShareStatus(value); return *this;}


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline SMBFileShareInfo& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline SMBFileShareInfo& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline SMBFileShareInfo& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>Set to <code>true</code> to use Amazon S3 server-side encryption with your
     * own KMS key, or <code>false</code> to use a key managed by Amazon S3.
     * Optional.</p> <p>Valid Values: <code>true</code> | <code>false</code> </p>
     */
    inline bool GetKMSEncrypted() const{ return m_kMSEncrypted; }

    /**
     * <p>Set to <code>true</code> to use Amazon S3 server-side encryption with your
     * own KMS key, or <code>false</code> to use a key managed by Amazon S3.
     * Optional.</p> <p>Valid Values: <code>true</code> | <code>false</code> </p>
     */
    inline bool KMSEncryptedHasBeenSet() const { return m_kMSEncryptedHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to use Amazon S3 server-side encryption with your
     * own KMS key, or <code>false</code> to use a key managed by Amazon S3.
     * Optional.</p> <p>Valid Values: <code>true</code> | <code>false</code> </p>
     */
    inline void SetKMSEncrypted(bool value) { m_kMSEncryptedHasBeenSet = true; m_kMSEncrypted = value; }

    /**
     * <p>Set to <code>true</code> to use Amazon S3 server-side encryption with your
     * own KMS key, or <code>false</code> to use a key managed by Amazon S3.
     * Optional.</p> <p>Valid Values: <code>true</code> | <code>false</code> </p>
     */
    inline SMBFileShareInfo& WithKMSEncrypted(bool value) { SetKMSEncrypted(value); return *this;}


    
    inline const Aws::String& GetKMSKey() const{ return m_kMSKey; }

    
    inline bool KMSKeyHasBeenSet() const { return m_kMSKeyHasBeenSet; }

    
    inline void SetKMSKey(const Aws::String& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }

    
    inline void SetKMSKey(Aws::String&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::move(value); }

    
    inline void SetKMSKey(const char* value) { m_kMSKeyHasBeenSet = true; m_kMSKey.assign(value); }

    
    inline SMBFileShareInfo& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}

    
    inline SMBFileShareInfo& WithKMSKey(Aws::String&& value) { SetKMSKey(std::move(value)); return *this;}

    
    inline SMBFileShareInfo& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}


    /**
     * <p>The file share path used by the SMB client to identify the mount point.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The file share path used by the SMB client to identify the mount point.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The file share path used by the SMB client to identify the mount point.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The file share path used by the SMB client to identify the mount point.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The file share path used by the SMB client to identify the mount point.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The file share path used by the SMB client to identify the mount point.</p>
     */
    inline SMBFileShareInfo& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The file share path used by the SMB client to identify the mount point.</p>
     */
    inline SMBFileShareInfo& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The file share path used by the SMB client to identify the mount point.</p>
     */
    inline SMBFileShareInfo& WithPath(const char* value) { SetPath(value); return *this;}


    
    inline const Aws::String& GetRole() const{ return m_role; }

    
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    
    inline SMBFileShareInfo& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    
    inline SMBFileShareInfo& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    
    inline SMBFileShareInfo& WithRole(const char* value) { SetRole(value); return *this;}


    
    inline const Aws::String& GetLocationARN() const{ return m_locationARN; }

    
    inline bool LocationARNHasBeenSet() const { return m_locationARNHasBeenSet; }

    
    inline void SetLocationARN(const Aws::String& value) { m_locationARNHasBeenSet = true; m_locationARN = value; }

    
    inline void SetLocationARN(Aws::String&& value) { m_locationARNHasBeenSet = true; m_locationARN = std::move(value); }

    
    inline void SetLocationARN(const char* value) { m_locationARNHasBeenSet = true; m_locationARN.assign(value); }

    
    inline SMBFileShareInfo& WithLocationARN(const Aws::String& value) { SetLocationARN(value); return *this;}

    
    inline SMBFileShareInfo& WithLocationARN(Aws::String&& value) { SetLocationARN(std::move(value)); return *this;}

    
    inline SMBFileShareInfo& WithLocationARN(const char* value) { SetLocationARN(value); return *this;}


    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the S3
     * File Gateway. The default value is <code>S3_STANDARD</code>. Optional.</p>
     * <p>Valid Values: <code>S3_STANDARD</code> | <code>S3_INTELLIGENT_TIERING</code>
     * | <code>S3_STANDARD_IA</code> | <code>S3_ONEZONE_IA</code> </p>
     */
    inline const Aws::String& GetDefaultStorageClass() const{ return m_defaultStorageClass; }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the S3
     * File Gateway. The default value is <code>S3_STANDARD</code>. Optional.</p>
     * <p>Valid Values: <code>S3_STANDARD</code> | <code>S3_INTELLIGENT_TIERING</code>
     * | <code>S3_STANDARD_IA</code> | <code>S3_ONEZONE_IA</code> </p>
     */
    inline bool DefaultStorageClassHasBeenSet() const { return m_defaultStorageClassHasBeenSet; }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the S3
     * File Gateway. The default value is <code>S3_STANDARD</code>. Optional.</p>
     * <p>Valid Values: <code>S3_STANDARD</code> | <code>S3_INTELLIGENT_TIERING</code>
     * | <code>S3_STANDARD_IA</code> | <code>S3_ONEZONE_IA</code> </p>
     */
    inline void SetDefaultStorageClass(const Aws::String& value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass = value; }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the S3
     * File Gateway. The default value is <code>S3_STANDARD</code>. Optional.</p>
     * <p>Valid Values: <code>S3_STANDARD</code> | <code>S3_INTELLIGENT_TIERING</code>
     * | <code>S3_STANDARD_IA</code> | <code>S3_ONEZONE_IA</code> </p>
     */
    inline void SetDefaultStorageClass(Aws::String&& value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass = std::move(value); }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the S3
     * File Gateway. The default value is <code>S3_STANDARD</code>. Optional.</p>
     * <p>Valid Values: <code>S3_STANDARD</code> | <code>S3_INTELLIGENT_TIERING</code>
     * | <code>S3_STANDARD_IA</code> | <code>S3_ONEZONE_IA</code> </p>
     */
    inline void SetDefaultStorageClass(const char* value) { m_defaultStorageClassHasBeenSet = true; m_defaultStorageClass.assign(value); }

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the S3
     * File Gateway. The default value is <code>S3_STANDARD</code>. Optional.</p>
     * <p>Valid Values: <code>S3_STANDARD</code> | <code>S3_INTELLIGENT_TIERING</code>
     * | <code>S3_STANDARD_IA</code> | <code>S3_ONEZONE_IA</code> </p>
     */
    inline SMBFileShareInfo& WithDefaultStorageClass(const Aws::String& value) { SetDefaultStorageClass(value); return *this;}

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the S3
     * File Gateway. The default value is <code>S3_STANDARD</code>. Optional.</p>
     * <p>Valid Values: <code>S3_STANDARD</code> | <code>S3_INTELLIGENT_TIERING</code>
     * | <code>S3_STANDARD_IA</code> | <code>S3_ONEZONE_IA</code> </p>
     */
    inline SMBFileShareInfo& WithDefaultStorageClass(Aws::String&& value) { SetDefaultStorageClass(std::move(value)); return *this;}

    /**
     * <p>The default storage class for objects put into an Amazon S3 bucket by the S3
     * File Gateway. The default value is <code>S3_STANDARD</code>. Optional.</p>
     * <p>Valid Values: <code>S3_STANDARD</code> | <code>S3_INTELLIGENT_TIERING</code>
     * | <code>S3_STANDARD_IA</code> | <code>S3_ONEZONE_IA</code> </p>
     */
    inline SMBFileShareInfo& WithDefaultStorageClass(const char* value) { SetDefaultStorageClass(value); return *this;}


    
    inline const ObjectACL& GetObjectACL() const{ return m_objectACL; }

    
    inline bool ObjectACLHasBeenSet() const { return m_objectACLHasBeenSet; }

    
    inline void SetObjectACL(const ObjectACL& value) { m_objectACLHasBeenSet = true; m_objectACL = value; }

    
    inline void SetObjectACL(ObjectACL&& value) { m_objectACLHasBeenSet = true; m_objectACL = std::move(value); }

    
    inline SMBFileShareInfo& WithObjectACL(const ObjectACL& value) { SetObjectACL(value); return *this;}

    
    inline SMBFileShareInfo& WithObjectACL(ObjectACL&& value) { SetObjectACL(std::move(value)); return *this;}


    /**
     * <p>A value that sets the write status of a file share. Set this value to
     * <code>true</code> to set the write status to read-only, otherwise set to
     * <code>false</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline bool GetReadOnly() const{ return m_readOnly; }

    /**
     * <p>A value that sets the write status of a file share. Set this value to
     * <code>true</code> to set the write status to read-only, otherwise set to
     * <code>false</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline bool ReadOnlyHasBeenSet() const { return m_readOnlyHasBeenSet; }

    /**
     * <p>A value that sets the write status of a file share. Set this value to
     * <code>true</code> to set the write status to read-only, otherwise set to
     * <code>false</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }

    /**
     * <p>A value that sets the write status of a file share. Set this value to
     * <code>true</code> to set the write status to read-only, otherwise set to
     * <code>false</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline SMBFileShareInfo& WithReadOnly(bool value) { SetReadOnly(value); return *this;}


    /**
     * <p>A value that enables guessing of the MIME type for uploaded objects based on
     * file extensions. Set this value to <code>true</code> to enable MIME type
     * guessing, otherwise set to <code>false</code>. The default value is
     * <code>true</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline bool GetGuessMIMETypeEnabled() const{ return m_guessMIMETypeEnabled; }

    /**
     * <p>A value that enables guessing of the MIME type for uploaded objects based on
     * file extensions. Set this value to <code>true</code> to enable MIME type
     * guessing, otherwise set to <code>false</code>. The default value is
     * <code>true</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline bool GuessMIMETypeEnabledHasBeenSet() const { return m_guessMIMETypeEnabledHasBeenSet; }

    /**
     * <p>A value that enables guessing of the MIME type for uploaded objects based on
     * file extensions. Set this value to <code>true</code> to enable MIME type
     * guessing, otherwise set to <code>false</code>. The default value is
     * <code>true</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline void SetGuessMIMETypeEnabled(bool value) { m_guessMIMETypeEnabledHasBeenSet = true; m_guessMIMETypeEnabled = value; }

    /**
     * <p>A value that enables guessing of the MIME type for uploaded objects based on
     * file extensions. Set this value to <code>true</code> to enable MIME type
     * guessing, otherwise set to <code>false</code>. The default value is
     * <code>true</code>.</p> <p>Valid Values: <code>true</code> | <code>false</code>
     * </p>
     */
    inline SMBFileShareInfo& WithGuessMIMETypeEnabled(bool value) { SetGuessMIMETypeEnabled(value); return *this;}


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
    inline bool RequesterPaysHasBeenSet() const { return m_requesterPaysHasBeenSet; }

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
    inline void SetRequesterPays(bool value) { m_requesterPaysHasBeenSet = true; m_requesterPays = value; }

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
    inline SMBFileShareInfo& WithRequesterPays(bool value) { SetRequesterPays(value); return *this;}


    /**
     * <p>If this value is set to <code>true</code>, it indicates that access control
     * list (ACL) is enabled on the SMB file share. If it is set to <code>false</code>,
     * it indicates that file and directory permissions are mapped to the POSIX
     * permission.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/smb-acl.html">Using
     * Microsoft Windows ACLs to control access to an SMB file share</a> in the
     * <i>Storage Gateway User Guide</i>.</p>
     */
    inline bool GetSMBACLEnabled() const{ return m_sMBACLEnabled; }

    /**
     * <p>If this value is set to <code>true</code>, it indicates that access control
     * list (ACL) is enabled on the SMB file share. If it is set to <code>false</code>,
     * it indicates that file and directory permissions are mapped to the POSIX
     * permission.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/smb-acl.html">Using
     * Microsoft Windows ACLs to control access to an SMB file share</a> in the
     * <i>Storage Gateway User Guide</i>.</p>
     */
    inline bool SMBACLEnabledHasBeenSet() const { return m_sMBACLEnabledHasBeenSet; }

    /**
     * <p>If this value is set to <code>true</code>, it indicates that access control
     * list (ACL) is enabled on the SMB file share. If it is set to <code>false</code>,
     * it indicates that file and directory permissions are mapped to the POSIX
     * permission.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/smb-acl.html">Using
     * Microsoft Windows ACLs to control access to an SMB file share</a> in the
     * <i>Storage Gateway User Guide</i>.</p>
     */
    inline void SetSMBACLEnabled(bool value) { m_sMBACLEnabledHasBeenSet = true; m_sMBACLEnabled = value; }

    /**
     * <p>If this value is set to <code>true</code>, it indicates that access control
     * list (ACL) is enabled on the SMB file share. If it is set to <code>false</code>,
     * it indicates that file and directory permissions are mapped to the POSIX
     * permission.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/smb-acl.html">Using
     * Microsoft Windows ACLs to control access to an SMB file share</a> in the
     * <i>Storage Gateway User Guide</i>.</p>
     */
    inline SMBFileShareInfo& WithSMBACLEnabled(bool value) { SetSMBACLEnabled(value); return *this;}


    /**
     * <p>Indicates whether <code>AccessBasedEnumeration</code> is enabled.</p>
     */
    inline bool GetAccessBasedEnumeration() const{ return m_accessBasedEnumeration; }

    /**
     * <p>Indicates whether <code>AccessBasedEnumeration</code> is enabled.</p>
     */
    inline bool AccessBasedEnumerationHasBeenSet() const { return m_accessBasedEnumerationHasBeenSet; }

    /**
     * <p>Indicates whether <code>AccessBasedEnumeration</code> is enabled.</p>
     */
    inline void SetAccessBasedEnumeration(bool value) { m_accessBasedEnumerationHasBeenSet = true; m_accessBasedEnumeration = value; }

    /**
     * <p>Indicates whether <code>AccessBasedEnumeration</code> is enabled.</p>
     */
    inline SMBFileShareInfo& WithAccessBasedEnumeration(bool value) { SetAccessBasedEnumeration(value); return *this;}


    /**
     * <p>A list of users or groups in the Active Directory that have administrator
     * rights to the file share. A group must be prefixed with the @ character.
     * Acceptable formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdminUserList() const{ return m_adminUserList; }

    /**
     * <p>A list of users or groups in the Active Directory that have administrator
     * rights to the file share. A group must be prefixed with the @ character.
     * Acceptable formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline bool AdminUserListHasBeenSet() const { return m_adminUserListHasBeenSet; }

    /**
     * <p>A list of users or groups in the Active Directory that have administrator
     * rights to the file share. A group must be prefixed with the @ character.
     * Acceptable formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline void SetAdminUserList(const Aws::Vector<Aws::String>& value) { m_adminUserListHasBeenSet = true; m_adminUserList = value; }

    /**
     * <p>A list of users or groups in the Active Directory that have administrator
     * rights to the file share. A group must be prefixed with the @ character.
     * Acceptable formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline void SetAdminUserList(Aws::Vector<Aws::String>&& value) { m_adminUserListHasBeenSet = true; m_adminUserList = std::move(value); }

    /**
     * <p>A list of users or groups in the Active Directory that have administrator
     * rights to the file share. A group must be prefixed with the @ character.
     * Acceptable formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& WithAdminUserList(const Aws::Vector<Aws::String>& value) { SetAdminUserList(value); return *this;}

    /**
     * <p>A list of users or groups in the Active Directory that have administrator
     * rights to the file share. A group must be prefixed with the @ character.
     * Acceptable formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& WithAdminUserList(Aws::Vector<Aws::String>&& value) { SetAdminUserList(std::move(value)); return *this;}

    /**
     * <p>A list of users or groups in the Active Directory that have administrator
     * rights to the file share. A group must be prefixed with the @ character.
     * Acceptable formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& AddAdminUserList(const Aws::String& value) { m_adminUserListHasBeenSet = true; m_adminUserList.push_back(value); return *this; }

    /**
     * <p>A list of users or groups in the Active Directory that have administrator
     * rights to the file share. A group must be prefixed with the @ character.
     * Acceptable formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& AddAdminUserList(Aws::String&& value) { m_adminUserListHasBeenSet = true; m_adminUserList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of users or groups in the Active Directory that have administrator
     * rights to the file share. A group must be prefixed with the @ character.
     * Acceptable formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& AddAdminUserList(const char* value) { m_adminUserListHasBeenSet = true; m_adminUserList.push_back(value); return *this; }


    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValidUserList() const{ return m_validUserList; }

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline bool ValidUserListHasBeenSet() const { return m_validUserListHasBeenSet; }

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline void SetValidUserList(const Aws::Vector<Aws::String>& value) { m_validUserListHasBeenSet = true; m_validUserList = value; }

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline void SetValidUserList(Aws::Vector<Aws::String>&& value) { m_validUserListHasBeenSet = true; m_validUserList = std::move(value); }

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& WithValidUserList(const Aws::Vector<Aws::String>& value) { SetValidUserList(value); return *this;}

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& WithValidUserList(Aws::Vector<Aws::String>&& value) { SetValidUserList(std::move(value)); return *this;}

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& AddValidUserList(const Aws::String& value) { m_validUserListHasBeenSet = true; m_validUserList.push_back(value); return *this; }

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& AddValidUserList(Aws::String&& value) { m_validUserListHasBeenSet = true; m_validUserList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of users or groups in the Active Directory that are allowed to access
     * the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& AddValidUserList(const char* value) { m_validUserListHasBeenSet = true; m_validUserList.push_back(value); return *this; }


    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInvalidUserList() const{ return m_invalidUserList; }

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline bool InvalidUserListHasBeenSet() const { return m_invalidUserListHasBeenSet; }

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline void SetInvalidUserList(const Aws::Vector<Aws::String>& value) { m_invalidUserListHasBeenSet = true; m_invalidUserList = value; }

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline void SetInvalidUserList(Aws::Vector<Aws::String>&& value) { m_invalidUserListHasBeenSet = true; m_invalidUserList = std::move(value); }

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& WithInvalidUserList(const Aws::Vector<Aws::String>& value) { SetInvalidUserList(value); return *this;}

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& WithInvalidUserList(Aws::Vector<Aws::String>&& value) { SetInvalidUserList(std::move(value)); return *this;}

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& AddInvalidUserList(const Aws::String& value) { m_invalidUserListHasBeenSet = true; m_invalidUserList.push_back(value); return *this; }

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& AddInvalidUserList(Aws::String&& value) { m_invalidUserListHasBeenSet = true; m_invalidUserList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of users or groups in the Active Directory that are not allowed to
     * access the file share. A group must be prefixed with the @ character. Acceptable
     * formats include: <code>DOMAIN\User1</code>, <code>user1</code>,
     * <code>@group1</code>, and <code>@DOMAIN\group1</code>. Can only be set if
     * Authentication is set to <code>ActiveDirectory</code>.</p>
     */
    inline SMBFileShareInfo& AddInvalidUserList(const char* value) { m_invalidUserListHasBeenSet = true; m_invalidUserList.push_back(value); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for audit logs.</p>
     */
    inline const Aws::String& GetAuditDestinationARN() const{ return m_auditDestinationARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for audit logs.</p>
     */
    inline bool AuditDestinationARNHasBeenSet() const { return m_auditDestinationARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for audit logs.</p>
     */
    inline void SetAuditDestinationARN(const Aws::String& value) { m_auditDestinationARNHasBeenSet = true; m_auditDestinationARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for audit logs.</p>
     */
    inline void SetAuditDestinationARN(Aws::String&& value) { m_auditDestinationARNHasBeenSet = true; m_auditDestinationARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for audit logs.</p>
     */
    inline void SetAuditDestinationARN(const char* value) { m_auditDestinationARNHasBeenSet = true; m_auditDestinationARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for audit logs.</p>
     */
    inline SMBFileShareInfo& WithAuditDestinationARN(const Aws::String& value) { SetAuditDestinationARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for audit logs.</p>
     */
    inline SMBFileShareInfo& WithAuditDestinationARN(Aws::String&& value) { SetAuditDestinationARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the storage used for audit logs.</p>
     */
    inline SMBFileShareInfo& WithAuditDestinationARN(const char* value) { SetAuditDestinationARN(value); return *this;}


    
    inline const Aws::String& GetAuthentication() const{ return m_authentication; }

    
    inline bool AuthenticationHasBeenSet() const { return m_authenticationHasBeenSet; }

    
    inline void SetAuthentication(const Aws::String& value) { m_authenticationHasBeenSet = true; m_authentication = value; }

    
    inline void SetAuthentication(Aws::String&& value) { m_authenticationHasBeenSet = true; m_authentication = std::move(value); }

    
    inline void SetAuthentication(const char* value) { m_authenticationHasBeenSet = true; m_authentication.assign(value); }

    
    inline SMBFileShareInfo& WithAuthentication(const Aws::String& value) { SetAuthentication(value); return *this;}

    
    inline SMBFileShareInfo& WithAuthentication(Aws::String&& value) { SetAuthentication(std::move(value)); return *this;}

    
    inline SMBFileShareInfo& WithAuthentication(const char* value) { SetAuthentication(value); return *this;}


    /**
     * <p>The case of an object name in an Amazon S3 bucket. For
     * <code>ClientSpecified</code>, the client determines the case sensitivity. For
     * <code>CaseSensitive</code>, the gateway determines the case sensitivity. The
     * default value is <code>ClientSpecified</code>.</p>
     */
    inline const CaseSensitivity& GetCaseSensitivity() const{ return m_caseSensitivity; }

    /**
     * <p>The case of an object name in an Amazon S3 bucket. For
     * <code>ClientSpecified</code>, the client determines the case sensitivity. For
     * <code>CaseSensitive</code>, the gateway determines the case sensitivity. The
     * default value is <code>ClientSpecified</code>.</p>
     */
    inline bool CaseSensitivityHasBeenSet() const { return m_caseSensitivityHasBeenSet; }

    /**
     * <p>The case of an object name in an Amazon S3 bucket. For
     * <code>ClientSpecified</code>, the client determines the case sensitivity. For
     * <code>CaseSensitive</code>, the gateway determines the case sensitivity. The
     * default value is <code>ClientSpecified</code>.</p>
     */
    inline void SetCaseSensitivity(const CaseSensitivity& value) { m_caseSensitivityHasBeenSet = true; m_caseSensitivity = value; }

    /**
     * <p>The case of an object name in an Amazon S3 bucket. For
     * <code>ClientSpecified</code>, the client determines the case sensitivity. For
     * <code>CaseSensitive</code>, the gateway determines the case sensitivity. The
     * default value is <code>ClientSpecified</code>.</p>
     */
    inline void SetCaseSensitivity(CaseSensitivity&& value) { m_caseSensitivityHasBeenSet = true; m_caseSensitivity = std::move(value); }

    /**
     * <p>The case of an object name in an Amazon S3 bucket. For
     * <code>ClientSpecified</code>, the client determines the case sensitivity. For
     * <code>CaseSensitive</code>, the gateway determines the case sensitivity. The
     * default value is <code>ClientSpecified</code>.</p>
     */
    inline SMBFileShareInfo& WithCaseSensitivity(const CaseSensitivity& value) { SetCaseSensitivity(value); return *this;}

    /**
     * <p>The case of an object name in an Amazon S3 bucket. For
     * <code>ClientSpecified</code>, the client determines the case sensitivity. For
     * <code>CaseSensitive</code>, the gateway determines the case sensitivity. The
     * default value is <code>ClientSpecified</code>.</p>
     */
    inline SMBFileShareInfo& WithCaseSensitivity(CaseSensitivity&& value) { SetCaseSensitivity(std::move(value)); return *this;}


    /**
     * <p>A list of up to 50 tags assigned to the SMB file share, sorted alphabetically
     * by key name. Each tag is a key-value pair. For a gateway with more than 10 tags
     * assigned, you can view all tags using the <code>ListTagsForResource</code> API
     * operation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of up to 50 tags assigned to the SMB file share, sorted alphabetically
     * by key name. Each tag is a key-value pair. For a gateway with more than 10 tags
     * assigned, you can view all tags using the <code>ListTagsForResource</code> API
     * operation.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of up to 50 tags assigned to the SMB file share, sorted alphabetically
     * by key name. Each tag is a key-value pair. For a gateway with more than 10 tags
     * assigned, you can view all tags using the <code>ListTagsForResource</code> API
     * operation.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of up to 50 tags assigned to the SMB file share, sorted alphabetically
     * by key name. Each tag is a key-value pair. For a gateway with more than 10 tags
     * assigned, you can view all tags using the <code>ListTagsForResource</code> API
     * operation.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of up to 50 tags assigned to the SMB file share, sorted alphabetically
     * by key name. Each tag is a key-value pair. For a gateway with more than 10 tags
     * assigned, you can view all tags using the <code>ListTagsForResource</code> API
     * operation.</p>
     */
    inline SMBFileShareInfo& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of up to 50 tags assigned to the SMB file share, sorted alphabetically
     * by key name. Each tag is a key-value pair. For a gateway with more than 10 tags
     * assigned, you can view all tags using the <code>ListTagsForResource</code> API
     * operation.</p>
     */
    inline SMBFileShareInfo& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of up to 50 tags assigned to the SMB file share, sorted alphabetically
     * by key name. Each tag is a key-value pair. For a gateway with more than 10 tags
     * assigned, you can view all tags using the <code>ListTagsForResource</code> API
     * operation.</p>
     */
    inline SMBFileShareInfo& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of up to 50 tags assigned to the SMB file share, sorted alphabetically
     * by key name. Each tag is a key-value pair. For a gateway with more than 10 tags
     * assigned, you can view all tags using the <code>ListTagsForResource</code> API
     * operation.</p>
     */
    inline SMBFileShareInfo& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>, or if an access point or access point alias is
     * used.</p> 
     */
    inline const Aws::String& GetFileShareName() const{ return m_fileShareName; }

    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>, or if an access point or access point alias is
     * used.</p> 
     */
    inline bool FileShareNameHasBeenSet() const { return m_fileShareNameHasBeenSet; }

    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>, or if an access point or access point alias is
     * used.</p> 
     */
    inline void SetFileShareName(const Aws::String& value) { m_fileShareNameHasBeenSet = true; m_fileShareName = value; }

    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>, or if an access point or access point alias is
     * used.</p> 
     */
    inline void SetFileShareName(Aws::String&& value) { m_fileShareNameHasBeenSet = true; m_fileShareName = std::move(value); }

    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>, or if an access point or access point alias is
     * used.</p> 
     */
    inline void SetFileShareName(const char* value) { m_fileShareNameHasBeenSet = true; m_fileShareName.assign(value); }

    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>, or if an access point or access point alias is
     * used.</p> 
     */
    inline SMBFileShareInfo& WithFileShareName(const Aws::String& value) { SetFileShareName(value); return *this;}

    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>, or if an access point or access point alias is
     * used.</p> 
     */
    inline SMBFileShareInfo& WithFileShareName(Aws::String&& value) { SetFileShareName(std::move(value)); return *this;}

    /**
     * <p>The name of the file share. Optional.</p>  <p>
     * <code>FileShareName</code> must be set if an S3 prefix name is set in
     * <code>LocationARN</code>, or if an access point or access point alias is
     * used.</p> 
     */
    inline SMBFileShareInfo& WithFileShareName(const char* value) { SetFileShareName(value); return *this;}


    /**
     * <p>Refresh cache information for the file share.</p>
     */
    inline const CacheAttributes& GetCacheAttributes() const{ return m_cacheAttributes; }

    /**
     * <p>Refresh cache information for the file share.</p>
     */
    inline bool CacheAttributesHasBeenSet() const { return m_cacheAttributesHasBeenSet; }

    /**
     * <p>Refresh cache information for the file share.</p>
     */
    inline void SetCacheAttributes(const CacheAttributes& value) { m_cacheAttributesHasBeenSet = true; m_cacheAttributes = value; }

    /**
     * <p>Refresh cache information for the file share.</p>
     */
    inline void SetCacheAttributes(CacheAttributes&& value) { m_cacheAttributesHasBeenSet = true; m_cacheAttributes = std::move(value); }

    /**
     * <p>Refresh cache information for the file share.</p>
     */
    inline SMBFileShareInfo& WithCacheAttributes(const CacheAttributes& value) { SetCacheAttributes(value); return *this;}

    /**
     * <p>Refresh cache information for the file share.</p>
     */
    inline SMBFileShareInfo& WithCacheAttributes(CacheAttributes&& value) { SetCacheAttributes(std::move(value)); return *this;}


    /**
     * <p>The notification policy of the file share. <code>SettlingTimeInSeconds</code>
     * controls the number of seconds to wait after the last point in time a client
     * wrote to a file before generating an <code>ObjectUploaded</code> notification.
     * Because clients can make many small writes to files, it's best to set this
     * parameter for as long as possible to avoid generating multiple notifications for
     * the same file in a small time period.</p>  <p>
     * <code>SettlingTimeInSeconds</code> has no effect on the timing of the object
     * uploading to Amazon S3, only the timing of the notification.</p>  <p>The
     * following example sets <code>NotificationPolicy</code> on with
     * <code>SettlingTimeInSeconds</code> set to 60.</p> <p> <code>{\"Upload\":
     * {\"SettlingTimeInSeconds\": 60}}</code> </p> <p>The following example sets
     * <code>NotificationPolicy</code> off.</p> <p> <code>{}</code> </p>
     */
    inline const Aws::String& GetNotificationPolicy() const{ return m_notificationPolicy; }

    /**
     * <p>The notification policy of the file share. <code>SettlingTimeInSeconds</code>
     * controls the number of seconds to wait after the last point in time a client
     * wrote to a file before generating an <code>ObjectUploaded</code> notification.
     * Because clients can make many small writes to files, it's best to set this
     * parameter for as long as possible to avoid generating multiple notifications for
     * the same file in a small time period.</p>  <p>
     * <code>SettlingTimeInSeconds</code> has no effect on the timing of the object
     * uploading to Amazon S3, only the timing of the notification.</p>  <p>The
     * following example sets <code>NotificationPolicy</code> on with
     * <code>SettlingTimeInSeconds</code> set to 60.</p> <p> <code>{\"Upload\":
     * {\"SettlingTimeInSeconds\": 60}}</code> </p> <p>The following example sets
     * <code>NotificationPolicy</code> off.</p> <p> <code>{}</code> </p>
     */
    inline bool NotificationPolicyHasBeenSet() const { return m_notificationPolicyHasBeenSet; }

    /**
     * <p>The notification policy of the file share. <code>SettlingTimeInSeconds</code>
     * controls the number of seconds to wait after the last point in time a client
     * wrote to a file before generating an <code>ObjectUploaded</code> notification.
     * Because clients can make many small writes to files, it's best to set this
     * parameter for as long as possible to avoid generating multiple notifications for
     * the same file in a small time period.</p>  <p>
     * <code>SettlingTimeInSeconds</code> has no effect on the timing of the object
     * uploading to Amazon S3, only the timing of the notification.</p>  <p>The
     * following example sets <code>NotificationPolicy</code> on with
     * <code>SettlingTimeInSeconds</code> set to 60.</p> <p> <code>{\"Upload\":
     * {\"SettlingTimeInSeconds\": 60}}</code> </p> <p>The following example sets
     * <code>NotificationPolicy</code> off.</p> <p> <code>{}</code> </p>
     */
    inline void SetNotificationPolicy(const Aws::String& value) { m_notificationPolicyHasBeenSet = true; m_notificationPolicy = value; }

    /**
     * <p>The notification policy of the file share. <code>SettlingTimeInSeconds</code>
     * controls the number of seconds to wait after the last point in time a client
     * wrote to a file before generating an <code>ObjectUploaded</code> notification.
     * Because clients can make many small writes to files, it's best to set this
     * parameter for as long as possible to avoid generating multiple notifications for
     * the same file in a small time period.</p>  <p>
     * <code>SettlingTimeInSeconds</code> has no effect on the timing of the object
     * uploading to Amazon S3, only the timing of the notification.</p>  <p>The
     * following example sets <code>NotificationPolicy</code> on with
     * <code>SettlingTimeInSeconds</code> set to 60.</p> <p> <code>{\"Upload\":
     * {\"SettlingTimeInSeconds\": 60}}</code> </p> <p>The following example sets
     * <code>NotificationPolicy</code> off.</p> <p> <code>{}</code> </p>
     */
    inline void SetNotificationPolicy(Aws::String&& value) { m_notificationPolicyHasBeenSet = true; m_notificationPolicy = std::move(value); }

    /**
     * <p>The notification policy of the file share. <code>SettlingTimeInSeconds</code>
     * controls the number of seconds to wait after the last point in time a client
     * wrote to a file before generating an <code>ObjectUploaded</code> notification.
     * Because clients can make many small writes to files, it's best to set this
     * parameter for as long as possible to avoid generating multiple notifications for
     * the same file in a small time period.</p>  <p>
     * <code>SettlingTimeInSeconds</code> has no effect on the timing of the object
     * uploading to Amazon S3, only the timing of the notification.</p>  <p>The
     * following example sets <code>NotificationPolicy</code> on with
     * <code>SettlingTimeInSeconds</code> set to 60.</p> <p> <code>{\"Upload\":
     * {\"SettlingTimeInSeconds\": 60}}</code> </p> <p>The following example sets
     * <code>NotificationPolicy</code> off.</p> <p> <code>{}</code> </p>
     */
    inline void SetNotificationPolicy(const char* value) { m_notificationPolicyHasBeenSet = true; m_notificationPolicy.assign(value); }

    /**
     * <p>The notification policy of the file share. <code>SettlingTimeInSeconds</code>
     * controls the number of seconds to wait after the last point in time a client
     * wrote to a file before generating an <code>ObjectUploaded</code> notification.
     * Because clients can make many small writes to files, it's best to set this
     * parameter for as long as possible to avoid generating multiple notifications for
     * the same file in a small time period.</p>  <p>
     * <code>SettlingTimeInSeconds</code> has no effect on the timing of the object
     * uploading to Amazon S3, only the timing of the notification.</p>  <p>The
     * following example sets <code>NotificationPolicy</code> on with
     * <code>SettlingTimeInSeconds</code> set to 60.</p> <p> <code>{\"Upload\":
     * {\"SettlingTimeInSeconds\": 60}}</code> </p> <p>The following example sets
     * <code>NotificationPolicy</code> off.</p> <p> <code>{}</code> </p>
     */
    inline SMBFileShareInfo& WithNotificationPolicy(const Aws::String& value) { SetNotificationPolicy(value); return *this;}

    /**
     * <p>The notification policy of the file share. <code>SettlingTimeInSeconds</code>
     * controls the number of seconds to wait after the last point in time a client
     * wrote to a file before generating an <code>ObjectUploaded</code> notification.
     * Because clients can make many small writes to files, it's best to set this
     * parameter for as long as possible to avoid generating multiple notifications for
     * the same file in a small time period.</p>  <p>
     * <code>SettlingTimeInSeconds</code> has no effect on the timing of the object
     * uploading to Amazon S3, only the timing of the notification.</p>  <p>The
     * following example sets <code>NotificationPolicy</code> on with
     * <code>SettlingTimeInSeconds</code> set to 60.</p> <p> <code>{\"Upload\":
     * {\"SettlingTimeInSeconds\": 60}}</code> </p> <p>The following example sets
     * <code>NotificationPolicy</code> off.</p> <p> <code>{}</code> </p>
     */
    inline SMBFileShareInfo& WithNotificationPolicy(Aws::String&& value) { SetNotificationPolicy(std::move(value)); return *this;}

    /**
     * <p>The notification policy of the file share. <code>SettlingTimeInSeconds</code>
     * controls the number of seconds to wait after the last point in time a client
     * wrote to a file before generating an <code>ObjectUploaded</code> notification.
     * Because clients can make many small writes to files, it's best to set this
     * parameter for as long as possible to avoid generating multiple notifications for
     * the same file in a small time period.</p>  <p>
     * <code>SettlingTimeInSeconds</code> has no effect on the timing of the object
     * uploading to Amazon S3, only the timing of the notification.</p>  <p>The
     * following example sets <code>NotificationPolicy</code> on with
     * <code>SettlingTimeInSeconds</code> set to 60.</p> <p> <code>{\"Upload\":
     * {\"SettlingTimeInSeconds\": 60}}</code> </p> <p>The following example sets
     * <code>NotificationPolicy</code> off.</p> <p> <code>{}</code> </p>
     */
    inline SMBFileShareInfo& WithNotificationPolicy(const char* value) { SetNotificationPolicy(value); return *this;}


    /**
     * <p>Specifies the DNS name for the VPC endpoint that the SMB file share uses to
     * connect to Amazon S3.</p>  <p>This parameter is required for SMB file
     * shares that connect to Amazon S3 through a VPC endpoint, a VPC access point, or
     * an access point alias that points to a VPC access point.</p> 
     */
    inline const Aws::String& GetVPCEndpointDNSName() const{ return m_vPCEndpointDNSName; }

    /**
     * <p>Specifies the DNS name for the VPC endpoint that the SMB file share uses to
     * connect to Amazon S3.</p>  <p>This parameter is required for SMB file
     * shares that connect to Amazon S3 through a VPC endpoint, a VPC access point, or
     * an access point alias that points to a VPC access point.</p> 
     */
    inline bool VPCEndpointDNSNameHasBeenSet() const { return m_vPCEndpointDNSNameHasBeenSet; }

    /**
     * <p>Specifies the DNS name for the VPC endpoint that the SMB file share uses to
     * connect to Amazon S3.</p>  <p>This parameter is required for SMB file
     * shares that connect to Amazon S3 through a VPC endpoint, a VPC access point, or
     * an access point alias that points to a VPC access point.</p> 
     */
    inline void SetVPCEndpointDNSName(const Aws::String& value) { m_vPCEndpointDNSNameHasBeenSet = true; m_vPCEndpointDNSName = value; }

    /**
     * <p>Specifies the DNS name for the VPC endpoint that the SMB file share uses to
     * connect to Amazon S3.</p>  <p>This parameter is required for SMB file
     * shares that connect to Amazon S3 through a VPC endpoint, a VPC access point, or
     * an access point alias that points to a VPC access point.</p> 
     */
    inline void SetVPCEndpointDNSName(Aws::String&& value) { m_vPCEndpointDNSNameHasBeenSet = true; m_vPCEndpointDNSName = std::move(value); }

    /**
     * <p>Specifies the DNS name for the VPC endpoint that the SMB file share uses to
     * connect to Amazon S3.</p>  <p>This parameter is required for SMB file
     * shares that connect to Amazon S3 through a VPC endpoint, a VPC access point, or
     * an access point alias that points to a VPC access point.</p> 
     */
    inline void SetVPCEndpointDNSName(const char* value) { m_vPCEndpointDNSNameHasBeenSet = true; m_vPCEndpointDNSName.assign(value); }

    /**
     * <p>Specifies the DNS name for the VPC endpoint that the SMB file share uses to
     * connect to Amazon S3.</p>  <p>This parameter is required for SMB file
     * shares that connect to Amazon S3 through a VPC endpoint, a VPC access point, or
     * an access point alias that points to a VPC access point.</p> 
     */
    inline SMBFileShareInfo& WithVPCEndpointDNSName(const Aws::String& value) { SetVPCEndpointDNSName(value); return *this;}

    /**
     * <p>Specifies the DNS name for the VPC endpoint that the SMB file share uses to
     * connect to Amazon S3.</p>  <p>This parameter is required for SMB file
     * shares that connect to Amazon S3 through a VPC endpoint, a VPC access point, or
     * an access point alias that points to a VPC access point.</p> 
     */
    inline SMBFileShareInfo& WithVPCEndpointDNSName(Aws::String&& value) { SetVPCEndpointDNSName(std::move(value)); return *this;}

    /**
     * <p>Specifies the DNS name for the VPC endpoint that the SMB file share uses to
     * connect to Amazon S3.</p>  <p>This parameter is required for SMB file
     * shares that connect to Amazon S3 through a VPC endpoint, a VPC access point, or
     * an access point alias that points to a VPC access point.</p> 
     */
    inline SMBFileShareInfo& WithVPCEndpointDNSName(const char* value) { SetVPCEndpointDNSName(value); return *this;}


    /**
     * <p>Specifies the Region of the S3 bucket where the SMB file share stores
     * files.</p>  <p>This parameter is required for SMB file shares that connect
     * to Amazon S3 through a VPC endpoint, a VPC access point, or an access point
     * alias that points to a VPC access point.</p> 
     */
    inline const Aws::String& GetBucketRegion() const{ return m_bucketRegion; }

    /**
     * <p>Specifies the Region of the S3 bucket where the SMB file share stores
     * files.</p>  <p>This parameter is required for SMB file shares that connect
     * to Amazon S3 through a VPC endpoint, a VPC access point, or an access point
     * alias that points to a VPC access point.</p> 
     */
    inline bool BucketRegionHasBeenSet() const { return m_bucketRegionHasBeenSet; }

    /**
     * <p>Specifies the Region of the S3 bucket where the SMB file share stores
     * files.</p>  <p>This parameter is required for SMB file shares that connect
     * to Amazon S3 through a VPC endpoint, a VPC access point, or an access point
     * alias that points to a VPC access point.</p> 
     */
    inline void SetBucketRegion(const Aws::String& value) { m_bucketRegionHasBeenSet = true; m_bucketRegion = value; }

    /**
     * <p>Specifies the Region of the S3 bucket where the SMB file share stores
     * files.</p>  <p>This parameter is required for SMB file shares that connect
     * to Amazon S3 through a VPC endpoint, a VPC access point, or an access point
     * alias that points to a VPC access point.</p> 
     */
    inline void SetBucketRegion(Aws::String&& value) { m_bucketRegionHasBeenSet = true; m_bucketRegion = std::move(value); }

    /**
     * <p>Specifies the Region of the S3 bucket where the SMB file share stores
     * files.</p>  <p>This parameter is required for SMB file shares that connect
     * to Amazon S3 through a VPC endpoint, a VPC access point, or an access point
     * alias that points to a VPC access point.</p> 
     */
    inline void SetBucketRegion(const char* value) { m_bucketRegionHasBeenSet = true; m_bucketRegion.assign(value); }

    /**
     * <p>Specifies the Region of the S3 bucket where the SMB file share stores
     * files.</p>  <p>This parameter is required for SMB file shares that connect
     * to Amazon S3 through a VPC endpoint, a VPC access point, or an access point
     * alias that points to a VPC access point.</p> 
     */
    inline SMBFileShareInfo& WithBucketRegion(const Aws::String& value) { SetBucketRegion(value); return *this;}

    /**
     * <p>Specifies the Region of the S3 bucket where the SMB file share stores
     * files.</p>  <p>This parameter is required for SMB file shares that connect
     * to Amazon S3 through a VPC endpoint, a VPC access point, or an access point
     * alias that points to a VPC access point.</p> 
     */
    inline SMBFileShareInfo& WithBucketRegion(Aws::String&& value) { SetBucketRegion(std::move(value)); return *this;}

    /**
     * <p>Specifies the Region of the S3 bucket where the SMB file share stores
     * files.</p>  <p>This parameter is required for SMB file shares that connect
     * to Amazon S3 through a VPC endpoint, a VPC access point, or an access point
     * alias that points to a VPC access point.</p> 
     */
    inline SMBFileShareInfo& WithBucketRegion(const char* value) { SetBucketRegion(value); return *this;}


    /**
     * <p>Specifies whether opportunistic locking is enabled for the SMB file
     * share.</p>  <p>Enabling opportunistic locking on case-sensitive shares is
     * not recommended for workloads that involve access to files with the same name in
     * different case.</p>  <p>Valid Values: <code>true</code> |
     * <code>false</code> </p>
     */
    inline bool GetOplocksEnabled() const{ return m_oplocksEnabled; }

    /**
     * <p>Specifies whether opportunistic locking is enabled for the SMB file
     * share.</p>  <p>Enabling opportunistic locking on case-sensitive shares is
     * not recommended for workloads that involve access to files with the same name in
     * different case.</p>  <p>Valid Values: <code>true</code> |
     * <code>false</code> </p>
     */
    inline bool OplocksEnabledHasBeenSet() const { return m_oplocksEnabledHasBeenSet; }

    /**
     * <p>Specifies whether opportunistic locking is enabled for the SMB file
     * share.</p>  <p>Enabling opportunistic locking on case-sensitive shares is
     * not recommended for workloads that involve access to files with the same name in
     * different case.</p>  <p>Valid Values: <code>true</code> |
     * <code>false</code> </p>
     */
    inline void SetOplocksEnabled(bool value) { m_oplocksEnabledHasBeenSet = true; m_oplocksEnabled = value; }

    /**
     * <p>Specifies whether opportunistic locking is enabled for the SMB file
     * share.</p>  <p>Enabling opportunistic locking on case-sensitive shares is
     * not recommended for workloads that involve access to files with the same name in
     * different case.</p>  <p>Valid Values: <code>true</code> |
     * <code>false</code> </p>
     */
    inline SMBFileShareInfo& WithOplocksEnabled(bool value) { SetOplocksEnabled(value); return *this;}

  private:

    Aws::String m_fileShareARN;
    bool m_fileShareARNHasBeenSet = false;

    Aws::String m_fileShareId;
    bool m_fileShareIdHasBeenSet = false;

    Aws::String m_fileShareStatus;
    bool m_fileShareStatusHasBeenSet = false;

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    bool m_kMSEncrypted;
    bool m_kMSEncryptedHasBeenSet = false;

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

    bool m_readOnly;
    bool m_readOnlyHasBeenSet = false;

    bool m_guessMIMETypeEnabled;
    bool m_guessMIMETypeEnabledHasBeenSet = false;

    bool m_requesterPays;
    bool m_requesterPaysHasBeenSet = false;

    bool m_sMBACLEnabled;
    bool m_sMBACLEnabledHasBeenSet = false;

    bool m_accessBasedEnumeration;
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

    CaseSensitivity m_caseSensitivity;
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

    bool m_oplocksEnabled;
    bool m_oplocksEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

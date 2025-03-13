/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/CacheAttributes.h>
#include <aws/storagegateway/model/EndpointNetworkConfiguration.h>
#include <aws/storagegateway/model/Tag.h>
#include <aws/storagegateway/model/FileSystemAssociationStatusDetail.h>
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
   * <p>Describes the object returned by <code>DescribeFileSystemAssociations</code>
   * that describes a created file system association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/FileSystemAssociationInfo">AWS
   * API Reference</a></p>
   */
  class FileSystemAssociationInfo
  {
  public:
    AWS_STORAGEGATEWAY_API FileSystemAssociationInfo() = default;
    AWS_STORAGEGATEWAY_API FileSystemAssociationInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API FileSystemAssociationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the file system association.</p>
     */
    inline const Aws::String& GetFileSystemAssociationARN() const { return m_fileSystemAssociationARN; }
    inline bool FileSystemAssociationARNHasBeenSet() const { return m_fileSystemAssociationARNHasBeenSet; }
    template<typename FileSystemAssociationARNT = Aws::String>
    void SetFileSystemAssociationARN(FileSystemAssociationARNT&& value) { m_fileSystemAssociationARNHasBeenSet = true; m_fileSystemAssociationARN = std::forward<FileSystemAssociationARNT>(value); }
    template<typename FileSystemAssociationARNT = Aws::String>
    FileSystemAssociationInfo& WithFileSystemAssociationARN(FileSystemAssociationARNT&& value) { SetFileSystemAssociationARN(std::forward<FileSystemAssociationARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the backend Amazon FSx file system used for storing file data. For
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_FileSystem.html">FileSystem</a>
     * in the <i>Amazon FSx API Reference</i>.</p>
     */
    inline const Aws::String& GetLocationARN() const { return m_locationARN; }
    inline bool LocationARNHasBeenSet() const { return m_locationARNHasBeenSet; }
    template<typename LocationARNT = Aws::String>
    void SetLocationARN(LocationARNT&& value) { m_locationARNHasBeenSet = true; m_locationARN = std::forward<LocationARNT>(value); }
    template<typename LocationARNT = Aws::String>
    FileSystemAssociationInfo& WithLocationARN(LocationARNT&& value) { SetLocationARN(std::forward<LocationARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the file system association. Valid Values:
     * <code>AVAILABLE</code> | <code>CREATING</code> | <code>DELETING</code> |
     * <code>FORCE_DELETING</code> | <code>UPDATING</code> | <code>ERROR</code> </p>
     */
    inline const Aws::String& GetFileSystemAssociationStatus() const { return m_fileSystemAssociationStatus; }
    inline bool FileSystemAssociationStatusHasBeenSet() const { return m_fileSystemAssociationStatusHasBeenSet; }
    template<typename FileSystemAssociationStatusT = Aws::String>
    void SetFileSystemAssociationStatus(FileSystemAssociationStatusT&& value) { m_fileSystemAssociationStatusHasBeenSet = true; m_fileSystemAssociationStatus = std::forward<FileSystemAssociationStatusT>(value); }
    template<typename FileSystemAssociationStatusT = Aws::String>
    FileSystemAssociationInfo& WithFileSystemAssociationStatus(FileSystemAssociationStatusT&& value) { SetFileSystemAssociationStatus(std::forward<FileSystemAssociationStatusT>(value)); return *this;}
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
    FileSystemAssociationInfo& WithAuditDestinationARN(AuditDestinationARNT&& value) { SetAuditDestinationARN(std::forward<AuditDestinationARNT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    FileSystemAssociationInfo& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 50 tags assigned to the SMB file share, sorted alphabetically
     * by key name. Each tag is a key-value pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    FileSystemAssociationInfo& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    FileSystemAssociationInfo& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const CacheAttributes& GetCacheAttributes() const { return m_cacheAttributes; }
    inline bool CacheAttributesHasBeenSet() const { return m_cacheAttributesHasBeenSet; }
    template<typename CacheAttributesT = CacheAttributes>
    void SetCacheAttributes(CacheAttributesT&& value) { m_cacheAttributesHasBeenSet = true; m_cacheAttributes = std::forward<CacheAttributesT>(value); }
    template<typename CacheAttributesT = CacheAttributes>
    FileSystemAssociationInfo& WithCacheAttributes(CacheAttributesT&& value) { SetCacheAttributes(std::forward<CacheAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies network configuration information for the gateway associated with
     * the Amazon FSx file system.</p>  <p>If multiple file systems are
     * associated with this gateway, this parameter's <code>IpAddresses</code> field is
     * required.</p> 
     */
    inline const EndpointNetworkConfiguration& GetEndpointNetworkConfiguration() const { return m_endpointNetworkConfiguration; }
    inline bool EndpointNetworkConfigurationHasBeenSet() const { return m_endpointNetworkConfigurationHasBeenSet; }
    template<typename EndpointNetworkConfigurationT = EndpointNetworkConfiguration>
    void SetEndpointNetworkConfiguration(EndpointNetworkConfigurationT&& value) { m_endpointNetworkConfigurationHasBeenSet = true; m_endpointNetworkConfiguration = std::forward<EndpointNetworkConfigurationT>(value); }
    template<typename EndpointNetworkConfigurationT = EndpointNetworkConfiguration>
    FileSystemAssociationInfo& WithEndpointNetworkConfiguration(EndpointNetworkConfigurationT&& value) { SetEndpointNetworkConfiguration(std::forward<EndpointNetworkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array containing the FileSystemAssociationStatusDetail data type, which
     * provides detailed information on file system association status.</p>
     */
    inline const Aws::Vector<FileSystemAssociationStatusDetail>& GetFileSystemAssociationStatusDetails() const { return m_fileSystemAssociationStatusDetails; }
    inline bool FileSystemAssociationStatusDetailsHasBeenSet() const { return m_fileSystemAssociationStatusDetailsHasBeenSet; }
    template<typename FileSystemAssociationStatusDetailsT = Aws::Vector<FileSystemAssociationStatusDetail>>
    void SetFileSystemAssociationStatusDetails(FileSystemAssociationStatusDetailsT&& value) { m_fileSystemAssociationStatusDetailsHasBeenSet = true; m_fileSystemAssociationStatusDetails = std::forward<FileSystemAssociationStatusDetailsT>(value); }
    template<typename FileSystemAssociationStatusDetailsT = Aws::Vector<FileSystemAssociationStatusDetail>>
    FileSystemAssociationInfo& WithFileSystemAssociationStatusDetails(FileSystemAssociationStatusDetailsT&& value) { SetFileSystemAssociationStatusDetails(std::forward<FileSystemAssociationStatusDetailsT>(value)); return *this;}
    template<typename FileSystemAssociationStatusDetailsT = FileSystemAssociationStatusDetail>
    FileSystemAssociationInfo& AddFileSystemAssociationStatusDetails(FileSystemAssociationStatusDetailsT&& value) { m_fileSystemAssociationStatusDetailsHasBeenSet = true; m_fileSystemAssociationStatusDetails.emplace_back(std::forward<FileSystemAssociationStatusDetailsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_fileSystemAssociationARN;
    bool m_fileSystemAssociationARNHasBeenSet = false;

    Aws::String m_locationARN;
    bool m_locationARNHasBeenSet = false;

    Aws::String m_fileSystemAssociationStatus;
    bool m_fileSystemAssociationStatusHasBeenSet = false;

    Aws::String m_auditDestinationARN;
    bool m_auditDestinationARNHasBeenSet = false;

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    CacheAttributes m_cacheAttributes;
    bool m_cacheAttributesHasBeenSet = false;

    EndpointNetworkConfiguration m_endpointNetworkConfiguration;
    bool m_endpointNetworkConfigurationHasBeenSet = false;

    Aws::Vector<FileSystemAssociationStatusDetail> m_fileSystemAssociationStatusDetails;
    bool m_fileSystemAssociationStatusDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

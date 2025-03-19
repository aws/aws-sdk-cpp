/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Gets the summary returned by <code>ListFileSystemAssociation</code>, which is
   * a summary of a created file system association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/FileSystemAssociationSummary">AWS
   * API Reference</a></p>
   */
  class FileSystemAssociationSummary
  {
  public:
    AWS_STORAGEGATEWAY_API FileSystemAssociationSummary() = default;
    AWS_STORAGEGATEWAY_API FileSystemAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API FileSystemAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the file system association.</p>
     */
    inline const Aws::String& GetFileSystemAssociationId() const { return m_fileSystemAssociationId; }
    inline bool FileSystemAssociationIdHasBeenSet() const { return m_fileSystemAssociationIdHasBeenSet; }
    template<typename FileSystemAssociationIdT = Aws::String>
    void SetFileSystemAssociationId(FileSystemAssociationIdT&& value) { m_fileSystemAssociationIdHasBeenSet = true; m_fileSystemAssociationId = std::forward<FileSystemAssociationIdT>(value); }
    template<typename FileSystemAssociationIdT = Aws::String>
    FileSystemAssociationSummary& WithFileSystemAssociationId(FileSystemAssociationIdT&& value) { SetFileSystemAssociationId(std::forward<FileSystemAssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the file system association.</p>
     */
    inline const Aws::String& GetFileSystemAssociationARN() const { return m_fileSystemAssociationARN; }
    inline bool FileSystemAssociationARNHasBeenSet() const { return m_fileSystemAssociationARNHasBeenSet; }
    template<typename FileSystemAssociationARNT = Aws::String>
    void SetFileSystemAssociationARN(FileSystemAssociationARNT&& value) { m_fileSystemAssociationARNHasBeenSet = true; m_fileSystemAssociationARN = std::forward<FileSystemAssociationARNT>(value); }
    template<typename FileSystemAssociationARNT = Aws::String>
    FileSystemAssociationSummary& WithFileSystemAssociationARN(FileSystemAssociationARNT&& value) { SetFileSystemAssociationARN(std::forward<FileSystemAssociationARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the file share. Valid Values: <code>AVAILABLE</code> |
     * <code>CREATING</code> | <code>DELETING</code> | <code>FORCE_DELETING</code> |
     * <code>UPDATING</code> | <code>ERROR</code> </p>
     */
    inline const Aws::String& GetFileSystemAssociationStatus() const { return m_fileSystemAssociationStatus; }
    inline bool FileSystemAssociationStatusHasBeenSet() const { return m_fileSystemAssociationStatusHasBeenSet; }
    template<typename FileSystemAssociationStatusT = Aws::String>
    void SetFileSystemAssociationStatus(FileSystemAssociationStatusT&& value) { m_fileSystemAssociationStatusHasBeenSet = true; m_fileSystemAssociationStatus = std::forward<FileSystemAssociationStatusT>(value); }
    template<typename FileSystemAssociationStatusT = Aws::String>
    FileSystemAssociationSummary& WithFileSystemAssociationStatus(FileSystemAssociationStatusT&& value) { SetFileSystemAssociationStatus(std::forward<FileSystemAssociationStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    FileSystemAssociationSummary& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileSystemAssociationId;
    bool m_fileSystemAssociationIdHasBeenSet = false;

    Aws::String m_fileSystemAssociationARN;
    bool m_fileSystemAssociationARNHasBeenSet = false;

    Aws::String m_fileSystemAssociationStatus;
    bool m_fileSystemAssociationStatusHasBeenSet = false;

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

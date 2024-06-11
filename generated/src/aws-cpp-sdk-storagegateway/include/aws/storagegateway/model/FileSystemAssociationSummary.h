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
    AWS_STORAGEGATEWAY_API FileSystemAssociationSummary();
    AWS_STORAGEGATEWAY_API FileSystemAssociationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API FileSystemAssociationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the file system association.</p>
     */
    inline const Aws::String& GetFileSystemAssociationId() const{ return m_fileSystemAssociationId; }
    inline bool FileSystemAssociationIdHasBeenSet() const { return m_fileSystemAssociationIdHasBeenSet; }
    inline void SetFileSystemAssociationId(const Aws::String& value) { m_fileSystemAssociationIdHasBeenSet = true; m_fileSystemAssociationId = value; }
    inline void SetFileSystemAssociationId(Aws::String&& value) { m_fileSystemAssociationIdHasBeenSet = true; m_fileSystemAssociationId = std::move(value); }
    inline void SetFileSystemAssociationId(const char* value) { m_fileSystemAssociationIdHasBeenSet = true; m_fileSystemAssociationId.assign(value); }
    inline FileSystemAssociationSummary& WithFileSystemAssociationId(const Aws::String& value) { SetFileSystemAssociationId(value); return *this;}
    inline FileSystemAssociationSummary& WithFileSystemAssociationId(Aws::String&& value) { SetFileSystemAssociationId(std::move(value)); return *this;}
    inline FileSystemAssociationSummary& WithFileSystemAssociationId(const char* value) { SetFileSystemAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the file system association.</p>
     */
    inline const Aws::String& GetFileSystemAssociationARN() const{ return m_fileSystemAssociationARN; }
    inline bool FileSystemAssociationARNHasBeenSet() const { return m_fileSystemAssociationARNHasBeenSet; }
    inline void SetFileSystemAssociationARN(const Aws::String& value) { m_fileSystemAssociationARNHasBeenSet = true; m_fileSystemAssociationARN = value; }
    inline void SetFileSystemAssociationARN(Aws::String&& value) { m_fileSystemAssociationARNHasBeenSet = true; m_fileSystemAssociationARN = std::move(value); }
    inline void SetFileSystemAssociationARN(const char* value) { m_fileSystemAssociationARNHasBeenSet = true; m_fileSystemAssociationARN.assign(value); }
    inline FileSystemAssociationSummary& WithFileSystemAssociationARN(const Aws::String& value) { SetFileSystemAssociationARN(value); return *this;}
    inline FileSystemAssociationSummary& WithFileSystemAssociationARN(Aws::String&& value) { SetFileSystemAssociationARN(std::move(value)); return *this;}
    inline FileSystemAssociationSummary& WithFileSystemAssociationARN(const char* value) { SetFileSystemAssociationARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the file share. Valid Values: <code>AVAILABLE</code> |
     * <code>CREATING</code> | <code>DELETING</code> | <code>FORCE_DELETING</code> |
     * <code>UPDATING</code> | <code>ERROR</code> </p>
     */
    inline const Aws::String& GetFileSystemAssociationStatus() const{ return m_fileSystemAssociationStatus; }
    inline bool FileSystemAssociationStatusHasBeenSet() const { return m_fileSystemAssociationStatusHasBeenSet; }
    inline void SetFileSystemAssociationStatus(const Aws::String& value) { m_fileSystemAssociationStatusHasBeenSet = true; m_fileSystemAssociationStatus = value; }
    inline void SetFileSystemAssociationStatus(Aws::String&& value) { m_fileSystemAssociationStatusHasBeenSet = true; m_fileSystemAssociationStatus = std::move(value); }
    inline void SetFileSystemAssociationStatus(const char* value) { m_fileSystemAssociationStatusHasBeenSet = true; m_fileSystemAssociationStatus.assign(value); }
    inline FileSystemAssociationSummary& WithFileSystemAssociationStatus(const Aws::String& value) { SetFileSystemAssociationStatus(value); return *this;}
    inline FileSystemAssociationSummary& WithFileSystemAssociationStatus(Aws::String&& value) { SetFileSystemAssociationStatus(std::move(value)); return *this;}
    inline FileSystemAssociationSummary& WithFileSystemAssociationStatus(const char* value) { SetFileSystemAssociationStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }
    inline FileSystemAssociationSummary& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}
    inline FileSystemAssociationSummary& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}
    inline FileSystemAssociationSummary& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}
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

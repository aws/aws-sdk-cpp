/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/model/FileShareType.h>
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
   * <p>Describes a file share. Only supported S3 File Gateway.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/FileShareInfo">AWS
   * API Reference</a></p>
   */
  class FileShareInfo
  {
  public:
    AWS_STORAGEGATEWAY_API FileShareInfo() = default;
    AWS_STORAGEGATEWAY_API FileShareInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API FileShareInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline FileShareType GetFileShareType() const { return m_fileShareType; }
    inline bool FileShareTypeHasBeenSet() const { return m_fileShareTypeHasBeenSet; }
    inline void SetFileShareType(FileShareType value) { m_fileShareTypeHasBeenSet = true; m_fileShareType = value; }
    inline FileShareInfo& WithFileShareType(FileShareType value) { SetFileShareType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFileShareARN() const { return m_fileShareARN; }
    inline bool FileShareARNHasBeenSet() const { return m_fileShareARNHasBeenSet; }
    template<typename FileShareARNT = Aws::String>
    void SetFileShareARN(FileShareARNT&& value) { m_fileShareARNHasBeenSet = true; m_fileShareARN = std::forward<FileShareARNT>(value); }
    template<typename FileShareARNT = Aws::String>
    FileShareInfo& WithFileShareARN(FileShareARNT&& value) { SetFileShareARN(std::forward<FileShareARNT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFileShareId() const { return m_fileShareId; }
    inline bool FileShareIdHasBeenSet() const { return m_fileShareIdHasBeenSet; }
    template<typename FileShareIdT = Aws::String>
    void SetFileShareId(FileShareIdT&& value) { m_fileShareIdHasBeenSet = true; m_fileShareId = std::forward<FileShareIdT>(value); }
    template<typename FileShareIdT = Aws::String>
    FileShareInfo& WithFileShareId(FileShareIdT&& value) { SetFileShareId(std::forward<FileShareIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFileShareStatus() const { return m_fileShareStatus; }
    inline bool FileShareStatusHasBeenSet() const { return m_fileShareStatusHasBeenSet; }
    template<typename FileShareStatusT = Aws::String>
    void SetFileShareStatus(FileShareStatusT&& value) { m_fileShareStatusHasBeenSet = true; m_fileShareStatus = std::forward<FileShareStatusT>(value); }
    template<typename FileShareStatusT = Aws::String>
    FileShareInfo& WithFileShareStatus(FileShareStatusT&& value) { SetFileShareStatus(std::forward<FileShareStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    FileShareInfo& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}
  private:

    FileShareType m_fileShareType{FileShareType::NOT_SET};
    bool m_fileShareTypeHasBeenSet = false;

    Aws::String m_fileShareARN;
    bool m_fileShareARNHasBeenSet = false;

    Aws::String m_fileShareId;
    bool m_fileShareIdHasBeenSet = false;

    Aws::String m_fileShareStatus;
    bool m_fileShareStatusHasBeenSet = false;

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

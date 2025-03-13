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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{
  class DisassociateFileSystemResult
  {
  public:
    AWS_STORAGEGATEWAY_API DisassociateFileSystemResult() = default;
    AWS_STORAGEGATEWAY_API DisassociateFileSystemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DisassociateFileSystemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the deleted file system association.</p>
     */
    inline const Aws::String& GetFileSystemAssociationARN() const { return m_fileSystemAssociationARN; }
    template<typename FileSystemAssociationARNT = Aws::String>
    void SetFileSystemAssociationARN(FileSystemAssociationARNT&& value) { m_fileSystemAssociationARNHasBeenSet = true; m_fileSystemAssociationARN = std::forward<FileSystemAssociationARNT>(value); }
    template<typename FileSystemAssociationARNT = Aws::String>
    DisassociateFileSystemResult& WithFileSystemAssociationARN(FileSystemAssociationARNT&& value) { SetFileSystemAssociationARN(std::forward<FileSystemAssociationARNT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DisassociateFileSystemResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileSystemAssociationARN;
    bool m_fileSystemAssociationARNHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

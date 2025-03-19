/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/FileSystemAssociationInfo.h>
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
  class DescribeFileSystemAssociationsResult
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeFileSystemAssociationsResult() = default;
    AWS_STORAGEGATEWAY_API DescribeFileSystemAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeFileSystemAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array containing the <code>FileSystemAssociationInfo</code> data type of
     * each file system association to be described. </p>
     */
    inline const Aws::Vector<FileSystemAssociationInfo>& GetFileSystemAssociationInfoList() const { return m_fileSystemAssociationInfoList; }
    template<typename FileSystemAssociationInfoListT = Aws::Vector<FileSystemAssociationInfo>>
    void SetFileSystemAssociationInfoList(FileSystemAssociationInfoListT&& value) { m_fileSystemAssociationInfoListHasBeenSet = true; m_fileSystemAssociationInfoList = std::forward<FileSystemAssociationInfoListT>(value); }
    template<typename FileSystemAssociationInfoListT = Aws::Vector<FileSystemAssociationInfo>>
    DescribeFileSystemAssociationsResult& WithFileSystemAssociationInfoList(FileSystemAssociationInfoListT&& value) { SetFileSystemAssociationInfoList(std::forward<FileSystemAssociationInfoListT>(value)); return *this;}
    template<typename FileSystemAssociationInfoListT = FileSystemAssociationInfo>
    DescribeFileSystemAssociationsResult& AddFileSystemAssociationInfoList(FileSystemAssociationInfoListT&& value) { m_fileSystemAssociationInfoListHasBeenSet = true; m_fileSystemAssociationInfoList.emplace_back(std::forward<FileSystemAssociationInfoListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFileSystemAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FileSystemAssociationInfo> m_fileSystemAssociationInfoList;
    bool m_fileSystemAssociationInfoListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_STORAGEGATEWAY_API DescribeFileSystemAssociationsResult();
    AWS_STORAGEGATEWAY_API DescribeFileSystemAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DescribeFileSystemAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array containing the <code>FileSystemAssociationInfo</code> data type of
     * each file system association to be described. </p>
     */
    inline const Aws::Vector<FileSystemAssociationInfo>& GetFileSystemAssociationInfoList() const{ return m_fileSystemAssociationInfoList; }

    /**
     * <p>An array containing the <code>FileSystemAssociationInfo</code> data type of
     * each file system association to be described. </p>
     */
    inline void SetFileSystemAssociationInfoList(const Aws::Vector<FileSystemAssociationInfo>& value) { m_fileSystemAssociationInfoList = value; }

    /**
     * <p>An array containing the <code>FileSystemAssociationInfo</code> data type of
     * each file system association to be described. </p>
     */
    inline void SetFileSystemAssociationInfoList(Aws::Vector<FileSystemAssociationInfo>&& value) { m_fileSystemAssociationInfoList = std::move(value); }

    /**
     * <p>An array containing the <code>FileSystemAssociationInfo</code> data type of
     * each file system association to be described. </p>
     */
    inline DescribeFileSystemAssociationsResult& WithFileSystemAssociationInfoList(const Aws::Vector<FileSystemAssociationInfo>& value) { SetFileSystemAssociationInfoList(value); return *this;}

    /**
     * <p>An array containing the <code>FileSystemAssociationInfo</code> data type of
     * each file system association to be described. </p>
     */
    inline DescribeFileSystemAssociationsResult& WithFileSystemAssociationInfoList(Aws::Vector<FileSystemAssociationInfo>&& value) { SetFileSystemAssociationInfoList(std::move(value)); return *this;}

    /**
     * <p>An array containing the <code>FileSystemAssociationInfo</code> data type of
     * each file system association to be described. </p>
     */
    inline DescribeFileSystemAssociationsResult& AddFileSystemAssociationInfoList(const FileSystemAssociationInfo& value) { m_fileSystemAssociationInfoList.push_back(value); return *this; }

    /**
     * <p>An array containing the <code>FileSystemAssociationInfo</code> data type of
     * each file system association to be described. </p>
     */
    inline DescribeFileSystemAssociationsResult& AddFileSystemAssociationInfoList(FileSystemAssociationInfo&& value) { m_fileSystemAssociationInfoList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FileSystemAssociationInfo> m_fileSystemAssociationInfoList;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

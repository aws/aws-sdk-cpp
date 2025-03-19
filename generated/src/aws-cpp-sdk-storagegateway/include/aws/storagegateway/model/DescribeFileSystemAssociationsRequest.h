/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class DescribeFileSystemAssociationsRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API DescribeFileSystemAssociationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFileSystemAssociations"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array containing the Amazon Resource Name (ARN) of each file system
     * association to be described.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFileSystemAssociationARNList() const { return m_fileSystemAssociationARNList; }
    inline bool FileSystemAssociationARNListHasBeenSet() const { return m_fileSystemAssociationARNListHasBeenSet; }
    template<typename FileSystemAssociationARNListT = Aws::Vector<Aws::String>>
    void SetFileSystemAssociationARNList(FileSystemAssociationARNListT&& value) { m_fileSystemAssociationARNListHasBeenSet = true; m_fileSystemAssociationARNList = std::forward<FileSystemAssociationARNListT>(value); }
    template<typename FileSystemAssociationARNListT = Aws::Vector<Aws::String>>
    DescribeFileSystemAssociationsRequest& WithFileSystemAssociationARNList(FileSystemAssociationARNListT&& value) { SetFileSystemAssociationARNList(std::forward<FileSystemAssociationARNListT>(value)); return *this;}
    template<typename FileSystemAssociationARNListT = Aws::String>
    DescribeFileSystemAssociationsRequest& AddFileSystemAssociationARNList(FileSystemAssociationARNListT&& value) { m_fileSystemAssociationARNListHasBeenSet = true; m_fileSystemAssociationARNList.emplace_back(std::forward<FileSystemAssociationARNListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_fileSystemAssociationARNList;
    bool m_fileSystemAssociationARNListHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

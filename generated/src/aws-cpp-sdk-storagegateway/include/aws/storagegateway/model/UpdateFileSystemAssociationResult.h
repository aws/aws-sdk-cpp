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
  class UpdateFileSystemAssociationResult
  {
  public:
    AWS_STORAGEGATEWAY_API UpdateFileSystemAssociationResult();
    AWS_STORAGEGATEWAY_API UpdateFileSystemAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API UpdateFileSystemAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the updated file system association.</p>
     */
    inline const Aws::String& GetFileSystemAssociationARN() const{ return m_fileSystemAssociationARN; }

    /**
     * <p>The ARN of the updated file system association.</p>
     */
    inline void SetFileSystemAssociationARN(const Aws::String& value) { m_fileSystemAssociationARN = value; }

    /**
     * <p>The ARN of the updated file system association.</p>
     */
    inline void SetFileSystemAssociationARN(Aws::String&& value) { m_fileSystemAssociationARN = std::move(value); }

    /**
     * <p>The ARN of the updated file system association.</p>
     */
    inline void SetFileSystemAssociationARN(const char* value) { m_fileSystemAssociationARN.assign(value); }

    /**
     * <p>The ARN of the updated file system association.</p>
     */
    inline UpdateFileSystemAssociationResult& WithFileSystemAssociationARN(const Aws::String& value) { SetFileSystemAssociationARN(value); return *this;}

    /**
     * <p>The ARN of the updated file system association.</p>
     */
    inline UpdateFileSystemAssociationResult& WithFileSystemAssociationARN(Aws::String&& value) { SetFileSystemAssociationARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the updated file system association.</p>
     */
    inline UpdateFileSystemAssociationResult& WithFileSystemAssociationARN(const char* value) { SetFileSystemAssociationARN(value); return *this;}

  private:

    Aws::String m_fileSystemAssociationARN;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

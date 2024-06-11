/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/StorageLocation.h>
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
namespace Panorama
{
namespace Model
{
  class CreatePackageResult
  {
  public:
    AWS_PANORAMA_API CreatePackageResult();
    AWS_PANORAMA_API CreatePackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API CreatePackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The package's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreatePackageResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreatePackageResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreatePackageResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package's ID.</p>
     */
    inline const Aws::String& GetPackageId() const{ return m_packageId; }
    inline void SetPackageId(const Aws::String& value) { m_packageId = value; }
    inline void SetPackageId(Aws::String&& value) { m_packageId = std::move(value); }
    inline void SetPackageId(const char* value) { m_packageId.assign(value); }
    inline CreatePackageResult& WithPackageId(const Aws::String& value) { SetPackageId(value); return *this;}
    inline CreatePackageResult& WithPackageId(Aws::String&& value) { SetPackageId(std::move(value)); return *this;}
    inline CreatePackageResult& WithPackageId(const char* value) { SetPackageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package's storage location.</p>
     */
    inline const StorageLocation& GetStorageLocation() const{ return m_storageLocation; }
    inline void SetStorageLocation(const StorageLocation& value) { m_storageLocation = value; }
    inline void SetStorageLocation(StorageLocation&& value) { m_storageLocation = std::move(value); }
    inline CreatePackageResult& WithStorageLocation(const StorageLocation& value) { SetStorageLocation(value); return *this;}
    inline CreatePackageResult& WithStorageLocation(StorageLocation&& value) { SetStorageLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreatePackageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreatePackageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreatePackageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_packageId;

    StorageLocation m_storageLocation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws

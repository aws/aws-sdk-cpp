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


    /**
     * <p>The package's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The package's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The package's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The package's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The package's ARN.</p>
     */
    inline CreatePackageResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The package's ARN.</p>
     */
    inline CreatePackageResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The package's ARN.</p>
     */
    inline CreatePackageResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The package's ID.</p>
     */
    inline const Aws::String& GetPackageId() const{ return m_packageId; }

    /**
     * <p>The package's ID.</p>
     */
    inline void SetPackageId(const Aws::String& value) { m_packageId = value; }

    /**
     * <p>The package's ID.</p>
     */
    inline void SetPackageId(Aws::String&& value) { m_packageId = std::move(value); }

    /**
     * <p>The package's ID.</p>
     */
    inline void SetPackageId(const char* value) { m_packageId.assign(value); }

    /**
     * <p>The package's ID.</p>
     */
    inline CreatePackageResult& WithPackageId(const Aws::String& value) { SetPackageId(value); return *this;}

    /**
     * <p>The package's ID.</p>
     */
    inline CreatePackageResult& WithPackageId(Aws::String&& value) { SetPackageId(std::move(value)); return *this;}

    /**
     * <p>The package's ID.</p>
     */
    inline CreatePackageResult& WithPackageId(const char* value) { SetPackageId(value); return *this;}


    /**
     * <p>The package's storage location.</p>
     */
    inline const StorageLocation& GetStorageLocation() const{ return m_storageLocation; }

    /**
     * <p>The package's storage location.</p>
     */
    inline void SetStorageLocation(const StorageLocation& value) { m_storageLocation = value; }

    /**
     * <p>The package's storage location.</p>
     */
    inline void SetStorageLocation(StorageLocation&& value) { m_storageLocation = std::move(value); }

    /**
     * <p>The package's storage location.</p>
     */
    inline CreatePackageResult& WithStorageLocation(const StorageLocation& value) { SetStorageLocation(value); return *this;}

    /**
     * <p>The package's storage location.</p>
     */
    inline CreatePackageResult& WithStorageLocation(StorageLocation&& value) { SetStorageLocation(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_packageId;

    StorageLocation m_storageLocation;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/panorama/model/StorageLocation.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class DescribePackageResult
  {
  public:
    AWS_PANORAMA_API DescribePackageResult();
    AWS_PANORAMA_API DescribePackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API DescribePackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DescribePackageResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The package's ARN.</p>
     */
    inline DescribePackageResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The package's ARN.</p>
     */
    inline DescribePackageResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>When the package was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>When the package was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>When the package was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>When the package was created.</p>
     */
    inline DescribePackageResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>When the package was created.</p>
     */
    inline DescribePackageResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


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
    inline DescribePackageResult& WithPackageId(const Aws::String& value) { SetPackageId(value); return *this;}

    /**
     * <p>The package's ID.</p>
     */
    inline DescribePackageResult& WithPackageId(Aws::String&& value) { SetPackageId(std::move(value)); return *this;}

    /**
     * <p>The package's ID.</p>
     */
    inline DescribePackageResult& WithPackageId(const char* value) { SetPackageId(value); return *this;}


    /**
     * <p>The package's name.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }

    /**
     * <p>The package's name.</p>
     */
    inline void SetPackageName(const Aws::String& value) { m_packageName = value; }

    /**
     * <p>The package's name.</p>
     */
    inline void SetPackageName(Aws::String&& value) { m_packageName = std::move(value); }

    /**
     * <p>The package's name.</p>
     */
    inline void SetPackageName(const char* value) { m_packageName.assign(value); }

    /**
     * <p>The package's name.</p>
     */
    inline DescribePackageResult& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}

    /**
     * <p>The package's name.</p>
     */
    inline DescribePackageResult& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}

    /**
     * <p>The package's name.</p>
     */
    inline DescribePackageResult& WithPackageName(const char* value) { SetPackageName(value); return *this;}


    /**
     * <p>ARNs of accounts that have read access to the package.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadAccessPrincipalArns() const{ return m_readAccessPrincipalArns; }

    /**
     * <p>ARNs of accounts that have read access to the package.</p>
     */
    inline void SetReadAccessPrincipalArns(const Aws::Vector<Aws::String>& value) { m_readAccessPrincipalArns = value; }

    /**
     * <p>ARNs of accounts that have read access to the package.</p>
     */
    inline void SetReadAccessPrincipalArns(Aws::Vector<Aws::String>&& value) { m_readAccessPrincipalArns = std::move(value); }

    /**
     * <p>ARNs of accounts that have read access to the package.</p>
     */
    inline DescribePackageResult& WithReadAccessPrincipalArns(const Aws::Vector<Aws::String>& value) { SetReadAccessPrincipalArns(value); return *this;}

    /**
     * <p>ARNs of accounts that have read access to the package.</p>
     */
    inline DescribePackageResult& WithReadAccessPrincipalArns(Aws::Vector<Aws::String>&& value) { SetReadAccessPrincipalArns(std::move(value)); return *this;}

    /**
     * <p>ARNs of accounts that have read access to the package.</p>
     */
    inline DescribePackageResult& AddReadAccessPrincipalArns(const Aws::String& value) { m_readAccessPrincipalArns.push_back(value); return *this; }

    /**
     * <p>ARNs of accounts that have read access to the package.</p>
     */
    inline DescribePackageResult& AddReadAccessPrincipalArns(Aws::String&& value) { m_readAccessPrincipalArns.push_back(std::move(value)); return *this; }

    /**
     * <p>ARNs of accounts that have read access to the package.</p>
     */
    inline DescribePackageResult& AddReadAccessPrincipalArns(const char* value) { m_readAccessPrincipalArns.push_back(value); return *this; }


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
    inline DescribePackageResult& WithStorageLocation(const StorageLocation& value) { SetStorageLocation(value); return *this;}

    /**
     * <p>The package's storage location.</p>
     */
    inline DescribePackageResult& WithStorageLocation(StorageLocation&& value) { SetStorageLocation(std::move(value)); return *this;}


    /**
     * <p>The package's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The package's tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The package's tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The package's tags.</p>
     */
    inline DescribePackageResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The package's tags.</p>
     */
    inline DescribePackageResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The package's tags.</p>
     */
    inline DescribePackageResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The package's tags.</p>
     */
    inline DescribePackageResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The package's tags.</p>
     */
    inline DescribePackageResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The package's tags.</p>
     */
    inline DescribePackageResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The package's tags.</p>
     */
    inline DescribePackageResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The package's tags.</p>
     */
    inline DescribePackageResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The package's tags.</p>
     */
    inline DescribePackageResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>ARNs of accounts that have write access to the package.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWriteAccessPrincipalArns() const{ return m_writeAccessPrincipalArns; }

    /**
     * <p>ARNs of accounts that have write access to the package.</p>
     */
    inline void SetWriteAccessPrincipalArns(const Aws::Vector<Aws::String>& value) { m_writeAccessPrincipalArns = value; }

    /**
     * <p>ARNs of accounts that have write access to the package.</p>
     */
    inline void SetWriteAccessPrincipalArns(Aws::Vector<Aws::String>&& value) { m_writeAccessPrincipalArns = std::move(value); }

    /**
     * <p>ARNs of accounts that have write access to the package.</p>
     */
    inline DescribePackageResult& WithWriteAccessPrincipalArns(const Aws::Vector<Aws::String>& value) { SetWriteAccessPrincipalArns(value); return *this;}

    /**
     * <p>ARNs of accounts that have write access to the package.</p>
     */
    inline DescribePackageResult& WithWriteAccessPrincipalArns(Aws::Vector<Aws::String>&& value) { SetWriteAccessPrincipalArns(std::move(value)); return *this;}

    /**
     * <p>ARNs of accounts that have write access to the package.</p>
     */
    inline DescribePackageResult& AddWriteAccessPrincipalArns(const Aws::String& value) { m_writeAccessPrincipalArns.push_back(value); return *this; }

    /**
     * <p>ARNs of accounts that have write access to the package.</p>
     */
    inline DescribePackageResult& AddWriteAccessPrincipalArns(Aws::String&& value) { m_writeAccessPrincipalArns.push_back(std::move(value)); return *this; }

    /**
     * <p>ARNs of accounts that have write access to the package.</p>
     */
    inline DescribePackageResult& AddWriteAccessPrincipalArns(const char* value) { m_writeAccessPrincipalArns.push_back(value); return *this; }

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdTime;

    Aws::String m_packageId;

    Aws::String m_packageName;

    Aws::Vector<Aws::String> m_readAccessPrincipalArns;

    StorageLocation m_storageLocation;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Vector<Aws::String> m_writeAccessPrincipalArns;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws

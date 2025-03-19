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
    AWS_PANORAMA_API DescribePackageResult() = default;
    AWS_PANORAMA_API DescribePackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API DescribePackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The package's ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribePackageResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the package was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    DescribePackageResult& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package's ID.</p>
     */
    inline const Aws::String& GetPackageId() const { return m_packageId; }
    template<typename PackageIdT = Aws::String>
    void SetPackageId(PackageIdT&& value) { m_packageIdHasBeenSet = true; m_packageId = std::forward<PackageIdT>(value); }
    template<typename PackageIdT = Aws::String>
    DescribePackageResult& WithPackageId(PackageIdT&& value) { SetPackageId(std::forward<PackageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package's name.</p>
     */
    inline const Aws::String& GetPackageName() const { return m_packageName; }
    template<typename PackageNameT = Aws::String>
    void SetPackageName(PackageNameT&& value) { m_packageNameHasBeenSet = true; m_packageName = std::forward<PackageNameT>(value); }
    template<typename PackageNameT = Aws::String>
    DescribePackageResult& WithPackageName(PackageNameT&& value) { SetPackageName(std::forward<PackageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARNs of accounts that have read access to the package.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadAccessPrincipalArns() const { return m_readAccessPrincipalArns; }
    template<typename ReadAccessPrincipalArnsT = Aws::Vector<Aws::String>>
    void SetReadAccessPrincipalArns(ReadAccessPrincipalArnsT&& value) { m_readAccessPrincipalArnsHasBeenSet = true; m_readAccessPrincipalArns = std::forward<ReadAccessPrincipalArnsT>(value); }
    template<typename ReadAccessPrincipalArnsT = Aws::Vector<Aws::String>>
    DescribePackageResult& WithReadAccessPrincipalArns(ReadAccessPrincipalArnsT&& value) { SetReadAccessPrincipalArns(std::forward<ReadAccessPrincipalArnsT>(value)); return *this;}
    template<typename ReadAccessPrincipalArnsT = Aws::String>
    DescribePackageResult& AddReadAccessPrincipalArns(ReadAccessPrincipalArnsT&& value) { m_readAccessPrincipalArnsHasBeenSet = true; m_readAccessPrincipalArns.emplace_back(std::forward<ReadAccessPrincipalArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The package's storage location.</p>
     */
    inline const StorageLocation& GetStorageLocation() const { return m_storageLocation; }
    template<typename StorageLocationT = StorageLocation>
    void SetStorageLocation(StorageLocationT&& value) { m_storageLocationHasBeenSet = true; m_storageLocation = std::forward<StorageLocationT>(value); }
    template<typename StorageLocationT = StorageLocation>
    DescribePackageResult& WithStorageLocation(StorageLocationT&& value) { SetStorageLocation(std::forward<StorageLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The package's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    DescribePackageResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    DescribePackageResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>ARNs of accounts that have write access to the package.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWriteAccessPrincipalArns() const { return m_writeAccessPrincipalArns; }
    template<typename WriteAccessPrincipalArnsT = Aws::Vector<Aws::String>>
    void SetWriteAccessPrincipalArns(WriteAccessPrincipalArnsT&& value) { m_writeAccessPrincipalArnsHasBeenSet = true; m_writeAccessPrincipalArns = std::forward<WriteAccessPrincipalArnsT>(value); }
    template<typename WriteAccessPrincipalArnsT = Aws::Vector<Aws::String>>
    DescribePackageResult& WithWriteAccessPrincipalArns(WriteAccessPrincipalArnsT&& value) { SetWriteAccessPrincipalArns(std::forward<WriteAccessPrincipalArnsT>(value)); return *this;}
    template<typename WriteAccessPrincipalArnsT = Aws::String>
    DescribePackageResult& AddWriteAccessPrincipalArns(WriteAccessPrincipalArnsT&& value) { m_writeAccessPrincipalArnsHasBeenSet = true; m_writeAccessPrincipalArns.emplace_back(std::forward<WriteAccessPrincipalArnsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePackageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_packageId;
    bool m_packageIdHasBeenSet = false;

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_readAccessPrincipalArns;
    bool m_readAccessPrincipalArnsHasBeenSet = false;

    StorageLocation m_storageLocation;
    bool m_storageLocationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_writeAccessPrincipalArns;
    bool m_writeAccessPrincipalArnsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws

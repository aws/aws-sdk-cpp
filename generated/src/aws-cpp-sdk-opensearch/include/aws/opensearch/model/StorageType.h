/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/StorageTypeLimit.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>A list of storage types for an Amazon OpenSearch Service domain that are
   * available for a given intance type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/StorageType">AWS
   * API Reference</a></p>
   */
  class StorageType
  {
  public:
    AWS_OPENSEARCHSERVICE_API StorageType() = default;
    AWS_OPENSEARCHSERVICE_API StorageType(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API StorageType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the storage type.</p>
     */
    inline const Aws::String& GetStorageTypeName() const { return m_storageTypeName; }
    inline bool StorageTypeNameHasBeenSet() const { return m_storageTypeNameHasBeenSet; }
    template<typename StorageTypeNameT = Aws::String>
    void SetStorageTypeName(StorageTypeNameT&& value) { m_storageTypeNameHasBeenSet = true; m_storageTypeName = std::forward<StorageTypeNameT>(value); }
    template<typename StorageTypeNameT = Aws::String>
    StorageType& WithStorageTypeName(StorageTypeNameT&& value) { SetStorageTypeName(std::forward<StorageTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage sub-type, such as <code>gp3</code> or <code>io1</code>.</p>
     */
    inline const Aws::String& GetStorageSubTypeName() const { return m_storageSubTypeName; }
    inline bool StorageSubTypeNameHasBeenSet() const { return m_storageSubTypeNameHasBeenSet; }
    template<typename StorageSubTypeNameT = Aws::String>
    void SetStorageSubTypeName(StorageSubTypeNameT&& value) { m_storageSubTypeNameHasBeenSet = true; m_storageSubTypeName = std::forward<StorageSubTypeNameT>(value); }
    template<typename StorageSubTypeNameT = Aws::String>
    StorageType& WithStorageSubTypeName(StorageSubTypeNameT&& value) { SetStorageSubTypeName(std::forward<StorageSubTypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits that are applicable for the given storage type.</p>
     */
    inline const Aws::Vector<StorageTypeLimit>& GetStorageTypeLimits() const { return m_storageTypeLimits; }
    inline bool StorageTypeLimitsHasBeenSet() const { return m_storageTypeLimitsHasBeenSet; }
    template<typename StorageTypeLimitsT = Aws::Vector<StorageTypeLimit>>
    void SetStorageTypeLimits(StorageTypeLimitsT&& value) { m_storageTypeLimitsHasBeenSet = true; m_storageTypeLimits = std::forward<StorageTypeLimitsT>(value); }
    template<typename StorageTypeLimitsT = Aws::Vector<StorageTypeLimit>>
    StorageType& WithStorageTypeLimits(StorageTypeLimitsT&& value) { SetStorageTypeLimits(std::forward<StorageTypeLimitsT>(value)); return *this;}
    template<typename StorageTypeLimitsT = StorageTypeLimit>
    StorageType& AddStorageTypeLimits(StorageTypeLimitsT&& value) { m_storageTypeLimitsHasBeenSet = true; m_storageTypeLimits.emplace_back(std::forward<StorageTypeLimitsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_storageTypeName;
    bool m_storageTypeNameHasBeenSet = false;

    Aws::String m_storageSubTypeName;
    bool m_storageSubTypeNameHasBeenSet = false;

    Aws::Vector<StorageTypeLimit> m_storageTypeLimits;
    bool m_storageTypeLimitsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws

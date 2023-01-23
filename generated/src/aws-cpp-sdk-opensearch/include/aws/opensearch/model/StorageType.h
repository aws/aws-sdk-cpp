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
    AWS_OPENSEARCHSERVICE_API StorageType();
    AWS_OPENSEARCHSERVICE_API StorageType(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API StorageType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the storage type.</p>
     */
    inline const Aws::String& GetStorageTypeName() const{ return m_storageTypeName; }

    /**
     * <p>The name of the storage type.</p>
     */
    inline bool StorageTypeNameHasBeenSet() const { return m_storageTypeNameHasBeenSet; }

    /**
     * <p>The name of the storage type.</p>
     */
    inline void SetStorageTypeName(const Aws::String& value) { m_storageTypeNameHasBeenSet = true; m_storageTypeName = value; }

    /**
     * <p>The name of the storage type.</p>
     */
    inline void SetStorageTypeName(Aws::String&& value) { m_storageTypeNameHasBeenSet = true; m_storageTypeName = std::move(value); }

    /**
     * <p>The name of the storage type.</p>
     */
    inline void SetStorageTypeName(const char* value) { m_storageTypeNameHasBeenSet = true; m_storageTypeName.assign(value); }

    /**
     * <p>The name of the storage type.</p>
     */
    inline StorageType& WithStorageTypeName(const Aws::String& value) { SetStorageTypeName(value); return *this;}

    /**
     * <p>The name of the storage type.</p>
     */
    inline StorageType& WithStorageTypeName(Aws::String&& value) { SetStorageTypeName(std::move(value)); return *this;}

    /**
     * <p>The name of the storage type.</p>
     */
    inline StorageType& WithStorageTypeName(const char* value) { SetStorageTypeName(value); return *this;}


    /**
     * <p>The storage sub-type, such as <code>gp3</code> or <code>io1</code>.</p>
     */
    inline const Aws::String& GetStorageSubTypeName() const{ return m_storageSubTypeName; }

    /**
     * <p>The storage sub-type, such as <code>gp3</code> or <code>io1</code>.</p>
     */
    inline bool StorageSubTypeNameHasBeenSet() const { return m_storageSubTypeNameHasBeenSet; }

    /**
     * <p>The storage sub-type, such as <code>gp3</code> or <code>io1</code>.</p>
     */
    inline void SetStorageSubTypeName(const Aws::String& value) { m_storageSubTypeNameHasBeenSet = true; m_storageSubTypeName = value; }

    /**
     * <p>The storage sub-type, such as <code>gp3</code> or <code>io1</code>.</p>
     */
    inline void SetStorageSubTypeName(Aws::String&& value) { m_storageSubTypeNameHasBeenSet = true; m_storageSubTypeName = std::move(value); }

    /**
     * <p>The storage sub-type, such as <code>gp3</code> or <code>io1</code>.</p>
     */
    inline void SetStorageSubTypeName(const char* value) { m_storageSubTypeNameHasBeenSet = true; m_storageSubTypeName.assign(value); }

    /**
     * <p>The storage sub-type, such as <code>gp3</code> or <code>io1</code>.</p>
     */
    inline StorageType& WithStorageSubTypeName(const Aws::String& value) { SetStorageSubTypeName(value); return *this;}

    /**
     * <p>The storage sub-type, such as <code>gp3</code> or <code>io1</code>.</p>
     */
    inline StorageType& WithStorageSubTypeName(Aws::String&& value) { SetStorageSubTypeName(std::move(value)); return *this;}

    /**
     * <p>The storage sub-type, such as <code>gp3</code> or <code>io1</code>.</p>
     */
    inline StorageType& WithStorageSubTypeName(const char* value) { SetStorageSubTypeName(value); return *this;}


    /**
     * <p>Limits that are applicable for the given storage type.</p>
     */
    inline const Aws::Vector<StorageTypeLimit>& GetStorageTypeLimits() const{ return m_storageTypeLimits; }

    /**
     * <p>Limits that are applicable for the given storage type.</p>
     */
    inline bool StorageTypeLimitsHasBeenSet() const { return m_storageTypeLimitsHasBeenSet; }

    /**
     * <p>Limits that are applicable for the given storage type.</p>
     */
    inline void SetStorageTypeLimits(const Aws::Vector<StorageTypeLimit>& value) { m_storageTypeLimitsHasBeenSet = true; m_storageTypeLimits = value; }

    /**
     * <p>Limits that are applicable for the given storage type.</p>
     */
    inline void SetStorageTypeLimits(Aws::Vector<StorageTypeLimit>&& value) { m_storageTypeLimitsHasBeenSet = true; m_storageTypeLimits = std::move(value); }

    /**
     * <p>Limits that are applicable for the given storage type.</p>
     */
    inline StorageType& WithStorageTypeLimits(const Aws::Vector<StorageTypeLimit>& value) { SetStorageTypeLimits(value); return *this;}

    /**
     * <p>Limits that are applicable for the given storage type.</p>
     */
    inline StorageType& WithStorageTypeLimits(Aws::Vector<StorageTypeLimit>&& value) { SetStorageTypeLimits(std::move(value)); return *this;}

    /**
     * <p>Limits that are applicable for the given storage type.</p>
     */
    inline StorageType& AddStorageTypeLimits(const StorageTypeLimit& value) { m_storageTypeLimitsHasBeenSet = true; m_storageTypeLimits.push_back(value); return *this; }

    /**
     * <p>Limits that are applicable for the given storage type.</p>
     */
    inline StorageType& AddStorageTypeLimits(StorageTypeLimit&& value) { m_storageTypeLimitsHasBeenSet = true; m_storageTypeLimits.push_back(std::move(value)); return *this; }

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

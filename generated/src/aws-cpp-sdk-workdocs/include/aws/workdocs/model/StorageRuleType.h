/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/StorageType.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes the storage for a user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/StorageRuleType">AWS
   * API Reference</a></p>
   */
  class StorageRuleType
  {
  public:
    AWS_WORKDOCS_API StorageRuleType() = default;
    AWS_WORKDOCS_API StorageRuleType(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API StorageRuleType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The amount of storage allocated, in bytes.</p>
     */
    inline long long GetStorageAllocatedInBytes() const { return m_storageAllocatedInBytes; }
    inline bool StorageAllocatedInBytesHasBeenSet() const { return m_storageAllocatedInBytesHasBeenSet; }
    inline void SetStorageAllocatedInBytes(long long value) { m_storageAllocatedInBytesHasBeenSet = true; m_storageAllocatedInBytes = value; }
    inline StorageRuleType& WithStorageAllocatedInBytes(long long value) { SetStorageAllocatedInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of storage.</p>
     */
    inline StorageType GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(StorageType value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline StorageRuleType& WithStorageType(StorageType value) { SetStorageType(value); return *this;}
    ///@}
  private:

    long long m_storageAllocatedInBytes{0};
    bool m_storageAllocatedInBytesHasBeenSet = false;

    StorageType m_storageType{StorageType::NOT_SET};
    bool m_storageTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws

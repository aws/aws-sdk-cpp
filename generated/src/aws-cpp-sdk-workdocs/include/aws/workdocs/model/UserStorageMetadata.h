/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/StorageRuleType.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/UserStorageMetadata">AWS
   * API Reference</a></p>
   */
  class UserStorageMetadata
  {
  public:
    AWS_WORKDOCS_API UserStorageMetadata();
    AWS_WORKDOCS_API UserStorageMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API UserStorageMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of storage used, in bytes.</p>
     */
    inline long long GetStorageUtilizedInBytes() const{ return m_storageUtilizedInBytes; }

    /**
     * <p>The amount of storage used, in bytes.</p>
     */
    inline bool StorageUtilizedInBytesHasBeenSet() const { return m_storageUtilizedInBytesHasBeenSet; }

    /**
     * <p>The amount of storage used, in bytes.</p>
     */
    inline void SetStorageUtilizedInBytes(long long value) { m_storageUtilizedInBytesHasBeenSet = true; m_storageUtilizedInBytes = value; }

    /**
     * <p>The amount of storage used, in bytes.</p>
     */
    inline UserStorageMetadata& WithStorageUtilizedInBytes(long long value) { SetStorageUtilizedInBytes(value); return *this;}


    /**
     * <p>The storage for a user.</p>
     */
    inline const StorageRuleType& GetStorageRule() const{ return m_storageRule; }

    /**
     * <p>The storage for a user.</p>
     */
    inline bool StorageRuleHasBeenSet() const { return m_storageRuleHasBeenSet; }

    /**
     * <p>The storage for a user.</p>
     */
    inline void SetStorageRule(const StorageRuleType& value) { m_storageRuleHasBeenSet = true; m_storageRule = value; }

    /**
     * <p>The storage for a user.</p>
     */
    inline void SetStorageRule(StorageRuleType&& value) { m_storageRuleHasBeenSet = true; m_storageRule = std::move(value); }

    /**
     * <p>The storage for a user.</p>
     */
    inline UserStorageMetadata& WithStorageRule(const StorageRuleType& value) { SetStorageRule(value); return *this;}

    /**
     * <p>The storage for a user.</p>
     */
    inline UserStorageMetadata& WithStorageRule(StorageRuleType&& value) { SetStorageRule(std::move(value)); return *this;}

  private:

    long long m_storageUtilizedInBytes;
    bool m_storageUtilizedInBytesHasBeenSet = false;

    StorageRuleType m_storageRule;
    bool m_storageRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws

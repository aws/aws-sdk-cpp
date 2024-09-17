/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/storagegateway/model/TapeStorageClass.h>
#include <aws/storagegateway/model/RetentionLockType.h>
#include <aws/storagegateway/model/PoolStatus.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Describes a custom tape pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/PoolInfo">AWS
   * API Reference</a></p>
   */
  class PoolInfo
  {
  public:
    AWS_STORAGEGATEWAY_API PoolInfo();
    AWS_STORAGEGATEWAY_API PoolInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API PoolInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool. Use the
     * <a>ListTapePools</a> operation to return a list of custom tape pools for your
     * account and Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetPoolARN() const{ return m_poolARN; }
    inline bool PoolARNHasBeenSet() const { return m_poolARNHasBeenSet; }
    inline void SetPoolARN(const Aws::String& value) { m_poolARNHasBeenSet = true; m_poolARN = value; }
    inline void SetPoolARN(Aws::String&& value) { m_poolARNHasBeenSet = true; m_poolARN = std::move(value); }
    inline void SetPoolARN(const char* value) { m_poolARNHasBeenSet = true; m_poolARN.assign(value); }
    inline PoolInfo& WithPoolARN(const Aws::String& value) { SetPoolARN(value); return *this;}
    inline PoolInfo& WithPoolARN(Aws::String&& value) { SetPoolARN(std::move(value)); return *this;}
    inline PoolInfo& WithPoolARN(const char* value) { SetPoolARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the custom tape pool. <code>PoolName</code> can use all ASCII
     * characters, except '/' and '\'.</p>
     */
    inline const Aws::String& GetPoolName() const{ return m_poolName; }
    inline bool PoolNameHasBeenSet() const { return m_poolNameHasBeenSet; }
    inline void SetPoolName(const Aws::String& value) { m_poolNameHasBeenSet = true; m_poolName = value; }
    inline void SetPoolName(Aws::String&& value) { m_poolNameHasBeenSet = true; m_poolName = std::move(value); }
    inline void SetPoolName(const char* value) { m_poolNameHasBeenSet = true; m_poolName.assign(value); }
    inline PoolInfo& WithPoolName(const Aws::String& value) { SetPoolName(value); return *this;}
    inline PoolInfo& WithPoolName(Aws::String&& value) { SetPoolName(std::move(value)); return *this;}
    inline PoolInfo& WithPoolName(const char* value) { SetPoolName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage class that is associated with the custom pool. When you use your
     * backup application to eject the tape, the tape is archived directly into the
     * storage class (S3 Glacier or S3 Glacier Deep Archive) that corresponds to the
     * pool.</p>
     */
    inline const TapeStorageClass& GetStorageClass() const{ return m_storageClass; }
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
    inline void SetStorageClass(const TapeStorageClass& value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline void SetStorageClass(TapeStorageClass&& value) { m_storageClassHasBeenSet = true; m_storageClass = std::move(value); }
    inline PoolInfo& WithStorageClass(const TapeStorageClass& value) { SetStorageClass(value); return *this;}
    inline PoolInfo& WithStorageClass(TapeStorageClass&& value) { SetStorageClass(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tape retention lock type, which can be configured in two modes. When
     * configured in governance mode, Amazon Web Services accounts with specific IAM
     * permissions are authorized to remove the tape retention lock from archived
     * virtual tapes. When configured in compliance mode, the tape retention lock
     * cannot be removed by any user, including the root Amazon Web Services
     * account.</p>
     */
    inline const RetentionLockType& GetRetentionLockType() const{ return m_retentionLockType; }
    inline bool RetentionLockTypeHasBeenSet() const { return m_retentionLockTypeHasBeenSet; }
    inline void SetRetentionLockType(const RetentionLockType& value) { m_retentionLockTypeHasBeenSet = true; m_retentionLockType = value; }
    inline void SetRetentionLockType(RetentionLockType&& value) { m_retentionLockTypeHasBeenSet = true; m_retentionLockType = std::move(value); }
    inline PoolInfo& WithRetentionLockType(const RetentionLockType& value) { SetRetentionLockType(value); return *this;}
    inline PoolInfo& WithRetentionLockType(RetentionLockType&& value) { SetRetentionLockType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tape retention lock time is set in days. Tape retention lock can be enabled
     * for up to 100 years (36,500 days).</p>
     */
    inline int GetRetentionLockTimeInDays() const{ return m_retentionLockTimeInDays; }
    inline bool RetentionLockTimeInDaysHasBeenSet() const { return m_retentionLockTimeInDaysHasBeenSet; }
    inline void SetRetentionLockTimeInDays(int value) { m_retentionLockTimeInDaysHasBeenSet = true; m_retentionLockTimeInDays = value; }
    inline PoolInfo& WithRetentionLockTimeInDays(int value) { SetRetentionLockTimeInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the custom tape pool. Pool can be <code>ACTIVE</code> or
     * <code>DELETED</code>.</p>
     */
    inline const PoolStatus& GetPoolStatus() const{ return m_poolStatus; }
    inline bool PoolStatusHasBeenSet() const { return m_poolStatusHasBeenSet; }
    inline void SetPoolStatus(const PoolStatus& value) { m_poolStatusHasBeenSet = true; m_poolStatus = value; }
    inline void SetPoolStatus(PoolStatus&& value) { m_poolStatusHasBeenSet = true; m_poolStatus = std::move(value); }
    inline PoolInfo& WithPoolStatus(const PoolStatus& value) { SetPoolStatus(value); return *this;}
    inline PoolInfo& WithPoolStatus(PoolStatus&& value) { SetPoolStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_poolARN;
    bool m_poolARNHasBeenSet = false;

    Aws::String m_poolName;
    bool m_poolNameHasBeenSet = false;

    TapeStorageClass m_storageClass;
    bool m_storageClassHasBeenSet = false;

    RetentionLockType m_retentionLockType;
    bool m_retentionLockTypeHasBeenSet = false;

    int m_retentionLockTimeInDays;
    bool m_retentionLockTimeInDaysHasBeenSet = false;

    PoolStatus m_poolStatus;
    bool m_poolStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

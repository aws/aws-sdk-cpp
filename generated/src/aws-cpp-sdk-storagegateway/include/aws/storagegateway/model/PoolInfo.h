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
    AWS_STORAGEGATEWAY_API PoolInfo() = default;
    AWS_STORAGEGATEWAY_API PoolInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API PoolInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom tape pool. Use the
     * <a>ListTapePools</a> operation to return a list of custom tape pools for your
     * account and Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetPoolARN() const { return m_poolARN; }
    inline bool PoolARNHasBeenSet() const { return m_poolARNHasBeenSet; }
    template<typename PoolARNT = Aws::String>
    void SetPoolARN(PoolARNT&& value) { m_poolARNHasBeenSet = true; m_poolARN = std::forward<PoolARNT>(value); }
    template<typename PoolARNT = Aws::String>
    PoolInfo& WithPoolARN(PoolARNT&& value) { SetPoolARN(std::forward<PoolARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the custom tape pool. <code>PoolName</code> can use all ASCII
     * characters, except '/' and '\'.</p>
     */
    inline const Aws::String& GetPoolName() const { return m_poolName; }
    inline bool PoolNameHasBeenSet() const { return m_poolNameHasBeenSet; }
    template<typename PoolNameT = Aws::String>
    void SetPoolName(PoolNameT&& value) { m_poolNameHasBeenSet = true; m_poolName = std::forward<PoolNameT>(value); }
    template<typename PoolNameT = Aws::String>
    PoolInfo& WithPoolName(PoolNameT&& value) { SetPoolName(std::forward<PoolNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage class that is associated with the custom pool. When you use your
     * backup application to eject the tape, the tape is archived directly into the
     * storage class (S3 Glacier or S3 Glacier Deep Archive) that corresponds to the
     * pool.</p>
     */
    inline TapeStorageClass GetStorageClass() const { return m_storageClass; }
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
    inline void SetStorageClass(TapeStorageClass value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline PoolInfo& WithStorageClass(TapeStorageClass value) { SetStorageClass(value); return *this;}
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
    inline RetentionLockType GetRetentionLockType() const { return m_retentionLockType; }
    inline bool RetentionLockTypeHasBeenSet() const { return m_retentionLockTypeHasBeenSet; }
    inline void SetRetentionLockType(RetentionLockType value) { m_retentionLockTypeHasBeenSet = true; m_retentionLockType = value; }
    inline PoolInfo& WithRetentionLockType(RetentionLockType value) { SetRetentionLockType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tape retention lock time is set in days. Tape retention lock can be enabled
     * for up to 100 years (36,500 days).</p>
     */
    inline int GetRetentionLockTimeInDays() const { return m_retentionLockTimeInDays; }
    inline bool RetentionLockTimeInDaysHasBeenSet() const { return m_retentionLockTimeInDaysHasBeenSet; }
    inline void SetRetentionLockTimeInDays(int value) { m_retentionLockTimeInDaysHasBeenSet = true; m_retentionLockTimeInDays = value; }
    inline PoolInfo& WithRetentionLockTimeInDays(int value) { SetRetentionLockTimeInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the custom tape pool. Pool can be <code>ACTIVE</code> or
     * <code>DELETED</code>.</p>
     */
    inline PoolStatus GetPoolStatus() const { return m_poolStatus; }
    inline bool PoolStatusHasBeenSet() const { return m_poolStatusHasBeenSet; }
    inline void SetPoolStatus(PoolStatus value) { m_poolStatusHasBeenSet = true; m_poolStatus = value; }
    inline PoolInfo& WithPoolStatus(PoolStatus value) { SetPoolStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_poolARN;
    bool m_poolARNHasBeenSet = false;

    Aws::String m_poolName;
    bool m_poolNameHasBeenSet = false;

    TapeStorageClass m_storageClass{TapeStorageClass::NOT_SET};
    bool m_storageClassHasBeenSet = false;

    RetentionLockType m_retentionLockType{RetentionLockType::NOT_SET};
    bool m_retentionLockTypeHasBeenSet = false;

    int m_retentionLockTimeInDays{0};
    bool m_retentionLockTimeInDaysHasBeenSet = false;

    PoolStatus m_poolStatus{PoolStatus::NOT_SET};
    bool m_poolStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   */
  class AssignTapePoolRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API AssignTapePoolRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssignTapePool"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) of the virtual tape that you want to
     * add to the tape pool.</p>
     */
    inline const Aws::String& GetTapeARN() const{ return m_tapeARN; }
    inline bool TapeARNHasBeenSet() const { return m_tapeARNHasBeenSet; }
    inline void SetTapeARN(const Aws::String& value) { m_tapeARNHasBeenSet = true; m_tapeARN = value; }
    inline void SetTapeARN(Aws::String&& value) { m_tapeARNHasBeenSet = true; m_tapeARN = std::move(value); }
    inline void SetTapeARN(const char* value) { m_tapeARNHasBeenSet = true; m_tapeARN.assign(value); }
    inline AssignTapePoolRequest& WithTapeARN(const Aws::String& value) { SetTapeARN(value); return *this;}
    inline AssignTapePoolRequest& WithTapeARN(Aws::String&& value) { SetTapeARN(std::move(value)); return *this;}
    inline AssignTapePoolRequest& WithTapeARN(const char* value) { SetTapeARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the pool that you want to add your tape to for archiving. The tape
     * in this pool is archived in the S3 storage class that is associated with the
     * pool. When you use your backup application to eject the tape, the tape is
     * archived directly into the storage class (S3 Glacier or S3 Glacier Deep Archive)
     * that corresponds to the pool.</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
    inline void SetPoolId(const Aws::String& value) { m_poolIdHasBeenSet = true; m_poolId = value; }
    inline void SetPoolId(Aws::String&& value) { m_poolIdHasBeenSet = true; m_poolId = std::move(value); }
    inline void SetPoolId(const char* value) { m_poolIdHasBeenSet = true; m_poolId.assign(value); }
    inline AssignTapePoolRequest& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}
    inline AssignTapePoolRequest& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}
    inline AssignTapePoolRequest& WithPoolId(const char* value) { SetPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set permissions to bypass governance retention. If the lock type of the
     * archived tape is <code>Governance</code>, the tape's archived age is not older
     * than <code>RetentionLockInDays</code>, and the user does not already have
     * <code>BypassGovernanceRetention</code>, setting this to TRUE enables the user to
     * bypass the retention lock. This parameter is set to true by default for calls
     * from the console.</p> <p>Valid values: <code>TRUE</code> | <code>FALSE</code>
     * </p>
     */
    inline bool GetBypassGovernanceRetention() const{ return m_bypassGovernanceRetention; }
    inline bool BypassGovernanceRetentionHasBeenSet() const { return m_bypassGovernanceRetentionHasBeenSet; }
    inline void SetBypassGovernanceRetention(bool value) { m_bypassGovernanceRetentionHasBeenSet = true; m_bypassGovernanceRetention = value; }
    inline AssignTapePoolRequest& WithBypassGovernanceRetention(bool value) { SetBypassGovernanceRetention(value); return *this;}
    ///@}
  private:

    Aws::String m_tapeARN;
    bool m_tapeARNHasBeenSet = false;

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    bool m_bypassGovernanceRetention;
    bool m_bypassGovernanceRetentionHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

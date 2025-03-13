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
   * <p>DeleteTapeArchiveInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DeleteTapeArchiveInput">AWS
   * API Reference</a></p>
   */
  class DeleteTapeArchiveRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API DeleteTapeArchiveRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTapeArchive"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape to delete from the virtual
     * tape shelf (VTS).</p>
     */
    inline const Aws::String& GetTapeARN() const { return m_tapeARN; }
    inline bool TapeARNHasBeenSet() const { return m_tapeARNHasBeenSet; }
    template<typename TapeARNT = Aws::String>
    void SetTapeARN(TapeARNT&& value) { m_tapeARNHasBeenSet = true; m_tapeARN = std::forward<TapeARNT>(value); }
    template<typename TapeARNT = Aws::String>
    DeleteTapeArchiveRequest& WithTapeARN(TapeARNT&& value) { SetTapeARN(std::forward<TapeARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>TRUE</code> to delete an archived tape that belongs to a custom
     * pool with tape retention lock. Only archived tapes with tape retention lock set
     * to <code>governance</code> can be deleted. Archived tapes with tape retention
     * lock set to <code>compliance</code> can't be deleted.</p>
     */
    inline bool GetBypassGovernanceRetention() const { return m_bypassGovernanceRetention; }
    inline bool BypassGovernanceRetentionHasBeenSet() const { return m_bypassGovernanceRetentionHasBeenSet; }
    inline void SetBypassGovernanceRetention(bool value) { m_bypassGovernanceRetentionHasBeenSet = true; m_bypassGovernanceRetention = value; }
    inline DeleteTapeArchiveRequest& WithBypassGovernanceRetention(bool value) { SetBypassGovernanceRetention(value); return *this;}
    ///@}
  private:

    Aws::String m_tapeARN;
    bool m_tapeARNHasBeenSet = false;

    bool m_bypassGovernanceRetention{false};
    bool m_bypassGovernanceRetentionHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

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
   * <p>DeleteTapeInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/DeleteTapeInput">AWS
   * API Reference</a></p>
   */
  class DeleteTapeRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API DeleteTapeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTape"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique Amazon Resource Name (ARN) of the gateway that the virtual tape to
     * delete is associated with. Use the <a>ListGateways</a> operation to return a
     * list of gateways for your account and Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the gateway that the virtual tape to
     * delete is associated with. Use the <a>ListGateways</a> operation to return a
     * list of gateways for your account and Amazon Web Services Region.</p>
     */
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the gateway that the virtual tape to
     * delete is associated with. Use the <a>ListGateways</a> operation to return a
     * list of gateways for your account and Amazon Web Services Region.</p>
     */
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the gateway that the virtual tape to
     * delete is associated with. Use the <a>ListGateways</a> operation to return a
     * list of gateways for your account and Amazon Web Services Region.</p>
     */
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the gateway that the virtual tape to
     * delete is associated with. Use the <a>ListGateways</a> operation to return a
     * list of gateways for your account and Amazon Web Services Region.</p>
     */
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the gateway that the virtual tape to
     * delete is associated with. Use the <a>ListGateways</a> operation to return a
     * list of gateways for your account and Amazon Web Services Region.</p>
     */
    inline DeleteTapeRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) of the gateway that the virtual tape to
     * delete is associated with. Use the <a>ListGateways</a> operation to return a
     * list of gateways for your account and Amazon Web Services Region.</p>
     */
    inline DeleteTapeRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) of the gateway that the virtual tape to
     * delete is associated with. Use the <a>ListGateways</a> operation to return a
     * list of gateways for your account and Amazon Web Services Region.</p>
     */
    inline DeleteTapeRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape to delete.</p>
     */
    inline const Aws::String& GetTapeARN() const{ return m_tapeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape to delete.</p>
     */
    inline bool TapeARNHasBeenSet() const { return m_tapeARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape to delete.</p>
     */
    inline void SetTapeARN(const Aws::String& value) { m_tapeARNHasBeenSet = true; m_tapeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape to delete.</p>
     */
    inline void SetTapeARN(Aws::String&& value) { m_tapeARNHasBeenSet = true; m_tapeARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape to delete.</p>
     */
    inline void SetTapeARN(const char* value) { m_tapeARNHasBeenSet = true; m_tapeARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape to delete.</p>
     */
    inline DeleteTapeRequest& WithTapeARN(const Aws::String& value) { SetTapeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape to delete.</p>
     */
    inline DeleteTapeRequest& WithTapeARN(Aws::String&& value) { SetTapeARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape to delete.</p>
     */
    inline DeleteTapeRequest& WithTapeARN(const char* value) { SetTapeARN(value); return *this;}


    /**
     * <p>Set to <code>TRUE</code> to delete an archived tape that belongs to a custom
     * pool with tape retention lock. Only archived tapes with tape retention lock set
     * to <code>governance</code> can be deleted. Archived tapes with tape retention
     * lock set to <code>compliance</code> can't be deleted.</p>
     */
    inline bool GetBypassGovernanceRetention() const{ return m_bypassGovernanceRetention; }

    /**
     * <p>Set to <code>TRUE</code> to delete an archived tape that belongs to a custom
     * pool with tape retention lock. Only archived tapes with tape retention lock set
     * to <code>governance</code> can be deleted. Archived tapes with tape retention
     * lock set to <code>compliance</code> can't be deleted.</p>
     */
    inline bool BypassGovernanceRetentionHasBeenSet() const { return m_bypassGovernanceRetentionHasBeenSet; }

    /**
     * <p>Set to <code>TRUE</code> to delete an archived tape that belongs to a custom
     * pool with tape retention lock. Only archived tapes with tape retention lock set
     * to <code>governance</code> can be deleted. Archived tapes with tape retention
     * lock set to <code>compliance</code> can't be deleted.</p>
     */
    inline void SetBypassGovernanceRetention(bool value) { m_bypassGovernanceRetentionHasBeenSet = true; m_bypassGovernanceRetention = value; }

    /**
     * <p>Set to <code>TRUE</code> to delete an archived tape that belongs to a custom
     * pool with tape retention lock. Only archived tapes with tape retention lock set
     * to <code>governance</code> can be deleted. Archived tapes with tape retention
     * lock set to <code>compliance</code> can't be deleted.</p>
     */
    inline DeleteTapeRequest& WithBypassGovernanceRetention(bool value) { SetBypassGovernanceRetention(value); return *this;}

  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::String m_tapeARN;
    bool m_tapeARNHasBeenSet = false;

    bool m_bypassGovernanceRetention;
    bool m_bypassGovernanceRetentionHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

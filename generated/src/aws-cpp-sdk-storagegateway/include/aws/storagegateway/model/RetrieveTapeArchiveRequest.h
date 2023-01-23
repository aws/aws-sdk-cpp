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
   * <p>RetrieveTapeArchiveInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/RetrieveTapeArchiveInput">AWS
   * API Reference</a></p>
   */
  class RetrieveTapeArchiveRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API RetrieveTapeArchiveRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RetrieveTapeArchive"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape you want to retrieve from
     * the virtual tape shelf (VTS).</p>
     */
    inline const Aws::String& GetTapeARN() const{ return m_tapeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape you want to retrieve from
     * the virtual tape shelf (VTS).</p>
     */
    inline bool TapeARNHasBeenSet() const { return m_tapeARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape you want to retrieve from
     * the virtual tape shelf (VTS).</p>
     */
    inline void SetTapeARN(const Aws::String& value) { m_tapeARNHasBeenSet = true; m_tapeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape you want to retrieve from
     * the virtual tape shelf (VTS).</p>
     */
    inline void SetTapeARN(Aws::String&& value) { m_tapeARNHasBeenSet = true; m_tapeARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape you want to retrieve from
     * the virtual tape shelf (VTS).</p>
     */
    inline void SetTapeARN(const char* value) { m_tapeARNHasBeenSet = true; m_tapeARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape you want to retrieve from
     * the virtual tape shelf (VTS).</p>
     */
    inline RetrieveTapeArchiveRequest& WithTapeARN(const Aws::String& value) { SetTapeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape you want to retrieve from
     * the virtual tape shelf (VTS).</p>
     */
    inline RetrieveTapeArchiveRequest& WithTapeARN(Aws::String&& value) { SetTapeARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape you want to retrieve from
     * the virtual tape shelf (VTS).</p>
     */
    inline RetrieveTapeArchiveRequest& WithTapeARN(const char* value) { SetTapeARN(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the gateway you want to retrieve the
     * virtual tape to. Use the <a>ListGateways</a> operation to return a list of
     * gateways for your account and Amazon Web Services Region.</p> <p>You retrieve
     * archived virtual tapes to only one gateway and the gateway must be a tape
     * gateway.</p>
     */
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway you want to retrieve the
     * virtual tape to. Use the <a>ListGateways</a> operation to return a list of
     * gateways for your account and Amazon Web Services Region.</p> <p>You retrieve
     * archived virtual tapes to only one gateway and the gateway must be a tape
     * gateway.</p>
     */
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway you want to retrieve the
     * virtual tape to. Use the <a>ListGateways</a> operation to return a list of
     * gateways for your account and Amazon Web Services Region.</p> <p>You retrieve
     * archived virtual tapes to only one gateway and the gateway must be a tape
     * gateway.</p>
     */
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway you want to retrieve the
     * virtual tape to. Use the <a>ListGateways</a> operation to return a list of
     * gateways for your account and Amazon Web Services Region.</p> <p>You retrieve
     * archived virtual tapes to only one gateway and the gateway must be a tape
     * gateway.</p>
     */
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway you want to retrieve the
     * virtual tape to. Use the <a>ListGateways</a> operation to return a list of
     * gateways for your account and Amazon Web Services Region.</p> <p>You retrieve
     * archived virtual tapes to only one gateway and the gateway must be a tape
     * gateway.</p>
     */
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway you want to retrieve the
     * virtual tape to. Use the <a>ListGateways</a> operation to return a list of
     * gateways for your account and Amazon Web Services Region.</p> <p>You retrieve
     * archived virtual tapes to only one gateway and the gateway must be a tape
     * gateway.</p>
     */
    inline RetrieveTapeArchiveRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway you want to retrieve the
     * virtual tape to. Use the <a>ListGateways</a> operation to return a list of
     * gateways for your account and Amazon Web Services Region.</p> <p>You retrieve
     * archived virtual tapes to only one gateway and the gateway must be a tape
     * gateway.</p>
     */
    inline RetrieveTapeArchiveRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the gateway you want to retrieve the
     * virtual tape to. Use the <a>ListGateways</a> operation to return a list of
     * gateways for your account and Amazon Web Services Region.</p> <p>You retrieve
     * archived virtual tapes to only one gateway and the gateway must be a tape
     * gateway.</p>
     */
    inline RetrieveTapeArchiveRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

  private:

    Aws::String m_tapeARN;
    bool m_tapeARNHasBeenSet = false;

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class DescribeGatewayRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API DescribeGatewayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeGateway"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    /**
     * The Amazon Resource Name (ARN) of the gateway that you want to describe.
     */
    inline const Aws::String& GetGatewayArn() const{ return m_gatewayArn; }

    /**
     * The Amazon Resource Name (ARN) of the gateway that you want to describe.
     */
    inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of the gateway that you want to describe.
     */
    inline void SetGatewayArn(const Aws::String& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the gateway that you want to describe.
     */
    inline void SetGatewayArn(Aws::String&& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the gateway that you want to describe.
     */
    inline void SetGatewayArn(const char* value) { m_gatewayArnHasBeenSet = true; m_gatewayArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the gateway that you want to describe.
     */
    inline DescribeGatewayRequest& WithGatewayArn(const Aws::String& value) { SetGatewayArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the gateway that you want to describe.
     */
    inline DescribeGatewayRequest& WithGatewayArn(Aws::String&& value) { SetGatewayArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the gateway that you want to describe.
     */
    inline DescribeGatewayRequest& WithGatewayArn(const char* value) { SetGatewayArn(value); return *this;}

  private:

    Aws::String m_gatewayArn;
    bool m_gatewayArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws

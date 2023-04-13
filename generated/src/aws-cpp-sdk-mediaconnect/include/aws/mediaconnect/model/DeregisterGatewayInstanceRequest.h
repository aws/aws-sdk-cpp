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
namespace Http
{
    class URI;
} //namespace Http
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class DeregisterGatewayInstanceRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API DeregisterGatewayInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterGatewayInstance"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;

    AWS_MEDIACONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * Force the deregistration of an instance. Force will deregister an instance, even
     * if there are bridges running on it.
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * Force the deregistration of an instance. Force will deregister an instance, even
     * if there are bridges running on it.
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * Force the deregistration of an instance. Force will deregister an instance, even
     * if there are bridges running on it.
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * Force the deregistration of an instance. Force will deregister an instance, even
     * if there are bridges running on it.
     */
    inline DeregisterGatewayInstanceRequest& WithForce(bool value) { SetForce(value); return *this;}


    /**
     * The Amazon Resource Name (ARN) of the gateway that contains the instance that
     * you want to deregister.
     */
    inline const Aws::String& GetGatewayInstanceArn() const{ return m_gatewayInstanceArn; }

    /**
     * The Amazon Resource Name (ARN) of the gateway that contains the instance that
     * you want to deregister.
     */
    inline bool GatewayInstanceArnHasBeenSet() const { return m_gatewayInstanceArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of the gateway that contains the instance that
     * you want to deregister.
     */
    inline void SetGatewayInstanceArn(const Aws::String& value) { m_gatewayInstanceArnHasBeenSet = true; m_gatewayInstanceArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the gateway that contains the instance that
     * you want to deregister.
     */
    inline void SetGatewayInstanceArn(Aws::String&& value) { m_gatewayInstanceArnHasBeenSet = true; m_gatewayInstanceArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the gateway that contains the instance that
     * you want to deregister.
     */
    inline void SetGatewayInstanceArn(const char* value) { m_gatewayInstanceArnHasBeenSet = true; m_gatewayInstanceArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the gateway that contains the instance that
     * you want to deregister.
     */
    inline DeregisterGatewayInstanceRequest& WithGatewayInstanceArn(const Aws::String& value) { SetGatewayInstanceArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the gateway that contains the instance that
     * you want to deregister.
     */
    inline DeregisterGatewayInstanceRequest& WithGatewayInstanceArn(Aws::String&& value) { SetGatewayInstanceArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the gateway that contains the instance that
     * you want to deregister.
     */
    inline DeregisterGatewayInstanceRequest& WithGatewayInstanceArn(const char* value) { SetGatewayInstanceArn(value); return *this;}

  private:

    bool m_force;
    bool m_forceHasBeenSet = false;

    Aws::String m_gatewayInstanceArn;
    bool m_gatewayInstanceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws

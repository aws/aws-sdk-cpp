/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/GatewayState.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * Provides a summary of a gateway, including its name, ARN, and status.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ListedGateway">AWS
   * API Reference</a></p>
   */
  class ListedGateway
  {
  public:
    AWS_MEDIACONNECT_API ListedGateway();
    AWS_MEDIACONNECT_API ListedGateway(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API ListedGateway& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The Amazon Resource Name (ARN) of the gateway.
     */
    inline const Aws::String& GetGatewayArn() const{ return m_gatewayArn; }

    /**
     * The Amazon Resource Name (ARN) of the gateway.
     */
    inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of the gateway.
     */
    inline void SetGatewayArn(const Aws::String& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the gateway.
     */
    inline void SetGatewayArn(Aws::String&& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the gateway.
     */
    inline void SetGatewayArn(const char* value) { m_gatewayArnHasBeenSet = true; m_gatewayArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the gateway.
     */
    inline ListedGateway& WithGatewayArn(const Aws::String& value) { SetGatewayArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the gateway.
     */
    inline ListedGateway& WithGatewayArn(Aws::String&& value) { SetGatewayArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the gateway.
     */
    inline ListedGateway& WithGatewayArn(const char* value) { SetGatewayArn(value); return *this;}


    
    inline const GatewayState& GetGatewayState() const{ return m_gatewayState; }

    
    inline bool GatewayStateHasBeenSet() const { return m_gatewayStateHasBeenSet; }

    
    inline void SetGatewayState(const GatewayState& value) { m_gatewayStateHasBeenSet = true; m_gatewayState = value; }

    
    inline void SetGatewayState(GatewayState&& value) { m_gatewayStateHasBeenSet = true; m_gatewayState = std::move(value); }

    
    inline ListedGateway& WithGatewayState(const GatewayState& value) { SetGatewayState(value); return *this;}

    
    inline ListedGateway& WithGatewayState(GatewayState&& value) { SetGatewayState(std::move(value)); return *this;}


    /**
     * The name of the gateway.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the gateway.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the gateway.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the gateway.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the gateway.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the gateway.
     */
    inline ListedGateway& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the gateway.
     */
    inline ListedGateway& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the gateway.
     */
    inline ListedGateway& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_gatewayArn;
    bool m_gatewayArnHasBeenSet = false;

    GatewayState m_gatewayState;
    bool m_gatewayStateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws

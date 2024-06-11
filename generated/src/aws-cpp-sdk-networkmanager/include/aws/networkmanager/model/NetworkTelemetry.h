/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/ConnectionHealth.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes the telemetry information for a resource.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/NetworkTelemetry">AWS
   * API Reference</a></p>
   */
  class NetworkTelemetry
  {
  public:
    AWS_NETWORKMANAGER_API NetworkTelemetry();
    AWS_NETWORKMANAGER_API NetworkTelemetry(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API NetworkTelemetry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the gateway.</p>
     */
    inline const Aws::String& GetRegisteredGatewayArn() const{ return m_registeredGatewayArn; }
    inline bool RegisteredGatewayArnHasBeenSet() const { return m_registeredGatewayArnHasBeenSet; }
    inline void SetRegisteredGatewayArn(const Aws::String& value) { m_registeredGatewayArnHasBeenSet = true; m_registeredGatewayArn = value; }
    inline void SetRegisteredGatewayArn(Aws::String&& value) { m_registeredGatewayArnHasBeenSet = true; m_registeredGatewayArn = std::move(value); }
    inline void SetRegisteredGatewayArn(const char* value) { m_registeredGatewayArnHasBeenSet = true; m_registeredGatewayArn.assign(value); }
    inline NetworkTelemetry& WithRegisteredGatewayArn(const Aws::String& value) { SetRegisteredGatewayArn(value); return *this;}
    inline NetworkTelemetry& WithRegisteredGatewayArn(Aws::String&& value) { SetRegisteredGatewayArn(std::move(value)); return *this;}
    inline NetworkTelemetry& WithRegisteredGatewayArn(const char* value) { SetRegisteredGatewayArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const{ return m_coreNetworkId; }
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }
    inline void SetCoreNetworkId(const Aws::String& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = value; }
    inline void SetCoreNetworkId(Aws::String&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::move(value); }
    inline void SetCoreNetworkId(const char* value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId.assign(value); }
    inline NetworkTelemetry& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}
    inline NetworkTelemetry& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}
    inline NetworkTelemetry& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }
    inline NetworkTelemetry& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}
    inline NetworkTelemetry& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}
    inline NetworkTelemetry& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline NetworkTelemetry& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline NetworkTelemetry& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline NetworkTelemetry& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }
    inline NetworkTelemetry& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline NetworkTelemetry& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline NetworkTelemetry& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline NetworkTelemetry& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline NetworkTelemetry& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline NetworkTelemetry& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline NetworkTelemetry& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline NetworkTelemetry& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline NetworkTelemetry& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }
    inline NetworkTelemetry& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}
    inline NetworkTelemetry& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}
    inline NetworkTelemetry& WithAddress(const char* value) { SetAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection health.</p>
     */
    inline const ConnectionHealth& GetHealth() const{ return m_health; }
    inline bool HealthHasBeenSet() const { return m_healthHasBeenSet; }
    inline void SetHealth(const ConnectionHealth& value) { m_healthHasBeenSet = true; m_health = value; }
    inline void SetHealth(ConnectionHealth&& value) { m_healthHasBeenSet = true; m_health = std::move(value); }
    inline NetworkTelemetry& WithHealth(const ConnectionHealth& value) { SetHealth(value); return *this;}
    inline NetworkTelemetry& WithHealth(ConnectionHealth&& value) { SetHealth(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_registeredGatewayArn;
    bool m_registeredGatewayArnHasBeenSet = false;

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    ConnectionHealth m_health;
    bool m_healthHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws

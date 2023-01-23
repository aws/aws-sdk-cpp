/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/networkmanager/model/Tag.h>
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
   * <p>Describes a network resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/NetworkResource">AWS
   * API Reference</a></p>
   */
  class NetworkResource
  {
  public:
    AWS_NETWORKMANAGER_API NetworkResource();
    AWS_NETWORKMANAGER_API NetworkResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API NetworkResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the gateway.</p>
     */
    inline const Aws::String& GetRegisteredGatewayArn() const{ return m_registeredGatewayArn; }

    /**
     * <p>The ARN of the gateway.</p>
     */
    inline bool RegisteredGatewayArnHasBeenSet() const { return m_registeredGatewayArnHasBeenSet; }

    /**
     * <p>The ARN of the gateway.</p>
     */
    inline void SetRegisteredGatewayArn(const Aws::String& value) { m_registeredGatewayArnHasBeenSet = true; m_registeredGatewayArn = value; }

    /**
     * <p>The ARN of the gateway.</p>
     */
    inline void SetRegisteredGatewayArn(Aws::String&& value) { m_registeredGatewayArnHasBeenSet = true; m_registeredGatewayArn = std::move(value); }

    /**
     * <p>The ARN of the gateway.</p>
     */
    inline void SetRegisteredGatewayArn(const char* value) { m_registeredGatewayArnHasBeenSet = true; m_registeredGatewayArn.assign(value); }

    /**
     * <p>The ARN of the gateway.</p>
     */
    inline NetworkResource& WithRegisteredGatewayArn(const Aws::String& value) { SetRegisteredGatewayArn(value); return *this;}

    /**
     * <p>The ARN of the gateway.</p>
     */
    inline NetworkResource& WithRegisteredGatewayArn(Aws::String&& value) { SetRegisteredGatewayArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the gateway.</p>
     */
    inline NetworkResource& WithRegisteredGatewayArn(const char* value) { SetRegisteredGatewayArn(value); return *this;}


    /**
     * <p>The ID of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const{ return m_coreNetworkId; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(const Aws::String& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = value; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(Aws::String&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::move(value); }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(const char* value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId.assign(value); }

    /**
     * <p>The ID of a core network.</p>
     */
    inline NetworkResource& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline NetworkResource& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline NetworkResource& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}


    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline NetworkResource& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline NetworkResource& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline NetworkResource& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline NetworkResource& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline NetworkResource& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline NetworkResource& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The resource type.</p> <p>The following are the supported resource types for
     * Direct Connect:</p> <ul> <li> <p> <code>dxcon</code> </p> </li> <li> <p>
     * <code>dx-gateway</code> </p> </li> <li> <p> <code>dx-vif</code> </p> </li> </ul>
     * <p>The following are the supported resource types for Network Manager:</p> <ul>
     * <li> <p> <code>connection</code> </p> </li> <li> <p> <code>device</code> </p>
     * </li> <li> <p> <code>link</code> </p> </li> <li> <p> <code>site</code> </p>
     * </li> </ul> <p>The following are the supported resource types for Amazon
     * VPC:</p> <ul> <li> <p> <code>customer-gateway</code> </p> </li> <li> <p>
     * <code>transit-gateway</code> </p> </li> <li> <p>
     * <code>transit-gateway-attachment</code> </p> </li> <li> <p>
     * <code>transit-gateway-connect-peer</code> </p> </li> <li> <p>
     * <code>transit-gateway-route-table</code> </p> </li> <li> <p>
     * <code>vpn-connection</code> </p> </li> </ul>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type.</p> <p>The following are the supported resource types for
     * Direct Connect:</p> <ul> <li> <p> <code>dxcon</code> </p> </li> <li> <p>
     * <code>dx-gateway</code> </p> </li> <li> <p> <code>dx-vif</code> </p> </li> </ul>
     * <p>The following are the supported resource types for Network Manager:</p> <ul>
     * <li> <p> <code>connection</code> </p> </li> <li> <p> <code>device</code> </p>
     * </li> <li> <p> <code>link</code> </p> </li> <li> <p> <code>site</code> </p>
     * </li> </ul> <p>The following are the supported resource types for Amazon
     * VPC:</p> <ul> <li> <p> <code>customer-gateway</code> </p> </li> <li> <p>
     * <code>transit-gateway</code> </p> </li> <li> <p>
     * <code>transit-gateway-attachment</code> </p> </li> <li> <p>
     * <code>transit-gateway-connect-peer</code> </p> </li> <li> <p>
     * <code>transit-gateway-route-table</code> </p> </li> <li> <p>
     * <code>vpn-connection</code> </p> </li> </ul>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type.</p> <p>The following are the supported resource types for
     * Direct Connect:</p> <ul> <li> <p> <code>dxcon</code> </p> </li> <li> <p>
     * <code>dx-gateway</code> </p> </li> <li> <p> <code>dx-vif</code> </p> </li> </ul>
     * <p>The following are the supported resource types for Network Manager:</p> <ul>
     * <li> <p> <code>connection</code> </p> </li> <li> <p> <code>device</code> </p>
     * </li> <li> <p> <code>link</code> </p> </li> <li> <p> <code>site</code> </p>
     * </li> </ul> <p>The following are the supported resource types for Amazon
     * VPC:</p> <ul> <li> <p> <code>customer-gateway</code> </p> </li> <li> <p>
     * <code>transit-gateway</code> </p> </li> <li> <p>
     * <code>transit-gateway-attachment</code> </p> </li> <li> <p>
     * <code>transit-gateway-connect-peer</code> </p> </li> <li> <p>
     * <code>transit-gateway-route-table</code> </p> </li> <li> <p>
     * <code>vpn-connection</code> </p> </li> </ul>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type.</p> <p>The following are the supported resource types for
     * Direct Connect:</p> <ul> <li> <p> <code>dxcon</code> </p> </li> <li> <p>
     * <code>dx-gateway</code> </p> </li> <li> <p> <code>dx-vif</code> </p> </li> </ul>
     * <p>The following are the supported resource types for Network Manager:</p> <ul>
     * <li> <p> <code>connection</code> </p> </li> <li> <p> <code>device</code> </p>
     * </li> <li> <p> <code>link</code> </p> </li> <li> <p> <code>site</code> </p>
     * </li> </ul> <p>The following are the supported resource types for Amazon
     * VPC:</p> <ul> <li> <p> <code>customer-gateway</code> </p> </li> <li> <p>
     * <code>transit-gateway</code> </p> </li> <li> <p>
     * <code>transit-gateway-attachment</code> </p> </li> <li> <p>
     * <code>transit-gateway-connect-peer</code> </p> </li> <li> <p>
     * <code>transit-gateway-route-table</code> </p> </li> <li> <p>
     * <code>vpn-connection</code> </p> </li> </ul>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type.</p> <p>The following are the supported resource types for
     * Direct Connect:</p> <ul> <li> <p> <code>dxcon</code> </p> </li> <li> <p>
     * <code>dx-gateway</code> </p> </li> <li> <p> <code>dx-vif</code> </p> </li> </ul>
     * <p>The following are the supported resource types for Network Manager:</p> <ul>
     * <li> <p> <code>connection</code> </p> </li> <li> <p> <code>device</code> </p>
     * </li> <li> <p> <code>link</code> </p> </li> <li> <p> <code>site</code> </p>
     * </li> </ul> <p>The following are the supported resource types for Amazon
     * VPC:</p> <ul> <li> <p> <code>customer-gateway</code> </p> </li> <li> <p>
     * <code>transit-gateway</code> </p> </li> <li> <p>
     * <code>transit-gateway-attachment</code> </p> </li> <li> <p>
     * <code>transit-gateway-connect-peer</code> </p> </li> <li> <p>
     * <code>transit-gateway-route-table</code> </p> </li> <li> <p>
     * <code>vpn-connection</code> </p> </li> </ul>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The resource type.</p> <p>The following are the supported resource types for
     * Direct Connect:</p> <ul> <li> <p> <code>dxcon</code> </p> </li> <li> <p>
     * <code>dx-gateway</code> </p> </li> <li> <p> <code>dx-vif</code> </p> </li> </ul>
     * <p>The following are the supported resource types for Network Manager:</p> <ul>
     * <li> <p> <code>connection</code> </p> </li> <li> <p> <code>device</code> </p>
     * </li> <li> <p> <code>link</code> </p> </li> <li> <p> <code>site</code> </p>
     * </li> </ul> <p>The following are the supported resource types for Amazon
     * VPC:</p> <ul> <li> <p> <code>customer-gateway</code> </p> </li> <li> <p>
     * <code>transit-gateway</code> </p> </li> <li> <p>
     * <code>transit-gateway-attachment</code> </p> </li> <li> <p>
     * <code>transit-gateway-connect-peer</code> </p> </li> <li> <p>
     * <code>transit-gateway-route-table</code> </p> </li> <li> <p>
     * <code>vpn-connection</code> </p> </li> </ul>
     */
    inline NetworkResource& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type.</p> <p>The following are the supported resource types for
     * Direct Connect:</p> <ul> <li> <p> <code>dxcon</code> </p> </li> <li> <p>
     * <code>dx-gateway</code> </p> </li> <li> <p> <code>dx-vif</code> </p> </li> </ul>
     * <p>The following are the supported resource types for Network Manager:</p> <ul>
     * <li> <p> <code>connection</code> </p> </li> <li> <p> <code>device</code> </p>
     * </li> <li> <p> <code>link</code> </p> </li> <li> <p> <code>site</code> </p>
     * </li> </ul> <p>The following are the supported resource types for Amazon
     * VPC:</p> <ul> <li> <p> <code>customer-gateway</code> </p> </li> <li> <p>
     * <code>transit-gateway</code> </p> </li> <li> <p>
     * <code>transit-gateway-attachment</code> </p> </li> <li> <p>
     * <code>transit-gateway-connect-peer</code> </p> </li> <li> <p>
     * <code>transit-gateway-route-table</code> </p> </li> <li> <p>
     * <code>vpn-connection</code> </p> </li> </ul>
     */
    inline NetworkResource& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource type.</p> <p>The following are the supported resource types for
     * Direct Connect:</p> <ul> <li> <p> <code>dxcon</code> </p> </li> <li> <p>
     * <code>dx-gateway</code> </p> </li> <li> <p> <code>dx-vif</code> </p> </li> </ul>
     * <p>The following are the supported resource types for Network Manager:</p> <ul>
     * <li> <p> <code>connection</code> </p> </li> <li> <p> <code>device</code> </p>
     * </li> <li> <p> <code>link</code> </p> </li> <li> <p> <code>site</code> </p>
     * </li> </ul> <p>The following are the supported resource types for Amazon
     * VPC:</p> <ul> <li> <p> <code>customer-gateway</code> </p> </li> <li> <p>
     * <code>transit-gateway</code> </p> </li> <li> <p>
     * <code>transit-gateway-attachment</code> </p> </li> <li> <p>
     * <code>transit-gateway-connect-peer</code> </p> </li> <li> <p>
     * <code>transit-gateway-route-table</code> </p> </li> <li> <p>
     * <code>vpn-connection</code> </p> </li> </ul>
     */
    inline NetworkResource& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The ID of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the resource.</p>
     */
    inline NetworkResource& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline NetworkResource& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource.</p>
     */
    inline NetworkResource& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The ARN of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline NetworkResource& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the resource.</p>
     */
    inline NetworkResource& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource.</p>
     */
    inline NetworkResource& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Information about the resource, in JSON format. Network Manager gets this
     * information by describing the resource using its Describe API call.</p>
     */
    inline const Aws::String& GetDefinition() const{ return m_definition; }

    /**
     * <p>Information about the resource, in JSON format. Network Manager gets this
     * information by describing the resource using its Describe API call.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>Information about the resource, in JSON format. Network Manager gets this
     * information by describing the resource using its Describe API call.</p>
     */
    inline void SetDefinition(const Aws::String& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>Information about the resource, in JSON format. Network Manager gets this
     * information by describing the resource using its Describe API call.</p>
     */
    inline void SetDefinition(Aws::String&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>Information about the resource, in JSON format. Network Manager gets this
     * information by describing the resource using its Describe API call.</p>
     */
    inline void SetDefinition(const char* value) { m_definitionHasBeenSet = true; m_definition.assign(value); }

    /**
     * <p>Information about the resource, in JSON format. Network Manager gets this
     * information by describing the resource using its Describe API call.</p>
     */
    inline NetworkResource& WithDefinition(const Aws::String& value) { SetDefinition(value); return *this;}

    /**
     * <p>Information about the resource, in JSON format. Network Manager gets this
     * information by describing the resource using its Describe API call.</p>
     */
    inline NetworkResource& WithDefinition(Aws::String&& value) { SetDefinition(std::move(value)); return *this;}

    /**
     * <p>Information about the resource, in JSON format. Network Manager gets this
     * information by describing the resource using its Describe API call.</p>
     */
    inline NetworkResource& WithDefinition(const char* value) { SetDefinition(value); return *this;}


    /**
     * <p>The time that the resource definition was retrieved.</p>
     */
    inline const Aws::Utils::DateTime& GetDefinitionTimestamp() const{ return m_definitionTimestamp; }

    /**
     * <p>The time that the resource definition was retrieved.</p>
     */
    inline bool DefinitionTimestampHasBeenSet() const { return m_definitionTimestampHasBeenSet; }

    /**
     * <p>The time that the resource definition was retrieved.</p>
     */
    inline void SetDefinitionTimestamp(const Aws::Utils::DateTime& value) { m_definitionTimestampHasBeenSet = true; m_definitionTimestamp = value; }

    /**
     * <p>The time that the resource definition was retrieved.</p>
     */
    inline void SetDefinitionTimestamp(Aws::Utils::DateTime&& value) { m_definitionTimestampHasBeenSet = true; m_definitionTimestamp = std::move(value); }

    /**
     * <p>The time that the resource definition was retrieved.</p>
     */
    inline NetworkResource& WithDefinitionTimestamp(const Aws::Utils::DateTime& value) { SetDefinitionTimestamp(value); return *this;}

    /**
     * <p>The time that the resource definition was retrieved.</p>
     */
    inline NetworkResource& WithDefinitionTimestamp(Aws::Utils::DateTime&& value) { SetDefinitionTimestamp(std::move(value)); return *this;}


    /**
     * <p>The tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags.</p>
     */
    inline NetworkResource& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline NetworkResource& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline NetworkResource& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline NetworkResource& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The resource metadata.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The resource metadata.</p>
     */
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }

    /**
     * <p>The resource metadata.</p>
     */
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadataHasBeenSet = true; m_metadata = value; }

    /**
     * <p>The resource metadata.</p>
     */
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }

    /**
     * <p>The resource metadata.</p>
     */
    inline NetworkResource& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}

    /**
     * <p>The resource metadata.</p>
     */
    inline NetworkResource& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The resource metadata.</p>
     */
    inline NetworkResource& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }

    /**
     * <p>The resource metadata.</p>
     */
    inline NetworkResource& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The resource metadata.</p>
     */
    inline NetworkResource& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The resource metadata.</p>
     */
    inline NetworkResource& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The resource metadata.</p>
     */
    inline NetworkResource& AddMetadata(const char* key, Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The resource metadata.</p>
     */
    inline NetworkResource& AddMetadata(Aws::String&& key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The resource metadata.</p>
     */
    inline NetworkResource& AddMetadata(const char* key, const char* value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }

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

    Aws::String m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::Utils::DateTime m_definitionTimestamp;
    bool m_definitionTimestampHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws

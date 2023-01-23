/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/NetworkResourceSummary">AWS
   * API Reference</a></p>
   */
  class NetworkResourceSummary
  {
  public:
    AWS_NETWORKMANAGER_API NetworkResourceSummary();
    AWS_NETWORKMANAGER_API NetworkResourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API NetworkResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline NetworkResourceSummary& WithRegisteredGatewayArn(const Aws::String& value) { SetRegisteredGatewayArn(value); return *this;}

    /**
     * <p>The ARN of the gateway.</p>
     */
    inline NetworkResourceSummary& WithRegisteredGatewayArn(Aws::String&& value) { SetRegisteredGatewayArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the gateway.</p>
     */
    inline NetworkResourceSummary& WithRegisteredGatewayArn(const char* value) { SetRegisteredGatewayArn(value); return *this;}


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
    inline NetworkResourceSummary& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the resource.</p>
     */
    inline NetworkResourceSummary& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource.</p>
     */
    inline NetworkResourceSummary& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The resource type.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The resource type.</p>
     */
    inline NetworkResourceSummary& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type.</p>
     */
    inline NetworkResourceSummary& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource type.</p>
     */
    inline NetworkResourceSummary& WithResourceType(const char* value) { SetResourceType(value); return *this;}


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
    inline NetworkResourceSummary& WithDefinition(const Aws::String& value) { SetDefinition(value); return *this;}

    /**
     * <p>Information about the resource, in JSON format. Network Manager gets this
     * information by describing the resource using its Describe API call.</p>
     */
    inline NetworkResourceSummary& WithDefinition(Aws::String&& value) { SetDefinition(std::move(value)); return *this;}

    /**
     * <p>Information about the resource, in JSON format. Network Manager gets this
     * information by describing the resource using its Describe API call.</p>
     */
    inline NetworkResourceSummary& WithDefinition(const char* value) { SetDefinition(value); return *this;}


    /**
     * <p>The value for the Name tag.</p>
     */
    inline const Aws::String& GetNameTag() const{ return m_nameTag; }

    /**
     * <p>The value for the Name tag.</p>
     */
    inline bool NameTagHasBeenSet() const { return m_nameTagHasBeenSet; }

    /**
     * <p>The value for the Name tag.</p>
     */
    inline void SetNameTag(const Aws::String& value) { m_nameTagHasBeenSet = true; m_nameTag = value; }

    /**
     * <p>The value for the Name tag.</p>
     */
    inline void SetNameTag(Aws::String&& value) { m_nameTagHasBeenSet = true; m_nameTag = std::move(value); }

    /**
     * <p>The value for the Name tag.</p>
     */
    inline void SetNameTag(const char* value) { m_nameTagHasBeenSet = true; m_nameTag.assign(value); }

    /**
     * <p>The value for the Name tag.</p>
     */
    inline NetworkResourceSummary& WithNameTag(const Aws::String& value) { SetNameTag(value); return *this;}

    /**
     * <p>The value for the Name tag.</p>
     */
    inline NetworkResourceSummary& WithNameTag(Aws::String&& value) { SetNameTag(std::move(value)); return *this;}

    /**
     * <p>The value for the Name tag.</p>
     */
    inline NetworkResourceSummary& WithNameTag(const char* value) { SetNameTag(value); return *this;}


    /**
     * <p>Indicates whether this is a middlebox appliance.</p>
     */
    inline bool GetIsMiddlebox() const{ return m_isMiddlebox; }

    /**
     * <p>Indicates whether this is a middlebox appliance.</p>
     */
    inline bool IsMiddleboxHasBeenSet() const { return m_isMiddleboxHasBeenSet; }

    /**
     * <p>Indicates whether this is a middlebox appliance.</p>
     */
    inline void SetIsMiddlebox(bool value) { m_isMiddleboxHasBeenSet = true; m_isMiddlebox = value; }

    /**
     * <p>Indicates whether this is a middlebox appliance.</p>
     */
    inline NetworkResourceSummary& WithIsMiddlebox(bool value) { SetIsMiddlebox(value); return *this;}

  private:

    Aws::String m_registeredGatewayArn;
    bool m_registeredGatewayArnHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::String m_nameTag;
    bool m_nameTagHasBeenSet = false;

    bool m_isMiddlebox;
    bool m_isMiddleboxHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws

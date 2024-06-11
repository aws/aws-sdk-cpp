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


    ///@{
    /**
     * <p>The ARN of the gateway.</p>
     */
    inline const Aws::String& GetRegisteredGatewayArn() const{ return m_registeredGatewayArn; }
    inline bool RegisteredGatewayArnHasBeenSet() const { return m_registeredGatewayArnHasBeenSet; }
    inline void SetRegisteredGatewayArn(const Aws::String& value) { m_registeredGatewayArnHasBeenSet = true; m_registeredGatewayArn = value; }
    inline void SetRegisteredGatewayArn(Aws::String&& value) { m_registeredGatewayArnHasBeenSet = true; m_registeredGatewayArn = std::move(value); }
    inline void SetRegisteredGatewayArn(const char* value) { m_registeredGatewayArnHasBeenSet = true; m_registeredGatewayArn.assign(value); }
    inline NetworkResourceSummary& WithRegisteredGatewayArn(const Aws::String& value) { SetRegisteredGatewayArn(value); return *this;}
    inline NetworkResourceSummary& WithRegisteredGatewayArn(Aws::String&& value) { SetRegisteredGatewayArn(std::move(value)); return *this;}
    inline NetworkResourceSummary& WithRegisteredGatewayArn(const char* value) { SetRegisteredGatewayArn(value); return *this;}
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
    inline NetworkResourceSummary& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline NetworkResourceSummary& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline NetworkResourceSummary& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
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
    inline NetworkResourceSummary& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}
    inline NetworkResourceSummary& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}
    inline NetworkResourceSummary& WithResourceType(const char* value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the resource, in JSON format. Network Manager gets this
     * information by describing the resource using its Describe API call.</p>
     */
    inline const Aws::String& GetDefinition() const{ return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    inline void SetDefinition(const Aws::String& value) { m_definitionHasBeenSet = true; m_definition = value; }
    inline void SetDefinition(Aws::String&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }
    inline void SetDefinition(const char* value) { m_definitionHasBeenSet = true; m_definition.assign(value); }
    inline NetworkResourceSummary& WithDefinition(const Aws::String& value) { SetDefinition(value); return *this;}
    inline NetworkResourceSummary& WithDefinition(Aws::String&& value) { SetDefinition(std::move(value)); return *this;}
    inline NetworkResourceSummary& WithDefinition(const char* value) { SetDefinition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the Name tag.</p>
     */
    inline const Aws::String& GetNameTag() const{ return m_nameTag; }
    inline bool NameTagHasBeenSet() const { return m_nameTagHasBeenSet; }
    inline void SetNameTag(const Aws::String& value) { m_nameTagHasBeenSet = true; m_nameTag = value; }
    inline void SetNameTag(Aws::String&& value) { m_nameTagHasBeenSet = true; m_nameTag = std::move(value); }
    inline void SetNameTag(const char* value) { m_nameTagHasBeenSet = true; m_nameTag.assign(value); }
    inline NetworkResourceSummary& WithNameTag(const Aws::String& value) { SetNameTag(value); return *this;}
    inline NetworkResourceSummary& WithNameTag(Aws::String&& value) { SetNameTag(std::move(value)); return *this;}
    inline NetworkResourceSummary& WithNameTag(const char* value) { SetNameTag(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this is a middlebox appliance.</p>
     */
    inline bool GetIsMiddlebox() const{ return m_isMiddlebox; }
    inline bool IsMiddleboxHasBeenSet() const { return m_isMiddleboxHasBeenSet; }
    inline void SetIsMiddlebox(bool value) { m_isMiddleboxHasBeenSet = true; m_isMiddlebox = value; }
    inline NetworkResourceSummary& WithIsMiddlebox(bool value) { SetIsMiddlebox(value); return *this;}
    ///@}
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

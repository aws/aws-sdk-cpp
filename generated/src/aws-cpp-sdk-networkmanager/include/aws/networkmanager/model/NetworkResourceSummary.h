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
    AWS_NETWORKMANAGER_API NetworkResourceSummary() = default;
    AWS_NETWORKMANAGER_API NetworkResourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API NetworkResourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the gateway.</p>
     */
    inline const Aws::String& GetRegisteredGatewayArn() const { return m_registeredGatewayArn; }
    inline bool RegisteredGatewayArnHasBeenSet() const { return m_registeredGatewayArnHasBeenSet; }
    template<typename RegisteredGatewayArnT = Aws::String>
    void SetRegisteredGatewayArn(RegisteredGatewayArnT&& value) { m_registeredGatewayArnHasBeenSet = true; m_registeredGatewayArn = std::forward<RegisteredGatewayArnT>(value); }
    template<typename RegisteredGatewayArnT = Aws::String>
    NetworkResourceSummary& WithRegisteredGatewayArn(RegisteredGatewayArnT&& value) { SetRegisteredGatewayArn(std::forward<RegisteredGatewayArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    NetworkResourceSummary& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    NetworkResourceSummary& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the resource, in JSON format. Network Manager gets this
     * information by describing the resource using its Describe API call.</p>
     */
    inline const Aws::String& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = Aws::String>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = Aws::String>
    NetworkResourceSummary& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the Name tag.</p>
     */
    inline const Aws::String& GetNameTag() const { return m_nameTag; }
    inline bool NameTagHasBeenSet() const { return m_nameTagHasBeenSet; }
    template<typename NameTagT = Aws::String>
    void SetNameTag(NameTagT&& value) { m_nameTagHasBeenSet = true; m_nameTag = std::forward<NameTagT>(value); }
    template<typename NameTagT = Aws::String>
    NetworkResourceSummary& WithNameTag(NameTagT&& value) { SetNameTag(std::forward<NameTagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this is a middlebox appliance.</p>
     */
    inline bool GetIsMiddlebox() const { return m_isMiddlebox; }
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

    bool m_isMiddlebox{false};
    bool m_isMiddleboxHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/states/model/RoutingConfigurationListItem.h>
#include <utility>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class CreateStateMachineAliasRequest : public SFNRequest
  {
  public:
    AWS_SFN_API CreateStateMachineAliasRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStateMachineAlias"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A description for the state machine alias.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateStateMachineAliasRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the state machine alias.</p> <p>To avoid conflict with version
     * ARNs, don't use an integer in the name of the alias.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateStateMachineAliasRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routing configuration of a state machine alias. The routing configuration
     * shifts execution traffic between two state machine versions.
     * <code>routingConfiguration</code> contains an array of
     * <code>RoutingConfig</code> objects that specify up to two state machine
     * versions. Step Functions then randomly choses which version to run an execution
     * with based on the weight assigned to each <code>RoutingConfig</code>.</p>
     */
    inline const Aws::Vector<RoutingConfigurationListItem>& GetRoutingConfiguration() const { return m_routingConfiguration; }
    inline bool RoutingConfigurationHasBeenSet() const { return m_routingConfigurationHasBeenSet; }
    template<typename RoutingConfigurationT = Aws::Vector<RoutingConfigurationListItem>>
    void SetRoutingConfiguration(RoutingConfigurationT&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = std::forward<RoutingConfigurationT>(value); }
    template<typename RoutingConfigurationT = Aws::Vector<RoutingConfigurationListItem>>
    CreateStateMachineAliasRequest& WithRoutingConfiguration(RoutingConfigurationT&& value) { SetRoutingConfiguration(std::forward<RoutingConfigurationT>(value)); return *this;}
    template<typename RoutingConfigurationT = RoutingConfigurationListItem>
    CreateStateMachineAliasRequest& AddRoutingConfiguration(RoutingConfigurationT&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.emplace_back(std::forward<RoutingConfigurationT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<RoutingConfigurationListItem> m_routingConfiguration;
    bool m_routingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws

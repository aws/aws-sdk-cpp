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
    AWS_SFN_API CreateStateMachineAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStateMachineAlias"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A description for the state machine alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the state machine alias.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the state machine alias.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the state machine alias.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the state machine alias.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the state machine alias.</p>
     */
    inline CreateStateMachineAliasRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the state machine alias.</p>
     */
    inline CreateStateMachineAliasRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the state machine alias.</p>
     */
    inline CreateStateMachineAliasRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the state machine alias.</p> <p>To avoid conflict with version
     * ARNs, don't use an integer in the name of the alias.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the state machine alias.</p> <p>To avoid conflict with version
     * ARNs, don't use an integer in the name of the alias.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the state machine alias.</p> <p>To avoid conflict with version
     * ARNs, don't use an integer in the name of the alias.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the state machine alias.</p> <p>To avoid conflict with version
     * ARNs, don't use an integer in the name of the alias.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the state machine alias.</p> <p>To avoid conflict with version
     * ARNs, don't use an integer in the name of the alias.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the state machine alias.</p> <p>To avoid conflict with version
     * ARNs, don't use an integer in the name of the alias.</p>
     */
    inline CreateStateMachineAliasRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the state machine alias.</p> <p>To avoid conflict with version
     * ARNs, don't use an integer in the name of the alias.</p>
     */
    inline CreateStateMachineAliasRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the state machine alias.</p> <p>To avoid conflict with version
     * ARNs, don't use an integer in the name of the alias.</p>
     */
    inline CreateStateMachineAliasRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The routing configuration of a state machine alias. The routing configuration
     * shifts execution traffic between two state machine versions.
     * <code>routingConfiguration</code> contains an array of
     * <code>RoutingConfig</code> objects that specify up to two state machine
     * versions. Step Functions then randomly choses which version to run an execution
     * with based on the weight assigned to each <code>RoutingConfig</code>.</p>
     */
    inline const Aws::Vector<RoutingConfigurationListItem>& GetRoutingConfiguration() const{ return m_routingConfiguration; }

    /**
     * <p>The routing configuration of a state machine alias. The routing configuration
     * shifts execution traffic between two state machine versions.
     * <code>routingConfiguration</code> contains an array of
     * <code>RoutingConfig</code> objects that specify up to two state machine
     * versions. Step Functions then randomly choses which version to run an execution
     * with based on the weight assigned to each <code>RoutingConfig</code>.</p>
     */
    inline bool RoutingConfigurationHasBeenSet() const { return m_routingConfigurationHasBeenSet; }

    /**
     * <p>The routing configuration of a state machine alias. The routing configuration
     * shifts execution traffic between two state machine versions.
     * <code>routingConfiguration</code> contains an array of
     * <code>RoutingConfig</code> objects that specify up to two state machine
     * versions. Step Functions then randomly choses which version to run an execution
     * with based on the weight assigned to each <code>RoutingConfig</code>.</p>
     */
    inline void SetRoutingConfiguration(const Aws::Vector<RoutingConfigurationListItem>& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = value; }

    /**
     * <p>The routing configuration of a state machine alias. The routing configuration
     * shifts execution traffic between two state machine versions.
     * <code>routingConfiguration</code> contains an array of
     * <code>RoutingConfig</code> objects that specify up to two state machine
     * versions. Step Functions then randomly choses which version to run an execution
     * with based on the weight assigned to each <code>RoutingConfig</code>.</p>
     */
    inline void SetRoutingConfiguration(Aws::Vector<RoutingConfigurationListItem>&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = std::move(value); }

    /**
     * <p>The routing configuration of a state machine alias. The routing configuration
     * shifts execution traffic between two state machine versions.
     * <code>routingConfiguration</code> contains an array of
     * <code>RoutingConfig</code> objects that specify up to two state machine
     * versions. Step Functions then randomly choses which version to run an execution
     * with based on the weight assigned to each <code>RoutingConfig</code>.</p>
     */
    inline CreateStateMachineAliasRequest& WithRoutingConfiguration(const Aws::Vector<RoutingConfigurationListItem>& value) { SetRoutingConfiguration(value); return *this;}

    /**
     * <p>The routing configuration of a state machine alias. The routing configuration
     * shifts execution traffic between two state machine versions.
     * <code>routingConfiguration</code> contains an array of
     * <code>RoutingConfig</code> objects that specify up to two state machine
     * versions. Step Functions then randomly choses which version to run an execution
     * with based on the weight assigned to each <code>RoutingConfig</code>.</p>
     */
    inline CreateStateMachineAliasRequest& WithRoutingConfiguration(Aws::Vector<RoutingConfigurationListItem>&& value) { SetRoutingConfiguration(std::move(value)); return *this;}

    /**
     * <p>The routing configuration of a state machine alias. The routing configuration
     * shifts execution traffic between two state machine versions.
     * <code>routingConfiguration</code> contains an array of
     * <code>RoutingConfig</code> objects that specify up to two state machine
     * versions. Step Functions then randomly choses which version to run an execution
     * with based on the weight assigned to each <code>RoutingConfig</code>.</p>
     */
    inline CreateStateMachineAliasRequest& AddRoutingConfiguration(const RoutingConfigurationListItem& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.push_back(value); return *this; }

    /**
     * <p>The routing configuration of a state machine alias. The routing configuration
     * shifts execution traffic between two state machine versions.
     * <code>routingConfiguration</code> contains an array of
     * <code>RoutingConfig</code> objects that specify up to two state machine
     * versions. Step Functions then randomly choses which version to run an execution
     * with based on the weight assigned to each <code>RoutingConfig</code>.</p>
     */
    inline CreateStateMachineAliasRequest& AddRoutingConfiguration(RoutingConfigurationListItem&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.push_back(std::move(value)); return *this; }

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

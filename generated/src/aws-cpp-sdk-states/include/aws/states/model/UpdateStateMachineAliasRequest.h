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
  class UpdateStateMachineAliasRequest : public SFNRequest
  {
  public:
    AWS_SFN_API UpdateStateMachineAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStateMachineAlias"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias.</p>
     */
    inline const Aws::String& GetStateMachineAliasArn() const{ return m_stateMachineAliasArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias.</p>
     */
    inline bool StateMachineAliasArnHasBeenSet() const { return m_stateMachineAliasArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias.</p>
     */
    inline void SetStateMachineAliasArn(const Aws::String& value) { m_stateMachineAliasArnHasBeenSet = true; m_stateMachineAliasArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias.</p>
     */
    inline void SetStateMachineAliasArn(Aws::String&& value) { m_stateMachineAliasArnHasBeenSet = true; m_stateMachineAliasArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias.</p>
     */
    inline void SetStateMachineAliasArn(const char* value) { m_stateMachineAliasArnHasBeenSet = true; m_stateMachineAliasArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias.</p>
     */
    inline UpdateStateMachineAliasRequest& WithStateMachineAliasArn(const Aws::String& value) { SetStateMachineAliasArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias.</p>
     */
    inline UpdateStateMachineAliasRequest& WithStateMachineAliasArn(Aws::String&& value) { SetStateMachineAliasArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias.</p>
     */
    inline UpdateStateMachineAliasRequest& WithStateMachineAliasArn(const char* value) { SetStateMachineAliasArn(value); return *this;}


    /**
     * <p>A description of the state machine alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the state machine alias.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the state machine alias.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the state machine alias.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the state machine alias.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the state machine alias.</p>
     */
    inline UpdateStateMachineAliasRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the state machine alias.</p>
     */
    inline UpdateStateMachineAliasRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the state machine alias.</p>
     */
    inline UpdateStateMachineAliasRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The routing configuration of the state machine alias.</p> <p>An array of
     * <code>RoutingConfig</code> objects that specifies up to two state machine
     * versions that the alias starts executions for.</p>
     */
    inline const Aws::Vector<RoutingConfigurationListItem>& GetRoutingConfiguration() const{ return m_routingConfiguration; }

    /**
     * <p>The routing configuration of the state machine alias.</p> <p>An array of
     * <code>RoutingConfig</code> objects that specifies up to two state machine
     * versions that the alias starts executions for.</p>
     */
    inline bool RoutingConfigurationHasBeenSet() const { return m_routingConfigurationHasBeenSet; }

    /**
     * <p>The routing configuration of the state machine alias.</p> <p>An array of
     * <code>RoutingConfig</code> objects that specifies up to two state machine
     * versions that the alias starts executions for.</p>
     */
    inline void SetRoutingConfiguration(const Aws::Vector<RoutingConfigurationListItem>& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = value; }

    /**
     * <p>The routing configuration of the state machine alias.</p> <p>An array of
     * <code>RoutingConfig</code> objects that specifies up to two state machine
     * versions that the alias starts executions for.</p>
     */
    inline void SetRoutingConfiguration(Aws::Vector<RoutingConfigurationListItem>&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = std::move(value); }

    /**
     * <p>The routing configuration of the state machine alias.</p> <p>An array of
     * <code>RoutingConfig</code> objects that specifies up to two state machine
     * versions that the alias starts executions for.</p>
     */
    inline UpdateStateMachineAliasRequest& WithRoutingConfiguration(const Aws::Vector<RoutingConfigurationListItem>& value) { SetRoutingConfiguration(value); return *this;}

    /**
     * <p>The routing configuration of the state machine alias.</p> <p>An array of
     * <code>RoutingConfig</code> objects that specifies up to two state machine
     * versions that the alias starts executions for.</p>
     */
    inline UpdateStateMachineAliasRequest& WithRoutingConfiguration(Aws::Vector<RoutingConfigurationListItem>&& value) { SetRoutingConfiguration(std::move(value)); return *this;}

    /**
     * <p>The routing configuration of the state machine alias.</p> <p>An array of
     * <code>RoutingConfig</code> objects that specifies up to two state machine
     * versions that the alias starts executions for.</p>
     */
    inline UpdateStateMachineAliasRequest& AddRoutingConfiguration(const RoutingConfigurationListItem& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.push_back(value); return *this; }

    /**
     * <p>The routing configuration of the state machine alias.</p> <p>An array of
     * <code>RoutingConfig</code> objects that specifies up to two state machine
     * versions that the alias starts executions for.</p>
     */
    inline UpdateStateMachineAliasRequest& AddRoutingConfiguration(RoutingConfigurationListItem&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_stateMachineAliasArn;
    bool m_stateMachineAliasArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<RoutingConfigurationListItem> m_routingConfiguration;
    bool m_routingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws

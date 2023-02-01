/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/StatelessCustomActionDefinition.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A custom action that can be used for stateless packet handling.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/FirewallPolicyStatelessCustomActionsDetails">AWS
   * API Reference</a></p>
   */
  class FirewallPolicyStatelessCustomActionsDetails
  {
  public:
    AWS_SECURITYHUB_API FirewallPolicyStatelessCustomActionsDetails();
    AWS_SECURITYHUB_API FirewallPolicyStatelessCustomActionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API FirewallPolicyStatelessCustomActionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The definition of the custom action.</p>
     */
    inline const StatelessCustomActionDefinition& GetActionDefinition() const{ return m_actionDefinition; }

    /**
     * <p>The definition of the custom action.</p>
     */
    inline bool ActionDefinitionHasBeenSet() const { return m_actionDefinitionHasBeenSet; }

    /**
     * <p>The definition of the custom action.</p>
     */
    inline void SetActionDefinition(const StatelessCustomActionDefinition& value) { m_actionDefinitionHasBeenSet = true; m_actionDefinition = value; }

    /**
     * <p>The definition of the custom action.</p>
     */
    inline void SetActionDefinition(StatelessCustomActionDefinition&& value) { m_actionDefinitionHasBeenSet = true; m_actionDefinition = std::move(value); }

    /**
     * <p>The definition of the custom action.</p>
     */
    inline FirewallPolicyStatelessCustomActionsDetails& WithActionDefinition(const StatelessCustomActionDefinition& value) { SetActionDefinition(value); return *this;}

    /**
     * <p>The definition of the custom action.</p>
     */
    inline FirewallPolicyStatelessCustomActionsDetails& WithActionDefinition(StatelessCustomActionDefinition&& value) { SetActionDefinition(std::move(value)); return *this;}


    /**
     * <p>The name of the custom action.</p>
     */
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    /**
     * <p>The name of the custom action.</p>
     */
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }

    /**
     * <p>The name of the custom action.</p>
     */
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    /**
     * <p>The name of the custom action.</p>
     */
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    /**
     * <p>The name of the custom action.</p>
     */
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    /**
     * <p>The name of the custom action.</p>
     */
    inline FirewallPolicyStatelessCustomActionsDetails& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    /**
     * <p>The name of the custom action.</p>
     */
    inline FirewallPolicyStatelessCustomActionsDetails& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom action.</p>
     */
    inline FirewallPolicyStatelessCustomActionsDetails& WithActionName(const char* value) { SetActionName(value); return *this;}

  private:

    StatelessCustomActionDefinition m_actionDefinition;
    bool m_actionDefinitionHasBeenSet = false;

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

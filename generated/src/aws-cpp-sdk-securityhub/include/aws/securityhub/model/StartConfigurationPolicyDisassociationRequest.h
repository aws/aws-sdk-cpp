/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/model/Target.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class StartConfigurationPolicyDisassociationRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API StartConfigurationPolicyDisassociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartConfigurationPolicyDisassociation"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p> The identifier of the target account, organizational unit, or the root to
     * disassociate from the specified configuration. </p>
     */
    inline const Target& GetTarget() const{ return m_target; }

    /**
     * <p> The identifier of the target account, organizational unit, or the root to
     * disassociate from the specified configuration. </p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p> The identifier of the target account, organizational unit, or the root to
     * disassociate from the specified configuration. </p>
     */
    inline void SetTarget(const Target& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p> The identifier of the target account, organizational unit, or the root to
     * disassociate from the specified configuration. </p>
     */
    inline void SetTarget(Target&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p> The identifier of the target account, organizational unit, or the root to
     * disassociate from the specified configuration. </p>
     */
    inline StartConfigurationPolicyDisassociationRequest& WithTarget(const Target& value) { SetTarget(value); return *this;}

    /**
     * <p> The identifier of the target account, organizational unit, or the root to
     * disassociate from the specified configuration. </p>
     */
    inline StartConfigurationPolicyDisassociationRequest& WithTarget(Target&& value) { SetTarget(std::move(value)); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline const Aws::String& GetConfigurationPolicyIdentifier() const{ return m_configurationPolicyIdentifier; }

    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline bool ConfigurationPolicyIdentifierHasBeenSet() const { return m_configurationPolicyIdentifierHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline void SetConfigurationPolicyIdentifier(const Aws::String& value) { m_configurationPolicyIdentifierHasBeenSet = true; m_configurationPolicyIdentifier = value; }

    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline void SetConfigurationPolicyIdentifier(Aws::String&& value) { m_configurationPolicyIdentifierHasBeenSet = true; m_configurationPolicyIdentifier = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline void SetConfigurationPolicyIdentifier(const char* value) { m_configurationPolicyIdentifierHasBeenSet = true; m_configurationPolicyIdentifier.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline StartConfigurationPolicyDisassociationRequest& WithConfigurationPolicyIdentifier(const Aws::String& value) { SetConfigurationPolicyIdentifier(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline StartConfigurationPolicyDisassociationRequest& WithConfigurationPolicyIdentifier(Aws::String&& value) { SetConfigurationPolicyIdentifier(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) or universally unique identifier (UUID) of
     * the configuration policy. </p>
     */
    inline StartConfigurationPolicyDisassociationRequest& WithConfigurationPolicyIdentifier(const char* value) { SetConfigurationPolicyIdentifier(value); return *this;}

  private:

    Target m_target;
    bool m_targetHasBeenSet = false;

    Aws::String m_configurationPolicyIdentifier;
    bool m_configurationPolicyIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/model/Target.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class GetConfigurationPolicyAssociationRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API GetConfigurationPolicyAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConfigurationPolicyAssociation"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p> The target account ID, organizational unit ID, or the root ID to retrieve
     * the association for. </p>
     */
    inline const Target& GetTarget() const{ return m_target; }

    /**
     * <p> The target account ID, organizational unit ID, or the root ID to retrieve
     * the association for. </p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p> The target account ID, organizational unit ID, or the root ID to retrieve
     * the association for. </p>
     */
    inline void SetTarget(const Target& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p> The target account ID, organizational unit ID, or the root ID to retrieve
     * the association for. </p>
     */
    inline void SetTarget(Target&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p> The target account ID, organizational unit ID, or the root ID to retrieve
     * the association for. </p>
     */
    inline GetConfigurationPolicyAssociationRequest& WithTarget(const Target& value) { SetTarget(value); return *this;}

    /**
     * <p> The target account ID, organizational unit ID, or the root ID to retrieve
     * the association for. </p>
     */
    inline GetConfigurationPolicyAssociationRequest& WithTarget(Target&& value) { SetTarget(std::move(value)); return *this;}

  private:

    Target m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

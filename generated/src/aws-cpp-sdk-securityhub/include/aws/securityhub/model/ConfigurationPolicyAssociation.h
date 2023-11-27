/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/Target.h>
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
   * <p> Provides details about the association between an Security Hub configuration
   * and a target account, organizational unit, or the root. An association can exist
   * between a target and a configuration policy, or between a target and
   * self-managed behavior. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ConfigurationPolicyAssociation">AWS
   * API Reference</a></p>
   */
  class ConfigurationPolicyAssociation
  {
  public:
    AWS_SECURITYHUB_API ConfigurationPolicyAssociation();
    AWS_SECURITYHUB_API ConfigurationPolicyAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ConfigurationPolicyAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The target account, organizational unit, or the root. </p>
     */
    inline const Target& GetTarget() const{ return m_target; }

    /**
     * <p> The target account, organizational unit, or the root. </p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p> The target account, organizational unit, or the root. </p>
     */
    inline void SetTarget(const Target& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p> The target account, organizational unit, or the root. </p>
     */
    inline void SetTarget(Target&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p> The target account, organizational unit, or the root. </p>
     */
    inline ConfigurationPolicyAssociation& WithTarget(const Target& value) { SetTarget(value); return *this;}

    /**
     * <p> The target account, organizational unit, or the root. </p>
     */
    inline ConfigurationPolicyAssociation& WithTarget(Target&& value) { SetTarget(std::move(value)); return *this;}

  private:

    Target m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

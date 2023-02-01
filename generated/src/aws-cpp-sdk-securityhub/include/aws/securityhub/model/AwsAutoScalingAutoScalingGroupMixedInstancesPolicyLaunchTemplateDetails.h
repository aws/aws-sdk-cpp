/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails.h>
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
   * <p>Describes a launch template and overrides for a mixed instances
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails">AWS
   * API Reference</a></p>
   */
  class AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails();
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The launch template to use for a mixed instances policy.</p>
     */
    inline const AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification& GetLaunchTemplateSpecification() const{ return m_launchTemplateSpecification; }

    /**
     * <p>The launch template to use for a mixed instances policy.</p>
     */
    inline bool LaunchTemplateSpecificationHasBeenSet() const { return m_launchTemplateSpecificationHasBeenSet; }

    /**
     * <p>The launch template to use for a mixed instances policy.</p>
     */
    inline void SetLaunchTemplateSpecification(const AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification& value) { m_launchTemplateSpecificationHasBeenSet = true; m_launchTemplateSpecification = value; }

    /**
     * <p>The launch template to use for a mixed instances policy.</p>
     */
    inline void SetLaunchTemplateSpecification(AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification&& value) { m_launchTemplateSpecificationHasBeenSet = true; m_launchTemplateSpecification = std::move(value); }

    /**
     * <p>The launch template to use for a mixed instances policy.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails& WithLaunchTemplateSpecification(const AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification& value) { SetLaunchTemplateSpecification(value); return *this;}

    /**
     * <p>The launch template to use for a mixed instances policy.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails& WithLaunchTemplateSpecification(AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification&& value) { SetLaunchTemplateSpecification(std::move(value)); return *this;}


    /**
     * <p>Property values to use to override the values in the launch template.</p>
     */
    inline const Aws::Vector<AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails>& GetOverrides() const{ return m_overrides; }

    /**
     * <p>Property values to use to override the values in the launch template.</p>
     */
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }

    /**
     * <p>Property values to use to override the values in the launch template.</p>
     */
    inline void SetOverrides(const Aws::Vector<AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails>& value) { m_overridesHasBeenSet = true; m_overrides = value; }

    /**
     * <p>Property values to use to override the values in the launch template.</p>
     */
    inline void SetOverrides(Aws::Vector<AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails>&& value) { m_overridesHasBeenSet = true; m_overrides = std::move(value); }

    /**
     * <p>Property values to use to override the values in the launch template.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails& WithOverrides(const Aws::Vector<AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails>& value) { SetOverrides(value); return *this;}

    /**
     * <p>Property values to use to override the values in the launch template.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails& WithOverrides(Aws::Vector<AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails>&& value) { SetOverrides(std::move(value)); return *this;}

    /**
     * <p>Property values to use to override the values in the launch template.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails& AddOverrides(const AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails& value) { m_overridesHasBeenSet = true; m_overrides.push_back(value); return *this; }

    /**
     * <p>Property values to use to override the values in the launch template.</p>
     */
    inline AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails& AddOverrides(AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails&& value) { m_overridesHasBeenSet = true; m_overrides.push_back(std::move(value)); return *this; }

  private:

    AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification m_launchTemplateSpecification;
    bool m_launchTemplateSpecificationHasBeenSet = false;

    Aws::Vector<AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails> m_overrides;
    bool m_overridesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

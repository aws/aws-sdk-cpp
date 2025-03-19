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
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails() = default;
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The launch template to use for a mixed instances policy.</p>
     */
    inline const AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification& GetLaunchTemplateSpecification() const { return m_launchTemplateSpecification; }
    inline bool LaunchTemplateSpecificationHasBeenSet() const { return m_launchTemplateSpecificationHasBeenSet; }
    template<typename LaunchTemplateSpecificationT = AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification>
    void SetLaunchTemplateSpecification(LaunchTemplateSpecificationT&& value) { m_launchTemplateSpecificationHasBeenSet = true; m_launchTemplateSpecification = std::forward<LaunchTemplateSpecificationT>(value); }
    template<typename LaunchTemplateSpecificationT = AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification>
    AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails& WithLaunchTemplateSpecification(LaunchTemplateSpecificationT&& value) { SetLaunchTemplateSpecification(std::forward<LaunchTemplateSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Property values to use to override the values in the launch template.</p>
     */
    inline const Aws::Vector<AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails>& GetOverrides() const { return m_overrides; }
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }
    template<typename OverridesT = Aws::Vector<AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails>>
    void SetOverrides(OverridesT&& value) { m_overridesHasBeenSet = true; m_overrides = std::forward<OverridesT>(value); }
    template<typename OverridesT = Aws::Vector<AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails>>
    AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails& WithOverrides(OverridesT&& value) { SetOverrides(std::forward<OverridesT>(value)); return *this;}
    template<typename OverridesT = AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails>
    AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateDetails& AddOverrides(OverridesT&& value) { m_overridesHasBeenSet = true; m_overrides.emplace_back(std::forward<OverridesT>(value)); return *this; }
    ///@}
  private:

    AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateLaunchTemplateSpecification m_launchTemplateSpecification;
    bool m_launchTemplateSpecificationHasBeenSet = false;

    Aws::Vector<AwsAutoScalingAutoScalingGroupMixedInstancesPolicyLaunchTemplateOverridesListDetails> m_overrides;
    bool m_overridesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

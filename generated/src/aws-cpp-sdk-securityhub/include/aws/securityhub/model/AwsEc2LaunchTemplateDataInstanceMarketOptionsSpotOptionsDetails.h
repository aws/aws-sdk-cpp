/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
   * <p> Provides details about the market (purchasing) options for Spot Instances.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails() = default;
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Deprecated. </p>
     */
    inline int GetBlockDurationMinutes() const { return m_blockDurationMinutes; }
    inline bool BlockDurationMinutesHasBeenSet() const { return m_blockDurationMinutesHasBeenSet; }
    inline void SetBlockDurationMinutes(int value) { m_blockDurationMinutesHasBeenSet = true; m_blockDurationMinutes = value; }
    inline AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& WithBlockDurationMinutes(int value) { SetBlockDurationMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The behavior when a Spot Instance is interrupted. </p>
     */
    inline const Aws::String& GetInstanceInterruptionBehavior() const { return m_instanceInterruptionBehavior; }
    inline bool InstanceInterruptionBehaviorHasBeenSet() const { return m_instanceInterruptionBehaviorHasBeenSet; }
    template<typename InstanceInterruptionBehaviorT = Aws::String>
    void SetInstanceInterruptionBehavior(InstanceInterruptionBehaviorT&& value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior = std::forward<InstanceInterruptionBehaviorT>(value); }
    template<typename InstanceInterruptionBehaviorT = Aws::String>
    AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& WithInstanceInterruptionBehavior(InstanceInterruptionBehaviorT&& value) { SetInstanceInterruptionBehavior(std::forward<InstanceInterruptionBehaviorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum hourly price you're willing to pay for the Spot Instances. </p>
     */
    inline const Aws::String& GetMaxPrice() const { return m_maxPrice; }
    inline bool MaxPriceHasBeenSet() const { return m_maxPriceHasBeenSet; }
    template<typename MaxPriceT = Aws::String>
    void SetMaxPrice(MaxPriceT&& value) { m_maxPriceHasBeenSet = true; m_maxPrice = std::forward<MaxPriceT>(value); }
    template<typename MaxPriceT = Aws::String>
    AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& WithMaxPrice(MaxPriceT&& value) { SetMaxPrice(std::forward<MaxPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Spot Instance request type. </p>
     */
    inline const Aws::String& GetSpotInstanceType() const { return m_spotInstanceType; }
    inline bool SpotInstanceTypeHasBeenSet() const { return m_spotInstanceTypeHasBeenSet; }
    template<typename SpotInstanceTypeT = Aws::String>
    void SetSpotInstanceType(SpotInstanceTypeT&& value) { m_spotInstanceTypeHasBeenSet = true; m_spotInstanceType = std::forward<SpotInstanceTypeT>(value); }
    template<typename SpotInstanceTypeT = Aws::String>
    AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& WithSpotInstanceType(SpotInstanceTypeT&& value) { SetSpotInstanceType(std::forward<SpotInstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The end date of the request, in UTC format (YYYY-MM-DDTHH:MM:SSZ), for
     * persistent requests. </p>
     */
    inline const Aws::String& GetValidUntil() const { return m_validUntil; }
    inline bool ValidUntilHasBeenSet() const { return m_validUntilHasBeenSet; }
    template<typename ValidUntilT = Aws::String>
    void SetValidUntil(ValidUntilT&& value) { m_validUntilHasBeenSet = true; m_validUntil = std::forward<ValidUntilT>(value); }
    template<typename ValidUntilT = Aws::String>
    AwsEc2LaunchTemplateDataInstanceMarketOptionsSpotOptionsDetails& WithValidUntil(ValidUntilT&& value) { SetValidUntil(std::forward<ValidUntilT>(value)); return *this;}
    ///@}
  private:

    int m_blockDurationMinutes{0};
    bool m_blockDurationMinutesHasBeenSet = false;

    Aws::String m_instanceInterruptionBehavior;
    bool m_instanceInterruptionBehaviorHasBeenSet = false;

    Aws::String m_maxPrice;
    bool m_maxPriceHasBeenSet = false;

    Aws::String m_spotInstanceType;
    bool m_spotInstanceTypeHasBeenSet = false;

    Aws::String m_validUntil;
    bool m_validUntilHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

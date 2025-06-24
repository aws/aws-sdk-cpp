/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/model/InstanceInterruptionBehaviorEnum.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-instances/model/SpotInstanceTypeEnum.h>
#include <aws/core/utils/DateTime.h>
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
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Defines configuration for spot instance deployment.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/SpotMarketOptions">AWS
   * API Reference</a></p>
   */
  class SpotMarketOptions
  {
  public:
    AWS_WORKSPACESINSTANCES_API SpotMarketOptions() = default;
    AWS_WORKSPACESINSTANCES_API SpotMarketOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API SpotMarketOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Duration of spot instance block reservation.</p>
     */
    inline int GetBlockDurationMinutes() const { return m_blockDurationMinutes; }
    inline bool BlockDurationMinutesHasBeenSet() const { return m_blockDurationMinutesHasBeenSet; }
    inline void SetBlockDurationMinutes(int value) { m_blockDurationMinutesHasBeenSet = true; m_blockDurationMinutes = value; }
    inline SpotMarketOptions& WithBlockDurationMinutes(int value) { SetBlockDurationMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies behavior when spot instance is interrupted.</p>
     */
    inline InstanceInterruptionBehaviorEnum GetInstanceInterruptionBehavior() const { return m_instanceInterruptionBehavior; }
    inline bool InstanceInterruptionBehaviorHasBeenSet() const { return m_instanceInterruptionBehaviorHasBeenSet; }
    inline void SetInstanceInterruptionBehavior(InstanceInterruptionBehaviorEnum value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior = value; }
    inline SpotMarketOptions& WithInstanceInterruptionBehavior(InstanceInterruptionBehaviorEnum value) { SetInstanceInterruptionBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum hourly price for spot instance.</p>
     */
    inline const Aws::String& GetMaxPrice() const { return m_maxPrice; }
    inline bool MaxPriceHasBeenSet() const { return m_maxPriceHasBeenSet; }
    template<typename MaxPriceT = Aws::String>
    void SetMaxPrice(MaxPriceT&& value) { m_maxPriceHasBeenSet = true; m_maxPrice = std::forward<MaxPriceT>(value); }
    template<typename MaxPriceT = Aws::String>
    SpotMarketOptions& WithMaxPrice(MaxPriceT&& value) { SetMaxPrice(std::forward<MaxPriceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the type of spot instance request.</p>
     */
    inline SpotInstanceTypeEnum GetSpotInstanceType() const { return m_spotInstanceType; }
    inline bool SpotInstanceTypeHasBeenSet() const { return m_spotInstanceTypeHasBeenSet; }
    inline void SetSpotInstanceType(SpotInstanceTypeEnum value) { m_spotInstanceTypeHasBeenSet = true; m_spotInstanceType = value; }
    inline SpotMarketOptions& WithSpotInstanceType(SpotInstanceTypeEnum value) { SetSpotInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp until which spot instance request is valid.</p>
     */
    inline const Aws::Utils::DateTime& GetValidUntilUtc() const { return m_validUntilUtc; }
    inline bool ValidUntilUtcHasBeenSet() const { return m_validUntilUtcHasBeenSet; }
    template<typename ValidUntilUtcT = Aws::Utils::DateTime>
    void SetValidUntilUtc(ValidUntilUtcT&& value) { m_validUntilUtcHasBeenSet = true; m_validUntilUtc = std::forward<ValidUntilUtcT>(value); }
    template<typename ValidUntilUtcT = Aws::Utils::DateTime>
    SpotMarketOptions& WithValidUntilUtc(ValidUntilUtcT&& value) { SetValidUntilUtc(std::forward<ValidUntilUtcT>(value)); return *this;}
    ///@}
  private:

    int m_blockDurationMinutes{0};
    bool m_blockDurationMinutesHasBeenSet = false;

    InstanceInterruptionBehaviorEnum m_instanceInterruptionBehavior{InstanceInterruptionBehaviorEnum::NOT_SET};
    bool m_instanceInterruptionBehaviorHasBeenSet = false;

    Aws::String m_maxPrice;
    bool m_maxPriceHasBeenSet = false;

    SpotInstanceTypeEnum m_spotInstanceType{SpotInstanceTypeEnum::NOT_SET};
    bool m_spotInstanceTypeHasBeenSet = false;

    Aws::Utils::DateTime m_validUntilUtc{};
    bool m_validUntilUtcHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/scheduler/Scheduler_EXPORTS.h>
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
namespace Scheduler
{
namespace Model
{

  /**
   * <p>The details of a capacity provider strategy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/scheduler-2021-06-30/CapacityProviderStrategyItem">AWS
   * API Reference</a></p>
   */
  class CapacityProviderStrategyItem
  {
  public:
    AWS_SCHEDULER_API CapacityProviderStrategyItem() = default;
    AWS_SCHEDULER_API CapacityProviderStrategyItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API CapacityProviderStrategyItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEDULER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The base value designates how many tasks, at a minimum, to run on the
     * specified capacity provider. Only one capacity provider in a capacity provider
     * strategy can have a base defined. If no value is specified, the default value of
     * <code>0</code> is used.</p>
     */
    inline int GetBase() const { return m_base; }
    inline bool BaseHasBeenSet() const { return m_baseHasBeenSet; }
    inline void SetBase(int value) { m_baseHasBeenSet = true; m_base = value; }
    inline CapacityProviderStrategyItem& WithBase(int value) { SetBase(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short name of the capacity provider.</p>
     */
    inline const Aws::String& GetCapacityProvider() const { return m_capacityProvider; }
    inline bool CapacityProviderHasBeenSet() const { return m_capacityProviderHasBeenSet; }
    template<typename CapacityProviderT = Aws::String>
    void SetCapacityProvider(CapacityProviderT&& value) { m_capacityProviderHasBeenSet = true; m_capacityProvider = std::forward<CapacityProviderT>(value); }
    template<typename CapacityProviderT = Aws::String>
    CapacityProviderStrategyItem& WithCapacityProvider(CapacityProviderT&& value) { SetCapacityProvider(std::forward<CapacityProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weight value designates the relative percentage of the total number of
     * tasks launched that should use the specified capacity provider. The weight value
     * is taken into consideration after the base value, if defined, is satisfied.</p>
     */
    inline int GetWeight() const { return m_weight; }
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
    inline void SetWeight(int value) { m_weightHasBeenSet = true; m_weight = value; }
    inline CapacityProviderStrategyItem& WithWeight(int value) { SetWeight(value); return *this;}
    ///@}
  private:

    int m_base{0};
    bool m_baseHasBeenSet = false;

    Aws::String m_capacityProvider;
    bool m_capacityProviderHasBeenSet = false;

    int m_weight{0};
    bool m_weightHasBeenSet = false;
  };

} // namespace Model
} // namespace Scheduler
} // namespace Aws

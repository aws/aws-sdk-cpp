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
   * <p>Strategy item for the capacity provider strategy that the service
   * uses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsServiceCapacityProviderStrategyDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsServiceCapacityProviderStrategyDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsServiceCapacityProviderStrategyDetails();
    AWS_SECURITYHUB_API AwsEcsServiceCapacityProviderStrategyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsServiceCapacityProviderStrategyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum number of tasks to run on the capacity provider. Only one
     * strategy item can specify a value for <code>Base</code>.</p> <p>The value must
     * be between 0 and 100000.</p>
     */
    inline int GetBase() const{ return m_base; }

    /**
     * <p>The minimum number of tasks to run on the capacity provider. Only one
     * strategy item can specify a value for <code>Base</code>.</p> <p>The value must
     * be between 0 and 100000.</p>
     */
    inline bool BaseHasBeenSet() const { return m_baseHasBeenSet; }

    /**
     * <p>The minimum number of tasks to run on the capacity provider. Only one
     * strategy item can specify a value for <code>Base</code>.</p> <p>The value must
     * be between 0 and 100000.</p>
     */
    inline void SetBase(int value) { m_baseHasBeenSet = true; m_base = value; }

    /**
     * <p>The minimum number of tasks to run on the capacity provider. Only one
     * strategy item can specify a value for <code>Base</code>.</p> <p>The value must
     * be between 0 and 100000.</p>
     */
    inline AwsEcsServiceCapacityProviderStrategyDetails& WithBase(int value) { SetBase(value); return *this;}


    /**
     * <p>The short name of the capacity provider.</p>
     */
    inline const Aws::String& GetCapacityProvider() const{ return m_capacityProvider; }

    /**
     * <p>The short name of the capacity provider.</p>
     */
    inline bool CapacityProviderHasBeenSet() const { return m_capacityProviderHasBeenSet; }

    /**
     * <p>The short name of the capacity provider.</p>
     */
    inline void SetCapacityProvider(const Aws::String& value) { m_capacityProviderHasBeenSet = true; m_capacityProvider = value; }

    /**
     * <p>The short name of the capacity provider.</p>
     */
    inline void SetCapacityProvider(Aws::String&& value) { m_capacityProviderHasBeenSet = true; m_capacityProvider = std::move(value); }

    /**
     * <p>The short name of the capacity provider.</p>
     */
    inline void SetCapacityProvider(const char* value) { m_capacityProviderHasBeenSet = true; m_capacityProvider.assign(value); }

    /**
     * <p>The short name of the capacity provider.</p>
     */
    inline AwsEcsServiceCapacityProviderStrategyDetails& WithCapacityProvider(const Aws::String& value) { SetCapacityProvider(value); return *this;}

    /**
     * <p>The short name of the capacity provider.</p>
     */
    inline AwsEcsServiceCapacityProviderStrategyDetails& WithCapacityProvider(Aws::String&& value) { SetCapacityProvider(std::move(value)); return *this;}

    /**
     * <p>The short name of the capacity provider.</p>
     */
    inline AwsEcsServiceCapacityProviderStrategyDetails& WithCapacityProvider(const char* value) { SetCapacityProvider(value); return *this;}


    /**
     * <p>The relative percentage of the total number of tasks that should use the
     * capacity provider.</p> <p>If no weight is specified, the default value is 0. At
     * least one capacity provider must have a weight greater than 0.</p> <p>The value
     * can be between 0 and 1000.</p>
     */
    inline int GetWeight() const{ return m_weight; }

    /**
     * <p>The relative percentage of the total number of tasks that should use the
     * capacity provider.</p> <p>If no weight is specified, the default value is 0. At
     * least one capacity provider must have a weight greater than 0.</p> <p>The value
     * can be between 0 and 1000.</p>
     */
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }

    /**
     * <p>The relative percentage of the total number of tasks that should use the
     * capacity provider.</p> <p>If no weight is specified, the default value is 0. At
     * least one capacity provider must have a weight greater than 0.</p> <p>The value
     * can be between 0 and 1000.</p>
     */
    inline void SetWeight(int value) { m_weightHasBeenSet = true; m_weight = value; }

    /**
     * <p>The relative percentage of the total number of tasks that should use the
     * capacity provider.</p> <p>If no weight is specified, the default value is 0. At
     * least one capacity provider must have a weight greater than 0.</p> <p>The value
     * can be between 0 and 1000.</p>
     */
    inline AwsEcsServiceCapacityProviderStrategyDetails& WithWeight(int value) { SetWeight(value); return *this;}

  private:

    int m_base;
    bool m_baseHasBeenSet = false;

    Aws::String m_capacityProvider;
    bool m_capacityProviderHasBeenSet = false;

    int m_weight;
    bool m_weightHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

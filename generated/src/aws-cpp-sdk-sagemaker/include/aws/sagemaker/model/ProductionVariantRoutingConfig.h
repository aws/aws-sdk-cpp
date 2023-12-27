/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/RoutingStrategy.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Settings that control how the endpoint routes incoming traffic to the
   * instances that the endpoint hosts.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProductionVariantRoutingConfig">AWS
   * API Reference</a></p>
   */
  class ProductionVariantRoutingConfig
  {
  public:
    AWS_SAGEMAKER_API ProductionVariantRoutingConfig();
    AWS_SAGEMAKER_API ProductionVariantRoutingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProductionVariantRoutingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Sets how the endpoint routes incoming traffic:</p> <ul> <li> <p>
     * <code>LEAST_OUTSTANDING_REQUESTS</code>: The endpoint routes requests to the
     * specific instances that have more capacity to process them.</p> </li> <li> <p>
     * <code>RANDOM</code>: The endpoint routes each request to a randomly chosen
     * instance.</p> </li> </ul>
     */
    inline const RoutingStrategy& GetRoutingStrategy() const{ return m_routingStrategy; }

    /**
     * <p>Sets how the endpoint routes incoming traffic:</p> <ul> <li> <p>
     * <code>LEAST_OUTSTANDING_REQUESTS</code>: The endpoint routes requests to the
     * specific instances that have more capacity to process them.</p> </li> <li> <p>
     * <code>RANDOM</code>: The endpoint routes each request to a randomly chosen
     * instance.</p> </li> </ul>
     */
    inline bool RoutingStrategyHasBeenSet() const { return m_routingStrategyHasBeenSet; }

    /**
     * <p>Sets how the endpoint routes incoming traffic:</p> <ul> <li> <p>
     * <code>LEAST_OUTSTANDING_REQUESTS</code>: The endpoint routes requests to the
     * specific instances that have more capacity to process them.</p> </li> <li> <p>
     * <code>RANDOM</code>: The endpoint routes each request to a randomly chosen
     * instance.</p> </li> </ul>
     */
    inline void SetRoutingStrategy(const RoutingStrategy& value) { m_routingStrategyHasBeenSet = true; m_routingStrategy = value; }

    /**
     * <p>Sets how the endpoint routes incoming traffic:</p> <ul> <li> <p>
     * <code>LEAST_OUTSTANDING_REQUESTS</code>: The endpoint routes requests to the
     * specific instances that have more capacity to process them.</p> </li> <li> <p>
     * <code>RANDOM</code>: The endpoint routes each request to a randomly chosen
     * instance.</p> </li> </ul>
     */
    inline void SetRoutingStrategy(RoutingStrategy&& value) { m_routingStrategyHasBeenSet = true; m_routingStrategy = std::move(value); }

    /**
     * <p>Sets how the endpoint routes incoming traffic:</p> <ul> <li> <p>
     * <code>LEAST_OUTSTANDING_REQUESTS</code>: The endpoint routes requests to the
     * specific instances that have more capacity to process them.</p> </li> <li> <p>
     * <code>RANDOM</code>: The endpoint routes each request to a randomly chosen
     * instance.</p> </li> </ul>
     */
    inline ProductionVariantRoutingConfig& WithRoutingStrategy(const RoutingStrategy& value) { SetRoutingStrategy(value); return *this;}

    /**
     * <p>Sets how the endpoint routes incoming traffic:</p> <ul> <li> <p>
     * <code>LEAST_OUTSTANDING_REQUESTS</code>: The endpoint routes requests to the
     * specific instances that have more capacity to process them.</p> </li> <li> <p>
     * <code>RANDOM</code>: The endpoint routes each request to a randomly chosen
     * instance.</p> </li> </ul>
     */
    inline ProductionVariantRoutingConfig& WithRoutingStrategy(RoutingStrategy&& value) { SetRoutingStrategy(std::move(value)); return *this;}

  private:

    RoutingStrategy m_routingStrategy;
    bool m_routingStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

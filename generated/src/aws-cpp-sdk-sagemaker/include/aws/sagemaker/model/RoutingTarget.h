/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/Destination.h>
#include <aws/sagemaker/model/InferenceRouterRoutingPreference.h>
#include <aws/sagemaker/model/RoutingTargetAsyncInferenceConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>A model that an inference router serves, and the destinations that can serve
 * it. When you invoke the router, you name the routing target, and the router
 * sends the request to one of its destinations.</p> <p>Every destination in a
 * routing target must serve the same model, with the same request and response
 * format.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RoutingTarget">AWS
 * API Reference</a></p>
 */
class RoutingTarget {
 public:
  AWS_SAGEMAKER_API RoutingTarget() = default;
  AWS_SAGEMAKER_API RoutingTarget(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API RoutingTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the routing target. Callers specify this name in the
   * <code>RoutingTargetName</code> parameter when they invoke the inference router.
   * The name must be unique within the router.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  RoutingTarget& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The endpoints and inference components that serve the routing target. Each
   * destination can appear only once in a routing target.</p> <p>In an asynchronous
   * routing target, every destination must be an asynchronous inference endpoint. In
   * a real-time routing target, no destination can be one. SageMaker AI checks an
   * endpoint in another account with your credentials, so both your IAM policy and
   * the endpoint policy must allow <code>sagemaker:DescribeEndpoint</code>. If an
   * endpoint can't be checked, for example because it isn't found or can't be read
   * in time, it's accepted, and requests to it fail if it's the wrong mode.</p>
   */
  inline const Aws::Vector<Destination>& GetDestinations() const { return m_destinations; }
  inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
  template <typename DestinationsT = Aws::Vector<Destination>>
  void SetDestinations(DestinationsT&& value) {
    m_destinationsHasBeenSet = true;
    m_destinations = std::forward<DestinationsT>(value);
  }
  template <typename DestinationsT = Aws::Vector<Destination>>
  RoutingTarget& WithDestinations(DestinationsT&& value) {
    SetDestinations(std::forward<DestinationsT>(value));
    return *this;
  }
  template <typename DestinationsT = Destination>
  RoutingTarget& AddDestinations(DestinationsT&& value) {
    m_destinationsHasBeenSet = true;
    m_destinations.emplace_back(std::forward<DestinationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The asynchronous inference settings of the routing target. Specify this
   * setting to make the routing target asynchronous. If you omit it, the routing
   * target serves real-time requests.</p> <p>Asynchronous routing targets aren't
   * available in all Amazon Web Services Regions. For information about asynchronous
   * routing targets and Region availability, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/inference-router-async.html">Send
   * asynchronous requests through an inference router</a>.</p> <p>Because
   * <code>UpdateInferenceRouter</code> replaces all routing targets, include this
   * setting in every update of an asynchronous routing target.</p> <p>For
   * information about asynchronous routing targets, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/inference-router-async.html">Send
   * asynchronous requests through an inference router</a>.</p>
   */
  inline const RoutingTargetAsyncInferenceConfig& GetAsyncInferenceConfig() const { return m_asyncInferenceConfig; }
  inline bool AsyncInferenceConfigHasBeenSet() const { return m_asyncInferenceConfigHasBeenSet; }
  template <typename AsyncInferenceConfigT = RoutingTargetAsyncInferenceConfig>
  void SetAsyncInferenceConfig(AsyncInferenceConfigT&& value) {
    m_asyncInferenceConfigHasBeenSet = true;
    m_asyncInferenceConfig = std::forward<AsyncInferenceConfigT>(value);
  }
  template <typename AsyncInferenceConfigT = RoutingTargetAsyncInferenceConfig>
  RoutingTarget& WithAsyncInferenceConfig(AsyncInferenceConfigT&& value) {
    SetAsyncInferenceConfig(std::forward<AsyncInferenceConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How the inference router chooses among the routing target's destinations. The
   * default is <code>LocalRegionFirst</code>.</p> <dl> <dt>LocalRegionFirst</dt>
   * <dd> <p>The router uses destinations in its own Region first. When the request
   * leaves the Region, the router spreads it across healthy destinations in other
   * Regions.</p> </dd> <dt>InstancePoolOrder</dt> <dd> <p>The router prefers
   * destinations by instance type first and by Region second. Every destination must
   * be an endpoint that lists the same two or more instance types, each with a
   * different priority, in the same priority order. This value is supported only for
   * asynchronous routing targets.</p> </dd> </dl> <p>With either value, the router
   * uses destinations whose health or capacity is reduced after the others, but
   * doesn't exclude them.</p>
   */
  inline InferenceRouterRoutingPreference GetRoutingPreference() const { return m_routingPreference; }
  inline bool RoutingPreferenceHasBeenSet() const { return m_routingPreferenceHasBeenSet; }
  inline void SetRoutingPreference(InferenceRouterRoutingPreference value) {
    m_routingPreferenceHasBeenSet = true;
    m_routingPreference = value;
  }
  inline RoutingTarget& WithRoutingPreference(InferenceRouterRoutingPreference value) {
    SetRoutingPreference(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::Vector<Destination> m_destinations;

  RoutingTargetAsyncInferenceConfig m_asyncInferenceConfig;

  InferenceRouterRoutingPreference m_routingPreference{InferenceRouterRoutingPreference::NOT_SET};
  bool m_nameHasBeenSet = false;
  bool m_destinationsHasBeenSet = false;
  bool m_asyncInferenceConfigHasBeenSet = false;
  bool m_routingPreferenceHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/RoutingStatus.h>

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
 * <p>An endpoint or inference component that serves a routing
 * target.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Destination">AWS
 * API Reference</a></p>
 */
class Destination {
 public:
  AWS_SAGEMAKER_API Destination() = default;
  AWS_SAGEMAKER_API Destination(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the endpoint or inference component. The
   * destination can be in any account, and in any Amazon Web Services Region in the
   * same partition as the inference router. To use a destination in another account,
   * its owner must allow your account to invoke it through your router, in an
   * endpoint policy.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  Destination& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the inference router can send requests to the destination, as checked
   * when you called <code>DescribeInferenceRouter</code>. This value isn't the
   * destination's own status. SageMaker AI ignores this field in
   * <code>CreateInferenceRouter</code> and <code>UpdateInferenceRouter</code>
   * requests.</p> <dl> <dt>Routable</dt> <dd> <p>The destination is serving and the
   * router can send it requests. A routable destination can still be overloaded.</p>
   * </dd> <dt>Unroutable</dt> <dd> <p>The destination can't serve requests. For
   * example, it's being created or has failed, or it has no capacity and no way to
   * get any. A destination in your account that doesn't exist is also
   * <code>Unroutable</code>.</p> </dd> <dt>Unknown</dt> <dd> <p>SageMaker AI
   * couldn't check the destination, for example because you aren't allowed to
   * describe it or the check timed out. The destination might still be serving.</p>
   * </dd> </dl>
   */
  inline RoutingStatus GetRoutingStatus() const { return m_routingStatus; }
  inline bool RoutingStatusHasBeenSet() const { return m_routingStatusHasBeenSet; }
  inline void SetRoutingStatus(RoutingStatus value) {
    m_routingStatusHasBeenSet = true;
    m_routingStatus = value;
  }
  inline Destination& WithRoutingStatus(RoutingStatus value) {
    SetRoutingStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  RoutingStatus m_routingStatus{RoutingStatus::NOT_SET};
  bool m_resourceArnHasBeenSet = false;
  bool m_routingStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

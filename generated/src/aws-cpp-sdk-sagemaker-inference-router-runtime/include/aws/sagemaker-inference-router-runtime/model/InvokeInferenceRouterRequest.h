/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntimeRequest.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntime_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SageMakerInferenceRouterRuntime {
namespace Model {

/**
 */
class InvokeInferenceRouterRequest : public StreamingSageMakerInferenceRouterRuntimeRequest {
 public:
  AWS_SAGEMAKERINFERENCEROUTERRUNTIME_API InvokeInferenceRouterRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "InvokeInferenceRouter"; }

  AWS_SAGEMAKERINFERENCEROUTERRUNTIME_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the inference router to invoke.</p>
   */
  inline const Aws::String& GetInferenceRouterName() const { return m_inferenceRouterName; }
  inline bool InferenceRouterNameHasBeenSet() const { return m_inferenceRouterNameHasBeenSet; }
  template <typename InferenceRouterNameT = Aws::String>
  void SetInferenceRouterName(InferenceRouterNameT&& value) {
    m_inferenceRouterNameHasBeenSet = true;
    m_inferenceRouterName = std::forward<InferenceRouterNameT>(value);
  }
  template <typename InferenceRouterNameT = Aws::String>
  InvokeInferenceRouterRequest& WithInferenceRouterName(InferenceRouterNameT&& value) {
    SetInferenceRouterName(std::forward<InferenceRouterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the routing target in the inference router. The routing target
   * lists the destinations that can serve the request.</p>
   */
  inline const Aws::String& GetRoutingTargetName() const { return m_routingTargetName; }
  inline bool RoutingTargetNameHasBeenSet() const { return m_routingTargetNameHasBeenSet; }
  template <typename RoutingTargetNameT = Aws::String>
  void SetRoutingTargetName(RoutingTargetNameT&& value) {
    m_routingTargetNameHasBeenSet = true;
    m_routingTargetName = std::forward<RoutingTargetNameT>(value);
  }
  template <typename RoutingTargetNameT = Aws::String>
  InvokeInferenceRouterRequest& WithRoutingTargetName(RoutingTargetNameT&& value) {
    SetRoutingTargetName(std::forward<RoutingTargetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MIME type that you want for the inference response. The router passes it
   * to the destination.</p>
   */
  inline const Aws::String& GetAccept() const { return m_accept; }
  inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }
  template <typename AcceptT = Aws::String>
  void SetAccept(AcceptT&& value) {
    m_acceptHasBeenSet = true;
    m_accept = std::forward<AcceptT>(value);
  }
  template <typename AcceptT = Aws::String>
  InvokeInferenceRouterRequest& WithAccept(AcceptT&& value) {
    SetAccept(std::forward<AcceptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An identifier for the inference request. The router passes it to the
   * destination.</p>
   */
  inline const Aws::String& GetInferenceId() const { return m_inferenceId; }
  inline bool InferenceIdHasBeenSet() const { return m_inferenceIdHasBeenSet; }
  template <typename InferenceIdT = Aws::String>
  void SetInferenceId(InferenceIdT&& value) {
    m_inferenceIdHasBeenSet = true;
    m_inferenceId = std::forward<InferenceIdT>(value);
  }
  template <typename InferenceIdT = Aws::String>
  InvokeInferenceRouterRequest& WithInferenceId(InferenceIdT&& value) {
    SetInferenceId(std::forward<InferenceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional, stable identifier that serves as a routing hint for prefix-aware
   * routing. The router passes it to the destination that serves the request. Within
   * that destination, requests with the same prefix and the same identifier go to
   * the same instance. If requests from different applications might have the same
   * prompt prefix, set a different identifier for each application to differentiate
   * their routing decisions.</p> <p>Applies only to destination endpoints configured
   * with a <code>RoutingStrategy</code> of <code>PREFIX_AWARE</code>.</p>
   */
  inline const Aws::String& GetPrefixAwareId() const { return m_prefixAwareId; }
  inline bool PrefixAwareIdHasBeenSet() const { return m_prefixAwareIdHasBeenSet; }
  template <typename PrefixAwareIdT = Aws::String>
  void SetPrefixAwareId(PrefixAwareIdT&& value) {
    m_prefixAwareIdHasBeenSet = true;
    m_prefixAwareId = std::forward<PrefixAwareIdT>(value);
  }
  template <typename PrefixAwareIdT = Aws::String>
  InvokeInferenceRouterRequest& WithPrefixAwareId(PrefixAwareIdT&& value) {
    SetPrefixAwareId(std::forward<PrefixAwareIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provides additional information about the inference request. The value is an
   * opaque string that the router passes, unchanged, to the model container of the
   * destination that serves the request. The value can contain up to 1,024 visible
   * US-ASCII characters.</p>
   */
  inline const Aws::String& GetCustomAttributes() const { return m_customAttributes; }
  inline bool CustomAttributesHasBeenSet() const { return m_customAttributesHasBeenSet; }
  template <typename CustomAttributesT = Aws::String>
  void SetCustomAttributes(CustomAttributesT&& value) {
    m_customAttributesHasBeenSet = true;
    m_customAttributes = std::forward<CustomAttributesT>(value);
  }
  template <typename CustomAttributesT = Aws::String>
  InvokeInferenceRouterRequest& WithCustomAttributes(CustomAttributesT&& value) {
    SetCustomAttributes(std::forward<CustomAttributesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_inferenceRouterName;

  Aws::String m_routingTargetName;

  Aws::String m_accept;

  Aws::String m_inferenceId;

  Aws::String m_prefixAwareId;

  Aws::String m_customAttributes;

  bool m_inferenceRouterNameHasBeenSet = false;
  bool m_routingTargetNameHasBeenSet = false;
  bool m_acceptHasBeenSet = false;
  bool m_inferenceIdHasBeenSet = false;
  bool m_prefixAwareIdHasBeenSet = false;
  bool m_customAttributesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerInferenceRouterRuntime
}  // namespace Aws

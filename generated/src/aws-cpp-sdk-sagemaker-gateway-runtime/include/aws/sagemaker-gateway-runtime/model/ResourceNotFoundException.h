/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntime_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMakerGatewayRuntime {
namespace Model {

/**
 * <p>No gateway with this ID exists in this account and Region, or no target of
 * the gateway serves the model named in the request body. A model that is served
 * but has no available target right now returns ServiceUnavailableException
 * instead. A message starting <code>inference gateway</code> means the inference
 * gateway serving the model returned a 404; up to 256 bytes of its error message
 * are quoted.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-gateway-runtime-2026-10-01/ResourceNotFoundException">AWS
 * API Reference</a></p>
 */
class ResourceNotFoundException {
 public:
  AWS_SAGEMAKERGATEWAYRUNTIME_API ResourceNotFoundException() = default;
  AWS_SAGEMAKERGATEWAYRUNTIME_API ResourceNotFoundException(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERGATEWAYRUNTIME_API ResourceNotFoundException& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERGATEWAYRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A description of the error. It starts with a prefix such as <code>Global
   * Inference Gateway:</code> or <code>inference gateway:</code> that says where the
   * error came from.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ResourceNotFoundException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the resource that was not found: the gateway ID, or the model
   * name.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  ResourceNotFoundException& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The kind of resource that was not found: the gateway, or the model.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  ResourceNotFoundException& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  Aws::String m_resourceId;

  Aws::String m_resourceType;
  bool m_messageHasBeenSet = false;
  bool m_resourceIdHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerGatewayRuntime
}  // namespace Aws

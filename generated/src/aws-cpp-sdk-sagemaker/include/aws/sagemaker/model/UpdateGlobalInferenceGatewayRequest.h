/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/GlobalInferenceGatewayRouting.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class UpdateGlobalInferenceGatewayRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API UpdateGlobalInferenceGatewayRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateGlobalInferenceGateway"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name, Amazon Resource Name (ARN), or ID of the global inference gateway
   * to update.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  UpdateGlobalInferenceGatewayRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new routing configuration of the global inference gateway.</p>
   */
  inline const GlobalInferenceGatewayRouting& GetRouting() const { return m_routing; }
  inline bool RoutingHasBeenSet() const { return m_routingHasBeenSet; }
  template <typename RoutingT = GlobalInferenceGatewayRouting>
  void SetRouting(RoutingT&& value) {
    m_routingHasBeenSet = true;
    m_routing = std::forward<RoutingT>(value);
  }
  template <typename RoutingT = GlobalInferenceGatewayRouting>
  UpdateGlobalInferenceGatewayRequest& WithRouting(RoutingT&& value) {
    SetRouting(std::forward<RoutingT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;

  GlobalInferenceGatewayRouting m_routing;
  bool m_identifierHasBeenSet = false;
  bool m_routingHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

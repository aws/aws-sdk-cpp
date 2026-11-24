/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntimeRequest.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntime_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SageMakerGatewayRuntime {
namespace Model {

/**
 * <p>The request for InvokeGlobalInferenceGateway.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-gateway-runtime-2026-10-01/InvokeGlobalInferenceGatewayInput">AWS
 * API Reference</a></p>
 */
class InvokeGlobalInferenceGatewayRequest : public StreamingSageMakerGatewayRuntimeRequest {
 public:
  AWS_SAGEMAKERGATEWAYRUNTIME_API InvokeGlobalInferenceGatewayRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "InvokeGlobalInferenceGateway"; }

  AWS_SAGEMAKERGATEWAYRUNTIME_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the Global Inference Gateway to invoke. IAM policies refer to the
   * gateway by its ARN,
   * <code>arn:&lt;partition&gt;:sagemaker:&lt;region&gt;:&lt;account&gt;:global-inference-gateway/&lt;id&gt;</code>.</p>
   */
  inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
  inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
  template <typename GatewayIdT = Aws::String>
  void SetGatewayId(GatewayIdT&& value) {
    m_gatewayIdHasBeenSet = true;
    m_gatewayId = std::forward<GatewayIdT>(value);
  }
  template <typename GatewayIdT = Aws::String>
  InvokeGlobalInferenceGatewayRequest& WithGatewayId(GatewayIdT&& value) {
    SetGatewayId(std::forward<GatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MIME type you want for the response. It is passed to the model
   * server.</p>
   */
  inline const Aws::String& GetAccept() const { return m_accept; }
  inline bool AcceptHasBeenSet() const { return m_acceptHasBeenSet; }
  template <typename AcceptT = Aws::String>
  void SetAccept(AcceptT&& value) {
    m_acceptHasBeenSet = true;
    m_accept = std::forward<AcceptT>(value);
  }
  template <typename AcceptT = Aws::String>
  InvokeGlobalInferenceGatewayRequest& WithAccept(AcceptT&& value) {
    SetAccept(std::forward<AcceptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Per-caller customer identity token (a JWT), forwarded unchanged to the
   * inference gateway, which validates it. The gateway does not use it to authorize
   * the request. Include it in the SigV4 signed headers so it cannot be altered in
   * transit. Redacted from logs, metrics and traces.</p>
   */
  inline const Aws::String& GetCustomerIdentityToken() const { return m_customerIdentityToken; }
  inline bool CustomerIdentityTokenHasBeenSet() const { return m_customerIdentityTokenHasBeenSet; }
  template <typename CustomerIdentityTokenT = Aws::String>
  void SetCustomerIdentityToken(CustomerIdentityTokenT&& value) {
    m_customerIdentityTokenHasBeenSet = true;
    m_customerIdentityToken = std::forward<CustomerIdentityTokenT>(value);
  }
  template <typename CustomerIdentityTokenT = Aws::String>
  InvokeGlobalInferenceGatewayRequest& WithCustomerIdentityToken(CustomerIdentityTokenT&& value) {
    SetCustomerIdentityToken(std::forward<CustomerIdentityTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_gatewayId;

  Aws::String m_accept;

  Aws::String m_customerIdentityToken;

  bool m_gatewayIdHasBeenSet = false;
  bool m_acceptHasBeenSet = false;
  bool m_customerIdentityTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerGatewayRuntime
}  // namespace Aws

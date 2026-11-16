/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class PutEndpointPolicyRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API PutEndpointPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutEndpointPolicy"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the endpoint. The endpoint must be in your account and in the
   * current Amazon Web Services Region.</p>
   */
  inline const Aws::String& GetEndpointName() const { return m_endpointName; }
  inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
  template <typename EndpointNameT = Aws::String>
  void SetEndpointName(EndpointNameT&& value) {
    m_endpointNameHasBeenSet = true;
    m_endpointName = std::forward<EndpointNameT>(value);
  }
  template <typename EndpointNameT = Aws::String>
  PutEndpointPolicyRequest& WithEndpointName(EndpointNameT&& value) {
    SetEndpointName(std::forward<EndpointNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The endpoint policy, as a JSON policy document. The policy can contain only
   * ASCII characters. For information about the policy rules, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/inference-router-cross-account.html">Use
   * destinations in other accounts</a>.</p>
   */
  inline const Aws::String& GetResourcePolicy() const { return m_resourcePolicy; }
  inline bool ResourcePolicyHasBeenSet() const { return m_resourcePolicyHasBeenSet; }
  template <typename ResourcePolicyT = Aws::String>
  void SetResourcePolicy(ResourcePolicyT&& value) {
    m_resourcePolicyHasBeenSet = true;
    m_resourcePolicy = std::forward<ResourcePolicyT>(value);
  }
  template <typename ResourcePolicyT = Aws::String>
  PutEndpointPolicyRequest& WithResourcePolicy(ResourcePolicyT&& value) {
    SetResourcePolicy(std::forward<ResourcePolicyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_endpointName;

  Aws::String m_resourcePolicy;
  bool m_endpointNameHasBeenSet = false;
  bool m_resourcePolicyHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

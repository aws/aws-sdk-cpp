/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AdditionalEnis.h>

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
 * <p>The customer ENI and additional ENIs associated with a network interface
 * category.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InstanceRequirementsEniConfiguration">AWS
 * API Reference</a></p>
 */
class InstanceRequirementsEniConfiguration {
 public:
  AWS_SAGEMAKER_API InstanceRequirementsEniConfiguration() = default;
  AWS_SAGEMAKER_API InstanceRequirementsEniConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API InstanceRequirementsEniConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the customer-managed Elastic Network Interface (ENI) associated
   * with the instance type category.</p>
   */
  inline const Aws::String& GetCustomerEni() const { return m_customerEni; }
  inline bool CustomerEniHasBeenSet() const { return m_customerEniHasBeenSet; }
  template <typename CustomerEniT = Aws::String>
  void SetCustomerEni(CustomerEniT&& value) {
    m_customerEniHasBeenSet = true;
    m_customerEni = std::forward<CustomerEniT>(value);
  }
  template <typename CustomerEniT = Aws::String>
  InstanceRequirementsEniConfiguration& WithCustomerEni(CustomerEniT&& value) {
    SetCustomerEni(std::forward<CustomerEniT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about additional Elastic Network Interfaces (ENIs) associated
   * with the instance type category.</p>
   */
  inline const AdditionalEnis& GetAdditionalEnis() const { return m_additionalEnis; }
  inline bool AdditionalEnisHasBeenSet() const { return m_additionalEnisHasBeenSet; }
  template <typename AdditionalEnisT = AdditionalEnis>
  void SetAdditionalEnis(AdditionalEnisT&& value) {
    m_additionalEnisHasBeenSet = true;
    m_additionalEnis = std::forward<AdditionalEnisT>(value);
  }
  template <typename AdditionalEnisT = AdditionalEnis>
  InstanceRequirementsEniConfiguration& WithAdditionalEnis(AdditionalEnisT&& value) {
    SetAdditionalEnis(std::forward<AdditionalEnisT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_customerEni;

  AdditionalEnis m_additionalEnis;
  bool m_customerEniHasBeenSet = false;
  bool m_additionalEnisHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

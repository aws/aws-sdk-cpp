/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>Represents an entitlement associated with an agreement.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/Entitlement">AWS
 * API Reference</a></p>
 */
class Entitlement {
 public:
  AWS_AGREEMENTSERVICE_API Entitlement() = default;
  AWS_AGREEMENTSERVICE_API Entitlement(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API Entitlement& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the AWS License Manager license associated
   * with the entitlement.</p>
   */
  inline const Aws::String& GetLicenseArn() const { return m_licenseArn; }
  inline bool LicenseArnHasBeenSet() const { return m_licenseArnHasBeenSet; }
  template <typename LicenseArnT = Aws::String>
  void SetLicenseArn(LicenseArnT&& value) {
    m_licenseArnHasBeenSet = true;
    m_licenseArn = std::forward<LicenseArnT>(value);
  }
  template <typename LicenseArnT = Aws::String>
  Entitlement& WithLicenseArn(LicenseArnT&& value) {
    SetLicenseArn(std::forward<LicenseArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_licenseArn;
  bool m_licenseArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws

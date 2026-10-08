/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/AgreementEntitlementStatus.h>
#include <aws/marketplace-agreement/model/AgreementEntitlementStatusReasonCode.h>
#include <aws/marketplace-agreement/model/Resource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>Represents an entitlement associated with an agreement, including the
 * provisioning status, resource, and type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/AgreementEntitlement">AWS
 * API Reference</a></p>
 */
class AgreementEntitlement {
 public:
  AWS_AGREEMENTSERVICE_API AgreementEntitlement() = default;
  AWS_AGREEMENTSERVICE_API AgreementEntitlement(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API AgreementEntitlement& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The resource that the entitlement is provisioned to, such as a product.</p>
   */
  inline const Resource& GetResource() const { return m_resource; }
  inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
  template <typename ResourceT = Resource>
  void SetResource(ResourceT&& value) {
    m_resourceHasBeenSet = true;
    m_resource = std::forward<ResourceT>(value);
  }
  template <typename ResourceT = Resource>
  AgreementEntitlement& WithResource(ResourceT&& value) {
    SetResource(std::forward<ResourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of entitlement.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  AgreementEntitlement& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A short-lived token required by acceptors to register their account with the
   * product provider. The token is only valid for 30 minutes after creation and is
   * only applicable for purchase agreements.</p>
   */
  inline const Aws::String& GetRegistrationToken() const { return m_registrationToken; }
  inline bool RegistrationTokenHasBeenSet() const { return m_registrationTokenHasBeenSet; }
  template <typename RegistrationTokenT = Aws::String>
  void SetRegistrationToken(RegistrationTokenT&& value) {
    m_registrationTokenHasBeenSet = true;
    m_registrationToken = std::forward<RegistrationTokenT>(value);
  }
  template <typename RegistrationTokenT = Aws::String>
  AgreementEntitlement& WithRegistrationToken(RegistrationTokenT&& value) {
    SetRegistrationToken(std::forward<RegistrationTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of an entitlement.</p>
   */
  inline AgreementEntitlementStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AgreementEntitlementStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AgreementEntitlement& WithStatus(AgreementEntitlementStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provides more information about the status of an entitlement.</p>
   */
  inline AgreementEntitlementStatusReasonCode GetStatusReasonCode() const { return m_statusReasonCode; }
  inline bool StatusReasonCodeHasBeenSet() const { return m_statusReasonCodeHasBeenSet; }
  inline void SetStatusReasonCode(AgreementEntitlementStatusReasonCode value) {
    m_statusReasonCodeHasBeenSet = true;
    m_statusReasonCode = value;
  }
  inline AgreementEntitlement& WithStatusReasonCode(AgreementEntitlementStatusReasonCode value) {
    SetStatusReasonCode(value);
    return *this;
  }
  ///@}

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
  AgreementEntitlement& WithLicenseArn(LicenseArnT&& value) {
    SetLicenseArn(std::forward<LicenseArnT>(value));
    return *this;
  }
  ///@}
 private:
  Resource m_resource;

  Aws::String m_type;

  Aws::String m_registrationToken;

  AgreementEntitlementStatus m_status{AgreementEntitlementStatus::NOT_SET};

  AgreementEntitlementStatusReasonCode m_statusReasonCode{AgreementEntitlementStatusReasonCode::NOT_SET};

  Aws::String m_licenseArn;
  bool m_resourceHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_registrationTokenHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonCodeHasBeenSet = false;
  bool m_licenseArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws

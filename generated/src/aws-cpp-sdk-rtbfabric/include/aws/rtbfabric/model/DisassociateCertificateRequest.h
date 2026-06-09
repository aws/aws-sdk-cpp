/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabricRequest.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace RTBFabric {
namespace Model {

/**
 */
class DisassociateCertificateRequest : public RTBFabricRequest {
 public:
  AWS_RTBFABRIC_API DisassociateCertificateRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DisassociateCertificate"; }

  AWS_RTBFABRIC_API Aws::String SerializePayload() const override;

  AWS_RTBFABRIC_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The unique identifier of the gateway.</p>
   */
  inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
  inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
  template <typename GatewayIdT = Aws::String>
  void SetGatewayId(GatewayIdT&& value) {
    m_gatewayIdHasBeenSet = true;
    m_gatewayId = std::forward<GatewayIdT>(value);
  }
  template <typename GatewayIdT = Aws::String>
  DisassociateCertificateRequest& WithGatewayId(GatewayIdT&& value) {
    SetGatewayId(std::forward<GatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the ACM certificate to disassociate.</p>
   */
  inline const Aws::String& GetAcmCertificateArn() const { return m_acmCertificateArn; }
  inline bool AcmCertificateArnHasBeenSet() const { return m_acmCertificateArnHasBeenSet; }
  template <typename AcmCertificateArnT = Aws::String>
  void SetAcmCertificateArn(AcmCertificateArnT&& value) {
    m_acmCertificateArnHasBeenSet = true;
    m_acmCertificateArn = std::forward<AcmCertificateArnT>(value);
  }
  template <typename AcmCertificateArnT = Aws::String>
  DisassociateCertificateRequest& WithAcmCertificateArn(AcmCertificateArnT&& value) {
    SetAcmCertificateArn(std::forward<AcmCertificateArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_gatewayId;

  Aws::String m_acmCertificateArn;
  bool m_gatewayIdHasBeenSet = false;
  bool m_acmCertificateArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws

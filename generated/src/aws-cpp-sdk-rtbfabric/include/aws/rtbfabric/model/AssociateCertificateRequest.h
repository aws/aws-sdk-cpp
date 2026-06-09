/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabricRequest.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>

#include <utility>

namespace Aws {
namespace RTBFabric {
namespace Model {

/**
 */
class AssociateCertificateRequest : public RTBFabricRequest {
 public:
  AWS_RTBFABRIC_API AssociateCertificateRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociateCertificate"; }

  AWS_RTBFABRIC_API Aws::String SerializePayload() const override;

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
  AssociateCertificateRequest& WithGatewayId(GatewayIdT&& value) {
    SetGatewayId(std::forward<GatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the ACM certificate to associate.</p>
   */
  inline const Aws::String& GetAcmCertificateArn() const { return m_acmCertificateArn; }
  inline bool AcmCertificateArnHasBeenSet() const { return m_acmCertificateArnHasBeenSet; }
  template <typename AcmCertificateArnT = Aws::String>
  void SetAcmCertificateArn(AcmCertificateArnT&& value) {
    m_acmCertificateArnHasBeenSet = true;
    m_acmCertificateArn = std::forward<AcmCertificateArnT>(value);
  }
  template <typename AcmCertificateArnT = Aws::String>
  AssociateCertificateRequest& WithAcmCertificateArn(AcmCertificateArnT&& value) {
    SetAcmCertificateArn(std::forward<AcmCertificateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. This lets you safely retry the request without
   * accidentally performing the same operation a second time. Passing the same value
   * to a later call to an operation requires that you also pass the same value for
   * all other parameters. We recommend that you use a <a
   * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
   * value</a>.</p> <p>If you don't provide this value, then Amazon Web Services
   * generates a random one for you.</p> <p>If you retry the operation with the same
   * <code>ClientToken</code>, but with different parameters, the retry fails with an
   * <code>IdempotentParameterMismatch</code> error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  AssociateCertificateRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_gatewayId;

  Aws::String m_acmCertificateArn;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_gatewayIdHasBeenSet = false;
  bool m_acmCertificateArnHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws

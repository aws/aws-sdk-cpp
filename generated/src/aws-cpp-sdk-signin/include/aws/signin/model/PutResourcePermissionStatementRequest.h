/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signin/SigninRequest.h>
#include <aws/signin/Signin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Signin {
namespace Model {

/**
 * <p>Input for PutResourcePermissionStatement operation</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/PutResourcePermissionStatementInput">AWS
 * API Reference</a></p>
 */
class PutResourcePermissionStatementRequest : public SigninRequest {
 public:
  AWS_SIGNIN_API PutResourcePermissionStatementRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutResourcePermissionStatement"; }

  AWS_SIGNIN_API Aws::String SerializePayload() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_SIGNIN_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>VPC identifier to restrict console access</p>
   */
  inline const Aws::String& GetSourceVpc() const { return m_sourceVpc; }
  inline bool SourceVpcHasBeenSet() const { return m_sourceVpcHasBeenSet; }
  template <typename SourceVpcT = Aws::String>
  void SetSourceVpc(SourceVpcT&& value) {
    m_sourceVpcHasBeenSet = true;
    m_sourceVpc = std::forward<SourceVpcT>(value);
  }
  template <typename SourceVpcT = Aws::String>
  PutResourcePermissionStatementRequest& WithSourceVpc(SourceVpcT&& value) {
    SetSourceVpc(std::forward<SourceVpcT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>SignIn VPC endpoint identifier</p>
   */
  inline const Aws::String& GetSigninSourceVpce() const { return m_signinSourceVpce; }
  inline bool SigninSourceVpceHasBeenSet() const { return m_signinSourceVpceHasBeenSet; }
  template <typename SigninSourceVpceT = Aws::String>
  void SetSigninSourceVpce(SigninSourceVpceT&& value) {
    m_signinSourceVpceHasBeenSet = true;
    m_signinSourceVpce = std::forward<SigninSourceVpceT>(value);
  }
  template <typename SigninSourceVpceT = Aws::String>
  PutResourcePermissionStatementRequest& WithSigninSourceVpce(SigninSourceVpceT&& value) {
    SetSigninSourceVpce(std::forward<SigninSourceVpceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Console VPC endpoint identifier</p>
   */
  inline const Aws::String& GetConsoleSourceVpce() const { return m_consoleSourceVpce; }
  inline bool ConsoleSourceVpceHasBeenSet() const { return m_consoleSourceVpceHasBeenSet; }
  template <typename ConsoleSourceVpceT = Aws::String>
  void SetConsoleSourceVpce(ConsoleSourceVpceT&& value) {
    m_consoleSourceVpceHasBeenSet = true;
    m_consoleSourceVpce = std::forward<ConsoleSourceVpceT>(value);
  }
  template <typename ConsoleSourceVpceT = Aws::String>
  PutResourcePermissionStatementRequest& WithConsoleSourceVpce(ConsoleSourceVpceT&& value) {
    SetConsoleSourceVpce(std::forward<ConsoleSourceVpceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Source IP address within VPC</p>
   */
  inline const Aws::String& GetVpcSourceIp() const { return m_vpcSourceIp; }
  inline bool VpcSourceIpHasBeenSet() const { return m_vpcSourceIpHasBeenSet; }
  template <typename VpcSourceIpT = Aws::String>
  void SetVpcSourceIp(VpcSourceIpT&& value) {
    m_vpcSourceIpHasBeenSet = true;
    m_vpcSourceIp = std::forward<VpcSourceIpT>(value);
  }
  template <typename VpcSourceIpT = Aws::String>
  PutResourcePermissionStatementRequest& WithVpcSourceIp(VpcSourceIpT&& value) {
    SetVpcSourceIp(std::forward<VpcSourceIpT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Source IP address</p>
   */
  inline const Aws::String& GetSourceIp() const { return m_sourceIp; }
  inline bool SourceIpHasBeenSet() const { return m_sourceIpHasBeenSet; }
  template <typename SourceIpT = Aws::String>
  void SetSourceIp(SourceIpT&& value) {
    m_sourceIpHasBeenSet = true;
    m_sourceIp = std::forward<SourceIpT>(value);
  }
  template <typename SourceIpT = Aws::String>
  PutResourcePermissionStatementRequest& WithSourceIp(SourceIpT&& value) {
    SetSourceIp(std::forward<SourceIpT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AWS region where the VPC and VPC endpoint reside Required when sourceVpc or
   * signinSourceVpce/consoleSourceVpce is provided</p>
   */
  inline const Aws::String& GetRequestedRegion() const { return m_requestedRegion; }
  inline bool RequestedRegionHasBeenSet() const { return m_requestedRegionHasBeenSet; }
  template <typename RequestedRegionT = Aws::String>
  void SetRequestedRegion(RequestedRegionT&& value) {
    m_requestedRegionHasBeenSet = true;
    m_requestedRegion = std::forward<RequestedRegionT>(value);
  }
  template <typename RequestedRegionT = Aws::String>
  PutResourcePermissionStatementRequest& WithRequestedRegion(RequestedRegionT&& value) {
    SetRequestedRegion(std::forward<RequestedRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Principal to exclude from the permission statement</p>
   */
  inline const Aws::String& GetExcludedPrincipal() const { return m_excludedPrincipal; }
  inline bool ExcludedPrincipalHasBeenSet() const { return m_excludedPrincipalHasBeenSet; }
  template <typename ExcludedPrincipalT = Aws::String>
  void SetExcludedPrincipal(ExcludedPrincipalT&& value) {
    m_excludedPrincipalHasBeenSet = true;
    m_excludedPrincipal = std::forward<ExcludedPrincipalT>(value);
  }
  template <typename ExcludedPrincipalT = Aws::String>
  PutResourcePermissionStatementRequest& WithExcludedPrincipal(ExcludedPrincipalT&& value) {
    SetExcludedPrincipal(std::forward<ExcludedPrincipalT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Idempotency token for the request</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  PutResourcePermissionStatementRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceVpc;

  Aws::String m_signinSourceVpce;

  Aws::String m_consoleSourceVpce;

  Aws::String m_vpcSourceIp;

  Aws::String m_sourceIp;

  Aws::String m_requestedRegion;

  Aws::String m_excludedPrincipal;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_sourceVpcHasBeenSet = false;
  bool m_signinSourceVpceHasBeenSet = false;
  bool m_consoleSourceVpceHasBeenSet = false;
  bool m_vpcSourceIpHasBeenSet = false;
  bool m_sourceIpHasBeenSet = false;
  bool m_requestedRegionHasBeenSet = false;
  bool m_excludedPrincipalHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws

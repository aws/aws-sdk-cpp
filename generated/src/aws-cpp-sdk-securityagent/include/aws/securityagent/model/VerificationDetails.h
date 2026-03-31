/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/DnsVerification.h>
#include <aws/securityagent/model/DomainVerificationMethod.h>
#include <aws/securityagent/model/HttpVerification.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Verification details to verify registered target domain</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/VerificationDetails">AWS
 * API Reference</a></p>
 */
class VerificationDetails {
 public:
  AWS_SECURITYAGENT_API VerificationDetails() = default;
  AWS_SECURITYAGENT_API VerificationDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API VerificationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Type of domain ownership verification method</p>
   */
  inline DomainVerificationMethod GetMethod() const { return m_method; }
  inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }
  inline void SetMethod(DomainVerificationMethod value) {
    m_methodHasBeenSet = true;
    m_method = value;
  }
  inline VerificationDetails& WithMethod(DomainVerificationMethod value) {
    SetMethod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Represents dns txt verification details</p>
   */
  inline const DnsVerification& GetDnsTxt() const { return m_dnsTxt; }
  inline bool DnsTxtHasBeenSet() const { return m_dnsTxtHasBeenSet; }
  template <typename DnsTxtT = DnsVerification>
  void SetDnsTxt(DnsTxtT&& value) {
    m_dnsTxtHasBeenSet = true;
    m_dnsTxt = std::forward<DnsTxtT>(value);
  }
  template <typename DnsTxtT = DnsVerification>
  VerificationDetails& WithDnsTxt(DnsTxtT&& value) {
    SetDnsTxt(std::forward<DnsTxtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Represents http route verification details</p>
   */
  inline const HttpVerification& GetHttpRoute() const { return m_httpRoute; }
  inline bool HttpRouteHasBeenSet() const { return m_httpRouteHasBeenSet; }
  template <typename HttpRouteT = HttpVerification>
  void SetHttpRoute(HttpRouteT&& value) {
    m_httpRouteHasBeenSet = true;
    m_httpRoute = std::forward<HttpRouteT>(value);
  }
  template <typename HttpRouteT = HttpVerification>
  VerificationDetails& WithHttpRoute(HttpRouteT&& value) {
    SetHttpRoute(std::forward<HttpRouteT>(value));
    return *this;
  }
  ///@}
 private:
  DomainVerificationMethod m_method{DomainVerificationMethod::NOT_SET};

  DnsVerification m_dnsTxt;

  HttpVerification m_httpRoute;
  bool m_methodHasBeenSet = false;
  bool m_dnsTxtHasBeenSet = false;
  bool m_httpRouteHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws

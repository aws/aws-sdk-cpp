/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/model/TxtMethodConfig.h>
#include <aws/vpc-lattice/model/VerificationStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace VPCLattice {
namespace Model {
class StartDomainVerificationResult {
 public:
  AWS_VPCLATTICE_API StartDomainVerificationResult() = default;
  AWS_VPCLATTICE_API StartDomainVerificationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_VPCLATTICE_API StartDomainVerificationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The ID of the domain verification. </p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  StartDomainVerificationResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the domain verification. </p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  StartDomainVerificationResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The domain name being verified. </p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  StartDomainVerificationResult& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The current status of the domain verification process. </p>
   */
  inline VerificationStatus GetStatus() const { return m_status; }
  inline void SetStatus(VerificationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StartDomainVerificationResult& WithStatus(VerificationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The TXT record configuration used for domain verification. </p>
   */
  inline const TxtMethodConfig& GetTxtMethodConfig() const { return m_txtMethodConfig; }
  template <typename TxtMethodConfigT = TxtMethodConfig>
  void SetTxtMethodConfig(TxtMethodConfigT&& value) {
    m_txtMethodConfigHasBeenSet = true;
    m_txtMethodConfig = std::forward<TxtMethodConfigT>(value);
  }
  template <typename TxtMethodConfigT = TxtMethodConfig>
  StartDomainVerificationResult& WithTxtMethodConfig(TxtMethodConfigT&& value) {
    SetTxtMethodConfig(std::forward<TxtMethodConfigT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  StartDomainVerificationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  Aws::String m_domainName;
  bool m_domainNameHasBeenSet = false;

  VerificationStatus m_status{VerificationStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  TxtMethodConfig m_txtMethodConfig;
  bool m_txtMethodConfigHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws

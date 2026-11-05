/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/model/Consent.h>

#include <utility>

namespace Aws {
namespace Route53Domains {
namespace Model {

/**
 * <p>A <code>RestoreDomain</code> request includes the name of the domain that you
 * want to restore and, optionally, the maximum price that you agree to
 * pay.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RestoreDomainRequest">AWS
 * API Reference</a></p>
 */
class RestoreDomainRequest : public Route53DomainsRequest {
 public:
  AWS_ROUTE53DOMAINS_API RestoreDomainRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RestoreDomain"; }

  AWS_ROUTE53DOMAINS_API Aws::String SerializePayload() const override;

  AWS_ROUTE53DOMAINS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the domain that you want to restore. The domain must have been
   * registered to the Amazon Web Services account that submits the request.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  RestoreDomainRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the maximum price that you agree to pay to restore the domain name.
   * This element is required if the domain has registry premium pricing, and
   * optional if the domain is priced at the standard rate for its TLD. If you
   * include it and the restoration price is more than <code>MaxPrice</code>, the
   * request fails.</p>
   */
  inline const Consent& GetConsent() const { return m_consent; }
  inline bool ConsentHasBeenSet() const { return m_consentHasBeenSet; }
  template <typename ConsentT = Consent>
  void SetConsent(ConsentT&& value) {
    m_consentHasBeenSet = true;
    m_consent = std::forward<ConsentT>(value);
  }
  template <typename ConsentT = Consent>
  RestoreDomainRequest& WithConsent(ConsentT&& value) {
    SetConsent(std::forward<ConsentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainName;

  Consent m_consent;
  bool m_domainNameHasBeenSet = false;
  bool m_consentHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Domains
}  // namespace Aws

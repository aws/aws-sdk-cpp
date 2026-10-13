/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/model/DomainPrice.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Route53Domains {
namespace Model {
/**
 * <p>The GetDomainPrices response includes the following element.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/GetDomainPricesResponse">AWS
 * API Reference</a></p>
 */
class GetDomainPricesResult {
 public:
  AWS_ROUTE53DOMAINS_API GetDomainPricesResult() = default;
  AWS_ROUTE53DOMAINS_API GetDomainPricesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53DOMAINS_API GetDomainPricesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The registration, transfer, owner change, renewal, and restoration prices for
   * the specified domain.</p>
   */
  inline const DomainPrice& GetDomainPrice() const { return m_domainPrice; }
  template <typename DomainPriceT = DomainPrice>
  void SetDomainPrice(DomainPriceT&& value) {
    m_domainPriceHasBeenSet = true;
    m_domainPrice = std::forward<DomainPriceT>(value);
  }
  template <typename DomainPriceT = DomainPrice>
  GetDomainPricesResult& WithDomainPrice(DomainPriceT&& value) {
    SetDomainPrice(std::forward<DomainPriceT>(value));
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
  GetDomainPricesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  DomainPrice m_domainPrice;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_domainPriceHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Domains
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/PricingOption.h>
#include <aws/outposts/model/PricingResult.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Outposts {
namespace Model {
class GetRenewalPricingResult {
 public:
  AWS_OUTPOSTS_API GetRenewalPricingResult() = default;
  AWS_OUTPOSTS_API GetRenewalPricingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OUTPOSTS_API GetRenewalPricingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The result of the pricing request.</p>
   */
  inline PricingResult GetPricingResult() const { return m_pricingResult; }
  inline void SetPricingResult(PricingResult value) {
    m_pricingResultHasBeenSet = true;
    m_pricingResult = value;
  }
  inline GetRenewalPricingResult& WithPricingResult(PricingResult value) {
    SetPricingResult(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pricing options for the specified Outpost.</p>
   */
  inline const Aws::Vector<PricingOption>& GetPricingOptions() const { return m_pricingOptions; }
  template <typename PricingOptionsT = Aws::Vector<PricingOption>>
  void SetPricingOptions(PricingOptionsT&& value) {
    m_pricingOptionsHasBeenSet = true;
    m_pricingOptions = std::forward<PricingOptionsT>(value);
  }
  template <typename PricingOptionsT = Aws::Vector<PricingOption>>
  GetRenewalPricingResult& WithPricingOptions(PricingOptionsT&& value) {
    SetPricingOptions(std::forward<PricingOptionsT>(value));
    return *this;
  }
  template <typename PricingOptionsT = PricingOption>
  GetRenewalPricingResult& AddPricingOptions(PricingOptionsT&& value) {
    m_pricingOptionsHasBeenSet = true;
    m_pricingOptions.emplace_back(std::forward<PricingOptionsT>(value));
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
  GetRenewalPricingResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  PricingResult m_pricingResult{PricingResult::NOT_SET};

  Aws::Vector<PricingOption> m_pricingOptions;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_pricingResultHasBeenSet = false;
  bool m_pricingOptionsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/uxc/Uxc_EXPORTS.h>
#include <aws/uxc/model/AccountColor.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace uxc {
namespace Model {
class GetAccountCustomizationsResult {
 public:
  AWS_UXC_API GetAccountCustomizationsResult() = default;
  AWS_UXC_API GetAccountCustomizationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_UXC_API GetAccountCustomizationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The account color preference. A value of <code>none</code> indicates that you
   * have not set a color.</p>
   */
  inline AccountColor GetAccountColor() const { return m_accountColor; }
  inline void SetAccountColor(AccountColor value) {
    m_accountColorHasBeenSet = true;
    m_accountColor = value;
  }
  inline GetAccountCustomizationsResult& WithAccountColor(AccountColor value) {
    SetAccountColor(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of Amazon Web Services service identifiers that are visible to the
   * account in the Amazon Web Services Management Console. A value of
   * <code>null</code> indicates that you have not configured this feature and all
   * services are visible. For valid service identifiers, call <a
   * href="https://docs.aws.amazon.com/awsconsolehelpdocs/latest/APIReference/API_ListServices.html">ListServices</a>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetVisibleServices() const { return m_visibleServices; }
  template <typename VisibleServicesT = Aws::Vector<Aws::String>>
  void SetVisibleServices(VisibleServicesT&& value) {
    m_visibleServicesHasBeenSet = true;
    m_visibleServices = std::forward<VisibleServicesT>(value);
  }
  template <typename VisibleServicesT = Aws::Vector<Aws::String>>
  GetAccountCustomizationsResult& WithVisibleServices(VisibleServicesT&& value) {
    SetVisibleServices(std::forward<VisibleServicesT>(value));
    return *this;
  }
  template <typename VisibleServicesT = Aws::String>
  GetAccountCustomizationsResult& AddVisibleServices(VisibleServicesT&& value) {
    m_visibleServicesHasBeenSet = true;
    m_visibleServices.emplace_back(std::forward<VisibleServicesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of Amazon Web Services Region codes that are visible to the account
   * in the Amazon Web Services Management Console. A value of <code>null</code>
   * indicates that you have not configured this feature and all Regions are visible.
   * For a list of valid Region codes, see <a
   * href="https://docs.aws.amazon.com/global-infrastructure/latest/regions/aws-regions.html">Amazon
   * Web Services Regions</a>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetVisibleRegions() const { return m_visibleRegions; }
  template <typename VisibleRegionsT = Aws::Vector<Aws::String>>
  void SetVisibleRegions(VisibleRegionsT&& value) {
    m_visibleRegionsHasBeenSet = true;
    m_visibleRegions = std::forward<VisibleRegionsT>(value);
  }
  template <typename VisibleRegionsT = Aws::Vector<Aws::String>>
  GetAccountCustomizationsResult& WithVisibleRegions(VisibleRegionsT&& value) {
    SetVisibleRegions(std::forward<VisibleRegionsT>(value));
    return *this;
  }
  template <typename VisibleRegionsT = Aws::String>
  GetAccountCustomizationsResult& AddVisibleRegions(VisibleRegionsT&& value) {
    m_visibleRegionsHasBeenSet = true;
    m_visibleRegions.emplace_back(std::forward<VisibleRegionsT>(value));
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
  GetAccountCustomizationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  AccountColor m_accountColor{AccountColor::NOT_SET};

  Aws::Vector<Aws::String> m_visibleServices;

  Aws::Vector<Aws::String> m_visibleRegions;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_accountColorHasBeenSet = false;
  bool m_visibleServicesHasBeenSet = false;
  bool m_visibleRegionsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace uxc
}  // namespace Aws

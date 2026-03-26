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
class UpdateAccountCustomizationsResult {
 public:
  AWS_UXC_API UpdateAccountCustomizationsResult() = default;
  AWS_UXC_API UpdateAccountCustomizationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_UXC_API UpdateAccountCustomizationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The current account color preference after the update.</p>
   */
  inline AccountColor GetAccountColor() const { return m_accountColor; }
  inline void SetAccountColor(AccountColor value) {
    m_accountColorHasBeenSet = true;
    m_accountColor = value;
  }
  inline UpdateAccountCustomizationsResult& WithAccountColor(AccountColor value) {
    SetAccountColor(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current list of visible service identifiers after the update.</p>
   */
  inline const Aws::Vector<Aws::String>& GetVisibleServices() const { return m_visibleServices; }
  template <typename VisibleServicesT = Aws::Vector<Aws::String>>
  void SetVisibleServices(VisibleServicesT&& value) {
    m_visibleServicesHasBeenSet = true;
    m_visibleServices = std::forward<VisibleServicesT>(value);
  }
  template <typename VisibleServicesT = Aws::Vector<Aws::String>>
  UpdateAccountCustomizationsResult& WithVisibleServices(VisibleServicesT&& value) {
    SetVisibleServices(std::forward<VisibleServicesT>(value));
    return *this;
  }
  template <typename VisibleServicesT = Aws::String>
  UpdateAccountCustomizationsResult& AddVisibleServices(VisibleServicesT&& value) {
    m_visibleServicesHasBeenSet = true;
    m_visibleServices.emplace_back(std::forward<VisibleServicesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current list of visible Region codes after the update.</p>
   */
  inline const Aws::Vector<Aws::String>& GetVisibleRegions() const { return m_visibleRegions; }
  template <typename VisibleRegionsT = Aws::Vector<Aws::String>>
  void SetVisibleRegions(VisibleRegionsT&& value) {
    m_visibleRegionsHasBeenSet = true;
    m_visibleRegions = std::forward<VisibleRegionsT>(value);
  }
  template <typename VisibleRegionsT = Aws::Vector<Aws::String>>
  UpdateAccountCustomizationsResult& WithVisibleRegions(VisibleRegionsT&& value) {
    SetVisibleRegions(std::forward<VisibleRegionsT>(value));
    return *this;
  }
  template <typename VisibleRegionsT = Aws::String>
  UpdateAccountCustomizationsResult& AddVisibleRegions(VisibleRegionsT&& value) {
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
  UpdateAccountCustomizationsResult& WithRequestId(RequestIdT&& value) {
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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/model/ServiceView.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ResourceExplorer2 {
namespace Model {
class GetServiceViewResult {
 public:
  AWS_RESOURCEEXPLORER2_API GetServiceViewResult() = default;
  AWS_RESOURCEEXPLORER2_API GetServiceViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESOURCEEXPLORER2_API GetServiceViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A <code>ServiceView</code> object that contains the details and configuration
   * of the requested service view.</p>
   */
  inline const ServiceView& GetView() const { return m_view; }
  template <typename ViewT = ServiceView>
  void SetView(ViewT&& value) {
    m_viewHasBeenSet = true;
    m_view = std::forward<ViewT>(value);
  }
  template <typename ViewT = ServiceView>
  GetServiceViewResult& WithView(ViewT&& value) {
    SetView(std::forward<ViewT>(value));
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
  GetServiceViewResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  ServiceView m_view;
  bool m_viewHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ResourceExplorer2
}  // namespace Aws

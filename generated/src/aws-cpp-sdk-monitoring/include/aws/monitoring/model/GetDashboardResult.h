/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/ResponseMetadata.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatch {
namespace Model {
class GetDashboardResult {
 public:
  AWS_CLOUDWATCH_API GetDashboardResult() = default;
  AWS_CLOUDWATCH_API GetDashboardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_CLOUDWATCH_API GetDashboardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
   */
  inline const Aws::String& GetDashboardArn() const { return m_dashboardArn; }
  template <typename DashboardArnT = Aws::String>
  void SetDashboardArn(DashboardArnT&& value) {
    m_dashboardArnHasBeenSet = true;
    m_dashboardArn = std::forward<DashboardArnT>(value);
  }
  template <typename DashboardArnT = Aws::String>
  GetDashboardResult& WithDashboardArn(DashboardArnT&& value) {
    SetDashboardArn(std::forward<DashboardArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The detailed information about the dashboard, including what widgets are
   * included and their location on the dashboard. For more information about the
   * <code>DashboardBody</code> syntax, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/CloudWatch-Dashboard-Body-Structure.html">Dashboard
   * Body Structure and Syntax</a>. </p>
   */
  inline const Aws::String& GetDashboardBody() const { return m_dashboardBody; }
  template <typename DashboardBodyT = Aws::String>
  void SetDashboardBody(DashboardBodyT&& value) {
    m_dashboardBodyHasBeenSet = true;
    m_dashboardBody = std::forward<DashboardBodyT>(value);
  }
  template <typename DashboardBodyT = Aws::String>
  GetDashboardResult& WithDashboardBody(DashboardBodyT&& value) {
    SetDashboardBody(std::forward<DashboardBodyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the dashboard.</p>
   */
  inline const Aws::String& GetDashboardName() const { return m_dashboardName; }
  template <typename DashboardNameT = Aws::String>
  void SetDashboardName(DashboardNameT&& value) {
    m_dashboardNameHasBeenSet = true;
    m_dashboardName = std::forward<DashboardNameT>(value);
  }
  template <typename DashboardNameT = Aws::String>
  GetDashboardResult& WithDashboardName(DashboardNameT&& value) {
    SetDashboardName(std::forward<DashboardNameT>(value));
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
  GetDashboardResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  GetDashboardResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dashboardArn;

  Aws::String m_dashboardBody;

  Aws::String m_dashboardName;

  Aws::String m_requestId;

  ResponseMetadata m_responseMetadata;
  bool m_dashboardArnHasBeenSet = false;
  bool m_dashboardBodyHasBeenSet = false;
  bool m_dashboardNameHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws

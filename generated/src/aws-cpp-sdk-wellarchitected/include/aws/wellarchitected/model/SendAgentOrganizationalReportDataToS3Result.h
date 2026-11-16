/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {
class SendAgentOrganizationalReportDataToS3Result {
 public:
  AWS_WELLARCHITECTED_API SendAgentOrganizationalReportDataToS3Result() = default;
  AWS_WELLARCHITECTED_API SendAgentOrganizationalReportDataToS3Result(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WELLARCHITECTED_API SendAgentOrganizationalReportDataToS3Result& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>S3 URI (format s3://bucket/key) where the artifact was written.</p>
   */
  inline const Aws::String& GetDeliveredTo() const { return m_deliveredTo; }
  template <typename DeliveredToT = Aws::String>
  void SetDeliveredTo(DeliveredToT&& value) {
    m_deliveredToHasBeenSet = true;
    m_deliveredTo = std::forward<DeliveredToT>(value);
  }
  template <typename DeliveredToT = Aws::String>
  SendAgentOrganizationalReportDataToS3Result& WithDeliveredTo(DeliveredToT&& value) {
    SetDeliveredTo(std::forward<DeliveredToT>(value));
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
  SendAgentOrganizationalReportDataToS3Result& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_deliveredTo;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_deliveredToHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws

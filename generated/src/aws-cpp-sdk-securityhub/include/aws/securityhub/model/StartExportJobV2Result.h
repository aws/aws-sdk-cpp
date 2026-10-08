/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {
class StartExportJobV2Result {
 public:
  AWS_SECURITYHUB_API StartExportJobV2Result() = default;
  AWS_SECURITYHUB_API StartExportJobV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYHUB_API StartExportJobV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the export job that Security Hub started. Use this
   * value with <code>GetExportJobV2</code> or <code>CancelExportJobV2</code>.</p>
   */
  inline const Aws::String& GetExportJobId() const { return m_exportJobId; }
  template <typename ExportJobIdT = Aws::String>
  void SetExportJobId(ExportJobIdT&& value) {
    m_exportJobIdHasBeenSet = true;
    m_exportJobId = std::forward<ExportJobIdT>(value);
  }
  template <typename ExportJobIdT = Aws::String>
  StartExportJobV2Result& WithExportJobId(ExportJobIdT&& value) {
    SetExportJobId(std::forward<ExportJobIdT>(value));
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
  StartExportJobV2Result& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_exportJobId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_exportJobIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/RollbackServiceSoftwareOptions.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchService {
namespace Model {
/**
 * <p>Contains details about the rolled-back service software update.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/RollbackServiceSoftwareUpdateResponse">AWS
 * API Reference</a></p>
 */
class RollbackServiceSoftwareUpdateResult {
 public:
  AWS_OPENSEARCHSERVICE_API RollbackServiceSoftwareUpdateResult() = default;
  AWS_OPENSEARCHSERVICE_API RollbackServiceSoftwareUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHSERVICE_API RollbackServiceSoftwareUpdateResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The rollback options for the service software update.</p>
   */
  inline const RollbackServiceSoftwareOptions& GetRollbackServiceSoftwareOptions() const { return m_rollbackServiceSoftwareOptions; }
  template <typename RollbackServiceSoftwareOptionsT = RollbackServiceSoftwareOptions>
  void SetRollbackServiceSoftwareOptions(RollbackServiceSoftwareOptionsT&& value) {
    m_rollbackServiceSoftwareOptionsHasBeenSet = true;
    m_rollbackServiceSoftwareOptions = std::forward<RollbackServiceSoftwareOptionsT>(value);
  }
  template <typename RollbackServiceSoftwareOptionsT = RollbackServiceSoftwareOptions>
  RollbackServiceSoftwareUpdateResult& WithRollbackServiceSoftwareOptions(RollbackServiceSoftwareOptionsT&& value) {
    SetRollbackServiceSoftwareOptions(std::forward<RollbackServiceSoftwareOptionsT>(value));
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
  RollbackServiceSoftwareUpdateResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  RollbackServiceSoftwareOptions m_rollbackServiceSoftwareOptions;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_rollbackServiceSoftwareOptionsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws

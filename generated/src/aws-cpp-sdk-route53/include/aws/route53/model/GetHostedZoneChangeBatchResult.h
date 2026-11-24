/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ChangeBatch.h>
#include <aws/route53/model/ChangeBatchSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace Route53 {
namespace Model {
class GetHostedZoneChangeBatchResult {
 public:
  AWS_ROUTE53_API GetHostedZoneChangeBatchResult() = default;
  AWS_ROUTE53_API GetHostedZoneChangeBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_ROUTE53_API GetHostedZoneChangeBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>A summary of the change batch, including who submitted it and when.</p>
   */
  inline const ChangeBatchSummary& GetChangeBatchSummary() const { return m_changeBatchSummary; }
  template <typename ChangeBatchSummaryT = ChangeBatchSummary>
  void SetChangeBatchSummary(ChangeBatchSummaryT&& value) {
    m_changeBatchSummaryHasBeenSet = true;
    m_changeBatchSummary = std::forward<ChangeBatchSummaryT>(value);
  }
  template <typename ChangeBatchSummaryT = ChangeBatchSummary>
  GetHostedZoneChangeBatchResult& WithChangeBatchSummary(ChangeBatchSummaryT&& value) {
    SetChangeBatchSummary(std::forward<ChangeBatchSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The changes in the change batch. Each resource record set is in the same form
   * that <code>ListResourceRecordSets</code> returns. For example, the name is in
   * lowercase and ends with a dot.</p>
   */
  inline const ChangeBatch& GetChangeBatch() const { return m_changeBatch; }
  template <typename ChangeBatchT = ChangeBatch>
  void SetChangeBatch(ChangeBatchT&& value) {
    m_changeBatchHasBeenSet = true;
    m_changeBatch = std::forward<ChangeBatchT>(value);
  }
  template <typename ChangeBatchT = ChangeBatch>
  GetHostedZoneChangeBatchResult& WithChangeBatch(ChangeBatchT&& value) {
    SetChangeBatch(std::forward<ChangeBatchT>(value));
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
  GetHostedZoneChangeBatchResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ChangeBatchSummary m_changeBatchSummary;

  ChangeBatch m_changeBatch;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_changeBatchSummaryHasBeenSet = false;
  bool m_changeBatchHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws

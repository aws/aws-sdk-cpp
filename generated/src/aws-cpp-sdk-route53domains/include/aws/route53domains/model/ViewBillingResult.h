/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53domains/model/BillingRecord.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53Domains
{
namespace Model
{
  /**
   * <p>The ViewBilling response includes the following elements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ViewBillingResponse">AWS
   * API Reference</a></p>
   */
  class ViewBillingResult
  {
  public:
    AWS_ROUTE53DOMAINS_API ViewBillingResult() = default;
    AWS_ROUTE53DOMAINS_API ViewBillingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API ViewBillingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are more billing records than you specified for
     * <code>MaxItems</code> in the request, submit another request and include the
     * value of <code>NextPageMarker</code> in the value of <code>Marker</code>.</p>
     */
    inline const Aws::String& GetNextPageMarker() const { return m_nextPageMarker; }
    template<typename NextPageMarkerT = Aws::String>
    void SetNextPageMarker(NextPageMarkerT&& value) { m_nextPageMarkerHasBeenSet = true; m_nextPageMarker = std::forward<NextPageMarkerT>(value); }
    template<typename NextPageMarkerT = Aws::String>
    ViewBillingResult& WithNextPageMarker(NextPageMarkerT&& value) { SetNextPageMarker(std::forward<NextPageMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A summary of billing records.</p>
     */
    inline const Aws::Vector<BillingRecord>& GetBillingRecords() const { return m_billingRecords; }
    template<typename BillingRecordsT = Aws::Vector<BillingRecord>>
    void SetBillingRecords(BillingRecordsT&& value) { m_billingRecordsHasBeenSet = true; m_billingRecords = std::forward<BillingRecordsT>(value); }
    template<typename BillingRecordsT = Aws::Vector<BillingRecord>>
    ViewBillingResult& WithBillingRecords(BillingRecordsT&& value) { SetBillingRecords(std::forward<BillingRecordsT>(value)); return *this;}
    template<typename BillingRecordsT = BillingRecord>
    ViewBillingResult& AddBillingRecords(BillingRecordsT&& value) { m_billingRecordsHasBeenSet = true; m_billingRecords.emplace_back(std::forward<BillingRecordsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ViewBillingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextPageMarker;
    bool m_nextPageMarkerHasBeenSet = false;

    Aws::Vector<BillingRecord> m_billingRecords;
    bool m_billingRecordsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws

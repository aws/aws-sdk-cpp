/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/DeliverabilityTestReport.h>
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
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>A list of the predictive inbox placement test reports that are available for
   * your account, regardless of whether or not those tests are
   * complete.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/ListDeliverabilityTestReportsResponse">AWS
   * API Reference</a></p>
   */
  class ListDeliverabilityTestReportsResult
  {
  public:
    AWS_PINPOINTEMAIL_API ListDeliverabilityTestReportsResult() = default;
    AWS_PINPOINTEMAIL_API ListDeliverabilityTestReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTEMAIL_API ListDeliverabilityTestReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains a lists of predictive inbox placement tests that
     * you've performed.</p>
     */
    inline const Aws::Vector<DeliverabilityTestReport>& GetDeliverabilityTestReports() const { return m_deliverabilityTestReports; }
    template<typename DeliverabilityTestReportsT = Aws::Vector<DeliverabilityTestReport>>
    void SetDeliverabilityTestReports(DeliverabilityTestReportsT&& value) { m_deliverabilityTestReportsHasBeenSet = true; m_deliverabilityTestReports = std::forward<DeliverabilityTestReportsT>(value); }
    template<typename DeliverabilityTestReportsT = Aws::Vector<DeliverabilityTestReport>>
    ListDeliverabilityTestReportsResult& WithDeliverabilityTestReports(DeliverabilityTestReportsT&& value) { SetDeliverabilityTestReports(std::forward<DeliverabilityTestReportsT>(value)); return *this;}
    template<typename DeliverabilityTestReportsT = DeliverabilityTestReport>
    ListDeliverabilityTestReportsResult& AddDeliverabilityTestReports(DeliverabilityTestReportsT&& value) { m_deliverabilityTestReportsHasBeenSet = true; m_deliverabilityTestReports.emplace_back(std::forward<DeliverabilityTestReportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates that there are additional predictive inbox placement
     * tests to list. To view additional predictive inbox placement tests, issue
     * another request to <code>ListDeliverabilityTestReports</code>, and pass this
     * token in the <code>NextToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDeliverabilityTestReportsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDeliverabilityTestReportsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DeliverabilityTestReport> m_deliverabilityTestReports;
    bool m_deliverabilityTestReportsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws

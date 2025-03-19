/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/DeliverabilityTestStatus.h>
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
   * <p>Information about the predictive inbox placement test that you
   * created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/CreateDeliverabilityTestReportResponse">AWS
   * API Reference</a></p>
   */
  class CreateDeliverabilityTestReportResult
  {
  public:
    AWS_PINPOINTEMAIL_API CreateDeliverabilityTestReportResult() = default;
    AWS_PINPOINTEMAIL_API CreateDeliverabilityTestReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTEMAIL_API CreateDeliverabilityTestReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique string that identifies the predictive inbox placement test.</p>
     */
    inline const Aws::String& GetReportId() const { return m_reportId; }
    template<typename ReportIdT = Aws::String>
    void SetReportId(ReportIdT&& value) { m_reportIdHasBeenSet = true; m_reportId = std::forward<ReportIdT>(value); }
    template<typename ReportIdT = Aws::String>
    CreateDeliverabilityTestReportResult& WithReportId(ReportIdT&& value) { SetReportId(std::forward<ReportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the predictive inbox placement test. If the status is
     * <code>IN_PROGRESS</code>, then the predictive inbox placement test is currently
     * running. Predictive inbox placement tests are usually complete within 24 hours
     * of creating the test. If the status is <code>COMPLETE</code>, then the test is
     * finished, and you can use the <code>GetDeliverabilityTestReport</code> to view
     * the results of the test.</p>
     */
    inline DeliverabilityTestStatus GetDeliverabilityTestStatus() const { return m_deliverabilityTestStatus; }
    inline void SetDeliverabilityTestStatus(DeliverabilityTestStatus value) { m_deliverabilityTestStatusHasBeenSet = true; m_deliverabilityTestStatus = value; }
    inline CreateDeliverabilityTestReportResult& WithDeliverabilityTestStatus(DeliverabilityTestStatus value) { SetDeliverabilityTestStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDeliverabilityTestReportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reportId;
    bool m_reportIdHasBeenSet = false;

    DeliverabilityTestStatus m_deliverabilityTestStatus{DeliverabilityTestStatus::NOT_SET};
    bool m_deliverabilityTestStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws

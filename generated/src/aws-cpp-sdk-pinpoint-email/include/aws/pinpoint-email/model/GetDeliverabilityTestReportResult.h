/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/model/DeliverabilityTestReport.h>
#include <aws/pinpoint-email/model/PlacementStatistics.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/IspPlacement.h>
#include <aws/pinpoint-email/model/Tag.h>
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
   * <p>The results of the predictive inbox placement test.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetDeliverabilityTestReportResponse">AWS
   * API Reference</a></p>
   */
  class GetDeliverabilityTestReportResult
  {
  public:
    AWS_PINPOINTEMAIL_API GetDeliverabilityTestReportResult();
    AWS_PINPOINTEMAIL_API GetDeliverabilityTestReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTEMAIL_API GetDeliverabilityTestReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains the results of the predictive inbox placement
     * test.</p>
     */
    inline const DeliverabilityTestReport& GetDeliverabilityTestReport() const{ return m_deliverabilityTestReport; }
    inline void SetDeliverabilityTestReport(const DeliverabilityTestReport& value) { m_deliverabilityTestReport = value; }
    inline void SetDeliverabilityTestReport(DeliverabilityTestReport&& value) { m_deliverabilityTestReport = std::move(value); }
    inline GetDeliverabilityTestReportResult& WithDeliverabilityTestReport(const DeliverabilityTestReport& value) { SetDeliverabilityTestReport(value); return *this;}
    inline GetDeliverabilityTestReportResult& WithDeliverabilityTestReport(DeliverabilityTestReport&& value) { SetDeliverabilityTestReport(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that specifies how many test messages that were sent during the
     * predictive inbox placement test were delivered to recipients' inboxes, how many
     * were sent to recipients' spam folders, and how many weren't delivered.</p>
     */
    inline const PlacementStatistics& GetOverallPlacement() const{ return m_overallPlacement; }
    inline void SetOverallPlacement(const PlacementStatistics& value) { m_overallPlacement = value; }
    inline void SetOverallPlacement(PlacementStatistics&& value) { m_overallPlacement = std::move(value); }
    inline GetDeliverabilityTestReportResult& WithOverallPlacement(const PlacementStatistics& value) { SetOverallPlacement(value); return *this;}
    inline GetDeliverabilityTestReportResult& WithOverallPlacement(PlacementStatistics&& value) { SetOverallPlacement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes how the test email was handled by several email
     * providers, including Gmail, Hotmail, Yahoo, AOL, and others.</p>
     */
    inline const Aws::Vector<IspPlacement>& GetIspPlacements() const{ return m_ispPlacements; }
    inline void SetIspPlacements(const Aws::Vector<IspPlacement>& value) { m_ispPlacements = value; }
    inline void SetIspPlacements(Aws::Vector<IspPlacement>&& value) { m_ispPlacements = std::move(value); }
    inline GetDeliverabilityTestReportResult& WithIspPlacements(const Aws::Vector<IspPlacement>& value) { SetIspPlacements(value); return *this;}
    inline GetDeliverabilityTestReportResult& WithIspPlacements(Aws::Vector<IspPlacement>&& value) { SetIspPlacements(std::move(value)); return *this;}
    inline GetDeliverabilityTestReportResult& AddIspPlacements(const IspPlacement& value) { m_ispPlacements.push_back(value); return *this; }
    inline GetDeliverabilityTestReportResult& AddIspPlacements(IspPlacement&& value) { m_ispPlacements.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that contains the message that you sent when you performed this
     * predictive inbox placement test.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline GetDeliverabilityTestReportResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline GetDeliverabilityTestReportResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline GetDeliverabilityTestReportResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that define the tags (keys and values) that are
     * associated with the predictive inbox placement test.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline GetDeliverabilityTestReportResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline GetDeliverabilityTestReportResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline GetDeliverabilityTestReportResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline GetDeliverabilityTestReportResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDeliverabilityTestReportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDeliverabilityTestReportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDeliverabilityTestReportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DeliverabilityTestReport m_deliverabilityTestReport;

    PlacementStatistics m_overallPlacement;

    Aws::Vector<IspPlacement> m_ispPlacements;

    Aws::String m_message;

    Aws::Vector<Tag> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws

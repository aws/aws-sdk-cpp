/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/DeliverabilityTestReport.h>
#include <aws/sesv2/model/PlacementStatistics.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/IspPlacement.h>
#include <aws/sesv2/model/Tag.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>The results of the predictive inbox placement test.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDeliverabilityTestReportResponse">AWS
   * API Reference</a></p>
   */
  class GetDeliverabilityTestReportResult
  {
  public:
    AWS_SESV2_API GetDeliverabilityTestReportResult() = default;
    AWS_SESV2_API GetDeliverabilityTestReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetDeliverabilityTestReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains the results of the predictive inbox placement
     * test.</p>
     */
    inline const DeliverabilityTestReport& GetDeliverabilityTestReport() const { return m_deliverabilityTestReport; }
    template<typename DeliverabilityTestReportT = DeliverabilityTestReport>
    void SetDeliverabilityTestReport(DeliverabilityTestReportT&& value) { m_deliverabilityTestReportHasBeenSet = true; m_deliverabilityTestReport = std::forward<DeliverabilityTestReportT>(value); }
    template<typename DeliverabilityTestReportT = DeliverabilityTestReport>
    GetDeliverabilityTestReportResult& WithDeliverabilityTestReport(DeliverabilityTestReportT&& value) { SetDeliverabilityTestReport(std::forward<DeliverabilityTestReportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that specifies how many test messages that were sent during the
     * predictive inbox placement test were delivered to recipients' inboxes, how many
     * were sent to recipients' spam folders, and how many weren't delivered.</p>
     */
    inline const PlacementStatistics& GetOverallPlacement() const { return m_overallPlacement; }
    template<typename OverallPlacementT = PlacementStatistics>
    void SetOverallPlacement(OverallPlacementT&& value) { m_overallPlacementHasBeenSet = true; m_overallPlacement = std::forward<OverallPlacementT>(value); }
    template<typename OverallPlacementT = PlacementStatistics>
    GetDeliverabilityTestReportResult& WithOverallPlacement(OverallPlacementT&& value) { SetOverallPlacement(std::forward<OverallPlacementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes how the test email was handled by several email
     * providers, including Gmail, Hotmail, Yahoo, AOL, and others.</p>
     */
    inline const Aws::Vector<IspPlacement>& GetIspPlacements() const { return m_ispPlacements; }
    template<typename IspPlacementsT = Aws::Vector<IspPlacement>>
    void SetIspPlacements(IspPlacementsT&& value) { m_ispPlacementsHasBeenSet = true; m_ispPlacements = std::forward<IspPlacementsT>(value); }
    template<typename IspPlacementsT = Aws::Vector<IspPlacement>>
    GetDeliverabilityTestReportResult& WithIspPlacements(IspPlacementsT&& value) { SetIspPlacements(std::forward<IspPlacementsT>(value)); return *this;}
    template<typename IspPlacementsT = IspPlacement>
    GetDeliverabilityTestReportResult& AddIspPlacements(IspPlacementsT&& value) { m_ispPlacementsHasBeenSet = true; m_ispPlacements.emplace_back(std::forward<IspPlacementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object that contains the message that you sent when you performed this
     * predictive inbox placement test.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    GetDeliverabilityTestReportResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that define the tags (keys and values) that are
     * associated with the predictive inbox placement test.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    GetDeliverabilityTestReportResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    GetDeliverabilityTestReportResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDeliverabilityTestReportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DeliverabilityTestReport m_deliverabilityTestReport;
    bool m_deliverabilityTestReportHasBeenSet = false;

    PlacementStatistics m_overallPlacement;
    bool m_overallPlacementHasBeenSet = false;

    Aws::Vector<IspPlacement> m_ispPlacements;
    bool m_ispPlacementsHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws

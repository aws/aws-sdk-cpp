/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/DashboardValidationMessage.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{
  class PutDashboardResult
  {
  public:
    AWS_CLOUDWATCH_API PutDashboardResult() = default;
    AWS_CLOUDWATCH_API PutDashboardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API PutDashboardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>If the input for <code>PutDashboard</code> was correct and the dashboard was
     * successfully created or modified, this result is empty.</p> <p>If this result
     * includes only warning messages, then the input was valid enough for the
     * dashboard to be created or modified, but some elements of the dashboard might
     * not render.</p> <p>If this result includes error messages, the input was not
     * valid and the operation failed.</p>
     */
    inline const Aws::Vector<DashboardValidationMessage>& GetDashboardValidationMessages() const { return m_dashboardValidationMessages; }
    template<typename DashboardValidationMessagesT = Aws::Vector<DashboardValidationMessage>>
    void SetDashboardValidationMessages(DashboardValidationMessagesT&& value) { m_dashboardValidationMessagesHasBeenSet = true; m_dashboardValidationMessages = std::forward<DashboardValidationMessagesT>(value); }
    template<typename DashboardValidationMessagesT = Aws::Vector<DashboardValidationMessage>>
    PutDashboardResult& WithDashboardValidationMessages(DashboardValidationMessagesT&& value) { SetDashboardValidationMessages(std::forward<DashboardValidationMessagesT>(value)); return *this;}
    template<typename DashboardValidationMessagesT = DashboardValidationMessage>
    PutDashboardResult& AddDashboardValidationMessages(DashboardValidationMessagesT&& value) { m_dashboardValidationMessagesHasBeenSet = true; m_dashboardValidationMessages.emplace_back(std::forward<DashboardValidationMessagesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    PutDashboardResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DashboardValidationMessage> m_dashboardValidationMessages;
    bool m_dashboardValidationMessagesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws

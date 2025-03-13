/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/DashboardEntry.h>
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
  class ListDashboardsResult
  {
  public:
    AWS_CLOUDWATCH_API ListDashboardsResult() = default;
    AWS_CLOUDWATCH_API ListDashboardsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API ListDashboardsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The list of matching dashboards.</p>
     */
    inline const Aws::Vector<DashboardEntry>& GetDashboardEntries() const { return m_dashboardEntries; }
    template<typename DashboardEntriesT = Aws::Vector<DashboardEntry>>
    void SetDashboardEntries(DashboardEntriesT&& value) { m_dashboardEntriesHasBeenSet = true; m_dashboardEntries = std::forward<DashboardEntriesT>(value); }
    template<typename DashboardEntriesT = Aws::Vector<DashboardEntry>>
    ListDashboardsResult& WithDashboardEntries(DashboardEntriesT&& value) { SetDashboardEntries(std::forward<DashboardEntriesT>(value)); return *this;}
    template<typename DashboardEntriesT = DashboardEntry>
    ListDashboardsResult& AddDashboardEntries(DashboardEntriesT&& value) { m_dashboardEntriesHasBeenSet = true; m_dashboardEntries.emplace_back(std::forward<DashboardEntriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDashboardsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListDashboardsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DashboardEntry> m_dashboardEntries;
    bool m_dashboardEntriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws

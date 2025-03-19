/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/AlarmHistoryItem.h>
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
  class DescribeAlarmHistoryResult
  {
  public:
    AWS_CLOUDWATCH_API DescribeAlarmHistoryResult() = default;
    AWS_CLOUDWATCH_API DescribeAlarmHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API DescribeAlarmHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The alarm histories, in JSON format.</p>
     */
    inline const Aws::Vector<AlarmHistoryItem>& GetAlarmHistoryItems() const { return m_alarmHistoryItems; }
    template<typename AlarmHistoryItemsT = Aws::Vector<AlarmHistoryItem>>
    void SetAlarmHistoryItems(AlarmHistoryItemsT&& value) { m_alarmHistoryItemsHasBeenSet = true; m_alarmHistoryItems = std::forward<AlarmHistoryItemsT>(value); }
    template<typename AlarmHistoryItemsT = Aws::Vector<AlarmHistoryItem>>
    DescribeAlarmHistoryResult& WithAlarmHistoryItems(AlarmHistoryItemsT&& value) { SetAlarmHistoryItems(std::forward<AlarmHistoryItemsT>(value)); return *this;}
    template<typename AlarmHistoryItemsT = AlarmHistoryItem>
    DescribeAlarmHistoryResult& AddAlarmHistoryItems(AlarmHistoryItemsT&& value) { m_alarmHistoryItemsHasBeenSet = true; m_alarmHistoryItems.emplace_back(std::forward<AlarmHistoryItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAlarmHistoryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeAlarmHistoryResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AlarmHistoryItem> m_alarmHistoryItems;
    bool m_alarmHistoryItemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/AlarmContributor.h>
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
  class DescribeAlarmContributorsResult
  {
  public:
    AWS_CLOUDWATCH_API DescribeAlarmContributorsResult() = default;
    AWS_CLOUDWATCH_API DescribeAlarmContributorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API DescribeAlarmContributorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of alarm contributors that provide details about the individual time
     * series contributing to the alarm's state.</p>
     */
    inline const Aws::Vector<AlarmContributor>& GetAlarmContributors() const { return m_alarmContributors; }
    template<typename AlarmContributorsT = Aws::Vector<AlarmContributor>>
    void SetAlarmContributors(AlarmContributorsT&& value) { m_alarmContributorsHasBeenSet = true; m_alarmContributors = std::forward<AlarmContributorsT>(value); }
    template<typename AlarmContributorsT = Aws::Vector<AlarmContributor>>
    DescribeAlarmContributorsResult& WithAlarmContributors(AlarmContributorsT&& value) { SetAlarmContributors(std::forward<AlarmContributorsT>(value)); return *this;}
    template<typename AlarmContributorsT = AlarmContributor>
    DescribeAlarmContributorsResult& AddAlarmContributors(AlarmContributorsT&& value) { m_alarmContributorsHasBeenSet = true; m_alarmContributors.emplace_back(std::forward<AlarmContributorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAlarmContributorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeAlarmContributorsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AlarmContributor> m_alarmContributors;
    bool m_alarmContributorsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TopicRefreshDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QuickSight
{
namespace Model
{
  class DescribeTopicRefreshResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeTopicRefreshResult() = default;
    AWS_QUICKSIGHT_API DescribeTopicRefreshResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeTopicRefreshResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details of the refresh, which is performed when the topic is created or
     * updated.</p>
     */
    inline const TopicRefreshDetails& GetRefreshDetails() const { return m_refreshDetails; }
    template<typename RefreshDetailsT = TopicRefreshDetails>
    void SetRefreshDetails(RefreshDetailsT&& value) { m_refreshDetailsHasBeenSet = true; m_refreshDetails = std::forward<RefreshDetailsT>(value); }
    template<typename RefreshDetailsT = TopicRefreshDetails>
    DescribeTopicRefreshResult& WithRefreshDetails(RefreshDetailsT&& value) { SetRefreshDetails(std::forward<RefreshDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTopicRefreshResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeTopicRefreshResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    TopicRefreshDetails m_refreshDetails;
    bool m_refreshDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

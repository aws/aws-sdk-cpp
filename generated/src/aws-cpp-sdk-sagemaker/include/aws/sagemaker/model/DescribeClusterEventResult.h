/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterEventDetail.h>
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
namespace SageMaker
{
namespace Model
{
  class DescribeClusterEventResult
  {
  public:
    AWS_SAGEMAKER_API DescribeClusterEventResult() = default;
    AWS_SAGEMAKER_API DescribeClusterEventResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeClusterEventResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Detailed information about the requested cluster event, including event
     * metadata for various resource types such as <code>Cluster</code>,
     * <code>InstanceGroup</code>, <code>Instance</code>, and their associated
     * attributes.</p>
     */
    inline const ClusterEventDetail& GetEventDetails() const { return m_eventDetails; }
    template<typename EventDetailsT = ClusterEventDetail>
    void SetEventDetails(EventDetailsT&& value) { m_eventDetailsHasBeenSet = true; m_eventDetails = std::forward<EventDetailsT>(value); }
    template<typename EventDetailsT = ClusterEventDetail>
    DescribeClusterEventResult& WithEventDetails(EventDetailsT&& value) { SetEventDetails(std::forward<EventDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeClusterEventResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ClusterEventDetail m_eventDetails;
    bool m_eventDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

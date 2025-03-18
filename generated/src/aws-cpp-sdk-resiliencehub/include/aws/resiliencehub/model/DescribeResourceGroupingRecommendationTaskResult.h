/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/ResourcesGroupingRecGenStatusType.h>
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
namespace ResilienceHub
{
namespace Model
{
  class DescribeResourceGroupingRecommendationTaskResult
  {
  public:
    AWS_RESILIENCEHUB_API DescribeResourceGroupingRecommendationTaskResult() = default;
    AWS_RESILIENCEHUB_API DescribeResourceGroupingRecommendationTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API DescribeResourceGroupingRecommendationTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Error that occurred while generating a grouping recommendation.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    DescribeResourceGroupingRecommendationTaskResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the grouping recommendation task.</p>
     */
    inline const Aws::String& GetGroupingId() const { return m_groupingId; }
    template<typename GroupingIdT = Aws::String>
    void SetGroupingId(GroupingIdT&& value) { m_groupingIdHasBeenSet = true; m_groupingId = std::forward<GroupingIdT>(value); }
    template<typename GroupingIdT = Aws::String>
    DescribeResourceGroupingRecommendationTaskResult& WithGroupingId(GroupingIdT&& value) { SetGroupingId(std::forward<GroupingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the action.</p>
     */
    inline ResourcesGroupingRecGenStatusType GetStatus() const { return m_status; }
    inline void SetStatus(ResourcesGroupingRecGenStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeResourceGroupingRecommendationTaskResult& WithStatus(ResourcesGroupingRecGenStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeResourceGroupingRecommendationTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_groupingId;
    bool m_groupingIdHasBeenSet = false;

    ResourcesGroupingRecGenStatusType m_status{ResourcesGroupingRecGenStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws

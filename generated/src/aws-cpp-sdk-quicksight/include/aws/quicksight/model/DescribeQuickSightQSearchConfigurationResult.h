/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/QSearchStatus.h>
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
  class DescribeQuickSightQSearchConfigurationResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeQuickSightQSearchConfigurationResult() = default;
    AWS_QUICKSIGHT_API DescribeQuickSightQSearchConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeQuickSightQSearchConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of QuickSight Q Search configuration.</p>
     */
    inline QSearchStatus GetQSearchStatus() const { return m_qSearchStatus; }
    inline void SetQSearchStatus(QSearchStatus value) { m_qSearchStatusHasBeenSet = true; m_qSearchStatus = value; }
    inline DescribeQuickSightQSearchConfigurationResult& WithQSearchStatus(QSearchStatus value) { SetQSearchStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeQuickSightQSearchConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeQuickSightQSearchConfigurationResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    QSearchStatus m_qSearchStatus{QSearchStatus::NOT_SET};
    bool m_qSearchStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

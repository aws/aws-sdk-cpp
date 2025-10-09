/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ActionConnector.h>
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
  class DescribeActionConnectorResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeActionConnectorResult() = default;
    AWS_QUICKSIGHT_API DescribeActionConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeActionConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The detailed information about the action connector, including its
     * configuration and current state.</p>
     */
    inline const ActionConnector& GetActionConnector() const { return m_actionConnector; }
    template<typename ActionConnectorT = ActionConnector>
    void SetActionConnector(ActionConnectorT&& value) { m_actionConnectorHasBeenSet = true; m_actionConnector = std::forward<ActionConnectorT>(value); }
    template<typename ActionConnectorT = ActionConnector>
    DescribeActionConnectorResult& WithActionConnector(ActionConnectorT&& value) { SetActionConnector(std::forward<ActionConnectorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeActionConnectorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status code of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeActionConnectorResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    ActionConnector m_actionConnector;
    bool m_actionConnectorHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

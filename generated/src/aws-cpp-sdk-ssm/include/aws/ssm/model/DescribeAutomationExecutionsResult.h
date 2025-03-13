/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/AutomationExecutionMetadata.h>
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
namespace SSM
{
namespace Model
{
  class DescribeAutomationExecutionsResult
  {
  public:
    AWS_SSM_API DescribeAutomationExecutionsResult() = default;
    AWS_SSM_API DescribeAutomationExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeAutomationExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of details about each automation execution which has occurred which
     * matches the filter specification, if any.</p>
     */
    inline const Aws::Vector<AutomationExecutionMetadata>& GetAutomationExecutionMetadataList() const { return m_automationExecutionMetadataList; }
    template<typename AutomationExecutionMetadataListT = Aws::Vector<AutomationExecutionMetadata>>
    void SetAutomationExecutionMetadataList(AutomationExecutionMetadataListT&& value) { m_automationExecutionMetadataListHasBeenSet = true; m_automationExecutionMetadataList = std::forward<AutomationExecutionMetadataListT>(value); }
    template<typename AutomationExecutionMetadataListT = Aws::Vector<AutomationExecutionMetadata>>
    DescribeAutomationExecutionsResult& WithAutomationExecutionMetadataList(AutomationExecutionMetadataListT&& value) { SetAutomationExecutionMetadataList(std::forward<AutomationExecutionMetadataListT>(value)); return *this;}
    template<typename AutomationExecutionMetadataListT = AutomationExecutionMetadata>
    DescribeAutomationExecutionsResult& AddAutomationExecutionMetadataList(AutomationExecutionMetadataListT&& value) { m_automationExecutionMetadataListHasBeenSet = true; m_automationExecutionMetadataList.emplace_back(std::forward<AutomationExecutionMetadataListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAutomationExecutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAutomationExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AutomationExecutionMetadata> m_automationExecutionMetadataList;
    bool m_automationExecutionMetadataListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

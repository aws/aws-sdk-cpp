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
    AWS_SSM_API DescribeAutomationExecutionsResult();
    AWS_SSM_API DescribeAutomationExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeAutomationExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of details about each automation execution which has occurred which
     * matches the filter specification, if any.</p>
     */
    inline const Aws::Vector<AutomationExecutionMetadata>& GetAutomationExecutionMetadataList() const{ return m_automationExecutionMetadataList; }

    /**
     * <p>The list of details about each automation execution which has occurred which
     * matches the filter specification, if any.</p>
     */
    inline void SetAutomationExecutionMetadataList(const Aws::Vector<AutomationExecutionMetadata>& value) { m_automationExecutionMetadataList = value; }

    /**
     * <p>The list of details about each automation execution which has occurred which
     * matches the filter specification, if any.</p>
     */
    inline void SetAutomationExecutionMetadataList(Aws::Vector<AutomationExecutionMetadata>&& value) { m_automationExecutionMetadataList = std::move(value); }

    /**
     * <p>The list of details about each automation execution which has occurred which
     * matches the filter specification, if any.</p>
     */
    inline DescribeAutomationExecutionsResult& WithAutomationExecutionMetadataList(const Aws::Vector<AutomationExecutionMetadata>& value) { SetAutomationExecutionMetadataList(value); return *this;}

    /**
     * <p>The list of details about each automation execution which has occurred which
     * matches the filter specification, if any.</p>
     */
    inline DescribeAutomationExecutionsResult& WithAutomationExecutionMetadataList(Aws::Vector<AutomationExecutionMetadata>&& value) { SetAutomationExecutionMetadataList(std::move(value)); return *this;}

    /**
     * <p>The list of details about each automation execution which has occurred which
     * matches the filter specification, if any.</p>
     */
    inline DescribeAutomationExecutionsResult& AddAutomationExecutionMetadataList(const AutomationExecutionMetadata& value) { m_automationExecutionMetadataList.push_back(value); return *this; }

    /**
     * <p>The list of details about each automation execution which has occurred which
     * matches the filter specification, if any.</p>
     */
    inline DescribeAutomationExecutionsResult& AddAutomationExecutionMetadataList(AutomationExecutionMetadata&& value) { m_automationExecutionMetadataList.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeAutomationExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeAutomationExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeAutomationExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAutomationExecutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAutomationExecutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAutomationExecutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AutomationExecutionMetadata> m_automationExecutionMetadataList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

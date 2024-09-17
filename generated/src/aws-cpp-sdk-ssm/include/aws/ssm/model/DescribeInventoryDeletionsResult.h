/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/InventoryDeletionStatusItem.h>
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
  class DescribeInventoryDeletionsResult
  {
  public:
    AWS_SSM_API DescribeInventoryDeletionsResult();
    AWS_SSM_API DescribeInventoryDeletionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeInventoryDeletionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of status items for deleted inventory.</p>
     */
    inline const Aws::Vector<InventoryDeletionStatusItem>& GetInventoryDeletions() const{ return m_inventoryDeletions; }
    inline void SetInventoryDeletions(const Aws::Vector<InventoryDeletionStatusItem>& value) { m_inventoryDeletions = value; }
    inline void SetInventoryDeletions(Aws::Vector<InventoryDeletionStatusItem>&& value) { m_inventoryDeletions = std::move(value); }
    inline DescribeInventoryDeletionsResult& WithInventoryDeletions(const Aws::Vector<InventoryDeletionStatusItem>& value) { SetInventoryDeletions(value); return *this;}
    inline DescribeInventoryDeletionsResult& WithInventoryDeletions(Aws::Vector<InventoryDeletionStatusItem>&& value) { SetInventoryDeletions(std::move(value)); return *this;}
    inline DescribeInventoryDeletionsResult& AddInventoryDeletions(const InventoryDeletionStatusItem& value) { m_inventoryDeletions.push_back(value); return *this; }
    inline DescribeInventoryDeletionsResult& AddInventoryDeletions(InventoryDeletionStatusItem&& value) { m_inventoryDeletions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeInventoryDeletionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeInventoryDeletionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeInventoryDeletionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeInventoryDeletionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeInventoryDeletionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeInventoryDeletionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<InventoryDeletionStatusItem> m_inventoryDeletions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

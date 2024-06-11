/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/VcenterClient.h>
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
namespace mgn
{
namespace Model
{
  class DescribeVcenterClientsResult
  {
  public:
    AWS_MGN_API DescribeVcenterClientsResult();
    AWS_MGN_API DescribeVcenterClientsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API DescribeVcenterClientsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of items returned by DescribeVcenterClients.</p>
     */
    inline const Aws::Vector<VcenterClient>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<VcenterClient>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<VcenterClient>&& value) { m_items = std::move(value); }
    inline DescribeVcenterClientsResult& WithItems(const Aws::Vector<VcenterClient>& value) { SetItems(value); return *this;}
    inline DescribeVcenterClientsResult& WithItems(Aws::Vector<VcenterClient>&& value) { SetItems(std::move(value)); return *this;}
    inline DescribeVcenterClientsResult& AddItems(const VcenterClient& value) { m_items.push_back(value); return *this; }
    inline DescribeVcenterClientsResult& AddItems(VcenterClient&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Next pagination token returned from DescribeVcenterClients.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeVcenterClientsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeVcenterClientsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeVcenterClientsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeVcenterClientsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeVcenterClientsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeVcenterClientsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<VcenterClient> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws

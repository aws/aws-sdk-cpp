/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/AccessorSummary.h>
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
namespace ManagedBlockchain
{
namespace Model
{
  class ListAccessorsResult
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API ListAccessorsResult();
    AWS_MANAGEDBLOCKCHAIN_API ListAccessorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAIN_API ListAccessorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of AccessorSummary objects that contain configuration properties for
     * each accessor.</p>
     */
    inline const Aws::Vector<AccessorSummary>& GetAccessors() const{ return m_accessors; }
    inline void SetAccessors(const Aws::Vector<AccessorSummary>& value) { m_accessors = value; }
    inline void SetAccessors(Aws::Vector<AccessorSummary>&& value) { m_accessors = std::move(value); }
    inline ListAccessorsResult& WithAccessors(const Aws::Vector<AccessorSummary>& value) { SetAccessors(value); return *this;}
    inline ListAccessorsResult& WithAccessors(Aws::Vector<AccessorSummary>&& value) { SetAccessors(std::move(value)); return *this;}
    inline ListAccessorsResult& AddAccessors(const AccessorSummary& value) { m_accessors.push_back(value); return *this; }
    inline ListAccessorsResult& AddAccessors(AccessorSummary&& value) { m_accessors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The pagination token that indicates the next set of results to retrieve.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAccessorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAccessorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAccessorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAccessorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAccessorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAccessorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AccessorSummary> m_accessors;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws

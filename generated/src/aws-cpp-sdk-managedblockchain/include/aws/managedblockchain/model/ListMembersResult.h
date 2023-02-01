/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/MemberSummary.h>
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
  class ListMembersResult
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API ListMembersResult();
    AWS_MANAGEDBLOCKCHAIN_API ListMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAIN_API ListMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>MemberSummary</code> objects. Each object contains details
     * about a network member.</p>
     */
    inline const Aws::Vector<MemberSummary>& GetMembers() const{ return m_members; }

    /**
     * <p>An array of <code>MemberSummary</code> objects. Each object contains details
     * about a network member.</p>
     */
    inline void SetMembers(const Aws::Vector<MemberSummary>& value) { m_members = value; }

    /**
     * <p>An array of <code>MemberSummary</code> objects. Each object contains details
     * about a network member.</p>
     */
    inline void SetMembers(Aws::Vector<MemberSummary>&& value) { m_members = std::move(value); }

    /**
     * <p>An array of <code>MemberSummary</code> objects. Each object contains details
     * about a network member.</p>
     */
    inline ListMembersResult& WithMembers(const Aws::Vector<MemberSummary>& value) { SetMembers(value); return *this;}

    /**
     * <p>An array of <code>MemberSummary</code> objects. Each object contains details
     * about a network member.</p>
     */
    inline ListMembersResult& WithMembers(Aws::Vector<MemberSummary>&& value) { SetMembers(std::move(value)); return *this;}

    /**
     * <p>An array of <code>MemberSummary</code> objects. Each object contains details
     * about a network member.</p>
     */
    inline ListMembersResult& AddMembers(const MemberSummary& value) { m_members.push_back(value); return *this; }

    /**
     * <p>An array of <code>MemberSummary</code> objects. Each object contains details
     * about a network member.</p>
     */
    inline ListMembersResult& AddMembers(MemberSummary&& value) { m_members.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListMembersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListMembersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListMembersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MemberSummary> m_members;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SSMIncidents
{
namespace Model
{
  class ListReplicationSetsResult
  {
  public:
    AWS_SSMINCIDENTS_API ListReplicationSetsResult();
    AWS_SSMINCIDENTS_API ListReplicationSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API ListReplicationSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListReplicationSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListReplicationSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListReplicationSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the list replication set.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReplicationSetArns() const{ return m_replicationSetArns; }

    /**
     * <p>The Amazon Resource Name (ARN) of the list replication set.</p>
     */
    inline void SetReplicationSetArns(const Aws::Vector<Aws::String>& value) { m_replicationSetArns = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the list replication set.</p>
     */
    inline void SetReplicationSetArns(Aws::Vector<Aws::String>&& value) { m_replicationSetArns = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the list replication set.</p>
     */
    inline ListReplicationSetsResult& WithReplicationSetArns(const Aws::Vector<Aws::String>& value) { SetReplicationSetArns(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the list replication set.</p>
     */
    inline ListReplicationSetsResult& WithReplicationSetArns(Aws::Vector<Aws::String>&& value) { SetReplicationSetArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the list replication set.</p>
     */
    inline ListReplicationSetsResult& AddReplicationSetArns(const Aws::String& value) { m_replicationSetArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the list replication set.</p>
     */
    inline ListReplicationSetsResult& AddReplicationSetArns(Aws::String&& value) { m_replicationSetArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) of the list replication set.</p>
     */
    inline ListReplicationSetsResult& AddReplicationSetArns(const char* value) { m_replicationSetArns.push_back(value); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Aws::String> m_replicationSetArns;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws

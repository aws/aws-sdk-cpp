﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/Job.h>
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
  class DescribeJobsResult
  {
  public:
    AWS_MGN_API DescribeJobsResult();
    AWS_MGN_API DescribeJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API DescribeJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Request to describe Job log items.</p>
     */
    inline const Aws::Vector<Job>& GetItems() const{ return m_items; }

    /**
     * <p>Request to describe Job log items.</p>
     */
    inline void SetItems(const Aws::Vector<Job>& value) { m_items = value; }

    /**
     * <p>Request to describe Job log items.</p>
     */
    inline void SetItems(Aws::Vector<Job>&& value) { m_items = std::move(value); }

    /**
     * <p>Request to describe Job log items.</p>
     */
    inline DescribeJobsResult& WithItems(const Aws::Vector<Job>& value) { SetItems(value); return *this;}

    /**
     * <p>Request to describe Job log items.</p>
     */
    inline DescribeJobsResult& WithItems(Aws::Vector<Job>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Request to describe Job log items.</p>
     */
    inline DescribeJobsResult& AddItems(const Job& value) { m_items.push_back(value); return *this; }

    /**
     * <p>Request to describe Job log items.</p>
     */
    inline DescribeJobsResult& AddItems(Job&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>Request to describe Job response by next token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Request to describe Job response by next token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Request to describe Job response by next token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Request to describe Job response by next token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Request to describe Job response by next token.</p>
     */
    inline DescribeJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Request to describe Job response by next token.</p>
     */
    inline DescribeJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Request to describe Job response by next token.</p>
     */
    inline DescribeJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Job> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws

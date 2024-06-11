﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/Canary.h>
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
namespace Synthetics
{
namespace Model
{
  class DescribeCanariesResult
  {
  public:
    AWS_SYNTHETICS_API DescribeCanariesResult();
    AWS_SYNTHETICS_API DescribeCanariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SYNTHETICS_API DescribeCanariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns an array. Each item in the array contains the full information about
     * one canary.</p>
     */
    inline const Aws::Vector<Canary>& GetCanaries() const{ return m_canaries; }
    inline void SetCanaries(const Aws::Vector<Canary>& value) { m_canaries = value; }
    inline void SetCanaries(Aws::Vector<Canary>&& value) { m_canaries = std::move(value); }
    inline DescribeCanariesResult& WithCanaries(const Aws::Vector<Canary>& value) { SetCanaries(value); return *this;}
    inline DescribeCanariesResult& WithCanaries(Aws::Vector<Canary>&& value) { SetCanaries(std::move(value)); return *this;}
    inline DescribeCanariesResult& AddCanaries(const Canary& value) { m_canaries.push_back(value); return *this; }
    inline DescribeCanariesResult& AddCanaries(Canary&& value) { m_canaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeCanaries</code> operation to retrieve the
     * next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeCanariesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeCanariesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeCanariesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeCanariesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeCanariesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeCanariesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Canary> m_canaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>A list of dedicated IP pools.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListDedicatedIpPoolsResponse">AWS
   * API Reference</a></p>
   */
  class ListDedicatedIpPoolsResult
  {
  public:
    AWS_SESV2_API ListDedicatedIpPoolsResult();
    AWS_SESV2_API ListDedicatedIpPoolsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListDedicatedIpPoolsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of all of the dedicated IP pools that are associated with your Amazon
     * Web Services account in the current Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDedicatedIpPools() const{ return m_dedicatedIpPools; }
    inline void SetDedicatedIpPools(const Aws::Vector<Aws::String>& value) { m_dedicatedIpPools = value; }
    inline void SetDedicatedIpPools(Aws::Vector<Aws::String>&& value) { m_dedicatedIpPools = std::move(value); }
    inline ListDedicatedIpPoolsResult& WithDedicatedIpPools(const Aws::Vector<Aws::String>& value) { SetDedicatedIpPools(value); return *this;}
    inline ListDedicatedIpPoolsResult& WithDedicatedIpPools(Aws::Vector<Aws::String>&& value) { SetDedicatedIpPools(std::move(value)); return *this;}
    inline ListDedicatedIpPoolsResult& AddDedicatedIpPools(const Aws::String& value) { m_dedicatedIpPools.push_back(value); return *this; }
    inline ListDedicatedIpPoolsResult& AddDedicatedIpPools(Aws::String&& value) { m_dedicatedIpPools.push_back(std::move(value)); return *this; }
    inline ListDedicatedIpPoolsResult& AddDedicatedIpPools(const char* value) { m_dedicatedIpPools.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates that there are additional IP pools to list. To view
     * additional IP pools, issue another request to <code>ListDedicatedIpPools</code>,
     * passing this token in the <code>NextToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDedicatedIpPoolsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDedicatedIpPoolsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDedicatedIpPoolsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDedicatedIpPoolsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDedicatedIpPoolsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDedicatedIpPoolsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_dedicatedIpPools;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws

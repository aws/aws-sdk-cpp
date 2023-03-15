﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3outposts/S3Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3outposts/model/Endpoint.h>
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
namespace S3Outposts
{
namespace Model
{
  class ListSharedEndpointsResult
  {
  public:
    AWS_S3OUTPOSTS_API ListSharedEndpointsResult();
    AWS_S3OUTPOSTS_API ListSharedEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3OUTPOSTS_API ListSharedEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of endpoints associated with the specified Outpost that have been
     * shared by Amazon Web Services Resource Access Manager (RAM).</p>
     */
    inline const Aws::Vector<Endpoint>& GetEndpoints() const{ return m_endpoints; }

    /**
     * <p>The list of endpoints associated with the specified Outpost that have been
     * shared by Amazon Web Services Resource Access Manager (RAM).</p>
     */
    inline void SetEndpoints(const Aws::Vector<Endpoint>& value) { m_endpoints = value; }

    /**
     * <p>The list of endpoints associated with the specified Outpost that have been
     * shared by Amazon Web Services Resource Access Manager (RAM).</p>
     */
    inline void SetEndpoints(Aws::Vector<Endpoint>&& value) { m_endpoints = std::move(value); }

    /**
     * <p>The list of endpoints associated with the specified Outpost that have been
     * shared by Amazon Web Services Resource Access Manager (RAM).</p>
     */
    inline ListSharedEndpointsResult& WithEndpoints(const Aws::Vector<Endpoint>& value) { SetEndpoints(value); return *this;}

    /**
     * <p>The list of endpoints associated with the specified Outpost that have been
     * shared by Amazon Web Services Resource Access Manager (RAM).</p>
     */
    inline ListSharedEndpointsResult& WithEndpoints(Aws::Vector<Endpoint>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * <p>The list of endpoints associated with the specified Outpost that have been
     * shared by Amazon Web Services Resource Access Manager (RAM).</p>
     */
    inline ListSharedEndpointsResult& AddEndpoints(const Endpoint& value) { m_endpoints.push_back(value); return *this; }

    /**
     * <p>The list of endpoints associated with the specified Outpost that have been
     * shared by Amazon Web Services Resource Access Manager (RAM).</p>
     */
    inline ListSharedEndpointsResult& AddEndpoints(Endpoint&& value) { m_endpoints.push_back(std::move(value)); return *this; }


    /**
     * <p>If the number of endpoints associated with the specified Outpost exceeds
     * <code>MaxResults</code>, you can include this value in subsequent calls to this
     * operation to retrieve more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the number of endpoints associated with the specified Outpost exceeds
     * <code>MaxResults</code>, you can include this value in subsequent calls to this
     * operation to retrieve more results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the number of endpoints associated with the specified Outpost exceeds
     * <code>MaxResults</code>, you can include this value in subsequent calls to this
     * operation to retrieve more results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the number of endpoints associated with the specified Outpost exceeds
     * <code>MaxResults</code>, you can include this value in subsequent calls to this
     * operation to retrieve more results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the number of endpoints associated with the specified Outpost exceeds
     * <code>MaxResults</code>, you can include this value in subsequent calls to this
     * operation to retrieve more results.</p>
     */
    inline ListSharedEndpointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the number of endpoints associated with the specified Outpost exceeds
     * <code>MaxResults</code>, you can include this value in subsequent calls to this
     * operation to retrieve more results.</p>
     */
    inline ListSharedEndpointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the number of endpoints associated with the specified Outpost exceeds
     * <code>MaxResults</code>, you can include this value in subsequent calls to this
     * operation to retrieve more results.</p>
     */
    inline ListSharedEndpointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSharedEndpointsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSharedEndpointsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSharedEndpointsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Endpoint> m_endpoints;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Outposts
} // namespace Aws

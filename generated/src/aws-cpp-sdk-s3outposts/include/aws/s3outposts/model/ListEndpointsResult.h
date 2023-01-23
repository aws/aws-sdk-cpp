/**
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
  class ListEndpointsResult
  {
  public:
    AWS_S3OUTPOSTS_API ListEndpointsResult();
    AWS_S3OUTPOSTS_API ListEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3OUTPOSTS_API ListEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of endpoints associated with the specified Outpost.</p>
     */
    inline const Aws::Vector<Endpoint>& GetEndpoints() const{ return m_endpoints; }

    /**
     * <p>The list of endpoints associated with the specified Outpost.</p>
     */
    inline void SetEndpoints(const Aws::Vector<Endpoint>& value) { m_endpoints = value; }

    /**
     * <p>The list of endpoints associated with the specified Outpost.</p>
     */
    inline void SetEndpoints(Aws::Vector<Endpoint>&& value) { m_endpoints = std::move(value); }

    /**
     * <p>The list of endpoints associated with the specified Outpost.</p>
     */
    inline ListEndpointsResult& WithEndpoints(const Aws::Vector<Endpoint>& value) { SetEndpoints(value); return *this;}

    /**
     * <p>The list of endpoints associated with the specified Outpost.</p>
     */
    inline ListEndpointsResult& WithEndpoints(Aws::Vector<Endpoint>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * <p>The list of endpoints associated with the specified Outpost.</p>
     */
    inline ListEndpointsResult& AddEndpoints(const Endpoint& value) { m_endpoints.push_back(value); return *this; }

    /**
     * <p>The list of endpoints associated with the specified Outpost.</p>
     */
    inline ListEndpointsResult& AddEndpoints(Endpoint&& value) { m_endpoints.push_back(std::move(value)); return *this; }


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
    inline ListEndpointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the number of endpoints associated with the specified Outpost exceeds
     * <code>MaxResults</code>, you can include this value in subsequent calls to this
     * operation to retrieve more results.</p>
     */
    inline ListEndpointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the number of endpoints associated with the specified Outpost exceeds
     * <code>MaxResults</code>, you can include this value in subsequent calls to this
     * operation to retrieve more results.</p>
     */
    inline ListEndpointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Endpoint> m_endpoints;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace S3Outposts
} // namespace Aws

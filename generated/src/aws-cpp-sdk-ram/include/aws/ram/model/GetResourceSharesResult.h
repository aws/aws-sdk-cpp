﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/ResourceShare.h>
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
namespace RAM
{
namespace Model
{
  class GetResourceSharesResult
  {
  public:
    AWS_RAM_API GetResourceSharesResult();
    AWS_RAM_API GetResourceSharesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RAM_API GetResourceSharesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that contain the information about the resource
     * shares.</p>
     */
    inline const Aws::Vector<ResourceShare>& GetResourceShares() const{ return m_resourceShares; }
    inline void SetResourceShares(const Aws::Vector<ResourceShare>& value) { m_resourceShares = value; }
    inline void SetResourceShares(Aws::Vector<ResourceShare>&& value) { m_resourceShares = std::move(value); }
    inline GetResourceSharesResult& WithResourceShares(const Aws::Vector<ResourceShare>& value) { SetResourceShares(value); return *this;}
    inline GetResourceSharesResult& WithResourceShares(Aws::Vector<ResourceShare>&& value) { SetResourceShares(std::move(value)); return *this;}
    inline GetResourceSharesResult& AddResourceShares(const ResourceShare& value) { m_resourceShares.push_back(value); return *this; }
    inline GetResourceSharesResult& AddResourceShares(ResourceShare&& value) { m_resourceShares.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If present, this value indicates that more output is available than is
     * included in the current response. Use this value in the <code>NextToken</code>
     * request parameter in a subsequent call to the operation to get the next part of
     * the output. You should repeat this until the <code>NextToken</code> response
     * element comes back as <code>null</code>. This indicates that this is the last
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetResourceSharesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetResourceSharesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetResourceSharesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetResourceSharesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetResourceSharesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetResourceSharesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ResourceShare> m_resourceShares;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws

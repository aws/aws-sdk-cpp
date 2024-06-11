﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-web/model/TrustStoreSummary.h>
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
namespace WorkSpacesWeb
{
namespace Model
{
  class ListTrustStoresResult
  {
  public:
    AWS_WORKSPACESWEB_API ListTrustStoresResult();
    AWS_WORKSPACESWEB_API ListTrustStoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API ListTrustStoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTrustStoresResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTrustStoresResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTrustStoresResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The trust stores.</p>
     */
    inline const Aws::Vector<TrustStoreSummary>& GetTrustStores() const{ return m_trustStores; }
    inline void SetTrustStores(const Aws::Vector<TrustStoreSummary>& value) { m_trustStores = value; }
    inline void SetTrustStores(Aws::Vector<TrustStoreSummary>&& value) { m_trustStores = std::move(value); }
    inline ListTrustStoresResult& WithTrustStores(const Aws::Vector<TrustStoreSummary>& value) { SetTrustStores(value); return *this;}
    inline ListTrustStoresResult& WithTrustStores(Aws::Vector<TrustStoreSummary>&& value) { SetTrustStores(std::move(value)); return *this;}
    inline ListTrustStoresResult& AddTrustStores(const TrustStoreSummary& value) { m_trustStores.push_back(value); return *this; }
    inline ListTrustStoresResult& AddTrustStores(TrustStoreSummary&& value) { m_trustStores.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTrustStoresResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTrustStoresResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTrustStoresResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<TrustStoreSummary> m_trustStores;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws

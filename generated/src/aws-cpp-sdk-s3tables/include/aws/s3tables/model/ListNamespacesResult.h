/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/model/NamespaceSummary.h>
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
namespace S3Tables
{
namespace Model
{
  class ListNamespacesResult
  {
  public:
    AWS_S3TABLES_API ListNamespacesResult();
    AWS_S3TABLES_API ListNamespacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3TABLES_API ListNamespacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of namespaces.</p>
     */
    inline const Aws::Vector<NamespaceSummary>& GetNamespaces() const{ return m_namespaces; }
    inline void SetNamespaces(const Aws::Vector<NamespaceSummary>& value) { m_namespaces = value; }
    inline void SetNamespaces(Aws::Vector<NamespaceSummary>&& value) { m_namespaces = std::move(value); }
    inline ListNamespacesResult& WithNamespaces(const Aws::Vector<NamespaceSummary>& value) { SetNamespaces(value); return *this;}
    inline ListNamespacesResult& WithNamespaces(Aws::Vector<NamespaceSummary>&& value) { SetNamespaces(std::move(value)); return *this;}
    inline ListNamespacesResult& AddNamespaces(const NamespaceSummary& value) { m_namespaces.push_back(value); return *this; }
    inline ListNamespacesResult& AddNamespaces(NamespaceSummary&& value) { m_namespaces.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>ContinuationToken</code> for pagination of the list results.</p>
     */
    inline const Aws::String& GetContinuationToken() const{ return m_continuationToken; }
    inline void SetContinuationToken(const Aws::String& value) { m_continuationToken = value; }
    inline void SetContinuationToken(Aws::String&& value) { m_continuationToken = std::move(value); }
    inline void SetContinuationToken(const char* value) { m_continuationToken.assign(value); }
    inline ListNamespacesResult& WithContinuationToken(const Aws::String& value) { SetContinuationToken(value); return *this;}
    inline ListNamespacesResult& WithContinuationToken(Aws::String&& value) { SetContinuationToken(std::move(value)); return *this;}
    inline ListNamespacesResult& WithContinuationToken(const char* value) { SetContinuationToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListNamespacesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListNamespacesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListNamespacesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<NamespaceSummary> m_namespaces;

    Aws::String m_continuationToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws

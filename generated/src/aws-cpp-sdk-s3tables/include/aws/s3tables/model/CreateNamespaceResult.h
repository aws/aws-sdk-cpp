/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
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
namespace S3Tables
{
namespace Model
{
  class CreateNamespaceResult
  {
  public:
    AWS_S3TABLES_API CreateNamespaceResult();
    AWS_S3TABLES_API CreateNamespaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3TABLES_API CreateNamespaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table bucket the namespace was created
     * in.</p>
     */
    inline const Aws::String& GetTableBucketARN() const{ return m_tableBucketARN; }
    inline void SetTableBucketARN(const Aws::String& value) { m_tableBucketARN = value; }
    inline void SetTableBucketARN(Aws::String&& value) { m_tableBucketARN = std::move(value); }
    inline void SetTableBucketARN(const char* value) { m_tableBucketARN.assign(value); }
    inline CreateNamespaceResult& WithTableBucketARN(const Aws::String& value) { SetTableBucketARN(value); return *this;}
    inline CreateNamespaceResult& WithTableBucketARN(Aws::String&& value) { SetTableBucketARN(std::move(value)); return *this;}
    inline CreateNamespaceResult& WithTableBucketARN(const char* value) { SetTableBucketARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the namespace.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNamespace() const{ return m_namespace; }
    inline void SetNamespace(const Aws::Vector<Aws::String>& value) { m_namespace = value; }
    inline void SetNamespace(Aws::Vector<Aws::String>&& value) { m_namespace = std::move(value); }
    inline CreateNamespaceResult& WithNamespace(const Aws::Vector<Aws::String>& value) { SetNamespace(value); return *this;}
    inline CreateNamespaceResult& WithNamespace(Aws::Vector<Aws::String>&& value) { SetNamespace(std::move(value)); return *this;}
    inline CreateNamespaceResult& AddNamespace(const Aws::String& value) { m_namespace.push_back(value); return *this; }
    inline CreateNamespaceResult& AddNamespace(Aws::String&& value) { m_namespace.push_back(std::move(value)); return *this; }
    inline CreateNamespaceResult& AddNamespace(const char* value) { m_namespace.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateNamespaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateNamespaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateNamespaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_tableBucketARN;

    Aws::Vector<Aws::String> m_namespace;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws

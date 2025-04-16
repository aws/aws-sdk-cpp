/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace S3Tables
{
namespace Model
{
  class GetNamespaceResult
  {
  public:
    AWS_S3TABLES_API GetNamespaceResult() = default;
    AWS_S3TABLES_API GetNamespaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3TABLES_API GetNamespaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the namespace.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNamespace() const { return m_namespace; }
    template<typename NamespaceT = Aws::Vector<Aws::String>>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::Vector<Aws::String>>
    GetNamespaceResult& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    template<typename NamespaceT = Aws::String>
    GetNamespaceResult& AddNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace.emplace_back(std::forward<NamespaceT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time the namespace was created at.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetNamespaceResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the account that created the namespace.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    GetNamespaceResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the account that owns the namespcace.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
    template<typename OwnerAccountIdT = Aws::String>
    void SetOwnerAccountId(OwnerAccountIdT&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::forward<OwnerAccountIdT>(value); }
    template<typename OwnerAccountIdT = Aws::String>
    GetNamespaceResult& WithOwnerAccountId(OwnerAccountIdT&& value) { SetOwnerAccountId(std::forward<OwnerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the namespace.</p>
     */
    inline const Aws::String& GetNamespaceId() const { return m_namespaceId; }
    template<typename NamespaceIdT = Aws::String>
    void SetNamespaceId(NamespaceIdT&& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = std::forward<NamespaceIdT>(value); }
    template<typename NamespaceIdT = Aws::String>
    GetNamespaceResult& WithNamespaceId(NamespaceIdT&& value) { SetNamespaceId(std::forward<NamespaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the table bucket containing this namespace.</p>
     */
    inline const Aws::String& GetTableBucketId() const { return m_tableBucketId; }
    template<typename TableBucketIdT = Aws::String>
    void SetTableBucketId(TableBucketIdT&& value) { m_tableBucketIdHasBeenSet = true; m_tableBucketId = std::forward<TableBucketIdT>(value); }
    template<typename TableBucketIdT = Aws::String>
    GetNamespaceResult& WithTableBucketId(TableBucketIdT&& value) { SetTableBucketId(std::forward<TableBucketIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetNamespaceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    Aws::String m_namespaceId;
    bool m_namespaceIdHasBeenSet = false;

    Aws::String m_tableBucketId;
    bool m_tableBucketIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/Namespace.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class RestoreFromSnapshotResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API RestoreFromSnapshotResult() = default;
    AWS_REDSHIFTSERVERLESS_API RestoreFromSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API RestoreFromSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Namespace& GetNamespace() const { return m_namespace; }
    template<typename NamespaceT = Namespace>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Namespace>
    RestoreFromSnapshotResult& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner Amazon Web Services; account of the snapshot that was restored.</p>
     */
    inline const Aws::String& GetOwnerAccount() const { return m_ownerAccount; }
    template<typename OwnerAccountT = Aws::String>
    void SetOwnerAccount(OwnerAccountT&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::forward<OwnerAccountT>(value); }
    template<typename OwnerAccountT = Aws::String>
    RestoreFromSnapshotResult& WithOwnerAccount(OwnerAccountT&& value) { SetOwnerAccount(std::forward<OwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the snapshot used to restore the namespace.</p>
     */
    inline const Aws::String& GetSnapshotName() const { return m_snapshotName; }
    template<typename SnapshotNameT = Aws::String>
    void SetSnapshotName(SnapshotNameT&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::forward<SnapshotNameT>(value); }
    template<typename SnapshotNameT = Aws::String>
    RestoreFromSnapshotResult& WithSnapshotName(SnapshotNameT&& value) { SetSnapshotName(std::forward<SnapshotNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RestoreFromSnapshotResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Namespace m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws

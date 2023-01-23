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
    AWS_REDSHIFTSERVERLESS_API RestoreFromSnapshotResult();
    AWS_REDSHIFTSERVERLESS_API RestoreFromSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API RestoreFromSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Namespace& GetNamespace() const{ return m_namespace; }

    
    inline void SetNamespace(const Namespace& value) { m_namespace = value; }

    
    inline void SetNamespace(Namespace&& value) { m_namespace = std::move(value); }

    
    inline RestoreFromSnapshotResult& WithNamespace(const Namespace& value) { SetNamespace(value); return *this;}

    
    inline RestoreFromSnapshotResult& WithNamespace(Namespace&& value) { SetNamespace(std::move(value)); return *this;}


    /**
     * <p>The owner Amazon Web Services; account of the snapshot that was restored.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The owner Amazon Web Services; account of the snapshot that was restored.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccount = value; }

    /**
     * <p>The owner Amazon Web Services; account of the snapshot that was restored.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccount = std::move(value); }

    /**
     * <p>The owner Amazon Web Services; account of the snapshot that was restored.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccount.assign(value); }

    /**
     * <p>The owner Amazon Web Services; account of the snapshot that was restored.</p>
     */
    inline RestoreFromSnapshotResult& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The owner Amazon Web Services; account of the snapshot that was restored.</p>
     */
    inline RestoreFromSnapshotResult& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The owner Amazon Web Services; account of the snapshot that was restored.</p>
     */
    inline RestoreFromSnapshotResult& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}


    /**
     * <p>The name of the snapshot used to restore the namespace.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }

    /**
     * <p>The name of the snapshot used to restore the namespace.</p>
     */
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotName = value; }

    /**
     * <p>The name of the snapshot used to restore the namespace.</p>
     */
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotName = std::move(value); }

    /**
     * <p>The name of the snapshot used to restore the namespace.</p>
     */
    inline void SetSnapshotName(const char* value) { m_snapshotName.assign(value); }

    /**
     * <p>The name of the snapshot used to restore the namespace.</p>
     */
    inline RestoreFromSnapshotResult& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}

    /**
     * <p>The name of the snapshot used to restore the namespace.</p>
     */
    inline RestoreFromSnapshotResult& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of the snapshot used to restore the namespace.</p>
     */
    inline RestoreFromSnapshotResult& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}

  private:

    Namespace m_namespace;

    Aws::String m_ownerAccount;

    Aws::String m_snapshotName;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/model/TableType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/s3tables/model/OpenTableFormat.h>
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
  class GetTableResult
  {
  public:
    AWS_S3TABLES_API GetTableResult();
    AWS_S3TABLES_API GetTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3TABLES_API GetTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the table.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetTableResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetTableResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetTableResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the table.</p>
     */
    inline const TableType& GetType() const{ return m_type; }
    inline void SetType(const TableType& value) { m_type = value; }
    inline void SetType(TableType&& value) { m_type = std::move(value); }
    inline GetTableResult& WithType(const TableType& value) { SetType(value); return *this;}
    inline GetTableResult& WithType(TableType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table.</p>
     */
    inline const Aws::String& GetTableARN() const{ return m_tableARN; }
    inline void SetTableARN(const Aws::String& value) { m_tableARN = value; }
    inline void SetTableARN(Aws::String&& value) { m_tableARN = std::move(value); }
    inline void SetTableARN(const char* value) { m_tableARN.assign(value); }
    inline GetTableResult& WithTableARN(const Aws::String& value) { SetTableARN(value); return *this;}
    inline GetTableResult& WithTableARN(Aws::String&& value) { SetTableARN(std::move(value)); return *this;}
    inline GetTableResult& WithTableARN(const char* value) { SetTableARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace associated with the table.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNamespace() const{ return m_namespace; }
    inline void SetNamespace(const Aws::Vector<Aws::String>& value) { m_namespace = value; }
    inline void SetNamespace(Aws::Vector<Aws::String>&& value) { m_namespace = std::move(value); }
    inline GetTableResult& WithNamespace(const Aws::Vector<Aws::String>& value) { SetNamespace(value); return *this;}
    inline GetTableResult& WithNamespace(Aws::Vector<Aws::String>&& value) { SetNamespace(std::move(value)); return *this;}
    inline GetTableResult& AddNamespace(const Aws::String& value) { m_namespace.push_back(value); return *this; }
    inline GetTableResult& AddNamespace(Aws::String&& value) { m_namespace.push_back(std::move(value)); return *this; }
    inline GetTableResult& AddNamespace(const char* value) { m_namespace.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version token of the table.</p>
     */
    inline const Aws::String& GetVersionToken() const{ return m_versionToken; }
    inline void SetVersionToken(const Aws::String& value) { m_versionToken = value; }
    inline void SetVersionToken(Aws::String&& value) { m_versionToken = std::move(value); }
    inline void SetVersionToken(const char* value) { m_versionToken.assign(value); }
    inline GetTableResult& WithVersionToken(const Aws::String& value) { SetVersionToken(value); return *this;}
    inline GetTableResult& WithVersionToken(Aws::String&& value) { SetVersionToken(std::move(value)); return *this;}
    inline GetTableResult& WithVersionToken(const char* value) { SetVersionToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata location of the table.</p>
     */
    inline const Aws::String& GetMetadataLocation() const{ return m_metadataLocation; }
    inline void SetMetadataLocation(const Aws::String& value) { m_metadataLocation = value; }
    inline void SetMetadataLocation(Aws::String&& value) { m_metadataLocation = std::move(value); }
    inline void SetMetadataLocation(const char* value) { m_metadataLocation.assign(value); }
    inline GetTableResult& WithMetadataLocation(const Aws::String& value) { SetMetadataLocation(value); return *this;}
    inline GetTableResult& WithMetadataLocation(Aws::String&& value) { SetMetadataLocation(std::move(value)); return *this;}
    inline GetTableResult& WithMetadataLocation(const char* value) { SetMetadataLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The warehouse location of the table.</p>
     */
    inline const Aws::String& GetWarehouseLocation() const{ return m_warehouseLocation; }
    inline void SetWarehouseLocation(const Aws::String& value) { m_warehouseLocation = value; }
    inline void SetWarehouseLocation(Aws::String&& value) { m_warehouseLocation = std::move(value); }
    inline void SetWarehouseLocation(const char* value) { m_warehouseLocation.assign(value); }
    inline GetTableResult& WithWarehouseLocation(const Aws::String& value) { SetWarehouseLocation(value); return *this;}
    inline GetTableResult& WithWarehouseLocation(Aws::String&& value) { SetWarehouseLocation(std::move(value)); return *this;}
    inline GetTableResult& WithWarehouseLocation(const char* value) { SetWarehouseLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the table bucket was created at.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetTableResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetTableResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the account that created the table.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetTableResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetTableResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetTableResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service that manages the table.</p>
     */
    inline const Aws::String& GetManagedByService() const{ return m_managedByService; }
    inline void SetManagedByService(const Aws::String& value) { m_managedByService = value; }
    inline void SetManagedByService(Aws::String&& value) { m_managedByService = std::move(value); }
    inline void SetManagedByService(const char* value) { m_managedByService.assign(value); }
    inline GetTableResult& WithManagedByService(const Aws::String& value) { SetManagedByService(value); return *this;}
    inline GetTableResult& WithManagedByService(Aws::String&& value) { SetManagedByService(std::move(value)); return *this;}
    inline GetTableResult& WithManagedByService(const char* value) { SetManagedByService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the table was last modified on.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAt = value; }
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAt = std::move(value); }
    inline GetTableResult& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}
    inline GetTableResult& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the account that last modified the table.</p>
     */
    inline const Aws::String& GetModifiedBy() const{ return m_modifiedBy; }
    inline void SetModifiedBy(const Aws::String& value) { m_modifiedBy = value; }
    inline void SetModifiedBy(Aws::String&& value) { m_modifiedBy = std::move(value); }
    inline void SetModifiedBy(const char* value) { m_modifiedBy.assign(value); }
    inline GetTableResult& WithModifiedBy(const Aws::String& value) { SetModifiedBy(value); return *this;}
    inline GetTableResult& WithModifiedBy(Aws::String&& value) { SetModifiedBy(std::move(value)); return *this;}
    inline GetTableResult& WithModifiedBy(const char* value) { SetModifiedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the account that owns the table.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountId = value; }
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountId = std::move(value); }
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountId.assign(value); }
    inline GetTableResult& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}
    inline GetTableResult& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}
    inline GetTableResult& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the table.</p>
     */
    inline const OpenTableFormat& GetFormat() const{ return m_format; }
    inline void SetFormat(const OpenTableFormat& value) { m_format = value; }
    inline void SetFormat(OpenTableFormat&& value) { m_format = std::move(value); }
    inline GetTableResult& WithFormat(const OpenTableFormat& value) { SetFormat(value); return *this;}
    inline GetTableResult& WithFormat(OpenTableFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTableResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTableResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTableResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_name;

    TableType m_type;

    Aws::String m_tableARN;

    Aws::Vector<Aws::String> m_namespace;

    Aws::String m_versionToken;

    Aws::String m_metadataLocation;

    Aws::String m_warehouseLocation;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_managedByService;

    Aws::Utils::DateTime m_modifiedAt;

    Aws::String m_modifiedBy;

    Aws::String m_ownerAccountId;

    OpenTableFormat m_format;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws

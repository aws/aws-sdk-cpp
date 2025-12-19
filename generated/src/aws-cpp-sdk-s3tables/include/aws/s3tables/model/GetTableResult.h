/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/ManagedTableInformation.h>
#include <aws/s3tables/model/OpenTableFormat.h>
#include <aws/s3tables/model/TableType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace S3Tables {
namespace Model {
class GetTableResult {
 public:
  AWS_S3TABLES_API GetTableResult() = default;
  AWS_S3TABLES_API GetTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_S3TABLES_API GetTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the table.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetTableResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the table.</p>
   */
  inline TableType GetType() const { return m_type; }
  inline void SetType(TableType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline GetTableResult& WithType(TableType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the table.</p>
   */
  inline const Aws::String& GetTableARN() const { return m_tableARN; }
  template <typename TableARNT = Aws::String>
  void SetTableARN(TableARNT&& value) {
    m_tableARNHasBeenSet = true;
    m_tableARN = std::forward<TableARNT>(value);
  }
  template <typename TableARNT = Aws::String>
  GetTableResult& WithTableARN(TableARNT&& value) {
    SetTableARN(std::forward<TableARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The namespace associated with the table.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNamespace() const { return m_namespace; }
  template <typename NamespaceT = Aws::Vector<Aws::String>>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::Vector<Aws::String>>
  GetTableResult& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  template <typename NamespaceT = Aws::String>
  GetTableResult& AddNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace.emplace_back(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the namespace containing this table.</p>
   */
  inline const Aws::String& GetNamespaceId() const { return m_namespaceId; }
  template <typename NamespaceIdT = Aws::String>
  void SetNamespaceId(NamespaceIdT&& value) {
    m_namespaceIdHasBeenSet = true;
    m_namespaceId = std::forward<NamespaceIdT>(value);
  }
  template <typename NamespaceIdT = Aws::String>
  GetTableResult& WithNamespaceId(NamespaceIdT&& value) {
    SetNamespaceId(std::forward<NamespaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version token of the table.</p>
   */
  inline const Aws::String& GetVersionToken() const { return m_versionToken; }
  template <typename VersionTokenT = Aws::String>
  void SetVersionToken(VersionTokenT&& value) {
    m_versionTokenHasBeenSet = true;
    m_versionToken = std::forward<VersionTokenT>(value);
  }
  template <typename VersionTokenT = Aws::String>
  GetTableResult& WithVersionToken(VersionTokenT&& value) {
    SetVersionToken(std::forward<VersionTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata location of the table.</p>
   */
  inline const Aws::String& GetMetadataLocation() const { return m_metadataLocation; }
  template <typename MetadataLocationT = Aws::String>
  void SetMetadataLocation(MetadataLocationT&& value) {
    m_metadataLocationHasBeenSet = true;
    m_metadataLocation = std::forward<MetadataLocationT>(value);
  }
  template <typename MetadataLocationT = Aws::String>
  GetTableResult& WithMetadataLocation(MetadataLocationT&& value) {
    SetMetadataLocation(std::forward<MetadataLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The warehouse location of the table.</p>
   */
  inline const Aws::String& GetWarehouseLocation() const { return m_warehouseLocation; }
  template <typename WarehouseLocationT = Aws::String>
  void SetWarehouseLocation(WarehouseLocationT&& value) {
    m_warehouseLocationHasBeenSet = true;
    m_warehouseLocation = std::forward<WarehouseLocationT>(value);
  }
  template <typename WarehouseLocationT = Aws::String>
  GetTableResult& WithWarehouseLocation(WarehouseLocationT&& value) {
    SetWarehouseLocation(std::forward<WarehouseLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the table bucket was created at.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetTableResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the account that created the table.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  GetTableResult& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service that manages the table.</p>
   */
  inline const Aws::String& GetManagedByService() const { return m_managedByService; }
  template <typename ManagedByServiceT = Aws::String>
  void SetManagedByService(ManagedByServiceT&& value) {
    m_managedByServiceHasBeenSet = true;
    m_managedByService = std::forward<ManagedByServiceT>(value);
  }
  template <typename ManagedByServiceT = Aws::String>
  GetTableResult& WithManagedByService(ManagedByServiceT&& value) {
    SetManagedByService(std::forward<ManagedByServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the table was last modified on.</p>
   */
  inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  void SetModifiedAt(ModifiedAtT&& value) {
    m_modifiedAtHasBeenSet = true;
    m_modifiedAt = std::forward<ModifiedAtT>(value);
  }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  GetTableResult& WithModifiedAt(ModifiedAtT&& value) {
    SetModifiedAt(std::forward<ModifiedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the account that last modified the table.</p>
   */
  inline const Aws::String& GetModifiedBy() const { return m_modifiedBy; }
  template <typename ModifiedByT = Aws::String>
  void SetModifiedBy(ModifiedByT&& value) {
    m_modifiedByHasBeenSet = true;
    m_modifiedBy = std::forward<ModifiedByT>(value);
  }
  template <typename ModifiedByT = Aws::String>
  GetTableResult& WithModifiedBy(ModifiedByT&& value) {
    SetModifiedBy(std::forward<ModifiedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the account that owns the table.</p>
   */
  inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
  template <typename OwnerAccountIdT = Aws::String>
  void SetOwnerAccountId(OwnerAccountIdT&& value) {
    m_ownerAccountIdHasBeenSet = true;
    m_ownerAccountId = std::forward<OwnerAccountIdT>(value);
  }
  template <typename OwnerAccountIdT = Aws::String>
  GetTableResult& WithOwnerAccountId(OwnerAccountIdT&& value) {
    SetOwnerAccountId(std::forward<OwnerAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The format of the table.</p>
   */
  inline OpenTableFormat GetFormat() const { return m_format; }
  inline void SetFormat(OpenTableFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline GetTableResult& WithFormat(OpenTableFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the table bucket containing this table.</p>
   */
  inline const Aws::String& GetTableBucketId() const { return m_tableBucketId; }
  template <typename TableBucketIdT = Aws::String>
  void SetTableBucketId(TableBucketIdT&& value) {
    m_tableBucketIdHasBeenSet = true;
    m_tableBucketId = std::forward<TableBucketIdT>(value);
  }
  template <typename TableBucketIdT = Aws::String>
  GetTableResult& WithTableBucketId(TableBucketIdT&& value) {
    SetTableBucketId(std::forward<TableBucketIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If this table is managed by S3 Tables, contains additional information such
   * as replication details.</p>
   */
  inline const ManagedTableInformation& GetManagedTableInformation() const { return m_managedTableInformation; }
  template <typename ManagedTableInformationT = ManagedTableInformation>
  void SetManagedTableInformation(ManagedTableInformationT&& value) {
    m_managedTableInformationHasBeenSet = true;
    m_managedTableInformation = std::forward<ManagedTableInformationT>(value);
  }
  template <typename ManagedTableInformationT = ManagedTableInformation>
  GetTableResult& WithManagedTableInformation(ManagedTableInformationT&& value) {
    SetManagedTableInformation(std::forward<ManagedTableInformationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetTableResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  TableType m_type{TableType::NOT_SET};

  Aws::String m_tableARN;

  Aws::Vector<Aws::String> m_namespace;

  Aws::String m_namespaceId;

  Aws::String m_versionToken;

  Aws::String m_metadataLocation;

  Aws::String m_warehouseLocation;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_createdBy;

  Aws::String m_managedByService;

  Aws::Utils::DateTime m_modifiedAt{};

  Aws::String m_modifiedBy;

  Aws::String m_ownerAccountId;

  OpenTableFormat m_format{OpenTableFormat::NOT_SET};

  Aws::String m_tableBucketId;

  ManagedTableInformation m_managedTableInformation;

  Aws::String m_requestId;
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_tableARNHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
  bool m_namespaceIdHasBeenSet = false;
  bool m_versionTokenHasBeenSet = false;
  bool m_metadataLocationHasBeenSet = false;
  bool m_warehouseLocationHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_managedByServiceHasBeenSet = false;
  bool m_modifiedAtHasBeenSet = false;
  bool m_modifiedByHasBeenSet = false;
  bool m_ownerAccountIdHasBeenSet = false;
  bool m_formatHasBeenSet = false;
  bool m_tableBucketIdHasBeenSet = false;
  bool m_managedTableInformationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws

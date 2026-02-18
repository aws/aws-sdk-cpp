/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/FailoverState.h>
#include <aws/rds/model/GlobalClusterMember.h>
#include <aws/rds/model/StorageEncryptionType.h>
#include <aws/rds/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace RDS {
namespace Model {

/**
 * <p>A data type representing an Aurora global database.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/GlobalCluster">AWS
 * API Reference</a></p>
 */
class GlobalCluster {
 public:
  AWS_RDS_API GlobalCluster() = default;
  AWS_RDS_API GlobalCluster(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RDS_API GlobalCluster& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>Contains a user-supplied global database cluster identifier. This identifier
   * is the unique key that identifies a global database cluster.</p>
   */
  inline const Aws::String& GetGlobalClusterIdentifier() const { return m_globalClusterIdentifier; }
  inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }
  template <typename GlobalClusterIdentifierT = Aws::String>
  void SetGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) {
    m_globalClusterIdentifierHasBeenSet = true;
    m_globalClusterIdentifier = std::forward<GlobalClusterIdentifierT>(value);
  }
  template <typename GlobalClusterIdentifierT = Aws::String>
  GlobalCluster& WithGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) {
    SetGlobalClusterIdentifier(std::forward<GlobalClusterIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services <a
   * href="https://docs.aws.amazon.com/glossary/latest/reference/glos-chap.html?id=docs_gateway#partition">partition</a>-unique,
   * immutable identifier for the global database cluster. This identifier is found
   * in Amazon Web Services CloudTrail log entries whenever the Amazon Web Services
   * KMS key for the DB cluster is accessed.</p>
   */
  inline const Aws::String& GetGlobalClusterResourceId() const { return m_globalClusterResourceId; }
  inline bool GlobalClusterResourceIdHasBeenSet() const { return m_globalClusterResourceIdHasBeenSet; }
  template <typename GlobalClusterResourceIdT = Aws::String>
  void SetGlobalClusterResourceId(GlobalClusterResourceIdT&& value) {
    m_globalClusterResourceIdHasBeenSet = true;
    m_globalClusterResourceId = std::forward<GlobalClusterResourceIdT>(value);
  }
  template <typename GlobalClusterResourceIdT = Aws::String>
  GlobalCluster& WithGlobalClusterResourceId(GlobalClusterResourceIdT&& value) {
    SetGlobalClusterResourceId(std::forward<GlobalClusterResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the global database cluster.</p>
   */
  inline const Aws::String& GetGlobalClusterArn() const { return m_globalClusterArn; }
  inline bool GlobalClusterArnHasBeenSet() const { return m_globalClusterArnHasBeenSet; }
  template <typename GlobalClusterArnT = Aws::String>
  void SetGlobalClusterArn(GlobalClusterArnT&& value) {
    m_globalClusterArnHasBeenSet = true;
    m_globalClusterArn = std::forward<GlobalClusterArnT>(value);
  }
  template <typename GlobalClusterArnT = Aws::String>
  GlobalCluster& WithGlobalClusterArn(GlobalClusterArnT&& value) {
    SetGlobalClusterArn(std::forward<GlobalClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the current state of this global database cluster.</p>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  GlobalCluster& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Aurora database engine used by the global database cluster.</p>
   */
  inline const Aws::String& GetEngine() const { return m_engine; }
  inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
  template <typename EngineT = Aws::String>
  void SetEngine(EngineT&& value) {
    m_engineHasBeenSet = true;
    m_engine = std::forward<EngineT>(value);
  }
  template <typename EngineT = Aws::String>
  GlobalCluster& WithEngine(EngineT&& value) {
    SetEngine(std::forward<EngineT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates the database engine version.</p>
   */
  inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
  inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
  template <typename EngineVersionT = Aws::String>
  void SetEngineVersion(EngineVersionT&& value) {
    m_engineVersionHasBeenSet = true;
    m_engineVersion = std::forward<EngineVersionT>(value);
  }
  template <typename EngineVersionT = Aws::String>
  GlobalCluster& WithEngineVersion(EngineVersionT&& value) {
    SetEngineVersion(std::forward<EngineVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle type for the global cluster.</p> <p>For more information, see
   * CreateGlobalCluster.</p>
   */
  inline const Aws::String& GetEngineLifecycleSupport() const { return m_engineLifecycleSupport; }
  inline bool EngineLifecycleSupportHasBeenSet() const { return m_engineLifecycleSupportHasBeenSet; }
  template <typename EngineLifecycleSupportT = Aws::String>
  void SetEngineLifecycleSupport(EngineLifecycleSupportT&& value) {
    m_engineLifecycleSupportHasBeenSet = true;
    m_engineLifecycleSupport = std::forward<EngineLifecycleSupportT>(value);
  }
  template <typename EngineLifecycleSupportT = Aws::String>
  GlobalCluster& WithEngineLifecycleSupport(EngineLifecycleSupportT&& value) {
    SetEngineLifecycleSupport(std::forward<EngineLifecycleSupportT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default database name within the new global database cluster.</p>
   */
  inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
  inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
  template <typename DatabaseNameT = Aws::String>
  void SetDatabaseName(DatabaseNameT&& value) {
    m_databaseNameHasBeenSet = true;
    m_databaseName = std::forward<DatabaseNameT>(value);
  }
  template <typename DatabaseNameT = Aws::String>
  GlobalCluster& WithDatabaseName(DatabaseNameT&& value) {
    SetDatabaseName(std::forward<DatabaseNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The storage encryption setting for the global database cluster.</p>
   */
  inline bool GetStorageEncrypted() const { return m_storageEncrypted; }
  inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }
  inline void SetStorageEncrypted(bool value) {
    m_storageEncryptedHasBeenSet = true;
    m_storageEncrypted = value;
  }
  inline GlobalCluster& WithStorageEncrypted(bool value) {
    SetStorageEncrypted(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of encryption used to protect data at rest in the global database
   * cluster. Possible values:</p> <ul> <li> <p> <code>none</code> - The global
   * database cluster is not encrypted.</p> </li> <li> <p> <code>sse-rds</code> - The
   * global database cluster is encrypted using an Amazon Web Services owned KMS
   * key.</p> </li> <li> <p> <code>sse-kms</code> - The global database cluster is
   * encrypted using a customer managed KMS key or Amazon Web Services managed KMS
   * key.</p> </li> </ul>
   */
  inline StorageEncryptionType GetStorageEncryptionType() const { return m_storageEncryptionType; }
  inline bool StorageEncryptionTypeHasBeenSet() const { return m_storageEncryptionTypeHasBeenSet; }
  inline void SetStorageEncryptionType(StorageEncryptionType value) {
    m_storageEncryptionTypeHasBeenSet = true;
    m_storageEncryptionType = value;
  }
  inline GlobalCluster& WithStorageEncryptionType(StorageEncryptionType value) {
    SetStorageEncryptionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The deletion protection setting for the new global database cluster.</p>
   */
  inline bool GetDeletionProtection() const { return m_deletionProtection; }
  inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
  inline void SetDeletionProtection(bool value) {
    m_deletionProtectionHasBeenSet = true;
    m_deletionProtection = value;
  }
  inline GlobalCluster& WithDeletionProtection(bool value) {
    SetDeletionProtection(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of primary and secondary clusters within the global database
   * cluster.</p>
   */
  inline const Aws::Vector<GlobalClusterMember>& GetGlobalClusterMembers() const { return m_globalClusterMembers; }
  inline bool GlobalClusterMembersHasBeenSet() const { return m_globalClusterMembersHasBeenSet; }
  template <typename GlobalClusterMembersT = Aws::Vector<GlobalClusterMember>>
  void SetGlobalClusterMembers(GlobalClusterMembersT&& value) {
    m_globalClusterMembersHasBeenSet = true;
    m_globalClusterMembers = std::forward<GlobalClusterMembersT>(value);
  }
  template <typename GlobalClusterMembersT = Aws::Vector<GlobalClusterMember>>
  GlobalCluster& WithGlobalClusterMembers(GlobalClusterMembersT&& value) {
    SetGlobalClusterMembers(std::forward<GlobalClusterMembersT>(value));
    return *this;
  }
  template <typename GlobalClusterMembersT = GlobalClusterMember>
  GlobalCluster& AddGlobalClusterMembers(GlobalClusterMembersT&& value) {
    m_globalClusterMembersHasBeenSet = true;
    m_globalClusterMembers.emplace_back(std::forward<GlobalClusterMembersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The writer endpoint for the new global database cluster. This endpoint
   * always points to the writer DB instance in the current primary cluster. </p>
   */
  inline const Aws::String& GetEndpoint() const { return m_endpoint; }
  inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
  template <typename EndpointT = Aws::String>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = Aws::String>
  GlobalCluster& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A data object containing all properties for the current state of an
   * in-process or pending switchover or failover process for this global cluster
   * (Aurora global database). This object is empty unless the
   * <code>SwitchoverGlobalCluster</code> or <code>FailoverGlobalCluster</code>
   * operation was called on this global cluster.</p>
   */
  inline const FailoverState& GetFailoverState() const { return m_failoverState; }
  inline bool FailoverStateHasBeenSet() const { return m_failoverStateHasBeenSet; }
  template <typename FailoverStateT = FailoverState>
  void SetFailoverState(FailoverStateT&& value) {
    m_failoverStateHasBeenSet = true;
    m_failoverState = std::forward<FailoverStateT>(value);
  }
  template <typename FailoverStateT = FailoverState>
  GlobalCluster& WithFailoverState(FailoverStateT&& value) {
    SetFailoverState(std::forward<FailoverStateT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Tag>& GetTagList() const { return m_tagList; }
  inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
  template <typename TagListT = Aws::Vector<Tag>>
  void SetTagList(TagListT&& value) {
    m_tagListHasBeenSet = true;
    m_tagList = std::forward<TagListT>(value);
  }
  template <typename TagListT = Aws::Vector<Tag>>
  GlobalCluster& WithTagList(TagListT&& value) {
    SetTagList(std::forward<TagListT>(value));
    return *this;
  }
  template <typename TagListT = Tag>
  GlobalCluster& AddTagList(TagListT&& value) {
    m_tagListHasBeenSet = true;
    m_tagList.emplace_back(std::forward<TagListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_globalClusterIdentifier;

  Aws::String m_globalClusterResourceId;

  Aws::String m_globalClusterArn;

  Aws::String m_status;

  Aws::String m_engine;

  Aws::String m_engineVersion;

  Aws::String m_engineLifecycleSupport;

  Aws::String m_databaseName;

  bool m_storageEncrypted{false};

  StorageEncryptionType m_storageEncryptionType{StorageEncryptionType::NOT_SET};

  bool m_deletionProtection{false};

  Aws::Vector<GlobalClusterMember> m_globalClusterMembers;

  Aws::String m_endpoint;

  FailoverState m_failoverState;

  Aws::Vector<Tag> m_tagList;
  bool m_globalClusterIdentifierHasBeenSet = false;
  bool m_globalClusterResourceIdHasBeenSet = false;
  bool m_globalClusterArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_engineHasBeenSet = false;
  bool m_engineVersionHasBeenSet = false;
  bool m_engineLifecycleSupportHasBeenSet = false;
  bool m_databaseNameHasBeenSet = false;
  bool m_storageEncryptedHasBeenSet = false;
  bool m_storageEncryptionTypeHasBeenSet = false;
  bool m_deletionProtectionHasBeenSet = false;
  bool m_globalClusterMembersHasBeenSet = false;
  bool m_endpointHasBeenSet = false;
  bool m_failoverStateHasBeenSet = false;
  bool m_tagListHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws

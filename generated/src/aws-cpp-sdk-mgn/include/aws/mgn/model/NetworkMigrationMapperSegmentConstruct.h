/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>Represents a construct within a mapper segment. A construct is an individual
 * infrastructure component such as a VPC, subnet, security group, route table, or
 * other network resource that is part of the network migration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/NetworkMigrationMapperSegmentConstruct">AWS
 * API Reference</a></p>
 */
class NetworkMigrationMapperSegmentConstruct {
 public:
  AWS_MGN_API NetworkMigrationMapperSegmentConstruct() = default;
  AWS_MGN_API NetworkMigrationMapperSegmentConstruct(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API NetworkMigrationMapperSegmentConstruct& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the construct.</p>
   */
  inline const Aws::String& GetConstructID() const { return m_constructID; }
  inline bool ConstructIDHasBeenSet() const { return m_constructIDHasBeenSet; }
  template <typename ConstructIDT = Aws::String>
  void SetConstructID(ConstructIDT&& value) {
    m_constructIDHasBeenSet = true;
    m_constructID = std::forward<ConstructIDT>(value);
  }
  template <typename ConstructIDT = Aws::String>
  NetworkMigrationMapperSegmentConstruct& WithConstructID(ConstructIDT&& value) {
    SetConstructID(std::forward<ConstructIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the construct, such as VPC, subnet, security group, or route
   * table.</p>
   */
  inline const Aws::String& GetConstructType() const { return m_constructType; }
  inline bool ConstructTypeHasBeenSet() const { return m_constructTypeHasBeenSet; }
  template <typename ConstructTypeT = Aws::String>
  void SetConstructType(ConstructTypeT&& value) {
    m_constructTypeHasBeenSet = true;
    m_constructType = std::forward<ConstructTypeT>(value);
  }
  template <typename ConstructTypeT = Aws::String>
  NetworkMigrationMapperSegmentConstruct& WithConstructType(ConstructTypeT&& value) {
    SetConstructType(std::forward<ConstructTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the construct.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  NetworkMigrationMapperSegmentConstruct& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the construct.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  NetworkMigrationMapperSegmentConstruct& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logical identifier for the construct in the infrastructure code.</p>
   */
  inline const Aws::String& GetLogicalID() const { return m_logicalID; }
  inline bool LogicalIDHasBeenSet() const { return m_logicalIDHasBeenSet; }
  template <typename LogicalIDT = Aws::String>
  void SetLogicalID(LogicalIDT&& value) {
    m_logicalIDHasBeenSet = true;
    m_logicalID = std::forward<LogicalIDT>(value);
  }
  template <typename LogicalIDT = Aws::String>
  NetworkMigrationMapperSegmentConstruct& WithLogicalID(LogicalIDT&& value) {
    SetLogicalID(std::forward<LogicalIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the construct was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  NetworkMigrationMapperSegmentConstruct& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the construct was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  NetworkMigrationMapperSegmentConstruct& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The properties and configuration of the construct.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const { return m_properties; }
  inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
  template <typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
  void SetProperties(PropertiesT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties = std::forward<PropertiesT>(value);
  }
  template <typename PropertiesT = Aws::Map<Aws::String, Aws::String>>
  NetworkMigrationMapperSegmentConstruct& WithProperties(PropertiesT&& value) {
    SetProperties(std::forward<PropertiesT>(value));
    return *this;
  }
  template <typename PropertiesKeyT = Aws::String, typename PropertiesValueT = Aws::String>
  NetworkMigrationMapperSegmentConstruct& AddProperties(PropertiesKeyT&& key, PropertiesValueT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties.emplace(std::forward<PropertiesKeyT>(key), std::forward<PropertiesValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_constructID;

  Aws::String m_constructType;

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_logicalID;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Map<Aws::String, Aws::String> m_properties;
  bool m_constructIDHasBeenSet = false;
  bool m_constructTypeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_logicalIDHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_propertiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws

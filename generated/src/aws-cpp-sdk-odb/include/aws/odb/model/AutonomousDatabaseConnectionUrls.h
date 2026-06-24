/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {

/**
 * <p>The connection URLs for accessing tools and services for an Autonomous
 * Database.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/AutonomousDatabaseConnectionUrls">AWS
 * API Reference</a></p>
 */
class AutonomousDatabaseConnectionUrls {
 public:
  AWS_ODB_API AutonomousDatabaseConnectionUrls() = default;
  AWS_ODB_API AutonomousDatabaseConnectionUrls(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API AutonomousDatabaseConnectionUrls& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The URL for accessing Oracle Application Express (APEX) for the Autonomous
   * Database.</p>
   */
  inline const Aws::String& GetApexUrl() const { return m_apexUrl; }
  inline bool ApexUrlHasBeenSet() const { return m_apexUrlHasBeenSet; }
  template <typename ApexUrlT = Aws::String>
  void SetApexUrl(ApexUrlT&& value) {
    m_apexUrlHasBeenSet = true;
    m_apexUrl = std::forward<ApexUrlT>(value);
  }
  template <typename ApexUrlT = Aws::String>
  AutonomousDatabaseConnectionUrls& WithApexUrl(ApexUrlT&& value) {
    SetApexUrl(std::forward<ApexUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL for accessing Oracle Database Transforms for the Autonomous
   * Database.</p>
   */
  inline const Aws::String& GetDatabaseTransformsUrl() const { return m_databaseTransformsUrl; }
  inline bool DatabaseTransformsUrlHasBeenSet() const { return m_databaseTransformsUrlHasBeenSet; }
  template <typename DatabaseTransformsUrlT = Aws::String>
  void SetDatabaseTransformsUrl(DatabaseTransformsUrlT&& value) {
    m_databaseTransformsUrlHasBeenSet = true;
    m_databaseTransformsUrl = std::forward<DatabaseTransformsUrlT>(value);
  }
  template <typename DatabaseTransformsUrlT = Aws::String>
  AutonomousDatabaseConnectionUrls& WithDatabaseTransformsUrl(DatabaseTransformsUrlT&& value) {
    SetDatabaseTransformsUrl(std::forward<DatabaseTransformsUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL for accessing Oracle Graph Studio for the Autonomous Database.</p>
   */
  inline const Aws::String& GetGraphStudioUrl() const { return m_graphStudioUrl; }
  inline bool GraphStudioUrlHasBeenSet() const { return m_graphStudioUrlHasBeenSet; }
  template <typename GraphStudioUrlT = Aws::String>
  void SetGraphStudioUrl(GraphStudioUrlT&& value) {
    m_graphStudioUrlHasBeenSet = true;
    m_graphStudioUrl = std::forward<GraphStudioUrlT>(value);
  }
  template <typename GraphStudioUrlT = Aws::String>
  AutonomousDatabaseConnectionUrls& WithGraphStudioUrl(GraphStudioUrlT&& value) {
    SetGraphStudioUrl(std::forward<GraphStudioUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL for accessing the Oracle Machine Learning notebook for the Autonomous
   * Database.</p>
   */
  inline const Aws::String& GetMachineLearningNotebookUrl() const { return m_machineLearningNotebookUrl; }
  inline bool MachineLearningNotebookUrlHasBeenSet() const { return m_machineLearningNotebookUrlHasBeenSet; }
  template <typename MachineLearningNotebookUrlT = Aws::String>
  void SetMachineLearningNotebookUrl(MachineLearningNotebookUrlT&& value) {
    m_machineLearningNotebookUrlHasBeenSet = true;
    m_machineLearningNotebookUrl = std::forward<MachineLearningNotebookUrlT>(value);
  }
  template <typename MachineLearningNotebookUrlT = Aws::String>
  AutonomousDatabaseConnectionUrls& WithMachineLearningNotebookUrl(MachineLearningNotebookUrlT&& value) {
    SetMachineLearningNotebookUrl(std::forward<MachineLearningNotebookUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL for accessing Oracle Machine Learning user management for the
   * Autonomous Database.</p>
   */
  inline const Aws::String& GetMachineLearningUserManagementUrl() const { return m_machineLearningUserManagementUrl; }
  inline bool MachineLearningUserManagementUrlHasBeenSet() const { return m_machineLearningUserManagementUrlHasBeenSet; }
  template <typename MachineLearningUserManagementUrlT = Aws::String>
  void SetMachineLearningUserManagementUrl(MachineLearningUserManagementUrlT&& value) {
    m_machineLearningUserManagementUrlHasBeenSet = true;
    m_machineLearningUserManagementUrl = std::forward<MachineLearningUserManagementUrlT>(value);
  }
  template <typename MachineLearningUserManagementUrlT = Aws::String>
  AutonomousDatabaseConnectionUrls& WithMachineLearningUserManagementUrl(MachineLearningUserManagementUrlT&& value) {
    SetMachineLearningUserManagementUrl(std::forward<MachineLearningUserManagementUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL for accessing the MongoDB API for the Autonomous Database.</p>
   */
  inline const Aws::String& GetMongoDbUrl() const { return m_mongoDbUrl; }
  inline bool MongoDbUrlHasBeenSet() const { return m_mongoDbUrlHasBeenSet; }
  template <typename MongoDbUrlT = Aws::String>
  void SetMongoDbUrl(MongoDbUrlT&& value) {
    m_mongoDbUrlHasBeenSet = true;
    m_mongoDbUrl = std::forward<MongoDbUrlT>(value);
  }
  template <typename MongoDbUrlT = Aws::String>
  AutonomousDatabaseConnectionUrls& WithMongoDbUrl(MongoDbUrlT&& value) {
    SetMongoDbUrl(std::forward<MongoDbUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL for accessing Oracle REST Data Services (ORDS) for the Autonomous
   * Database.</p>
   */
  inline const Aws::String& GetOrdsUrl() const { return m_ordsUrl; }
  inline bool OrdsUrlHasBeenSet() const { return m_ordsUrlHasBeenSet; }
  template <typename OrdsUrlT = Aws::String>
  void SetOrdsUrl(OrdsUrlT&& value) {
    m_ordsUrlHasBeenSet = true;
    m_ordsUrl = std::forward<OrdsUrlT>(value);
  }
  template <typename OrdsUrlT = Aws::String>
  AutonomousDatabaseConnectionUrls& WithOrdsUrl(OrdsUrlT&& value) {
    SetOrdsUrl(std::forward<OrdsUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL for accessing Oracle Spatial Studio for the Autonomous Database.</p>
   */
  inline const Aws::String& GetSpatialStudioUrl() const { return m_spatialStudioUrl; }
  inline bool SpatialStudioUrlHasBeenSet() const { return m_spatialStudioUrlHasBeenSet; }
  template <typename SpatialStudioUrlT = Aws::String>
  void SetSpatialStudioUrl(SpatialStudioUrlT&& value) {
    m_spatialStudioUrlHasBeenSet = true;
    m_spatialStudioUrl = std::forward<SpatialStudioUrlT>(value);
  }
  template <typename SpatialStudioUrlT = Aws::String>
  AutonomousDatabaseConnectionUrls& WithSpatialStudioUrl(SpatialStudioUrlT&& value) {
    SetSpatialStudioUrl(std::forward<SpatialStudioUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL for accessing Oracle SQL Developer Web for the Autonomous
   * Database.</p>
   */
  inline const Aws::String& GetSqlDevWebUrl() const { return m_sqlDevWebUrl; }
  inline bool SqlDevWebUrlHasBeenSet() const { return m_sqlDevWebUrlHasBeenSet; }
  template <typename SqlDevWebUrlT = Aws::String>
  void SetSqlDevWebUrl(SqlDevWebUrlT&& value) {
    m_sqlDevWebUrlHasBeenSet = true;
    m_sqlDevWebUrl = std::forward<SqlDevWebUrlT>(value);
  }
  template <typename SqlDevWebUrlT = Aws::String>
  AutonomousDatabaseConnectionUrls& WithSqlDevWebUrl(SqlDevWebUrlT&& value) {
    SetSqlDevWebUrl(std::forward<SqlDevWebUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_apexUrl;

  Aws::String m_databaseTransformsUrl;

  Aws::String m_graphStudioUrl;

  Aws::String m_machineLearningNotebookUrl;

  Aws::String m_machineLearningUserManagementUrl;

  Aws::String m_mongoDbUrl;

  Aws::String m_ordsUrl;

  Aws::String m_spatialStudioUrl;

  Aws::String m_sqlDevWebUrl;
  bool m_apexUrlHasBeenSet = false;
  bool m_databaseTransformsUrlHasBeenSet = false;
  bool m_graphStudioUrlHasBeenSet = false;
  bool m_machineLearningNotebookUrlHasBeenSet = false;
  bool m_machineLearningUserManagementUrlHasBeenSet = false;
  bool m_mongoDbUrlHasBeenSet = false;
  bool m_ordsUrlHasBeenSet = false;
  bool m_spatialStudioUrlHasBeenSet = false;
  bool m_sqlDevWebUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws

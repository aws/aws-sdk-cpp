/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-sap/model/ComponentType.h>
#include <aws/ssm-sap/model/ComponentStatus.h>
#include <aws/ssm-sap/model/Resilience.h>
#include <aws/ssm-sap/model/AssociatedHost.h>
#include <aws/ssm-sap/model/DatabaseConnection.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SsmSap
{
namespace Model
{

  /**
   * <p>The SAP component of your application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/Component">AWS
   * API Reference</a></p>
   */
  class Component
  {
  public:
    AWS_SSMSAP_API Component();
    AWS_SSMSAP_API Component(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Component& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the component.</p>
     */
    inline const Aws::String& GetComponentId() const{ return m_componentId; }
    inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }
    inline void SetComponentId(const Aws::String& value) { m_componentIdHasBeenSet = true; m_componentId = value; }
    inline void SetComponentId(Aws::String&& value) { m_componentIdHasBeenSet = true; m_componentId = std::move(value); }
    inline void SetComponentId(const char* value) { m_componentIdHasBeenSet = true; m_componentId.assign(value); }
    inline Component& WithComponentId(const Aws::String& value) { SetComponentId(value); return *this;}
    inline Component& WithComponentId(Aws::String&& value) { SetComponentId(std::move(value)); return *this;}
    inline Component& WithComponentId(const char* value) { SetComponentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SAP System Identifier of the application component.</p>
     */
    inline const Aws::String& GetSid() const{ return m_sid; }
    inline bool SidHasBeenSet() const { return m_sidHasBeenSet; }
    inline void SetSid(const Aws::String& value) { m_sidHasBeenSet = true; m_sid = value; }
    inline void SetSid(Aws::String&& value) { m_sidHasBeenSet = true; m_sid = std::move(value); }
    inline void SetSid(const char* value) { m_sidHasBeenSet = true; m_sid.assign(value); }
    inline Component& WithSid(const Aws::String& value) { SetSid(value); return *this;}
    inline Component& WithSid(Aws::String&& value) { SetSid(std::move(value)); return *this;}
    inline Component& WithSid(const char* value) { SetSid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SAP system number of the application component.</p>
     */
    inline const Aws::String& GetSystemNumber() const{ return m_systemNumber; }
    inline bool SystemNumberHasBeenSet() const { return m_systemNumberHasBeenSet; }
    inline void SetSystemNumber(const Aws::String& value) { m_systemNumberHasBeenSet = true; m_systemNumber = value; }
    inline void SetSystemNumber(Aws::String&& value) { m_systemNumberHasBeenSet = true; m_systemNumber = std::move(value); }
    inline void SetSystemNumber(const char* value) { m_systemNumberHasBeenSet = true; m_systemNumber.assign(value); }
    inline Component& WithSystemNumber(const Aws::String& value) { SetSystemNumber(value); return *this;}
    inline Component& WithSystemNumber(Aws::String&& value) { SetSystemNumber(std::move(value)); return *this;}
    inline Component& WithSystemNumber(const char* value) { SetSystemNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent component of a highly available environment. For example, in a
     * highly available SAP on AWS workload, the parent component consists of the
     * entire setup, including the child components.</p>
     */
    inline const Aws::String& GetParentComponent() const{ return m_parentComponent; }
    inline bool ParentComponentHasBeenSet() const { return m_parentComponentHasBeenSet; }
    inline void SetParentComponent(const Aws::String& value) { m_parentComponentHasBeenSet = true; m_parentComponent = value; }
    inline void SetParentComponent(Aws::String&& value) { m_parentComponentHasBeenSet = true; m_parentComponent = std::move(value); }
    inline void SetParentComponent(const char* value) { m_parentComponentHasBeenSet = true; m_parentComponent.assign(value); }
    inline Component& WithParentComponent(const Aws::String& value) { SetParentComponent(value); return *this;}
    inline Component& WithParentComponent(Aws::String&& value) { SetParentComponent(std::move(value)); return *this;}
    inline Component& WithParentComponent(const char* value) { SetParentComponent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The child components of a highly available environment. For example, in a
     * highly available SAP on AWS workload, the child component consists of the
     * primary and secondar instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetChildComponents() const{ return m_childComponents; }
    inline bool ChildComponentsHasBeenSet() const { return m_childComponentsHasBeenSet; }
    inline void SetChildComponents(const Aws::Vector<Aws::String>& value) { m_childComponentsHasBeenSet = true; m_childComponents = value; }
    inline void SetChildComponents(Aws::Vector<Aws::String>&& value) { m_childComponentsHasBeenSet = true; m_childComponents = std::move(value); }
    inline Component& WithChildComponents(const Aws::Vector<Aws::String>& value) { SetChildComponents(value); return *this;}
    inline Component& WithChildComponents(Aws::Vector<Aws::String>&& value) { SetChildComponents(std::move(value)); return *this;}
    inline Component& AddChildComponents(const Aws::String& value) { m_childComponentsHasBeenSet = true; m_childComponents.push_back(value); return *this; }
    inline Component& AddChildComponents(Aws::String&& value) { m_childComponentsHasBeenSet = true; m_childComponents.push_back(std::move(value)); return *this; }
    inline Component& AddChildComponents(const char* value) { m_childComponentsHasBeenSet = true; m_childComponents.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline Component& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline Component& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline Component& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the component.</p>
     */
    inline const ComponentType& GetComponentType() const{ return m_componentType; }
    inline bool ComponentTypeHasBeenSet() const { return m_componentTypeHasBeenSet; }
    inline void SetComponentType(const ComponentType& value) { m_componentTypeHasBeenSet = true; m_componentType = value; }
    inline void SetComponentType(ComponentType&& value) { m_componentTypeHasBeenSet = true; m_componentType = std::move(value); }
    inline Component& WithComponentType(const ComponentType& value) { SetComponentType(value); return *this;}
    inline Component& WithComponentType(ComponentType&& value) { SetComponentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the component.</p> <ul> <li> <p>ACTIVATED - this status has
     * been deprecated.</p> </li> <li> <p>STARTING - the component is in the process of
     * being started.</p> </li> <li> <p>STOPPED - the component is not running.</p>
     * </li> <li> <p>STOPPING - the component is in the process of being stopped.</p>
     * </li> <li> <p>RUNNING - the component is running.</p> </li> <li>
     * <p>RUNNING_WITH_ERROR - one or more child component(s) of the parent component
     * is not running. Call <a
     * href="https://docs.aws.amazon.com/ssmsap/latest/APIReference/API_GetComponent.html">
     * <code>GetComponent</code> </a> to review the status of each child component.</p>
     * </li> <li> <p>UNDEFINED - AWS Systems Manager for SAP cannot provide the
     * component status based on the discovered information. Verify your SAP
     * application.</p> </li> </ul>
     */
    inline const ComponentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ComponentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ComponentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Component& WithStatus(const ComponentStatus& value) { SetStatus(value); return *this;}
    inline Component& WithStatus(ComponentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hostname of the component.</p>
     */
    inline const Aws::String& GetSapHostname() const{ return m_sapHostname; }
    inline bool SapHostnameHasBeenSet() const { return m_sapHostnameHasBeenSet; }
    inline void SetSapHostname(const Aws::String& value) { m_sapHostnameHasBeenSet = true; m_sapHostname = value; }
    inline void SetSapHostname(Aws::String&& value) { m_sapHostnameHasBeenSet = true; m_sapHostname = std::move(value); }
    inline void SetSapHostname(const char* value) { m_sapHostnameHasBeenSet = true; m_sapHostname.assign(value); }
    inline Component& WithSapHostname(const Aws::String& value) { SetSapHostname(value); return *this;}
    inline Component& WithSapHostname(Aws::String&& value) { SetSapHostname(std::move(value)); return *this;}
    inline Component& WithSapHostname(const char* value) { SetSapHostname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SAP feature of the component.</p>
     */
    inline const Aws::String& GetSapFeature() const{ return m_sapFeature; }
    inline bool SapFeatureHasBeenSet() const { return m_sapFeatureHasBeenSet; }
    inline void SetSapFeature(const Aws::String& value) { m_sapFeatureHasBeenSet = true; m_sapFeature = value; }
    inline void SetSapFeature(Aws::String&& value) { m_sapFeatureHasBeenSet = true; m_sapFeature = std::move(value); }
    inline void SetSapFeature(const char* value) { m_sapFeatureHasBeenSet = true; m_sapFeature.assign(value); }
    inline Component& WithSapFeature(const Aws::String& value) { SetSapFeature(value); return *this;}
    inline Component& WithSapFeature(Aws::String&& value) { SetSapFeature(std::move(value)); return *this;}
    inline Component& WithSapFeature(const char* value) { SetSapFeature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The kernel version of the component.</p>
     */
    inline const Aws::String& GetSapKernelVersion() const{ return m_sapKernelVersion; }
    inline bool SapKernelVersionHasBeenSet() const { return m_sapKernelVersionHasBeenSet; }
    inline void SetSapKernelVersion(const Aws::String& value) { m_sapKernelVersionHasBeenSet = true; m_sapKernelVersion = value; }
    inline void SetSapKernelVersion(Aws::String&& value) { m_sapKernelVersionHasBeenSet = true; m_sapKernelVersion = std::move(value); }
    inline void SetSapKernelVersion(const char* value) { m_sapKernelVersionHasBeenSet = true; m_sapKernelVersion.assign(value); }
    inline Component& WithSapKernelVersion(const Aws::String& value) { SetSapKernelVersion(value); return *this;}
    inline Component& WithSapKernelVersion(Aws::String&& value) { SetSapKernelVersion(std::move(value)); return *this;}
    inline Component& WithSapKernelVersion(const char* value) { SetSapKernelVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SAP HANA version of the component.</p>
     */
    inline const Aws::String& GetHdbVersion() const{ return m_hdbVersion; }
    inline bool HdbVersionHasBeenSet() const { return m_hdbVersionHasBeenSet; }
    inline void SetHdbVersion(const Aws::String& value) { m_hdbVersionHasBeenSet = true; m_hdbVersion = value; }
    inline void SetHdbVersion(Aws::String&& value) { m_hdbVersionHasBeenSet = true; m_hdbVersion = std::move(value); }
    inline void SetHdbVersion(const char* value) { m_hdbVersionHasBeenSet = true; m_hdbVersion.assign(value); }
    inline Component& WithHdbVersion(const Aws::String& value) { SetHdbVersion(value); return *this;}
    inline Component& WithHdbVersion(Aws::String&& value) { SetHdbVersion(std::move(value)); return *this;}
    inline Component& WithHdbVersion(const char* value) { SetHdbVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the SAP HANA system replication for the component.</p>
     */
    inline const Resilience& GetResilience() const{ return m_resilience; }
    inline bool ResilienceHasBeenSet() const { return m_resilienceHasBeenSet; }
    inline void SetResilience(const Resilience& value) { m_resilienceHasBeenSet = true; m_resilience = value; }
    inline void SetResilience(Resilience&& value) { m_resilienceHasBeenSet = true; m_resilience = std::move(value); }
    inline Component& WithResilience(const Resilience& value) { SetResilience(value); return *this;}
    inline Component& WithResilience(Resilience&& value) { SetResilience(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associated host of the component.</p>
     */
    inline const AssociatedHost& GetAssociatedHost() const{ return m_associatedHost; }
    inline bool AssociatedHostHasBeenSet() const { return m_associatedHostHasBeenSet; }
    inline void SetAssociatedHost(const AssociatedHost& value) { m_associatedHostHasBeenSet = true; m_associatedHost = value; }
    inline void SetAssociatedHost(AssociatedHost&& value) { m_associatedHostHasBeenSet = true; m_associatedHost = std::move(value); }
    inline Component& WithAssociatedHost(const AssociatedHost& value) { SetAssociatedHost(value); return *this;}
    inline Component& WithAssociatedHost(AssociatedHost&& value) { SetAssociatedHost(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SAP HANA databases of the component.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDatabases() const{ return m_databases; }
    inline bool DatabasesHasBeenSet() const { return m_databasesHasBeenSet; }
    inline void SetDatabases(const Aws::Vector<Aws::String>& value) { m_databasesHasBeenSet = true; m_databases = value; }
    inline void SetDatabases(Aws::Vector<Aws::String>&& value) { m_databasesHasBeenSet = true; m_databases = std::move(value); }
    inline Component& WithDatabases(const Aws::Vector<Aws::String>& value) { SetDatabases(value); return *this;}
    inline Component& WithDatabases(Aws::Vector<Aws::String>&& value) { SetDatabases(std::move(value)); return *this;}
    inline Component& AddDatabases(const Aws::String& value) { m_databasesHasBeenSet = true; m_databases.push_back(value); return *this; }
    inline Component& AddDatabases(Aws::String&& value) { m_databasesHasBeenSet = true; m_databases.push_back(std::move(value)); return *this; }
    inline Component& AddDatabases(const char* value) { m_databasesHasBeenSet = true; m_databases.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The connection specifications for the database of the component.</p>
     */
    inline const DatabaseConnection& GetDatabaseConnection() const{ return m_databaseConnection; }
    inline bool DatabaseConnectionHasBeenSet() const { return m_databaseConnectionHasBeenSet; }
    inline void SetDatabaseConnection(const DatabaseConnection& value) { m_databaseConnectionHasBeenSet = true; m_databaseConnection = value; }
    inline void SetDatabaseConnection(DatabaseConnection&& value) { m_databaseConnectionHasBeenSet = true; m_databaseConnection = std::move(value); }
    inline Component& WithDatabaseConnection(const DatabaseConnection& value) { SetDatabaseConnection(value); return *this;}
    inline Component& WithDatabaseConnection(DatabaseConnection&& value) { SetDatabaseConnection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the component was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }
    inline Component& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}
    inline Component& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Component& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Component& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Component& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}
  private:

    Aws::String m_componentId;
    bool m_componentIdHasBeenSet = false;

    Aws::String m_sid;
    bool m_sidHasBeenSet = false;

    Aws::String m_systemNumber;
    bool m_systemNumberHasBeenSet = false;

    Aws::String m_parentComponent;
    bool m_parentComponentHasBeenSet = false;

    Aws::Vector<Aws::String> m_childComponents;
    bool m_childComponentsHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    ComponentType m_componentType;
    bool m_componentTypeHasBeenSet = false;

    ComponentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_sapHostname;
    bool m_sapHostnameHasBeenSet = false;

    Aws::String m_sapFeature;
    bool m_sapFeatureHasBeenSet = false;

    Aws::String m_sapKernelVersion;
    bool m_sapKernelVersionHasBeenSet = false;

    Aws::String m_hdbVersion;
    bool m_hdbVersionHasBeenSet = false;

    Resilience m_resilience;
    bool m_resilienceHasBeenSet = false;

    AssociatedHost m_associatedHost;
    bool m_associatedHostHasBeenSet = false;

    Aws::Vector<Aws::String> m_databases;
    bool m_databasesHasBeenSet = false;

    DatabaseConnection m_databaseConnection;
    bool m_databaseConnectionHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws

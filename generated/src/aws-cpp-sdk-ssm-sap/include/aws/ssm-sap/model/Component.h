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
    AWS_SSMSAP_API Component() = default;
    AWS_SSMSAP_API Component(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Component& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the component.</p>
     */
    inline const Aws::String& GetComponentId() const { return m_componentId; }
    inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }
    template<typename ComponentIdT = Aws::String>
    void SetComponentId(ComponentIdT&& value) { m_componentIdHasBeenSet = true; m_componentId = std::forward<ComponentIdT>(value); }
    template<typename ComponentIdT = Aws::String>
    Component& WithComponentId(ComponentIdT&& value) { SetComponentId(std::forward<ComponentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SAP System Identifier of the application component.</p>
     */
    inline const Aws::String& GetSid() const { return m_sid; }
    inline bool SidHasBeenSet() const { return m_sidHasBeenSet; }
    template<typename SidT = Aws::String>
    void SetSid(SidT&& value) { m_sidHasBeenSet = true; m_sid = std::forward<SidT>(value); }
    template<typename SidT = Aws::String>
    Component& WithSid(SidT&& value) { SetSid(std::forward<SidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SAP system number of the application component.</p>
     */
    inline const Aws::String& GetSystemNumber() const { return m_systemNumber; }
    inline bool SystemNumberHasBeenSet() const { return m_systemNumberHasBeenSet; }
    template<typename SystemNumberT = Aws::String>
    void SetSystemNumber(SystemNumberT&& value) { m_systemNumberHasBeenSet = true; m_systemNumber = std::forward<SystemNumberT>(value); }
    template<typename SystemNumberT = Aws::String>
    Component& WithSystemNumber(SystemNumberT&& value) { SetSystemNumber(std::forward<SystemNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent component of a highly available environment. For example, in a
     * highly available SAP on AWS workload, the parent component consists of the
     * entire setup, including the child components.</p>
     */
    inline const Aws::String& GetParentComponent() const { return m_parentComponent; }
    inline bool ParentComponentHasBeenSet() const { return m_parentComponentHasBeenSet; }
    template<typename ParentComponentT = Aws::String>
    void SetParentComponent(ParentComponentT&& value) { m_parentComponentHasBeenSet = true; m_parentComponent = std::forward<ParentComponentT>(value); }
    template<typename ParentComponentT = Aws::String>
    Component& WithParentComponent(ParentComponentT&& value) { SetParentComponent(std::forward<ParentComponentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The child components of a highly available environment. For example, in a
     * highly available SAP on AWS workload, the child component consists of the
     * primary and secondar instances.</p>
     */
    inline const Aws::Vector<Aws::String>& GetChildComponents() const { return m_childComponents; }
    inline bool ChildComponentsHasBeenSet() const { return m_childComponentsHasBeenSet; }
    template<typename ChildComponentsT = Aws::Vector<Aws::String>>
    void SetChildComponents(ChildComponentsT&& value) { m_childComponentsHasBeenSet = true; m_childComponents = std::forward<ChildComponentsT>(value); }
    template<typename ChildComponentsT = Aws::Vector<Aws::String>>
    Component& WithChildComponents(ChildComponentsT&& value) { SetChildComponents(std::forward<ChildComponentsT>(value)); return *this;}
    template<typename ChildComponentsT = Aws::String>
    Component& AddChildComponents(ChildComponentsT&& value) { m_childComponentsHasBeenSet = true; m_childComponents.emplace_back(std::forward<ChildComponentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    Component& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the component.</p>
     */
    inline ComponentType GetComponentType() const { return m_componentType; }
    inline bool ComponentTypeHasBeenSet() const { return m_componentTypeHasBeenSet; }
    inline void SetComponentType(ComponentType value) { m_componentTypeHasBeenSet = true; m_componentType = value; }
    inline Component& WithComponentType(ComponentType value) { SetComponentType(value); return *this;}
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
    inline ComponentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ComponentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Component& WithStatus(ComponentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hostname of the component.</p>
     */
    inline const Aws::String& GetSapHostname() const { return m_sapHostname; }
    inline bool SapHostnameHasBeenSet() const { return m_sapHostnameHasBeenSet; }
    template<typename SapHostnameT = Aws::String>
    void SetSapHostname(SapHostnameT&& value) { m_sapHostnameHasBeenSet = true; m_sapHostname = std::forward<SapHostnameT>(value); }
    template<typename SapHostnameT = Aws::String>
    Component& WithSapHostname(SapHostnameT&& value) { SetSapHostname(std::forward<SapHostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SAP feature of the component.</p>
     */
    inline const Aws::String& GetSapFeature() const { return m_sapFeature; }
    inline bool SapFeatureHasBeenSet() const { return m_sapFeatureHasBeenSet; }
    template<typename SapFeatureT = Aws::String>
    void SetSapFeature(SapFeatureT&& value) { m_sapFeatureHasBeenSet = true; m_sapFeature = std::forward<SapFeatureT>(value); }
    template<typename SapFeatureT = Aws::String>
    Component& WithSapFeature(SapFeatureT&& value) { SetSapFeature(std::forward<SapFeatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The kernel version of the component.</p>
     */
    inline const Aws::String& GetSapKernelVersion() const { return m_sapKernelVersion; }
    inline bool SapKernelVersionHasBeenSet() const { return m_sapKernelVersionHasBeenSet; }
    template<typename SapKernelVersionT = Aws::String>
    void SetSapKernelVersion(SapKernelVersionT&& value) { m_sapKernelVersionHasBeenSet = true; m_sapKernelVersion = std::forward<SapKernelVersionT>(value); }
    template<typename SapKernelVersionT = Aws::String>
    Component& WithSapKernelVersion(SapKernelVersionT&& value) { SetSapKernelVersion(std::forward<SapKernelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SAP HANA version of the component.</p>
     */
    inline const Aws::String& GetHdbVersion() const { return m_hdbVersion; }
    inline bool HdbVersionHasBeenSet() const { return m_hdbVersionHasBeenSet; }
    template<typename HdbVersionT = Aws::String>
    void SetHdbVersion(HdbVersionT&& value) { m_hdbVersionHasBeenSet = true; m_hdbVersion = std::forward<HdbVersionT>(value); }
    template<typename HdbVersionT = Aws::String>
    Component& WithHdbVersion(HdbVersionT&& value) { SetHdbVersion(std::forward<HdbVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details of the SAP HANA system replication for the component.</p>
     */
    inline const Resilience& GetResilience() const { return m_resilience; }
    inline bool ResilienceHasBeenSet() const { return m_resilienceHasBeenSet; }
    template<typename ResilienceT = Resilience>
    void SetResilience(ResilienceT&& value) { m_resilienceHasBeenSet = true; m_resilience = std::forward<ResilienceT>(value); }
    template<typename ResilienceT = Resilience>
    Component& WithResilience(ResilienceT&& value) { SetResilience(std::forward<ResilienceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associated host of the component.</p>
     */
    inline const AssociatedHost& GetAssociatedHost() const { return m_associatedHost; }
    inline bool AssociatedHostHasBeenSet() const { return m_associatedHostHasBeenSet; }
    template<typename AssociatedHostT = AssociatedHost>
    void SetAssociatedHost(AssociatedHostT&& value) { m_associatedHostHasBeenSet = true; m_associatedHost = std::forward<AssociatedHostT>(value); }
    template<typename AssociatedHostT = AssociatedHost>
    Component& WithAssociatedHost(AssociatedHostT&& value) { SetAssociatedHost(std::forward<AssociatedHostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SAP HANA databases of the component.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDatabases() const { return m_databases; }
    inline bool DatabasesHasBeenSet() const { return m_databasesHasBeenSet; }
    template<typename DatabasesT = Aws::Vector<Aws::String>>
    void SetDatabases(DatabasesT&& value) { m_databasesHasBeenSet = true; m_databases = std::forward<DatabasesT>(value); }
    template<typename DatabasesT = Aws::Vector<Aws::String>>
    Component& WithDatabases(DatabasesT&& value) { SetDatabases(std::forward<DatabasesT>(value)); return *this;}
    template<typename DatabasesT = Aws::String>
    Component& AddDatabases(DatabasesT&& value) { m_databasesHasBeenSet = true; m_databases.emplace_back(std::forward<DatabasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The connection specifications for the database of the component.</p>
     */
    inline const DatabaseConnection& GetDatabaseConnection() const { return m_databaseConnection; }
    inline bool DatabaseConnectionHasBeenSet() const { return m_databaseConnectionHasBeenSet; }
    template<typename DatabaseConnectionT = DatabaseConnection>
    void SetDatabaseConnection(DatabaseConnectionT&& value) { m_databaseConnectionHasBeenSet = true; m_databaseConnection = std::forward<DatabaseConnectionT>(value); }
    template<typename DatabaseConnectionT = DatabaseConnection>
    Component& WithDatabaseConnection(DatabaseConnectionT&& value) { SetDatabaseConnection(std::forward<DatabaseConnectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the component was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    Component& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Component& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
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

    ComponentType m_componentType{ComponentType::NOT_SET};
    bool m_componentTypeHasBeenSet = false;

    ComponentStatus m_status{ComponentStatus::NOT_SET};
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

    Aws::Utils::DateTime m_lastUpdated{};
    bool m_lastUpdatedHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws

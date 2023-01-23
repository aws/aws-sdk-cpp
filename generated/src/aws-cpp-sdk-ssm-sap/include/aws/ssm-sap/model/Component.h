/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/ComponentType.h>
#include <aws/ssm-sap/model/ComponentStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm-sap/model/Host.h>
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
   * <p/><p><h3>See Also:</h3>   <a
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


    /**
     * <p/>
     */
    inline const Aws::String& GetComponentId() const{ return m_componentId; }

    /**
     * <p/>
     */
    inline bool ComponentIdHasBeenSet() const { return m_componentIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetComponentId(const Aws::String& value) { m_componentIdHasBeenSet = true; m_componentId = value; }

    /**
     * <p/>
     */
    inline void SetComponentId(Aws::String&& value) { m_componentIdHasBeenSet = true; m_componentId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetComponentId(const char* value) { m_componentIdHasBeenSet = true; m_componentId.assign(value); }

    /**
     * <p/>
     */
    inline Component& WithComponentId(const Aws::String& value) { SetComponentId(value); return *this;}

    /**
     * <p/>
     */
    inline Component& WithComponentId(Aws::String&& value) { SetComponentId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline Component& WithComponentId(const char* value) { SetComponentId(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p/>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p/>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p/>
     */
    inline Component& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p/>
     */
    inline Component& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline Component& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p/>
     */
    inline const ComponentType& GetComponentType() const{ return m_componentType; }

    /**
     * <p/>
     */
    inline bool ComponentTypeHasBeenSet() const { return m_componentTypeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetComponentType(const ComponentType& value) { m_componentTypeHasBeenSet = true; m_componentType = value; }

    /**
     * <p/>
     */
    inline void SetComponentType(ComponentType&& value) { m_componentTypeHasBeenSet = true; m_componentType = std::move(value); }

    /**
     * <p/>
     */
    inline Component& WithComponentType(const ComponentType& value) { SetComponentType(value); return *this;}

    /**
     * <p/>
     */
    inline Component& WithComponentType(ComponentType&& value) { SetComponentType(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const ComponentStatus& GetStatus() const{ return m_status; }

    /**
     * <p/>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetStatus(const ComponentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p/>
     */
    inline void SetStatus(ComponentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p/>
     */
    inline Component& WithStatus(const ComponentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p/>
     */
    inline Component& WithStatus(ComponentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<Aws::String>& GetDatabases() const{ return m_databases; }

    /**
     * <p/>
     */
    inline bool DatabasesHasBeenSet() const { return m_databasesHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetDatabases(const Aws::Vector<Aws::String>& value) { m_databasesHasBeenSet = true; m_databases = value; }

    /**
     * <p/>
     */
    inline void SetDatabases(Aws::Vector<Aws::String>&& value) { m_databasesHasBeenSet = true; m_databases = std::move(value); }

    /**
     * <p/>
     */
    inline Component& WithDatabases(const Aws::Vector<Aws::String>& value) { SetDatabases(value); return *this;}

    /**
     * <p/>
     */
    inline Component& WithDatabases(Aws::Vector<Aws::String>&& value) { SetDatabases(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline Component& AddDatabases(const Aws::String& value) { m_databasesHasBeenSet = true; m_databases.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline Component& AddDatabases(Aws::String&& value) { m_databasesHasBeenSet = true; m_databases.push_back(std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline Component& AddDatabases(const char* value) { m_databasesHasBeenSet = true; m_databases.push_back(value); return *this; }


    /**
     * <p/>
     */
    inline const Aws::Vector<Host>& GetHosts() const{ return m_hosts; }

    /**
     * <p/>
     */
    inline bool HostsHasBeenSet() const { return m_hostsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetHosts(const Aws::Vector<Host>& value) { m_hostsHasBeenSet = true; m_hosts = value; }

    /**
     * <p/>
     */
    inline void SetHosts(Aws::Vector<Host>&& value) { m_hostsHasBeenSet = true; m_hosts = std::move(value); }

    /**
     * <p/>
     */
    inline Component& WithHosts(const Aws::Vector<Host>& value) { SetHosts(value); return *this;}

    /**
     * <p/>
     */
    inline Component& WithHosts(Aws::Vector<Host>&& value) { SetHosts(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline Component& AddHosts(const Host& value) { m_hostsHasBeenSet = true; m_hosts.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline Component& AddHosts(Host&& value) { m_hostsHasBeenSet = true; m_hosts.push_back(std::move(value)); return *this; }


    /**
     * <p/>
     */
    inline const Aws::String& GetPrimaryHost() const{ return m_primaryHost; }

    /**
     * <p/>
     */
    inline bool PrimaryHostHasBeenSet() const { return m_primaryHostHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetPrimaryHost(const Aws::String& value) { m_primaryHostHasBeenSet = true; m_primaryHost = value; }

    /**
     * <p/>
     */
    inline void SetPrimaryHost(Aws::String&& value) { m_primaryHostHasBeenSet = true; m_primaryHost = std::move(value); }

    /**
     * <p/>
     */
    inline void SetPrimaryHost(const char* value) { m_primaryHostHasBeenSet = true; m_primaryHost.assign(value); }

    /**
     * <p/>
     */
    inline Component& WithPrimaryHost(const Aws::String& value) { SetPrimaryHost(value); return *this;}

    /**
     * <p/>
     */
    inline Component& WithPrimaryHost(Aws::String&& value) { SetPrimaryHost(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline Component& WithPrimaryHost(const char* value) { SetPrimaryHost(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p/>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p/>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p/>
     */
    inline Component& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p/>
     */
    inline Component& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}

  private:

    Aws::String m_componentId;
    bool m_componentIdHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    ComponentType m_componentType;
    bool m_componentTypeHasBeenSet = false;

    ComponentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_databases;
    bool m_databasesHasBeenSet = false;

    Aws::Vector<Host> m_hosts;
    bool m_hostsHasBeenSet = false;

    Aws::String m_primaryHost;
    bool m_primaryHostHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws

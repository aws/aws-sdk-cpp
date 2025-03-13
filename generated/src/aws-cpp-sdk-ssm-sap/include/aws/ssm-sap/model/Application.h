/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/ApplicationType.h>
#include <aws/ssm-sap/model/ApplicationStatus.h>
#include <aws/ssm-sap/model/ApplicationDiscoveryStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>An SAP application registered with AWS Systems Manager for SAP.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-sap-2018-05-10/Application">AWS
   * API Reference</a></p>
   */
  class Application
  {
  public:
    AWS_SSMSAP_API Application() = default;
    AWS_SSMSAP_API Application(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Application& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Application& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the application.</p>
     */
    inline ApplicationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ApplicationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Application& WithType(ApplicationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Application& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Application Registry.</p>
     */
    inline const Aws::String& GetAppRegistryArn() const { return m_appRegistryArn; }
    inline bool AppRegistryArnHasBeenSet() const { return m_appRegistryArnHasBeenSet; }
    template<typename AppRegistryArnT = Aws::String>
    void SetAppRegistryArn(AppRegistryArnT&& value) { m_appRegistryArnHasBeenSet = true; m_appRegistryArn = std::forward<AppRegistryArnT>(value); }
    template<typename AppRegistryArnT = Aws::String>
    Application& WithAppRegistryArn(AppRegistryArnT&& value) { SetAppRegistryArn(std::forward<AppRegistryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the application.</p>
     */
    inline ApplicationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ApplicationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Application& WithStatus(ApplicationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest discovery result for the application.</p>
     */
    inline ApplicationDiscoveryStatus GetDiscoveryStatus() const { return m_discoveryStatus; }
    inline bool DiscoveryStatusHasBeenSet() const { return m_discoveryStatusHasBeenSet; }
    inline void SetDiscoveryStatus(ApplicationDiscoveryStatus value) { m_discoveryStatusHasBeenSet = true; m_discoveryStatus = value; }
    inline Application& WithDiscoveryStatus(ApplicationDiscoveryStatus value) { SetDiscoveryStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The components of the application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetComponents() const { return m_components; }
    inline bool ComponentsHasBeenSet() const { return m_componentsHasBeenSet; }
    template<typename ComponentsT = Aws::Vector<Aws::String>>
    void SetComponents(ComponentsT&& value) { m_componentsHasBeenSet = true; m_components = std::forward<ComponentsT>(value); }
    template<typename ComponentsT = Aws::Vector<Aws::String>>
    Application& WithComponents(ComponentsT&& value) { SetComponents(std::forward<ComponentsT>(value)); return *this;}
    template<typename ComponentsT = Aws::String>
    Application& AddComponents(ComponentsT&& value) { m_componentsHasBeenSet = true; m_components.emplace_back(std::forward<ComponentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time at which the application was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    Application& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    Application& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names of the associated AWS Systems Manager for SAP
     * applications.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociatedApplicationArns() const { return m_associatedApplicationArns; }
    inline bool AssociatedApplicationArnsHasBeenSet() const { return m_associatedApplicationArnsHasBeenSet; }
    template<typename AssociatedApplicationArnsT = Aws::Vector<Aws::String>>
    void SetAssociatedApplicationArns(AssociatedApplicationArnsT&& value) { m_associatedApplicationArnsHasBeenSet = true; m_associatedApplicationArns = std::forward<AssociatedApplicationArnsT>(value); }
    template<typename AssociatedApplicationArnsT = Aws::Vector<Aws::String>>
    Application& WithAssociatedApplicationArns(AssociatedApplicationArnsT&& value) { SetAssociatedApplicationArns(std::forward<AssociatedApplicationArnsT>(value)); return *this;}
    template<typename AssociatedApplicationArnsT = Aws::String>
    Application& AddAssociatedApplicationArns(AssociatedApplicationArnsT&& value) { m_associatedApplicationArnsHasBeenSet = true; m_associatedApplicationArns.emplace_back(std::forward<AssociatedApplicationArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ApplicationType m_type{ApplicationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_appRegistryArn;
    bool m_appRegistryArnHasBeenSet = false;

    ApplicationStatus m_status{ApplicationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ApplicationDiscoveryStatus m_discoveryStatus{ApplicationDiscoveryStatus::NOT_SET};
    bool m_discoveryStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_components;
    bool m_componentsHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated{};
    bool m_lastUpdatedHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Vector<Aws::String> m_associatedApplicationArns;
    bool m_associatedApplicationArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws

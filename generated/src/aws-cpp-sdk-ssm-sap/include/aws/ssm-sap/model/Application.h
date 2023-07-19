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
    AWS_SSMSAP_API Application();
    AWS_SSMSAP_API Application(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Application& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMSAP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the application.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the application.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the application.</p>
     */
    inline Application& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline Application& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the application.</p>
     */
    inline Application& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The type of the application.</p>
     */
    inline const ApplicationType& GetType() const{ return m_type; }

    /**
     * <p>The type of the application.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the application.</p>
     */
    inline void SetType(const ApplicationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the application.</p>
     */
    inline void SetType(ApplicationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the application.</p>
     */
    inline Application& WithType(const ApplicationType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the application.</p>
     */
    inline Application& WithType(ApplicationType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline Application& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline Application& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline Application& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Application Registry.</p>
     */
    inline const Aws::String& GetAppRegistryArn() const{ return m_appRegistryArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Application Registry.</p>
     */
    inline bool AppRegistryArnHasBeenSet() const { return m_appRegistryArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Application Registry.</p>
     */
    inline void SetAppRegistryArn(const Aws::String& value) { m_appRegistryArnHasBeenSet = true; m_appRegistryArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Application Registry.</p>
     */
    inline void SetAppRegistryArn(Aws::String&& value) { m_appRegistryArnHasBeenSet = true; m_appRegistryArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Application Registry.</p>
     */
    inline void SetAppRegistryArn(const char* value) { m_appRegistryArnHasBeenSet = true; m_appRegistryArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Application Registry.</p>
     */
    inline Application& WithAppRegistryArn(const Aws::String& value) { SetAppRegistryArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Application Registry.</p>
     */
    inline Application& WithAppRegistryArn(Aws::String&& value) { SetAppRegistryArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Application Registry.</p>
     */
    inline Application& WithAppRegistryArn(const char* value) { SetAppRegistryArn(value); return *this;}


    /**
     * <p>The status of the application.</p>
     */
    inline const ApplicationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the application.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the application.</p>
     */
    inline void SetStatus(const ApplicationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the application.</p>
     */
    inline void SetStatus(ApplicationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the application.</p>
     */
    inline Application& WithStatus(const ApplicationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the application.</p>
     */
    inline Application& WithStatus(ApplicationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The latest discovery result for the application.</p>
     */
    inline const ApplicationDiscoveryStatus& GetDiscoveryStatus() const{ return m_discoveryStatus; }

    /**
     * <p>The latest discovery result for the application.</p>
     */
    inline bool DiscoveryStatusHasBeenSet() const { return m_discoveryStatusHasBeenSet; }

    /**
     * <p>The latest discovery result for the application.</p>
     */
    inline void SetDiscoveryStatus(const ApplicationDiscoveryStatus& value) { m_discoveryStatusHasBeenSet = true; m_discoveryStatus = value; }

    /**
     * <p>The latest discovery result for the application.</p>
     */
    inline void SetDiscoveryStatus(ApplicationDiscoveryStatus&& value) { m_discoveryStatusHasBeenSet = true; m_discoveryStatus = std::move(value); }

    /**
     * <p>The latest discovery result for the application.</p>
     */
    inline Application& WithDiscoveryStatus(const ApplicationDiscoveryStatus& value) { SetDiscoveryStatus(value); return *this;}

    /**
     * <p>The latest discovery result for the application.</p>
     */
    inline Application& WithDiscoveryStatus(ApplicationDiscoveryStatus&& value) { SetDiscoveryStatus(std::move(value)); return *this;}


    /**
     * <p>The components of the application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetComponents() const{ return m_components; }

    /**
     * <p>The components of the application.</p>
     */
    inline bool ComponentsHasBeenSet() const { return m_componentsHasBeenSet; }

    /**
     * <p>The components of the application.</p>
     */
    inline void SetComponents(const Aws::Vector<Aws::String>& value) { m_componentsHasBeenSet = true; m_components = value; }

    /**
     * <p>The components of the application.</p>
     */
    inline void SetComponents(Aws::Vector<Aws::String>&& value) { m_componentsHasBeenSet = true; m_components = std::move(value); }

    /**
     * <p>The components of the application.</p>
     */
    inline Application& WithComponents(const Aws::Vector<Aws::String>& value) { SetComponents(value); return *this;}

    /**
     * <p>The components of the application.</p>
     */
    inline Application& WithComponents(Aws::Vector<Aws::String>&& value) { SetComponents(std::move(value)); return *this;}

    /**
     * <p>The components of the application.</p>
     */
    inline Application& AddComponents(const Aws::String& value) { m_componentsHasBeenSet = true; m_components.push_back(value); return *this; }

    /**
     * <p>The components of the application.</p>
     */
    inline Application& AddComponents(Aws::String&& value) { m_componentsHasBeenSet = true; m_components.push_back(std::move(value)); return *this; }

    /**
     * <p>The components of the application.</p>
     */
    inline Application& AddComponents(const char* value) { m_componentsHasBeenSet = true; m_components.push_back(value); return *this; }


    /**
     * <p>The time at which the application was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>The time at which the application was last updated.</p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p>The time at which the application was last updated.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>The time at which the application was last updated.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>The time at which the application was last updated.</p>
     */
    inline Application& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>The time at which the application was last updated.</p>
     */
    inline Application& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * <p>The status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message.</p>
     */
    inline Application& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message.</p>
     */
    inline Application& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message.</p>
     */
    inline Application& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ApplicationType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_appRegistryArn;
    bool m_appRegistryArnHasBeenSet = false;

    ApplicationStatus m_status;
    bool m_statusHasBeenSet = false;

    ApplicationDiscoveryStatus m_discoveryStatus;
    bool m_discoveryStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_components;
    bool m_componentsHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws

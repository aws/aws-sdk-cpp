﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/DeploymentStatus.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The current status of the service software for an Amazon OpenSearch Service
   * domain. For more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/service-software.html">Service
   * software updates in Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ServiceSoftwareOptions">AWS
   * API Reference</a></p>
   */
  class ServiceSoftwareOptions
  {
  public:
    AWS_OPENSEARCHSERVICE_API ServiceSoftwareOptions();
    AWS_OPENSEARCHSERVICE_API ServiceSoftwareOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ServiceSoftwareOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current service software version present on the domain.</p>
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }
    inline ServiceSoftwareOptions& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}
    inline ServiceSoftwareOptions& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}
    inline ServiceSoftwareOptions& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new service software version, if one is available.</p>
     */
    inline const Aws::String& GetNewVersion() const{ return m_newVersion; }
    inline bool NewVersionHasBeenSet() const { return m_newVersionHasBeenSet; }
    inline void SetNewVersion(const Aws::String& value) { m_newVersionHasBeenSet = true; m_newVersion = value; }
    inline void SetNewVersion(Aws::String&& value) { m_newVersionHasBeenSet = true; m_newVersion = std::move(value); }
    inline void SetNewVersion(const char* value) { m_newVersionHasBeenSet = true; m_newVersion.assign(value); }
    inline ServiceSoftwareOptions& WithNewVersion(const Aws::String& value) { SetNewVersion(value); return *this;}
    inline ServiceSoftwareOptions& WithNewVersion(Aws::String&& value) { SetNewVersion(std::move(value)); return *this;}
    inline ServiceSoftwareOptions& WithNewVersion(const char* value) { SetNewVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if you're able to update your service software version. False if you
     * can't update your service software version.</p>
     */
    inline bool GetUpdateAvailable() const{ return m_updateAvailable; }
    inline bool UpdateAvailableHasBeenSet() const { return m_updateAvailableHasBeenSet; }
    inline void SetUpdateAvailable(bool value) { m_updateAvailableHasBeenSet = true; m_updateAvailable = value; }
    inline ServiceSoftwareOptions& WithUpdateAvailable(bool value) { SetUpdateAvailable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> True if you're able to cancel your service software version update. False if
     * you can't cancel your service software update.</p>
     */
    inline bool GetCancellable() const{ return m_cancellable; }
    inline bool CancellableHasBeenSet() const { return m_cancellableHasBeenSet; }
    inline void SetCancellable(bool value) { m_cancellableHasBeenSet = true; m_cancellable = value; }
    inline ServiceSoftwareOptions& WithCancellable(bool value) { SetCancellable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of your service software update.</p>
     */
    inline const DeploymentStatus& GetUpdateStatus() const{ return m_updateStatus; }
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }
    inline void SetUpdateStatus(const DeploymentStatus& value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }
    inline void SetUpdateStatus(DeploymentStatus&& value) { m_updateStatusHasBeenSet = true; m_updateStatus = std::move(value); }
    inline ServiceSoftwareOptions& WithUpdateStatus(const DeploymentStatus& value) { SetUpdateStatus(value); return *this;}
    inline ServiceSoftwareOptions& WithUpdateStatus(DeploymentStatus&& value) { SetUpdateStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the service software update status.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ServiceSoftwareOptions& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ServiceSoftwareOptions& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ServiceSoftwareOptions& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, in Epoch time, until which you can manually request a service
     * software update. After this date, we automatically update your service
     * software.</p>
     */
    inline const Aws::Utils::DateTime& GetAutomatedUpdateDate() const{ return m_automatedUpdateDate; }
    inline bool AutomatedUpdateDateHasBeenSet() const { return m_automatedUpdateDateHasBeenSet; }
    inline void SetAutomatedUpdateDate(const Aws::Utils::DateTime& value) { m_automatedUpdateDateHasBeenSet = true; m_automatedUpdateDate = value; }
    inline void SetAutomatedUpdateDate(Aws::Utils::DateTime&& value) { m_automatedUpdateDateHasBeenSet = true; m_automatedUpdateDate = std::move(value); }
    inline ServiceSoftwareOptions& WithAutomatedUpdateDate(const Aws::Utils::DateTime& value) { SetAutomatedUpdateDate(value); return *this;}
    inline ServiceSoftwareOptions& WithAutomatedUpdateDate(Aws::Utils::DateTime&& value) { SetAutomatedUpdateDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if a service software is never automatically updated. False if a service
     * software is automatically updated after the automated update date.</p>
     */
    inline bool GetOptionalDeployment() const{ return m_optionalDeployment; }
    inline bool OptionalDeploymentHasBeenSet() const { return m_optionalDeploymentHasBeenSet; }
    inline void SetOptionalDeployment(bool value) { m_optionalDeploymentHasBeenSet = true; m_optionalDeployment = value; }
    inline ServiceSoftwareOptions& WithOptionalDeployment(bool value) { SetOptionalDeployment(value); return *this;}
    ///@}
  private:

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    Aws::String m_newVersion;
    bool m_newVersionHasBeenSet = false;

    bool m_updateAvailable;
    bool m_updateAvailableHasBeenSet = false;

    bool m_cancellable;
    bool m_cancellableHasBeenSet = false;

    DeploymentStatus m_updateStatus;
    bool m_updateStatusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_automatedUpdateDate;
    bool m_automatedUpdateDateHasBeenSet = false;

    bool m_optionalDeployment;
    bool m_optionalDeploymentHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws

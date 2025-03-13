/**
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
    AWS_OPENSEARCHSERVICE_API ServiceSoftwareOptions() = default;
    AWS_OPENSEARCHSERVICE_API ServiceSoftwareOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ServiceSoftwareOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current service software version present on the domain.</p>
     */
    inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    template<typename CurrentVersionT = Aws::String>
    void SetCurrentVersion(CurrentVersionT&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::forward<CurrentVersionT>(value); }
    template<typename CurrentVersionT = Aws::String>
    ServiceSoftwareOptions& WithCurrentVersion(CurrentVersionT&& value) { SetCurrentVersion(std::forward<CurrentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new service software version, if one is available.</p>
     */
    inline const Aws::String& GetNewVersion() const { return m_newVersion; }
    inline bool NewVersionHasBeenSet() const { return m_newVersionHasBeenSet; }
    template<typename NewVersionT = Aws::String>
    void SetNewVersion(NewVersionT&& value) { m_newVersionHasBeenSet = true; m_newVersion = std::forward<NewVersionT>(value); }
    template<typename NewVersionT = Aws::String>
    ServiceSoftwareOptions& WithNewVersion(NewVersionT&& value) { SetNewVersion(std::forward<NewVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if you're able to update your service software version. False if you
     * can't update your service software version.</p>
     */
    inline bool GetUpdateAvailable() const { return m_updateAvailable; }
    inline bool UpdateAvailableHasBeenSet() const { return m_updateAvailableHasBeenSet; }
    inline void SetUpdateAvailable(bool value) { m_updateAvailableHasBeenSet = true; m_updateAvailable = value; }
    inline ServiceSoftwareOptions& WithUpdateAvailable(bool value) { SetUpdateAvailable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> True if you're able to cancel your service software version update. False if
     * you can't cancel your service software update.</p>
     */
    inline bool GetCancellable() const { return m_cancellable; }
    inline bool CancellableHasBeenSet() const { return m_cancellableHasBeenSet; }
    inline void SetCancellable(bool value) { m_cancellableHasBeenSet = true; m_cancellable = value; }
    inline ServiceSoftwareOptions& WithCancellable(bool value) { SetCancellable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of your service software update.</p>
     */
    inline DeploymentStatus GetUpdateStatus() const { return m_updateStatus; }
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }
    inline void SetUpdateStatus(DeploymentStatus value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }
    inline ServiceSoftwareOptions& WithUpdateStatus(DeploymentStatus value) { SetUpdateStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the service software update status.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ServiceSoftwareOptions& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp, in Epoch time, until which you can manually request a service
     * software update. After this date, we automatically update your service
     * software.</p>
     */
    inline const Aws::Utils::DateTime& GetAutomatedUpdateDate() const { return m_automatedUpdateDate; }
    inline bool AutomatedUpdateDateHasBeenSet() const { return m_automatedUpdateDateHasBeenSet; }
    template<typename AutomatedUpdateDateT = Aws::Utils::DateTime>
    void SetAutomatedUpdateDate(AutomatedUpdateDateT&& value) { m_automatedUpdateDateHasBeenSet = true; m_automatedUpdateDate = std::forward<AutomatedUpdateDateT>(value); }
    template<typename AutomatedUpdateDateT = Aws::Utils::DateTime>
    ServiceSoftwareOptions& WithAutomatedUpdateDate(AutomatedUpdateDateT&& value) { SetAutomatedUpdateDate(std::forward<AutomatedUpdateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>True if a service software is never automatically updated. False if a service
     * software is automatically updated after the automated update date.</p>
     */
    inline bool GetOptionalDeployment() const { return m_optionalDeployment; }
    inline bool OptionalDeploymentHasBeenSet() const { return m_optionalDeploymentHasBeenSet; }
    inline void SetOptionalDeployment(bool value) { m_optionalDeploymentHasBeenSet = true; m_optionalDeployment = value; }
    inline ServiceSoftwareOptions& WithOptionalDeployment(bool value) { SetOptionalDeployment(value); return *this;}
    ///@}
  private:

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    Aws::String m_newVersion;
    bool m_newVersionHasBeenSet = false;

    bool m_updateAvailable{false};
    bool m_updateAvailableHasBeenSet = false;

    bool m_cancellable{false};
    bool m_cancellableHasBeenSet = false;

    DeploymentStatus m_updateStatus{DeploymentStatus::NOT_SET};
    bool m_updateStatusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_automatedUpdateDate{};
    bool m_automatedUpdateDateHasBeenSet = false;

    bool m_optionalDeployment{false};
    bool m_optionalDeploymentHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about the state of the domain relative to the latest service
   * software.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElasticsearchDomainServiceSoftwareOptions">AWS
   * API Reference</a></p>
   */
  class AwsElasticsearchDomainServiceSoftwareOptions
  {
  public:
    AWS_SECURITYHUB_API AwsElasticsearchDomainServiceSoftwareOptions() = default;
    AWS_SECURITYHUB_API AwsElasticsearchDomainServiceSoftwareOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElasticsearchDomainServiceSoftwareOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The epoch time when the deployment window closes for required updates. After
     * this time, Amazon OpenSearch Service schedules the software upgrade
     * automatically.</p>
     */
    inline const Aws::String& GetAutomatedUpdateDate() const { return m_automatedUpdateDate; }
    inline bool AutomatedUpdateDateHasBeenSet() const { return m_automatedUpdateDateHasBeenSet; }
    template<typename AutomatedUpdateDateT = Aws::String>
    void SetAutomatedUpdateDate(AutomatedUpdateDateT&& value) { m_automatedUpdateDateHasBeenSet = true; m_automatedUpdateDate = std::forward<AutomatedUpdateDateT>(value); }
    template<typename AutomatedUpdateDateT = Aws::String>
    AwsElasticsearchDomainServiceSoftwareOptions& WithAutomatedUpdateDate(AutomatedUpdateDateT&& value) { SetAutomatedUpdateDate(std::forward<AutomatedUpdateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether a request to update the domain can be canceled.</p>
     */
    inline bool GetCancellable() const { return m_cancellable; }
    inline bool CancellableHasBeenSet() const { return m_cancellableHasBeenSet; }
    inline void SetCancellable(bool value) { m_cancellableHasBeenSet = true; m_cancellable = value; }
    inline AwsElasticsearchDomainServiceSoftwareOptions& WithCancellable(bool value) { SetCancellable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the service software that is currently installed on the
     * domain.</p>
     */
    inline const Aws::String& GetCurrentVersion() const { return m_currentVersion; }
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }
    template<typename CurrentVersionT = Aws::String>
    void SetCurrentVersion(CurrentVersionT&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::forward<CurrentVersionT>(value); }
    template<typename CurrentVersionT = Aws::String>
    AwsElasticsearchDomainServiceSoftwareOptions& WithCurrentVersion(CurrentVersionT&& value) { SetCurrentVersion(std::forward<CurrentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A more detailed description of the service software status.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AwsElasticsearchDomainServiceSoftwareOptions& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The most recent version of the service software.</p>
     */
    inline const Aws::String& GetNewVersion() const { return m_newVersion; }
    inline bool NewVersionHasBeenSet() const { return m_newVersionHasBeenSet; }
    template<typename NewVersionT = Aws::String>
    void SetNewVersion(NewVersionT&& value) { m_newVersionHasBeenSet = true; m_newVersion = std::forward<NewVersionT>(value); }
    template<typename NewVersionT = Aws::String>
    AwsElasticsearchDomainServiceSoftwareOptions& WithNewVersion(NewVersionT&& value) { SetNewVersion(std::forward<NewVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether a service software update is available for the domain.</p>
     */
    inline bool GetUpdateAvailable() const { return m_updateAvailable; }
    inline bool UpdateAvailableHasBeenSet() const { return m_updateAvailableHasBeenSet; }
    inline void SetUpdateAvailable(bool value) { m_updateAvailableHasBeenSet = true; m_updateAvailable = value; }
    inline AwsElasticsearchDomainServiceSoftwareOptions& WithUpdateAvailable(bool value) { SetUpdateAvailable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the service software update. Valid values are as follows:</p>
     * <ul> <li> <p> <code>COMPLETED</code> </p> </li> <li> <p> <code>ELIGIBLE</code>
     * </p> </li> <li> <p> <code>IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>NOT_ELIGIBLE</code> </p> </li> <li> <p> <code>PENDING_UPDATE</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetUpdateStatus() const { return m_updateStatus; }
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }
    template<typename UpdateStatusT = Aws::String>
    void SetUpdateStatus(UpdateStatusT&& value) { m_updateStatusHasBeenSet = true; m_updateStatus = std::forward<UpdateStatusT>(value); }
    template<typename UpdateStatusT = Aws::String>
    AwsElasticsearchDomainServiceSoftwareOptions& WithUpdateStatus(UpdateStatusT&& value) { SetUpdateStatus(std::forward<UpdateStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_automatedUpdateDate;
    bool m_automatedUpdateDateHasBeenSet = false;

    bool m_cancellable{false};
    bool m_cancellableHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_newVersion;
    bool m_newVersionHasBeenSet = false;

    bool m_updateAvailable{false};
    bool m_updateAvailableHasBeenSet = false;

    Aws::String m_updateStatus;
    bool m_updateStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

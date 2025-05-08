/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/ApplicationStatus.h>
#include <aws/sso-admin/model/PortalOptions.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>A structure that describes an application that uses IAM Identity Center for
   * access management.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/Application">AWS
   * API Reference</a></p>
   */
  class Application
  {
  public:
    AWS_SSOADMIN_API Application() = default;
    AWS_SSOADMIN_API Application(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Application& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the application.</p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    Application& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the application provider for this application.</p>
     */
    inline const Aws::String& GetApplicationProviderArn() const { return m_applicationProviderArn; }
    inline bool ApplicationProviderArnHasBeenSet() const { return m_applicationProviderArnHasBeenSet; }
    template<typename ApplicationProviderArnT = Aws::String>
    void SetApplicationProviderArn(ApplicationProviderArnT&& value) { m_applicationProviderArnHasBeenSet = true; m_applicationProviderArn = std::forward<ApplicationProviderArnT>(value); }
    template<typename ApplicationProviderArnT = Aws::String>
    Application& WithApplicationProviderArn(ApplicationProviderArnT&& value) { SetApplicationProviderArn(std::forward<ApplicationProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Application& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID number of the application.</p>
     */
    inline const Aws::String& GetApplicationAccount() const { return m_applicationAccount; }
    inline bool ApplicationAccountHasBeenSet() const { return m_applicationAccountHasBeenSet; }
    template<typename ApplicationAccountT = Aws::String>
    void SetApplicationAccount(ApplicationAccountT&& value) { m_applicationAccountHasBeenSet = true; m_applicationAccount = std::forward<ApplicationAccountT>(value); }
    template<typename ApplicationAccountT = Aws::String>
    Application& WithApplicationAccount(ApplicationAccountT&& value) { SetApplicationAccount(std::forward<ApplicationAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the instance of IAM Identity Center that is configured with this
     * application.</p>
     */
    inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    template<typename InstanceArnT = Aws::String>
    void SetInstanceArn(InstanceArnT&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::forward<InstanceArnT>(value); }
    template<typename InstanceArnT = Aws::String>
    Application& WithInstanceArn(InstanceArnT&& value) { SetInstanceArn(std::forward<InstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the application in this instance of IAM Identity
     * Center.</p>
     */
    inline ApplicationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ApplicationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Application& WithStatus(ApplicationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that describes the options for the access portal associated with
     * this application.</p>
     */
    inline const PortalOptions& GetPortalOptions() const { return m_portalOptions; }
    inline bool PortalOptionsHasBeenSet() const { return m_portalOptionsHasBeenSet; }
    template<typename PortalOptionsT = PortalOptions>
    void SetPortalOptions(PortalOptionsT&& value) { m_portalOptionsHasBeenSet = true; m_portalOptions = std::forward<PortalOptionsT>(value); }
    template<typename PortalOptionsT = PortalOptions>
    Application& WithPortalOptions(PortalOptionsT&& value) { SetPortalOptions(std::forward<PortalOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the application.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Application& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the application was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    Application& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Aws::String m_applicationProviderArn;
    bool m_applicationProviderArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_applicationAccount;
    bool m_applicationAccountHasBeenSet = false;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    ApplicationStatus m_status{ApplicationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    PortalOptions m_portalOptions;
    bool m_portalOptionsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sso-admin/model/PortalOptions.h>
#include <aws/sso-admin/model/ApplicationStatus.h>
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
    AWS_SSOADMIN_API Application();
    AWS_SSOADMIN_API Application(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Application& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account ID number of the application.</p>
     */
    inline const Aws::String& GetApplicationAccount() const{ return m_applicationAccount; }

    /**
     * <p>The Amazon Web Services account ID number of the application.</p>
     */
    inline bool ApplicationAccountHasBeenSet() const { return m_applicationAccountHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID number of the application.</p>
     */
    inline void SetApplicationAccount(const Aws::String& value) { m_applicationAccountHasBeenSet = true; m_applicationAccount = value; }

    /**
     * <p>The Amazon Web Services account ID number of the application.</p>
     */
    inline void SetApplicationAccount(Aws::String&& value) { m_applicationAccountHasBeenSet = true; m_applicationAccount = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID number of the application.</p>
     */
    inline void SetApplicationAccount(const char* value) { m_applicationAccountHasBeenSet = true; m_applicationAccount.assign(value); }

    /**
     * <p>The Amazon Web Services account ID number of the application.</p>
     */
    inline Application& WithApplicationAccount(const Aws::String& value) { SetApplicationAccount(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID number of the application.</p>
     */
    inline Application& WithApplicationAccount(Aws::String&& value) { SetApplicationAccount(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID number of the application.</p>
     */
    inline Application& WithApplicationAccount(const char* value) { SetApplicationAccount(value); return *this;}


    /**
     * <p>The ARN of the application.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>The ARN of the application.</p>
     */
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }

    /**
     * <p>The ARN of the application.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }

    /**
     * <p>The ARN of the application.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::move(value); }

    /**
     * <p>The ARN of the application.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }

    /**
     * <p>The ARN of the application.</p>
     */
    inline Application& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The ARN of the application.</p>
     */
    inline Application& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the application.</p>
     */
    inline Application& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}


    /**
     * <p>The ARN of the application provider for this application.</p>
     */
    inline const Aws::String& GetApplicationProviderArn() const{ return m_applicationProviderArn; }

    /**
     * <p>The ARN of the application provider for this application.</p>
     */
    inline bool ApplicationProviderArnHasBeenSet() const { return m_applicationProviderArnHasBeenSet; }

    /**
     * <p>The ARN of the application provider for this application.</p>
     */
    inline void SetApplicationProviderArn(const Aws::String& value) { m_applicationProviderArnHasBeenSet = true; m_applicationProviderArn = value; }

    /**
     * <p>The ARN of the application provider for this application.</p>
     */
    inline void SetApplicationProviderArn(Aws::String&& value) { m_applicationProviderArnHasBeenSet = true; m_applicationProviderArn = std::move(value); }

    /**
     * <p>The ARN of the application provider for this application.</p>
     */
    inline void SetApplicationProviderArn(const char* value) { m_applicationProviderArnHasBeenSet = true; m_applicationProviderArn.assign(value); }

    /**
     * <p>The ARN of the application provider for this application.</p>
     */
    inline Application& WithApplicationProviderArn(const Aws::String& value) { SetApplicationProviderArn(value); return *this;}

    /**
     * <p>The ARN of the application provider for this application.</p>
     */
    inline Application& WithApplicationProviderArn(Aws::String&& value) { SetApplicationProviderArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the application provider for this application.</p>
     */
    inline Application& WithApplicationProviderArn(const char* value) { SetApplicationProviderArn(value); return *this;}


    /**
     * <p>The date and time when the application was originally created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date and time when the application was originally created.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The date and time when the application was originally created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date and time when the application was originally created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The date and time when the application was originally created.</p>
     */
    inline Application& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date and time when the application was originally created.</p>
     */
    inline Application& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The description of the application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the application.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the application.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the application.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the application.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the application.</p>
     */
    inline Application& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the application.</p>
     */
    inline Application& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the application.</p>
     */
    inline Application& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARN of the instance of IAM Identity Center that is configured with this
     * application.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }

    /**
     * <p>The ARN of the instance of IAM Identity Center that is configured with this
     * application.</p>
     */
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }

    /**
     * <p>The ARN of the instance of IAM Identity Center that is configured with this
     * application.</p>
     */
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }

    /**
     * <p>The ARN of the instance of IAM Identity Center that is configured with this
     * application.</p>
     */
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }

    /**
     * <p>The ARN of the instance of IAM Identity Center that is configured with this
     * application.</p>
     */
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }

    /**
     * <p>The ARN of the instance of IAM Identity Center that is configured with this
     * application.</p>
     */
    inline Application& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the instance of IAM Identity Center that is configured with this
     * application.</p>
     */
    inline Application& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the instance of IAM Identity Center that is configured with this
     * application.</p>
     */
    inline Application& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}


    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the application.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline Application& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline Application& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline Application& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A structure that describes the options for the access portal associated with
     * this application.</p>
     */
    inline const PortalOptions& GetPortalOptions() const{ return m_portalOptions; }

    /**
     * <p>A structure that describes the options for the access portal associated with
     * this application.</p>
     */
    inline bool PortalOptionsHasBeenSet() const { return m_portalOptionsHasBeenSet; }

    /**
     * <p>A structure that describes the options for the access portal associated with
     * this application.</p>
     */
    inline void SetPortalOptions(const PortalOptions& value) { m_portalOptionsHasBeenSet = true; m_portalOptions = value; }

    /**
     * <p>A structure that describes the options for the access portal associated with
     * this application.</p>
     */
    inline void SetPortalOptions(PortalOptions&& value) { m_portalOptionsHasBeenSet = true; m_portalOptions = std::move(value); }

    /**
     * <p>A structure that describes the options for the access portal associated with
     * this application.</p>
     */
    inline Application& WithPortalOptions(const PortalOptions& value) { SetPortalOptions(value); return *this;}

    /**
     * <p>A structure that describes the options for the access portal associated with
     * this application.</p>
     */
    inline Application& WithPortalOptions(PortalOptions&& value) { SetPortalOptions(std::move(value)); return *this;}


    /**
     * <p>The current status of the application in this instance of IAM Identity
     * Center.</p>
     */
    inline const ApplicationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the application in this instance of IAM Identity
     * Center.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the application in this instance of IAM Identity
     * Center.</p>
     */
    inline void SetStatus(const ApplicationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the application in this instance of IAM Identity
     * Center.</p>
     */
    inline void SetStatus(ApplicationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the application in this instance of IAM Identity
     * Center.</p>
     */
    inline Application& WithStatus(const ApplicationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the application in this instance of IAM Identity
     * Center.</p>
     */
    inline Application& WithStatus(ApplicationStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_applicationAccount;
    bool m_applicationAccountHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Aws::String m_applicationProviderArn;
    bool m_applicationProviderArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PortalOptions m_portalOptions;
    bool m_portalOptionsHasBeenSet = false;

    ApplicationStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws

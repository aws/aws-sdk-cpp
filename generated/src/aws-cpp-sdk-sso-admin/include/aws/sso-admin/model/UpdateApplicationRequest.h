/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/UpdateApplicationPortalOptions.h>
#include <aws/sso-admin/model/ApplicationStatus.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class UpdateApplicationRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API UpdateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the ARN of the application. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>Specifies the ARN of the application. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }

    /**
     * <p>Specifies the ARN of the application. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }

    /**
     * <p>Specifies the ARN of the application. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::move(value); }

    /**
     * <p>Specifies the ARN of the application. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }

    /**
     * <p>Specifies the ARN of the application. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline UpdateApplicationRequest& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>Specifies the ARN of the application. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline UpdateApplicationRequest& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the application. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline UpdateApplicationRequest& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}


    /**
     * <p>The description of the .</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the .</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the .</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the .</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the .</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the .</p>
     */
    inline UpdateApplicationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the .</p>
     */
    inline UpdateApplicationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the .</p>
     */
    inline UpdateApplicationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies the updated name for the application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Specifies the updated name for the application.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Specifies the updated name for the application.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Specifies the updated name for the application.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Specifies the updated name for the application.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Specifies the updated name for the application.</p>
     */
    inline UpdateApplicationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Specifies the updated name for the application.</p>
     */
    inline UpdateApplicationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Specifies the updated name for the application.</p>
     */
    inline UpdateApplicationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A structure that describes the options for the portal associated with an
     * application.</p>
     */
    inline const UpdateApplicationPortalOptions& GetPortalOptions() const{ return m_portalOptions; }

    /**
     * <p>A structure that describes the options for the portal associated with an
     * application.</p>
     */
    inline bool PortalOptionsHasBeenSet() const { return m_portalOptionsHasBeenSet; }

    /**
     * <p>A structure that describes the options for the portal associated with an
     * application.</p>
     */
    inline void SetPortalOptions(const UpdateApplicationPortalOptions& value) { m_portalOptionsHasBeenSet = true; m_portalOptions = value; }

    /**
     * <p>A structure that describes the options for the portal associated with an
     * application.</p>
     */
    inline void SetPortalOptions(UpdateApplicationPortalOptions&& value) { m_portalOptionsHasBeenSet = true; m_portalOptions = std::move(value); }

    /**
     * <p>A structure that describes the options for the portal associated with an
     * application.</p>
     */
    inline UpdateApplicationRequest& WithPortalOptions(const UpdateApplicationPortalOptions& value) { SetPortalOptions(value); return *this;}

    /**
     * <p>A structure that describes the options for the portal associated with an
     * application.</p>
     */
    inline UpdateApplicationRequest& WithPortalOptions(UpdateApplicationPortalOptions&& value) { SetPortalOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the application is enabled or disabled.</p>
     */
    inline const ApplicationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies whether the application is enabled or disabled.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Specifies whether the application is enabled or disabled.</p>
     */
    inline void SetStatus(const ApplicationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Specifies whether the application is enabled or disabled.</p>
     */
    inline void SetStatus(ApplicationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Specifies whether the application is enabled or disabled.</p>
     */
    inline UpdateApplicationRequest& WithStatus(const ApplicationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies whether the application is enabled or disabled.</p>
     */
    inline UpdateApplicationRequest& WithStatus(ApplicationStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    UpdateApplicationPortalOptions m_portalOptions;
    bool m_portalOptionsHasBeenSet = false;

    ApplicationStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws

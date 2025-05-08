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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSOAdmin
{
namespace Model
{
  class DescribeApplicationResult
  {
  public:
    AWS_SSOADMIN_API DescribeApplicationResult() = default;
    AWS_SSOADMIN_API DescribeApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API DescribeApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies the ARN of the application.</p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    DescribeApplicationResult& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the application provider under which the operation will run.</p>
     */
    inline const Aws::String& GetApplicationProviderArn() const { return m_applicationProviderArn; }
    template<typename ApplicationProviderArnT = Aws::String>
    void SetApplicationProviderArn(ApplicationProviderArnT&& value) { m_applicationProviderArnHasBeenSet = true; m_applicationProviderArn = std::forward<ApplicationProviderArnT>(value); }
    template<typename ApplicationProviderArnT = Aws::String>
    DescribeApplicationResult& WithApplicationProviderArn(ApplicationProviderArnT&& value) { SetApplicationProviderArn(std::forward<ApplicationProviderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeApplicationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID.</p>
     */
    inline const Aws::String& GetApplicationAccount() const { return m_applicationAccount; }
    template<typename ApplicationAccountT = Aws::String>
    void SetApplicationAccount(ApplicationAccountT&& value) { m_applicationAccountHasBeenSet = true; m_applicationAccount = std::forward<ApplicationAccountT>(value); }
    template<typename ApplicationAccountT = Aws::String>
    DescribeApplicationResult& WithApplicationAccount(ApplicationAccountT&& value) { SetApplicationAccount(std::forward<ApplicationAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM Identity Center application under which the operation will
     * run. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
    template<typename InstanceArnT = Aws::String>
    void SetInstanceArn(InstanceArnT&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::forward<InstanceArnT>(value); }
    template<typename InstanceArnT = Aws::String>
    DescribeApplicationResult& WithInstanceArn(InstanceArnT&& value) { SetInstanceArn(std::forward<InstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the application is enabled or disabled.</p>
     */
    inline ApplicationStatus GetStatus() const { return m_status; }
    inline void SetStatus(ApplicationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeApplicationResult& WithStatus(ApplicationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that describes the options for the portal associated with an
     * application.</p>
     */
    inline const PortalOptions& GetPortalOptions() const { return m_portalOptions; }
    template<typename PortalOptionsT = PortalOptions>
    void SetPortalOptions(PortalOptionsT&& value) { m_portalOptionsHasBeenSet = true; m_portalOptions = std::forward<PortalOptionsT>(value); }
    template<typename PortalOptionsT = PortalOptions>
    DescribeApplicationResult& WithPortalOptions(PortalOptionsT&& value) { SetPortalOptions(std::forward<PortalOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the .</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeApplicationResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the application was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    DescribeApplicationResult& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeApplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws

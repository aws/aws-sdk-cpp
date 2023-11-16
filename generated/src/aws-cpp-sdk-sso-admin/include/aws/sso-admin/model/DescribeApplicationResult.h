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
    AWS_SSOADMIN_API DescribeApplicationResult();
    AWS_SSOADMIN_API DescribeApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API DescribeApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The account ID.</p>
     */
    inline const Aws::String& GetApplicationAccount() const{ return m_applicationAccount; }

    /**
     * <p>The account ID.</p>
     */
    inline void SetApplicationAccount(const Aws::String& value) { m_applicationAccount = value; }

    /**
     * <p>The account ID.</p>
     */
    inline void SetApplicationAccount(Aws::String&& value) { m_applicationAccount = std::move(value); }

    /**
     * <p>The account ID.</p>
     */
    inline void SetApplicationAccount(const char* value) { m_applicationAccount.assign(value); }

    /**
     * <p>The account ID.</p>
     */
    inline DescribeApplicationResult& WithApplicationAccount(const Aws::String& value) { SetApplicationAccount(value); return *this;}

    /**
     * <p>The account ID.</p>
     */
    inline DescribeApplicationResult& WithApplicationAccount(Aws::String&& value) { SetApplicationAccount(std::move(value)); return *this;}

    /**
     * <p>The account ID.</p>
     */
    inline DescribeApplicationResult& WithApplicationAccount(const char* value) { SetApplicationAccount(value); return *this;}


    /**
     * <p>Specifies the ARN of the application.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>Specifies the ARN of the application.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArn = value; }

    /**
     * <p>Specifies the ARN of the application.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArn = std::move(value); }

    /**
     * <p>Specifies the ARN of the application.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArn.assign(value); }

    /**
     * <p>Specifies the ARN of the application.</p>
     */
    inline DescribeApplicationResult& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>Specifies the ARN of the application.</p>
     */
    inline DescribeApplicationResult& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the application.</p>
     */
    inline DescribeApplicationResult& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}


    /**
     * <p>The ARN of the application provider under which the operation will run.</p>
     */
    inline const Aws::String& GetApplicationProviderArn() const{ return m_applicationProviderArn; }

    /**
     * <p>The ARN of the application provider under which the operation will run.</p>
     */
    inline void SetApplicationProviderArn(const Aws::String& value) { m_applicationProviderArn = value; }

    /**
     * <p>The ARN of the application provider under which the operation will run.</p>
     */
    inline void SetApplicationProviderArn(Aws::String&& value) { m_applicationProviderArn = std::move(value); }

    /**
     * <p>The ARN of the application provider under which the operation will run.</p>
     */
    inline void SetApplicationProviderArn(const char* value) { m_applicationProviderArn.assign(value); }

    /**
     * <p>The ARN of the application provider under which the operation will run.</p>
     */
    inline DescribeApplicationResult& WithApplicationProviderArn(const Aws::String& value) { SetApplicationProviderArn(value); return *this;}

    /**
     * <p>The ARN of the application provider under which the operation will run.</p>
     */
    inline DescribeApplicationResult& WithApplicationProviderArn(Aws::String&& value) { SetApplicationProviderArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the application provider under which the operation will run.</p>
     */
    inline DescribeApplicationResult& WithApplicationProviderArn(const char* value) { SetApplicationProviderArn(value); return *this;}


    /**
     * <p>The date the application was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date the application was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date the application was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The date the application was created.</p>
     */
    inline DescribeApplicationResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date the application was created.</p>
     */
    inline DescribeApplicationResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The description of the .</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the .</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the .</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the .</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the .</p>
     */
    inline DescribeApplicationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the .</p>
     */
    inline DescribeApplicationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the .</p>
     */
    inline DescribeApplicationResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARN of the IAM Identity Center application under which the operation will
     * run. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }

    /**
     * <p>The ARN of the IAM Identity Center application under which the operation will
     * run. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArn = value; }

    /**
     * <p>The ARN of the IAM Identity Center application under which the operation will
     * run. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArn = std::move(value); }

    /**
     * <p>The ARN of the IAM Identity Center application under which the operation will
     * run. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline void SetInstanceArn(const char* value) { m_instanceArn.assign(value); }

    /**
     * <p>The ARN of the IAM Identity Center application under which the operation will
     * run. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline DescribeApplicationResult& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the IAM Identity Center application under which the operation will
     * run. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline DescribeApplicationResult& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM Identity Center application under which the operation will
     * run. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline DescribeApplicationResult& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}


    /**
     * <p>The application name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The application name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The application name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The application name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The application name.</p>
     */
    inline DescribeApplicationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The application name.</p>
     */
    inline DescribeApplicationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The application name.</p>
     */
    inline DescribeApplicationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A structure that describes the options for the portal associated with an
     * application.</p>
     */
    inline const PortalOptions& GetPortalOptions() const{ return m_portalOptions; }

    /**
     * <p>A structure that describes the options for the portal associated with an
     * application.</p>
     */
    inline void SetPortalOptions(const PortalOptions& value) { m_portalOptions = value; }

    /**
     * <p>A structure that describes the options for the portal associated with an
     * application.</p>
     */
    inline void SetPortalOptions(PortalOptions&& value) { m_portalOptions = std::move(value); }

    /**
     * <p>A structure that describes the options for the portal associated with an
     * application.</p>
     */
    inline DescribeApplicationResult& WithPortalOptions(const PortalOptions& value) { SetPortalOptions(value); return *this;}

    /**
     * <p>A structure that describes the options for the portal associated with an
     * application.</p>
     */
    inline DescribeApplicationResult& WithPortalOptions(PortalOptions&& value) { SetPortalOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the application is enabled or disabled.</p>
     */
    inline const ApplicationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Specifies whether the application is enabled or disabled.</p>
     */
    inline void SetStatus(const ApplicationStatus& value) { m_status = value; }

    /**
     * <p>Specifies whether the application is enabled or disabled.</p>
     */
    inline void SetStatus(ApplicationStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Specifies whether the application is enabled or disabled.</p>
     */
    inline DescribeApplicationResult& WithStatus(const ApplicationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Specifies whether the application is enabled or disabled.</p>
     */
    inline DescribeApplicationResult& WithStatus(ApplicationStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_applicationAccount;

    Aws::String m_applicationArn;

    Aws::String m_applicationProviderArn;

    Aws::Utils::DateTime m_createdDate;

    Aws::String m_description;

    Aws::String m_instanceArn;

    Aws::String m_name;

    PortalOptions m_portalOptions;

    ApplicationStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws

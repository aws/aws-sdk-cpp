/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class PutApplicationAssignmentConfigurationRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API PutApplicationAssignmentConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutApplicationAssignmentConfiguration"; }

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
    inline PutApplicationAssignmentConfigurationRequest& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>Specifies the ARN of the application. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline PutApplicationAssignmentConfigurationRequest& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the application. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
     * Services General Reference</i>.</p>
     */
    inline PutApplicationAssignmentConfigurationRequest& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}


    /**
     * <p>If <code>AssignmentsRequired</code> is <code>true</code> (default value),
     * users don’t have access to the application unless an assignment is created using
     * the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/APIReference/API_CreateApplicationAssignment.html">CreateApplicationAssignment
     * API</a>. If <code>false</code>, all users have access to the application. </p>
     */
    inline bool GetAssignmentRequired() const{ return m_assignmentRequired; }

    /**
     * <p>If <code>AssignmentsRequired</code> is <code>true</code> (default value),
     * users don’t have access to the application unless an assignment is created using
     * the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/APIReference/API_CreateApplicationAssignment.html">CreateApplicationAssignment
     * API</a>. If <code>false</code>, all users have access to the application. </p>
     */
    inline bool AssignmentRequiredHasBeenSet() const { return m_assignmentRequiredHasBeenSet; }

    /**
     * <p>If <code>AssignmentsRequired</code> is <code>true</code> (default value),
     * users don’t have access to the application unless an assignment is created using
     * the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/APIReference/API_CreateApplicationAssignment.html">CreateApplicationAssignment
     * API</a>. If <code>false</code>, all users have access to the application. </p>
     */
    inline void SetAssignmentRequired(bool value) { m_assignmentRequiredHasBeenSet = true; m_assignmentRequired = value; }

    /**
     * <p>If <code>AssignmentsRequired</code> is <code>true</code> (default value),
     * users don’t have access to the application unless an assignment is created using
     * the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/APIReference/API_CreateApplicationAssignment.html">CreateApplicationAssignment
     * API</a>. If <code>false</code>, all users have access to the application. </p>
     */
    inline PutApplicationAssignmentConfigurationRequest& WithAssignmentRequired(bool value) { SetAssignmentRequired(value); return *this;}

  private:

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    bool m_assignmentRequired;
    bool m_assignmentRequiredHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An entity that contains IAM policies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/PermissionSet">AWS
   * API Reference</a></p>
   */
  class PermissionSet
  {
  public:
    AWS_SSOADMIN_API PermissionSet();
    AWS_SSOADMIN_API PermissionSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API PermissionSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the permission set.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the permission set.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the permission set.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the permission set.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the permission set.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the permission set.</p>
     */
    inline PermissionSet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the permission set.</p>
     */
    inline PermissionSet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the permission set.</p>
     */
    inline PermissionSet& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the permission set. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline const Aws::String& GetPermissionSetArn() const{ return m_permissionSetArn; }

    /**
     * <p>The ARN of the permission set. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline bool PermissionSetArnHasBeenSet() const { return m_permissionSetArnHasBeenSet; }

    /**
     * <p>The ARN of the permission set. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetPermissionSetArn(const Aws::String& value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn = value; }

    /**
     * <p>The ARN of the permission set. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetPermissionSetArn(Aws::String&& value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn = std::move(value); }

    /**
     * <p>The ARN of the permission set. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline void SetPermissionSetArn(const char* value) { m_permissionSetArnHasBeenSet = true; m_permissionSetArn.assign(value); }

    /**
     * <p>The ARN of the permission set. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline PermissionSet& WithPermissionSetArn(const Aws::String& value) { SetPermissionSetArn(value); return *this;}

    /**
     * <p>The ARN of the permission set. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline PermissionSet& WithPermissionSetArn(Aws::String&& value) { SetPermissionSetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the permission set. For more information about ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
     * (ARNs) and AWS Service Namespaces</a> in the <i>AWS General Reference</i>.</p>
     */
    inline PermissionSet& WithPermissionSetArn(const char* value) { SetPermissionSetArn(value); return *this;}


    /**
     * <p>The description of the <a>PermissionSet</a>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the <a>PermissionSet</a>.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the <a>PermissionSet</a>.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the <a>PermissionSet</a>.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the <a>PermissionSet</a>.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the <a>PermissionSet</a>.</p>
     */
    inline PermissionSet& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the <a>PermissionSet</a>.</p>
     */
    inline PermissionSet& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the <a>PermissionSet</a>.</p>
     */
    inline PermissionSet& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date that the permission set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date that the permission set was created.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The date that the permission set was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date that the permission set was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The date that the permission set was created.</p>
     */
    inline PermissionSet& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date that the permission set was created.</p>
     */
    inline PermissionSet& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The length of time that the application user sessions are valid for in the
     * ISO-8601 standard.</p>
     */
    inline const Aws::String& GetSessionDuration() const{ return m_sessionDuration; }

    /**
     * <p>The length of time that the application user sessions are valid for in the
     * ISO-8601 standard.</p>
     */
    inline bool SessionDurationHasBeenSet() const { return m_sessionDurationHasBeenSet; }

    /**
     * <p>The length of time that the application user sessions are valid for in the
     * ISO-8601 standard.</p>
     */
    inline void SetSessionDuration(const Aws::String& value) { m_sessionDurationHasBeenSet = true; m_sessionDuration = value; }

    /**
     * <p>The length of time that the application user sessions are valid for in the
     * ISO-8601 standard.</p>
     */
    inline void SetSessionDuration(Aws::String&& value) { m_sessionDurationHasBeenSet = true; m_sessionDuration = std::move(value); }

    /**
     * <p>The length of time that the application user sessions are valid for in the
     * ISO-8601 standard.</p>
     */
    inline void SetSessionDuration(const char* value) { m_sessionDurationHasBeenSet = true; m_sessionDuration.assign(value); }

    /**
     * <p>The length of time that the application user sessions are valid for in the
     * ISO-8601 standard.</p>
     */
    inline PermissionSet& WithSessionDuration(const Aws::String& value) { SetSessionDuration(value); return *this;}

    /**
     * <p>The length of time that the application user sessions are valid for in the
     * ISO-8601 standard.</p>
     */
    inline PermissionSet& WithSessionDuration(Aws::String&& value) { SetSessionDuration(std::move(value)); return *this;}

    /**
     * <p>The length of time that the application user sessions are valid for in the
     * ISO-8601 standard.</p>
     */
    inline PermissionSet& WithSessionDuration(const char* value) { SetSessionDuration(value); return *this;}


    /**
     * <p>Used to redirect users within the application during the federation
     * authentication process.</p>
     */
    inline const Aws::String& GetRelayState() const{ return m_relayState; }

    /**
     * <p>Used to redirect users within the application during the federation
     * authentication process.</p>
     */
    inline bool RelayStateHasBeenSet() const { return m_relayStateHasBeenSet; }

    /**
     * <p>Used to redirect users within the application during the federation
     * authentication process.</p>
     */
    inline void SetRelayState(const Aws::String& value) { m_relayStateHasBeenSet = true; m_relayState = value; }

    /**
     * <p>Used to redirect users within the application during the federation
     * authentication process.</p>
     */
    inline void SetRelayState(Aws::String&& value) { m_relayStateHasBeenSet = true; m_relayState = std::move(value); }

    /**
     * <p>Used to redirect users within the application during the federation
     * authentication process.</p>
     */
    inline void SetRelayState(const char* value) { m_relayStateHasBeenSet = true; m_relayState.assign(value); }

    /**
     * <p>Used to redirect users within the application during the federation
     * authentication process.</p>
     */
    inline PermissionSet& WithRelayState(const Aws::String& value) { SetRelayState(value); return *this;}

    /**
     * <p>Used to redirect users within the application during the federation
     * authentication process.</p>
     */
    inline PermissionSet& WithRelayState(Aws::String&& value) { SetRelayState(std::move(value)); return *this;}

    /**
     * <p>Used to redirect users within the application during the federation
     * authentication process.</p>
     */
    inline PermissionSet& WithRelayState(const char* value) { SetRelayState(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_permissionSetArn;
    bool m_permissionSetArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_sessionDuration;
    bool m_sessionDurationHasBeenSet = false;

    Aws::String m_relayState;
    bool m_relayStateHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws

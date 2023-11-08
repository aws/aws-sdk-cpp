/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/PermissionModelType.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines the roles and credentials that Resilience Hub would use while
   * creating the application, importing its resources, and running an
   * assessment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/PermissionModel">AWS
   * API Reference</a></p>
   */
  class PermissionModel
  {
  public:
    AWS_RESILIENCEHUB_API PermissionModel();
    AWS_RESILIENCEHUB_API PermissionModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API PermissionModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines a list of role Amazon Resource Names (ARNs) to be used in other
     * accounts. These ARNs are used for querying purposes while importing resources
     * and assessing your application.</p>  <ul> <li> <p>These ARNs are required
     * only when your resources are in other accounts and you have different role name
     * in these accounts. Else, the invoker role name will be used in the other
     * accounts.</p> </li> <li> <p>These roles must have a trust policy with
     * <code>iam:AssumeRole</code> permission to the invoker role in the primary
     * account.</p> </li> </ul> 
     */
    inline const Aws::Vector<Aws::String>& GetCrossAccountRoleArns() const{ return m_crossAccountRoleArns; }

    /**
     * <p>Defines a list of role Amazon Resource Names (ARNs) to be used in other
     * accounts. These ARNs are used for querying purposes while importing resources
     * and assessing your application.</p>  <ul> <li> <p>These ARNs are required
     * only when your resources are in other accounts and you have different role name
     * in these accounts. Else, the invoker role name will be used in the other
     * accounts.</p> </li> <li> <p>These roles must have a trust policy with
     * <code>iam:AssumeRole</code> permission to the invoker role in the primary
     * account.</p> </li> </ul> 
     */
    inline bool CrossAccountRoleArnsHasBeenSet() const { return m_crossAccountRoleArnsHasBeenSet; }

    /**
     * <p>Defines a list of role Amazon Resource Names (ARNs) to be used in other
     * accounts. These ARNs are used for querying purposes while importing resources
     * and assessing your application.</p>  <ul> <li> <p>These ARNs are required
     * only when your resources are in other accounts and you have different role name
     * in these accounts. Else, the invoker role name will be used in the other
     * accounts.</p> </li> <li> <p>These roles must have a trust policy with
     * <code>iam:AssumeRole</code> permission to the invoker role in the primary
     * account.</p> </li> </ul> 
     */
    inline void SetCrossAccountRoleArns(const Aws::Vector<Aws::String>& value) { m_crossAccountRoleArnsHasBeenSet = true; m_crossAccountRoleArns = value; }

    /**
     * <p>Defines a list of role Amazon Resource Names (ARNs) to be used in other
     * accounts. These ARNs are used for querying purposes while importing resources
     * and assessing your application.</p>  <ul> <li> <p>These ARNs are required
     * only when your resources are in other accounts and you have different role name
     * in these accounts. Else, the invoker role name will be used in the other
     * accounts.</p> </li> <li> <p>These roles must have a trust policy with
     * <code>iam:AssumeRole</code> permission to the invoker role in the primary
     * account.</p> </li> </ul> 
     */
    inline void SetCrossAccountRoleArns(Aws::Vector<Aws::String>&& value) { m_crossAccountRoleArnsHasBeenSet = true; m_crossAccountRoleArns = std::move(value); }

    /**
     * <p>Defines a list of role Amazon Resource Names (ARNs) to be used in other
     * accounts. These ARNs are used for querying purposes while importing resources
     * and assessing your application.</p>  <ul> <li> <p>These ARNs are required
     * only when your resources are in other accounts and you have different role name
     * in these accounts. Else, the invoker role name will be used in the other
     * accounts.</p> </li> <li> <p>These roles must have a trust policy with
     * <code>iam:AssumeRole</code> permission to the invoker role in the primary
     * account.</p> </li> </ul> 
     */
    inline PermissionModel& WithCrossAccountRoleArns(const Aws::Vector<Aws::String>& value) { SetCrossAccountRoleArns(value); return *this;}

    /**
     * <p>Defines a list of role Amazon Resource Names (ARNs) to be used in other
     * accounts. These ARNs are used for querying purposes while importing resources
     * and assessing your application.</p>  <ul> <li> <p>These ARNs are required
     * only when your resources are in other accounts and you have different role name
     * in these accounts. Else, the invoker role name will be used in the other
     * accounts.</p> </li> <li> <p>These roles must have a trust policy with
     * <code>iam:AssumeRole</code> permission to the invoker role in the primary
     * account.</p> </li> </ul> 
     */
    inline PermissionModel& WithCrossAccountRoleArns(Aws::Vector<Aws::String>&& value) { SetCrossAccountRoleArns(std::move(value)); return *this;}

    /**
     * <p>Defines a list of role Amazon Resource Names (ARNs) to be used in other
     * accounts. These ARNs are used for querying purposes while importing resources
     * and assessing your application.</p>  <ul> <li> <p>These ARNs are required
     * only when your resources are in other accounts and you have different role name
     * in these accounts. Else, the invoker role name will be used in the other
     * accounts.</p> </li> <li> <p>These roles must have a trust policy with
     * <code>iam:AssumeRole</code> permission to the invoker role in the primary
     * account.</p> </li> </ul> 
     */
    inline PermissionModel& AddCrossAccountRoleArns(const Aws::String& value) { m_crossAccountRoleArnsHasBeenSet = true; m_crossAccountRoleArns.push_back(value); return *this; }

    /**
     * <p>Defines a list of role Amazon Resource Names (ARNs) to be used in other
     * accounts. These ARNs are used for querying purposes while importing resources
     * and assessing your application.</p>  <ul> <li> <p>These ARNs are required
     * only when your resources are in other accounts and you have different role name
     * in these accounts. Else, the invoker role name will be used in the other
     * accounts.</p> </li> <li> <p>These roles must have a trust policy with
     * <code>iam:AssumeRole</code> permission to the invoker role in the primary
     * account.</p> </li> </ul> 
     */
    inline PermissionModel& AddCrossAccountRoleArns(Aws::String&& value) { m_crossAccountRoleArnsHasBeenSet = true; m_crossAccountRoleArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Defines a list of role Amazon Resource Names (ARNs) to be used in other
     * accounts. These ARNs are used for querying purposes while importing resources
     * and assessing your application.</p>  <ul> <li> <p>These ARNs are required
     * only when your resources are in other accounts and you have different role name
     * in these accounts. Else, the invoker role name will be used in the other
     * accounts.</p> </li> <li> <p>These roles must have a trust policy with
     * <code>iam:AssumeRole</code> permission to the invoker role in the primary
     * account.</p> </li> </ul> 
     */
    inline PermissionModel& AddCrossAccountRoleArns(const char* value) { m_crossAccountRoleArnsHasBeenSet = true; m_crossAccountRoleArns.push_back(value); return *this; }


    /**
     * <p>Existing Amazon Web Services IAM role name in the primary Amazon Web Services
     * account that will be assumed by Resilience Hub Service Principle to obtain a
     * read-only access to your application resources while running an assessment.</p>
     *  <ul> <li> <p>You must have <code>iam:passRole</code> permission for this
     * role while creating or updating the application.</p> </li> <li> <p>Currently,
     * <code>invokerRoleName</code> accepts only <code>[A-Za-z0-9_+=,.@-]</code>
     * characters.</p> </li> </ul> 
     */
    inline const Aws::String& GetInvokerRoleName() const{ return m_invokerRoleName; }

    /**
     * <p>Existing Amazon Web Services IAM role name in the primary Amazon Web Services
     * account that will be assumed by Resilience Hub Service Principle to obtain a
     * read-only access to your application resources while running an assessment.</p>
     *  <ul> <li> <p>You must have <code>iam:passRole</code> permission for this
     * role while creating or updating the application.</p> </li> <li> <p>Currently,
     * <code>invokerRoleName</code> accepts only <code>[A-Za-z0-9_+=,.@-]</code>
     * characters.</p> </li> </ul> 
     */
    inline bool InvokerRoleNameHasBeenSet() const { return m_invokerRoleNameHasBeenSet; }

    /**
     * <p>Existing Amazon Web Services IAM role name in the primary Amazon Web Services
     * account that will be assumed by Resilience Hub Service Principle to obtain a
     * read-only access to your application resources while running an assessment.</p>
     *  <ul> <li> <p>You must have <code>iam:passRole</code> permission for this
     * role while creating or updating the application.</p> </li> <li> <p>Currently,
     * <code>invokerRoleName</code> accepts only <code>[A-Za-z0-9_+=,.@-]</code>
     * characters.</p> </li> </ul> 
     */
    inline void SetInvokerRoleName(const Aws::String& value) { m_invokerRoleNameHasBeenSet = true; m_invokerRoleName = value; }

    /**
     * <p>Existing Amazon Web Services IAM role name in the primary Amazon Web Services
     * account that will be assumed by Resilience Hub Service Principle to obtain a
     * read-only access to your application resources while running an assessment.</p>
     *  <ul> <li> <p>You must have <code>iam:passRole</code> permission for this
     * role while creating or updating the application.</p> </li> <li> <p>Currently,
     * <code>invokerRoleName</code> accepts only <code>[A-Za-z0-9_+=,.@-]</code>
     * characters.</p> </li> </ul> 
     */
    inline void SetInvokerRoleName(Aws::String&& value) { m_invokerRoleNameHasBeenSet = true; m_invokerRoleName = std::move(value); }

    /**
     * <p>Existing Amazon Web Services IAM role name in the primary Amazon Web Services
     * account that will be assumed by Resilience Hub Service Principle to obtain a
     * read-only access to your application resources while running an assessment.</p>
     *  <ul> <li> <p>You must have <code>iam:passRole</code> permission for this
     * role while creating or updating the application.</p> </li> <li> <p>Currently,
     * <code>invokerRoleName</code> accepts only <code>[A-Za-z0-9_+=,.@-]</code>
     * characters.</p> </li> </ul> 
     */
    inline void SetInvokerRoleName(const char* value) { m_invokerRoleNameHasBeenSet = true; m_invokerRoleName.assign(value); }

    /**
     * <p>Existing Amazon Web Services IAM role name in the primary Amazon Web Services
     * account that will be assumed by Resilience Hub Service Principle to obtain a
     * read-only access to your application resources while running an assessment.</p>
     *  <ul> <li> <p>You must have <code>iam:passRole</code> permission for this
     * role while creating or updating the application.</p> </li> <li> <p>Currently,
     * <code>invokerRoleName</code> accepts only <code>[A-Za-z0-9_+=,.@-]</code>
     * characters.</p> </li> </ul> 
     */
    inline PermissionModel& WithInvokerRoleName(const Aws::String& value) { SetInvokerRoleName(value); return *this;}

    /**
     * <p>Existing Amazon Web Services IAM role name in the primary Amazon Web Services
     * account that will be assumed by Resilience Hub Service Principle to obtain a
     * read-only access to your application resources while running an assessment.</p>
     *  <ul> <li> <p>You must have <code>iam:passRole</code> permission for this
     * role while creating or updating the application.</p> </li> <li> <p>Currently,
     * <code>invokerRoleName</code> accepts only <code>[A-Za-z0-9_+=,.@-]</code>
     * characters.</p> </li> </ul> 
     */
    inline PermissionModel& WithInvokerRoleName(Aws::String&& value) { SetInvokerRoleName(std::move(value)); return *this;}

    /**
     * <p>Existing Amazon Web Services IAM role name in the primary Amazon Web Services
     * account that will be assumed by Resilience Hub Service Principle to obtain a
     * read-only access to your application resources while running an assessment.</p>
     *  <ul> <li> <p>You must have <code>iam:passRole</code> permission for this
     * role while creating or updating the application.</p> </li> <li> <p>Currently,
     * <code>invokerRoleName</code> accepts only <code>[A-Za-z0-9_+=,.@-]</code>
     * characters.</p> </li> </ul> 
     */
    inline PermissionModel& WithInvokerRoleName(const char* value) { SetInvokerRoleName(value); return *this;}


    /**
     * <p>Defines how Resilience Hub scans your resources. It can scan for the
     * resources by using a pre-existing role in your Amazon Web Services account, or
     * by using the credentials of the current IAM user.</p>
     */
    inline const PermissionModelType& GetType() const{ return m_type; }

    /**
     * <p>Defines how Resilience Hub scans your resources. It can scan for the
     * resources by using a pre-existing role in your Amazon Web Services account, or
     * by using the credentials of the current IAM user.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Defines how Resilience Hub scans your resources. It can scan for the
     * resources by using a pre-existing role in your Amazon Web Services account, or
     * by using the credentials of the current IAM user.</p>
     */
    inline void SetType(const PermissionModelType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Defines how Resilience Hub scans your resources. It can scan for the
     * resources by using a pre-existing role in your Amazon Web Services account, or
     * by using the credentials of the current IAM user.</p>
     */
    inline void SetType(PermissionModelType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Defines how Resilience Hub scans your resources. It can scan for the
     * resources by using a pre-existing role in your Amazon Web Services account, or
     * by using the credentials of the current IAM user.</p>
     */
    inline PermissionModel& WithType(const PermissionModelType& value) { SetType(value); return *this;}

    /**
     * <p>Defines how Resilience Hub scans your resources. It can scan for the
     * resources by using a pre-existing role in your Amazon Web Services account, or
     * by using the credentials of the current IAM user.</p>
     */
    inline PermissionModel& WithType(PermissionModelType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_crossAccountRoleArns;
    bool m_crossAccountRoleArnsHasBeenSet = false;

    Aws::String m_invokerRoleName;
    bool m_invokerRoleNameHasBeenSet = false;

    PermissionModelType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws

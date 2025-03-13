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
    AWS_RESILIENCEHUB_API PermissionModel() = default;
    AWS_RESILIENCEHUB_API PermissionModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API PermissionModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline const Aws::Vector<Aws::String>& GetCrossAccountRoleArns() const { return m_crossAccountRoleArns; }
    inline bool CrossAccountRoleArnsHasBeenSet() const { return m_crossAccountRoleArnsHasBeenSet; }
    template<typename CrossAccountRoleArnsT = Aws::Vector<Aws::String>>
    void SetCrossAccountRoleArns(CrossAccountRoleArnsT&& value) { m_crossAccountRoleArnsHasBeenSet = true; m_crossAccountRoleArns = std::forward<CrossAccountRoleArnsT>(value); }
    template<typename CrossAccountRoleArnsT = Aws::Vector<Aws::String>>
    PermissionModel& WithCrossAccountRoleArns(CrossAccountRoleArnsT&& value) { SetCrossAccountRoleArns(std::forward<CrossAccountRoleArnsT>(value)); return *this;}
    template<typename CrossAccountRoleArnsT = Aws::String>
    PermissionModel& AddCrossAccountRoleArns(CrossAccountRoleArnsT&& value) { m_crossAccountRoleArnsHasBeenSet = true; m_crossAccountRoleArns.emplace_back(std::forward<CrossAccountRoleArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Existing Amazon Web Services IAM role name in the primary Amazon Web Services
     * account that will be assumed by Resilience Hub Service Principle to obtain a
     * read-only access to your application resources while running an assessment. </p>
     * <p>If your IAM role includes a path, you must include the path in the
     * <code>invokerRoleName</code> parameter. For example, if your IAM role's ARN is
     * <code>arn:aws:iam:123456789012:role/my-path/role-name</code>, you should pass
     * <code>my-path/role-name</code>. </p>  <ul> <li> <p>You must have
     * <code>iam:passRole</code> permission for this role while creating or updating
     * the application.</p> </li> <li> <p>Currently, <code>invokerRoleName</code>
     * accepts only <code>[A-Za-z0-9_+=,.@-]</code> characters.</p> </li> </ul> 
     */
    inline const Aws::String& GetInvokerRoleName() const { return m_invokerRoleName; }
    inline bool InvokerRoleNameHasBeenSet() const { return m_invokerRoleNameHasBeenSet; }
    template<typename InvokerRoleNameT = Aws::String>
    void SetInvokerRoleName(InvokerRoleNameT&& value) { m_invokerRoleNameHasBeenSet = true; m_invokerRoleName = std::forward<InvokerRoleNameT>(value); }
    template<typename InvokerRoleNameT = Aws::String>
    PermissionModel& WithInvokerRoleName(InvokerRoleNameT&& value) { SetInvokerRoleName(std::forward<InvokerRoleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines how Resilience Hub scans your resources. It can scan for the
     * resources by using a pre-existing role in your Amazon Web Services account, or
     * by using the credentials of the current IAM user.</p>
     */
    inline PermissionModelType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(PermissionModelType value) { m_typeHasBeenSet = true; m_type = value; }
    inline PermissionModel& WithType(PermissionModelType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_crossAccountRoleArns;
    bool m_crossAccountRoleArnsHasBeenSet = false;

    Aws::String m_invokerRoleName;
    bool m_invokerRoleNameHasBeenSet = false;

    PermissionModelType m_type{PermissionModelType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws

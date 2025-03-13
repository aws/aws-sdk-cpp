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
   * <p>Information about a role associated with an instance profile.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsIamInstanceProfileRole">AWS
   * API Reference</a></p>
   */
  class AwsIamInstanceProfileRole
  {
  public:
    AWS_SECURITYHUB_API AwsIamInstanceProfileRole() = default;
    AWS_SECURITYHUB_API AwsIamInstanceProfileRole(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsIamInstanceProfileRole& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the role.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    AwsIamInstanceProfileRole& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy that grants an entity permission to assume the role.</p>
     */
    inline const Aws::String& GetAssumeRolePolicyDocument() const { return m_assumeRolePolicyDocument; }
    inline bool AssumeRolePolicyDocumentHasBeenSet() const { return m_assumeRolePolicyDocumentHasBeenSet; }
    template<typename AssumeRolePolicyDocumentT = Aws::String>
    void SetAssumeRolePolicyDocument(AssumeRolePolicyDocumentT&& value) { m_assumeRolePolicyDocumentHasBeenSet = true; m_assumeRolePolicyDocument = std::forward<AssumeRolePolicyDocumentT>(value); }
    template<typename AssumeRolePolicyDocumentT = Aws::String>
    AwsIamInstanceProfileRole& WithAssumeRolePolicyDocument(AssumeRolePolicyDocumentT&& value) { SetAssumeRolePolicyDocument(std::forward<AssumeRolePolicyDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the role was created.</p> <p>For more information about the
     * validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreateDate() const { return m_createDate; }
    inline bool CreateDateHasBeenSet() const { return m_createDateHasBeenSet; }
    template<typename CreateDateT = Aws::String>
    void SetCreateDate(CreateDateT&& value) { m_createDateHasBeenSet = true; m_createDate = std::forward<CreateDateT>(value); }
    template<typename CreateDateT = Aws::String>
    AwsIamInstanceProfileRole& WithCreateDate(CreateDateT&& value) { SetCreateDate(std::forward<CreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the role.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    AwsIamInstanceProfileRole& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the role.</p>
     */
    inline const Aws::String& GetRoleId() const { return m_roleId; }
    inline bool RoleIdHasBeenSet() const { return m_roleIdHasBeenSet; }
    template<typename RoleIdT = Aws::String>
    void SetRoleId(RoleIdT&& value) { m_roleIdHasBeenSet = true; m_roleId = std::forward<RoleIdT>(value); }
    template<typename RoleIdT = Aws::String>
    AwsIamInstanceProfileRole& WithRoleId(RoleIdT&& value) { SetRoleId(std::forward<RoleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the role.</p>
     */
    inline const Aws::String& GetRoleName() const { return m_roleName; }
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
    template<typename RoleNameT = Aws::String>
    void SetRoleName(RoleNameT&& value) { m_roleNameHasBeenSet = true; m_roleName = std::forward<RoleNameT>(value); }
    template<typename RoleNameT = Aws::String>
    AwsIamInstanceProfileRole& WithRoleName(RoleNameT&& value) { SetRoleName(std::forward<RoleNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_assumeRolePolicyDocument;
    bool m_assumeRolePolicyDocumentHasBeenSet = false;

    Aws::String m_createDate;
    bool m_createDateHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::String m_roleId;
    bool m_roleIdHasBeenSet = false;

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

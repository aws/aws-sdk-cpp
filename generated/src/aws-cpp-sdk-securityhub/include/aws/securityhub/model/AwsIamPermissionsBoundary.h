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
   * <p>Information about the policy used to set the permissions boundary for an IAM
   * principal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsIamPermissionsBoundary">AWS
   * API Reference</a></p>
   */
  class AwsIamPermissionsBoundary
  {
  public:
    AWS_SECURITYHUB_API AwsIamPermissionsBoundary() = default;
    AWS_SECURITYHUB_API AwsIamPermissionsBoundary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsIamPermissionsBoundary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the policy used to set the permissions boundary.</p>
     */
    inline const Aws::String& GetPermissionsBoundaryArn() const { return m_permissionsBoundaryArn; }
    inline bool PermissionsBoundaryArnHasBeenSet() const { return m_permissionsBoundaryArnHasBeenSet; }
    template<typename PermissionsBoundaryArnT = Aws::String>
    void SetPermissionsBoundaryArn(PermissionsBoundaryArnT&& value) { m_permissionsBoundaryArnHasBeenSet = true; m_permissionsBoundaryArn = std::forward<PermissionsBoundaryArnT>(value); }
    template<typename PermissionsBoundaryArnT = Aws::String>
    AwsIamPermissionsBoundary& WithPermissionsBoundaryArn(PermissionsBoundaryArnT&& value) { SetPermissionsBoundaryArn(std::forward<PermissionsBoundaryArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The usage type for the permissions boundary.</p>
     */
    inline const Aws::String& GetPermissionsBoundaryType() const { return m_permissionsBoundaryType; }
    inline bool PermissionsBoundaryTypeHasBeenSet() const { return m_permissionsBoundaryTypeHasBeenSet; }
    template<typename PermissionsBoundaryTypeT = Aws::String>
    void SetPermissionsBoundaryType(PermissionsBoundaryTypeT&& value) { m_permissionsBoundaryTypeHasBeenSet = true; m_permissionsBoundaryType = std::forward<PermissionsBoundaryTypeT>(value); }
    template<typename PermissionsBoundaryTypeT = Aws::String>
    AwsIamPermissionsBoundary& WithPermissionsBoundaryType(PermissionsBoundaryTypeT&& value) { SetPermissionsBoundaryType(std::forward<PermissionsBoundaryTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_permissionsBoundaryArn;
    bool m_permissionsBoundaryArnHasBeenSet = false;

    Aws::String m_permissionsBoundaryType;
    bool m_permissionsBoundaryTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

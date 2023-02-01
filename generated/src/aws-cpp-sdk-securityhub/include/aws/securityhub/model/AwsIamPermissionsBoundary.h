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
    AWS_SECURITYHUB_API AwsIamPermissionsBoundary();
    AWS_SECURITYHUB_API AwsIamPermissionsBoundary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsIamPermissionsBoundary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the policy used to set the permissions boundary.</p>
     */
    inline const Aws::String& GetPermissionsBoundaryArn() const{ return m_permissionsBoundaryArn; }

    /**
     * <p>The ARN of the policy used to set the permissions boundary.</p>
     */
    inline bool PermissionsBoundaryArnHasBeenSet() const { return m_permissionsBoundaryArnHasBeenSet; }

    /**
     * <p>The ARN of the policy used to set the permissions boundary.</p>
     */
    inline void SetPermissionsBoundaryArn(const Aws::String& value) { m_permissionsBoundaryArnHasBeenSet = true; m_permissionsBoundaryArn = value; }

    /**
     * <p>The ARN of the policy used to set the permissions boundary.</p>
     */
    inline void SetPermissionsBoundaryArn(Aws::String&& value) { m_permissionsBoundaryArnHasBeenSet = true; m_permissionsBoundaryArn = std::move(value); }

    /**
     * <p>The ARN of the policy used to set the permissions boundary.</p>
     */
    inline void SetPermissionsBoundaryArn(const char* value) { m_permissionsBoundaryArnHasBeenSet = true; m_permissionsBoundaryArn.assign(value); }

    /**
     * <p>The ARN of the policy used to set the permissions boundary.</p>
     */
    inline AwsIamPermissionsBoundary& WithPermissionsBoundaryArn(const Aws::String& value) { SetPermissionsBoundaryArn(value); return *this;}

    /**
     * <p>The ARN of the policy used to set the permissions boundary.</p>
     */
    inline AwsIamPermissionsBoundary& WithPermissionsBoundaryArn(Aws::String&& value) { SetPermissionsBoundaryArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the policy used to set the permissions boundary.</p>
     */
    inline AwsIamPermissionsBoundary& WithPermissionsBoundaryArn(const char* value) { SetPermissionsBoundaryArn(value); return *this;}


    /**
     * <p>The usage type for the permissions boundary.</p>
     */
    inline const Aws::String& GetPermissionsBoundaryType() const{ return m_permissionsBoundaryType; }

    /**
     * <p>The usage type for the permissions boundary.</p>
     */
    inline bool PermissionsBoundaryTypeHasBeenSet() const { return m_permissionsBoundaryTypeHasBeenSet; }

    /**
     * <p>The usage type for the permissions boundary.</p>
     */
    inline void SetPermissionsBoundaryType(const Aws::String& value) { m_permissionsBoundaryTypeHasBeenSet = true; m_permissionsBoundaryType = value; }

    /**
     * <p>The usage type for the permissions boundary.</p>
     */
    inline void SetPermissionsBoundaryType(Aws::String&& value) { m_permissionsBoundaryTypeHasBeenSet = true; m_permissionsBoundaryType = std::move(value); }

    /**
     * <p>The usage type for the permissions boundary.</p>
     */
    inline void SetPermissionsBoundaryType(const char* value) { m_permissionsBoundaryTypeHasBeenSet = true; m_permissionsBoundaryType.assign(value); }

    /**
     * <p>The usage type for the permissions boundary.</p>
     */
    inline AwsIamPermissionsBoundary& WithPermissionsBoundaryType(const Aws::String& value) { SetPermissionsBoundaryType(value); return *this;}

    /**
     * <p>The usage type for the permissions boundary.</p>
     */
    inline AwsIamPermissionsBoundary& WithPermissionsBoundaryType(Aws::String&& value) { SetPermissionsBoundaryType(std::move(value)); return *this;}

    /**
     * <p>The usage type for the permissions boundary.</p>
     */
    inline AwsIamPermissionsBoundary& WithPermissionsBoundaryType(const char* value) { SetPermissionsBoundaryType(value); return *this;}

  private:

    Aws::String m_permissionsBoundaryArn;
    bool m_permissionsBoundaryArnHasBeenSet = false;

    Aws::String m_permissionsBoundaryType;
    bool m_permissionsBoundaryTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

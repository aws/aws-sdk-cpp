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
   * <p>An IAM role that the cluster can use to access other Amazon Web Services
   * services.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsRedshiftClusterIamRole">AWS
   * API Reference</a></p>
   */
  class AwsRedshiftClusterIamRole
  {
  public:
    AWS_SECURITYHUB_API AwsRedshiftClusterIamRole() = default;
    AWS_SECURITYHUB_API AwsRedshiftClusterIamRole(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsRedshiftClusterIamRole& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the IAM role's association with the cluster.</p> <p>Valid
     * values: <code>in-sync</code> | <code>adding</code> | <code>removing</code> </p>
     */
    inline const Aws::String& GetApplyStatus() const { return m_applyStatus; }
    inline bool ApplyStatusHasBeenSet() const { return m_applyStatusHasBeenSet; }
    template<typename ApplyStatusT = Aws::String>
    void SetApplyStatus(ApplyStatusT&& value) { m_applyStatusHasBeenSet = true; m_applyStatus = std::forward<ApplyStatusT>(value); }
    template<typename ApplyStatusT = Aws::String>
    AwsRedshiftClusterIamRole& WithApplyStatus(ApplyStatusT&& value) { SetApplyStatus(std::forward<ApplyStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role.</p>
     */
    inline const Aws::String& GetIamRoleArn() const { return m_iamRoleArn; }
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }
    template<typename IamRoleArnT = Aws::String>
    void SetIamRoleArn(IamRoleArnT&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::forward<IamRoleArnT>(value); }
    template<typename IamRoleArnT = Aws::String>
    AwsRedshiftClusterIamRole& WithIamRoleArn(IamRoleArnT&& value) { SetIamRoleArn(std::forward<IamRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applyStatus;
    bool m_applyStatusHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

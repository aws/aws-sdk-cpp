/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/IamPolicyConstraints.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>This object defines the access restrictions to Amazon S3 resources that are
   * included in custom worker task templates using the Liquid filter,
   * <code>grant_read_access</code>.</p> <p>To learn more about how custom templates
   * are created, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/a2i-custom-templates.html">Create
   * custom worker task templates</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/S3Presign">AWS
   * API Reference</a></p>
   */
  class S3Presign
  {
  public:
    AWS_SAGEMAKER_API S3Presign() = default;
    AWS_SAGEMAKER_API S3Presign(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API S3Presign& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Use this parameter to specify the allowed request source. Possible sources
     * are either <code>SourceIp</code> or <code>VpcSourceIp</code>.</p>
     */
    inline const IamPolicyConstraints& GetIamPolicyConstraints() const { return m_iamPolicyConstraints; }
    inline bool IamPolicyConstraintsHasBeenSet() const { return m_iamPolicyConstraintsHasBeenSet; }
    template<typename IamPolicyConstraintsT = IamPolicyConstraints>
    void SetIamPolicyConstraints(IamPolicyConstraintsT&& value) { m_iamPolicyConstraintsHasBeenSet = true; m_iamPolicyConstraints = std::forward<IamPolicyConstraintsT>(value); }
    template<typename IamPolicyConstraintsT = IamPolicyConstraints>
    S3Presign& WithIamPolicyConstraints(IamPolicyConstraintsT&& value) { SetIamPolicyConstraints(std::forward<IamPolicyConstraintsT>(value)); return *this;}
    ///@}
  private:

    IamPolicyConstraints m_iamPolicyConstraints;
    bool m_iamPolicyConstraintsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

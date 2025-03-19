/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/EnabledOrDisabled.h>
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
   * <p>Use this parameter to specify a supported global condition key that is added
   * to the IAM policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/IamPolicyConstraints">AWS
   * API Reference</a></p>
   */
  class IamPolicyConstraints
  {
  public:
    AWS_SAGEMAKER_API IamPolicyConstraints() = default;
    AWS_SAGEMAKER_API IamPolicyConstraints(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API IamPolicyConstraints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>When <code>SourceIp</code> is <code>Enabled</code> the worker's IP address
     * when a task is rendered in the worker portal is added to the IAM policy as a
     * <code>Condition</code> used to generate the Amazon S3 presigned URL. This IP
     * address is checked by Amazon S3 and must match in order for the Amazon S3
     * resource to be rendered in the worker portal.</p>
     */
    inline EnabledOrDisabled GetSourceIp() const { return m_sourceIp; }
    inline bool SourceIpHasBeenSet() const { return m_sourceIpHasBeenSet; }
    inline void SetSourceIp(EnabledOrDisabled value) { m_sourceIpHasBeenSet = true; m_sourceIp = value; }
    inline IamPolicyConstraints& WithSourceIp(EnabledOrDisabled value) { SetSourceIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>VpcSourceIp</code> is <code>Enabled</code> the worker's IP address
     * when a task is rendered in private worker portal inside the VPC is added to the
     * IAM policy as a <code>Condition</code> used to generate the Amazon S3 presigned
     * URL. To render the task successfully Amazon S3 checks that the presigned URL is
     * being accessed over an Amazon S3 VPC Endpoint, and that the worker's IP address
     * matches the IP address in the IAM policy. To learn more about configuring
     * private worker portal, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/samurai-vpc-worker-portal.html">Use
     * Amazon VPC mode from a private worker portal</a>.</p>
     */
    inline EnabledOrDisabled GetVpcSourceIp() const { return m_vpcSourceIp; }
    inline bool VpcSourceIpHasBeenSet() const { return m_vpcSourceIpHasBeenSet; }
    inline void SetVpcSourceIp(EnabledOrDisabled value) { m_vpcSourceIpHasBeenSet = true; m_vpcSourceIp = value; }
    inline IamPolicyConstraints& WithVpcSourceIp(EnabledOrDisabled value) { SetVpcSourceIp(value); return *this;}
    ///@}
  private:

    EnabledOrDisabled m_sourceIp{EnabledOrDisabled::NOT_SET};
    bool m_sourceIpHasBeenSet = false;

    EnabledOrDisabled m_vpcSourceIp{EnabledOrDisabled::NOT_SET};
    bool m_vpcSourceIpHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

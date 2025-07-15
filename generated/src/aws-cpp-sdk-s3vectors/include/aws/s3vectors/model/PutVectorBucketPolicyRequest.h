/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/s3vectors/S3VectorsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace S3Vectors
{
namespace Model
{

  /**
   */
  class PutVectorBucketPolicyRequest : public S3VectorsRequest
  {
  public:
    AWS_S3VECTORS_API PutVectorBucketPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutVectorBucketPolicy"; }

    AWS_S3VECTORS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the vector bucket.</p>
     */
    inline const Aws::String& GetVectorBucketName() const { return m_vectorBucketName; }
    inline bool VectorBucketNameHasBeenSet() const { return m_vectorBucketNameHasBeenSet; }
    template<typename VectorBucketNameT = Aws::String>
    void SetVectorBucketName(VectorBucketNameT&& value) { m_vectorBucketNameHasBeenSet = true; m_vectorBucketName = std::forward<VectorBucketNameT>(value); }
    template<typename VectorBucketNameT = Aws::String>
    PutVectorBucketPolicyRequest& WithVectorBucketName(VectorBucketNameT&& value) { SetVectorBucketName(std::forward<VectorBucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the vector bucket.</p>
     */
    inline const Aws::String& GetVectorBucketArn() const { return m_vectorBucketArn; }
    inline bool VectorBucketArnHasBeenSet() const { return m_vectorBucketArnHasBeenSet; }
    template<typename VectorBucketArnT = Aws::String>
    void SetVectorBucketArn(VectorBucketArnT&& value) { m_vectorBucketArnHasBeenSet = true; m_vectorBucketArn = std::forward<VectorBucketArnT>(value); }
    template<typename VectorBucketArnT = Aws::String>
    PutVectorBucketPolicyRequest& WithVectorBucketArn(VectorBucketArnT&& value) { SetVectorBucketArn(std::forward<VectorBucketArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>JSON</code> that defines the policy. For more information about
     * bucket policies for S3 Vectors, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-vectors-bucket-policy.html">Managing
     * vector bucket policies</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    template<typename PolicyT = Aws::String>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::String>
    PutVectorBucketPolicyRequest& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vectorBucketName;
    bool m_vectorBucketNameHasBeenSet = false;

    Aws::String m_vectorBucketArn;
    bool m_vectorBucketArnHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Vectors
} // namespace Aws

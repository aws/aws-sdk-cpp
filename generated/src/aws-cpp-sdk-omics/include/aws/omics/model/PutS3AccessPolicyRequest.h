/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class PutS3AccessPolicyRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API PutS3AccessPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutS3AccessPolicy"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The S3 access point ARN where you want to put the access policy.</p>
     */
    inline const Aws::String& GetS3AccessPointArn() const{ return m_s3AccessPointArn; }
    inline bool S3AccessPointArnHasBeenSet() const { return m_s3AccessPointArnHasBeenSet; }
    inline void SetS3AccessPointArn(const Aws::String& value) { m_s3AccessPointArnHasBeenSet = true; m_s3AccessPointArn = value; }
    inline void SetS3AccessPointArn(Aws::String&& value) { m_s3AccessPointArnHasBeenSet = true; m_s3AccessPointArn = std::move(value); }
    inline void SetS3AccessPointArn(const char* value) { m_s3AccessPointArnHasBeenSet = true; m_s3AccessPointArn.assign(value); }
    inline PutS3AccessPolicyRequest& WithS3AccessPointArn(const Aws::String& value) { SetS3AccessPointArn(value); return *this;}
    inline PutS3AccessPolicyRequest& WithS3AccessPointArn(Aws::String&& value) { SetS3AccessPointArn(std::move(value)); return *this;}
    inline PutS3AccessPolicyRequest& WithS3AccessPointArn(const char* value) { SetS3AccessPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource policy that controls S3 access to the store.</p>
     */
    inline const Aws::String& GetS3AccessPolicy() const{ return m_s3AccessPolicy; }
    inline bool S3AccessPolicyHasBeenSet() const { return m_s3AccessPolicyHasBeenSet; }
    inline void SetS3AccessPolicy(const Aws::String& value) { m_s3AccessPolicyHasBeenSet = true; m_s3AccessPolicy = value; }
    inline void SetS3AccessPolicy(Aws::String&& value) { m_s3AccessPolicyHasBeenSet = true; m_s3AccessPolicy = std::move(value); }
    inline void SetS3AccessPolicy(const char* value) { m_s3AccessPolicyHasBeenSet = true; m_s3AccessPolicy.assign(value); }
    inline PutS3AccessPolicyRequest& WithS3AccessPolicy(const Aws::String& value) { SetS3AccessPolicy(value); return *this;}
    inline PutS3AccessPolicyRequest& WithS3AccessPolicy(Aws::String&& value) { SetS3AccessPolicy(std::move(value)); return *this;}
    inline PutS3AccessPolicyRequest& WithS3AccessPolicy(const char* value) { SetS3AccessPolicy(value); return *this;}
    ///@}
  private:

    Aws::String m_s3AccessPointArn;
    bool m_s3AccessPointArnHasBeenSet = false;

    Aws::String m_s3AccessPolicy;
    bool m_s3AccessPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws

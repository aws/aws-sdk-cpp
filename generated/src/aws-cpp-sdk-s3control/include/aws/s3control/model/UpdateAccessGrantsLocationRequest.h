/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class UpdateAccessGrantsLocationRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API UpdateAccessGrantsLocationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccessGrantsLocation"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_S3CONTROL_API inline bool ShouldComputeContentMd5() const override { return true; }

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline UpdateAccessGrantsLocationRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline UpdateAccessGrantsLocationRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline UpdateAccessGrantsLocationRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The ID of the registered location that you are updating. S3 Access Grants
     * assigns this ID when you register the location. S3 Access Grants assigns the ID
     * <code>default</code> to the default location <code>s3://</code> and assigns an
     * auto-generated ID to other locations that you register. </p> <p>The ID of the
     * registered location to which you are granting access. S3 Access Grants assigned
     * this ID when you registered the location. S3 Access Grants assigns the ID
     * <code>default</code> to the default location <code>s3://</code> and assigns an
     * auto-generated ID to other locations that you register. </p> <p>If you are
     * passing the <code>default</code> location, you cannot create an access grant for
     * the entire default location. You must also specify a bucket or a bucket and
     * prefix in the <code>Subprefix</code> field. </p>
     */
    inline const Aws::String& GetAccessGrantsLocationId() const{ return m_accessGrantsLocationId; }

    /**
     * <p>The ID of the registered location that you are updating. S3 Access Grants
     * assigns this ID when you register the location. S3 Access Grants assigns the ID
     * <code>default</code> to the default location <code>s3://</code> and assigns an
     * auto-generated ID to other locations that you register. </p> <p>The ID of the
     * registered location to which you are granting access. S3 Access Grants assigned
     * this ID when you registered the location. S3 Access Grants assigns the ID
     * <code>default</code> to the default location <code>s3://</code> and assigns an
     * auto-generated ID to other locations that you register. </p> <p>If you are
     * passing the <code>default</code> location, you cannot create an access grant for
     * the entire default location. You must also specify a bucket or a bucket and
     * prefix in the <code>Subprefix</code> field. </p>
     */
    inline bool AccessGrantsLocationIdHasBeenSet() const { return m_accessGrantsLocationIdHasBeenSet; }

    /**
     * <p>The ID of the registered location that you are updating. S3 Access Grants
     * assigns this ID when you register the location. S3 Access Grants assigns the ID
     * <code>default</code> to the default location <code>s3://</code> and assigns an
     * auto-generated ID to other locations that you register. </p> <p>The ID of the
     * registered location to which you are granting access. S3 Access Grants assigned
     * this ID when you registered the location. S3 Access Grants assigns the ID
     * <code>default</code> to the default location <code>s3://</code> and assigns an
     * auto-generated ID to other locations that you register. </p> <p>If you are
     * passing the <code>default</code> location, you cannot create an access grant for
     * the entire default location. You must also specify a bucket or a bucket and
     * prefix in the <code>Subprefix</code> field. </p>
     */
    inline void SetAccessGrantsLocationId(const Aws::String& value) { m_accessGrantsLocationIdHasBeenSet = true; m_accessGrantsLocationId = value; }

    /**
     * <p>The ID of the registered location that you are updating. S3 Access Grants
     * assigns this ID when you register the location. S3 Access Grants assigns the ID
     * <code>default</code> to the default location <code>s3://</code> and assigns an
     * auto-generated ID to other locations that you register. </p> <p>The ID of the
     * registered location to which you are granting access. S3 Access Grants assigned
     * this ID when you registered the location. S3 Access Grants assigns the ID
     * <code>default</code> to the default location <code>s3://</code> and assigns an
     * auto-generated ID to other locations that you register. </p> <p>If you are
     * passing the <code>default</code> location, you cannot create an access grant for
     * the entire default location. You must also specify a bucket or a bucket and
     * prefix in the <code>Subprefix</code> field. </p>
     */
    inline void SetAccessGrantsLocationId(Aws::String&& value) { m_accessGrantsLocationIdHasBeenSet = true; m_accessGrantsLocationId = std::move(value); }

    /**
     * <p>The ID of the registered location that you are updating. S3 Access Grants
     * assigns this ID when you register the location. S3 Access Grants assigns the ID
     * <code>default</code> to the default location <code>s3://</code> and assigns an
     * auto-generated ID to other locations that you register. </p> <p>The ID of the
     * registered location to which you are granting access. S3 Access Grants assigned
     * this ID when you registered the location. S3 Access Grants assigns the ID
     * <code>default</code> to the default location <code>s3://</code> and assigns an
     * auto-generated ID to other locations that you register. </p> <p>If you are
     * passing the <code>default</code> location, you cannot create an access grant for
     * the entire default location. You must also specify a bucket or a bucket and
     * prefix in the <code>Subprefix</code> field. </p>
     */
    inline void SetAccessGrantsLocationId(const char* value) { m_accessGrantsLocationIdHasBeenSet = true; m_accessGrantsLocationId.assign(value); }

    /**
     * <p>The ID of the registered location that you are updating. S3 Access Grants
     * assigns this ID when you register the location. S3 Access Grants assigns the ID
     * <code>default</code> to the default location <code>s3://</code> and assigns an
     * auto-generated ID to other locations that you register. </p> <p>The ID of the
     * registered location to which you are granting access. S3 Access Grants assigned
     * this ID when you registered the location. S3 Access Grants assigns the ID
     * <code>default</code> to the default location <code>s3://</code> and assigns an
     * auto-generated ID to other locations that you register. </p> <p>If you are
     * passing the <code>default</code> location, you cannot create an access grant for
     * the entire default location. You must also specify a bucket or a bucket and
     * prefix in the <code>Subprefix</code> field. </p>
     */
    inline UpdateAccessGrantsLocationRequest& WithAccessGrantsLocationId(const Aws::String& value) { SetAccessGrantsLocationId(value); return *this;}

    /**
     * <p>The ID of the registered location that you are updating. S3 Access Grants
     * assigns this ID when you register the location. S3 Access Grants assigns the ID
     * <code>default</code> to the default location <code>s3://</code> and assigns an
     * auto-generated ID to other locations that you register. </p> <p>The ID of the
     * registered location to which you are granting access. S3 Access Grants assigned
     * this ID when you registered the location. S3 Access Grants assigns the ID
     * <code>default</code> to the default location <code>s3://</code> and assigns an
     * auto-generated ID to other locations that you register. </p> <p>If you are
     * passing the <code>default</code> location, you cannot create an access grant for
     * the entire default location. You must also specify a bucket or a bucket and
     * prefix in the <code>Subprefix</code> field. </p>
     */
    inline UpdateAccessGrantsLocationRequest& WithAccessGrantsLocationId(Aws::String&& value) { SetAccessGrantsLocationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the registered location that you are updating. S3 Access Grants
     * assigns this ID when you register the location. S3 Access Grants assigns the ID
     * <code>default</code> to the default location <code>s3://</code> and assigns an
     * auto-generated ID to other locations that you register. </p> <p>The ID of the
     * registered location to which you are granting access. S3 Access Grants assigned
     * this ID when you registered the location. S3 Access Grants assigns the ID
     * <code>default</code> to the default location <code>s3://</code> and assigns an
     * auto-generated ID to other locations that you register. </p> <p>If you are
     * passing the <code>default</code> location, you cannot create an access grant for
     * the entire default location. You must also specify a bucket or a bucket and
     * prefix in the <code>Subprefix</code> field. </p>
     */
    inline UpdateAccessGrantsLocationRequest& WithAccessGrantsLocationId(const char* value) { SetAccessGrantsLocationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the registered location.
     * S3 Access Grants assumes this role to manage access to the registered location.
     * </p>
     */
    inline const Aws::String& GetIAMRoleArn() const{ return m_iAMRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the registered location.
     * S3 Access Grants assumes this role to manage access to the registered location.
     * </p>
     */
    inline bool IAMRoleArnHasBeenSet() const { return m_iAMRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the registered location.
     * S3 Access Grants assumes this role to manage access to the registered location.
     * </p>
     */
    inline void SetIAMRoleArn(const Aws::String& value) { m_iAMRoleArnHasBeenSet = true; m_iAMRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the registered location.
     * S3 Access Grants assumes this role to manage access to the registered location.
     * </p>
     */
    inline void SetIAMRoleArn(Aws::String&& value) { m_iAMRoleArnHasBeenSet = true; m_iAMRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the registered location.
     * S3 Access Grants assumes this role to manage access to the registered location.
     * </p>
     */
    inline void SetIAMRoleArn(const char* value) { m_iAMRoleArnHasBeenSet = true; m_iAMRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the registered location.
     * S3 Access Grants assumes this role to manage access to the registered location.
     * </p>
     */
    inline UpdateAccessGrantsLocationRequest& WithIAMRoleArn(const Aws::String& value) { SetIAMRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the registered location.
     * S3 Access Grants assumes this role to manage access to the registered location.
     * </p>
     */
    inline UpdateAccessGrantsLocationRequest& WithIAMRoleArn(Aws::String&& value) { SetIAMRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the registered location.
     * S3 Access Grants assumes this role to manage access to the registered location.
     * </p>
     */
    inline UpdateAccessGrantsLocationRequest& WithIAMRoleArn(const char* value) { SetIAMRoleArn(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_accessGrantsLocationId;
    bool m_accessGrantsLocationIdHasBeenSet = false;

    Aws::String m_iAMRoleArn;
    bool m_iAMRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

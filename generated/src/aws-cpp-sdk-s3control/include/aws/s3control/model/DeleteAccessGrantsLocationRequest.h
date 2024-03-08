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
  class DeleteAccessGrantsLocationRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API DeleteAccessGrantsLocationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAccessGrantsLocation"; }

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
    inline DeleteAccessGrantsLocationRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline DeleteAccessGrantsLocationRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline DeleteAccessGrantsLocationRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The ID of the registered location that you are deregistering from your S3
     * Access Grants instance. S3 Access Grants assigned this ID when you registered
     * the location. S3 Access Grants assigns the ID <code>default</code> to the
     * default location <code>s3://</code> and assigns an auto-generated ID to other
     * locations that you register. </p>
     */
    inline const Aws::String& GetAccessGrantsLocationId() const{ return m_accessGrantsLocationId; }

    /**
     * <p>The ID of the registered location that you are deregistering from your S3
     * Access Grants instance. S3 Access Grants assigned this ID when you registered
     * the location. S3 Access Grants assigns the ID <code>default</code> to the
     * default location <code>s3://</code> and assigns an auto-generated ID to other
     * locations that you register. </p>
     */
    inline bool AccessGrantsLocationIdHasBeenSet() const { return m_accessGrantsLocationIdHasBeenSet; }

    /**
     * <p>The ID of the registered location that you are deregistering from your S3
     * Access Grants instance. S3 Access Grants assigned this ID when you registered
     * the location. S3 Access Grants assigns the ID <code>default</code> to the
     * default location <code>s3://</code> and assigns an auto-generated ID to other
     * locations that you register. </p>
     */
    inline void SetAccessGrantsLocationId(const Aws::String& value) { m_accessGrantsLocationIdHasBeenSet = true; m_accessGrantsLocationId = value; }

    /**
     * <p>The ID of the registered location that you are deregistering from your S3
     * Access Grants instance. S3 Access Grants assigned this ID when you registered
     * the location. S3 Access Grants assigns the ID <code>default</code> to the
     * default location <code>s3://</code> and assigns an auto-generated ID to other
     * locations that you register. </p>
     */
    inline void SetAccessGrantsLocationId(Aws::String&& value) { m_accessGrantsLocationIdHasBeenSet = true; m_accessGrantsLocationId = std::move(value); }

    /**
     * <p>The ID of the registered location that you are deregistering from your S3
     * Access Grants instance. S3 Access Grants assigned this ID when you registered
     * the location. S3 Access Grants assigns the ID <code>default</code> to the
     * default location <code>s3://</code> and assigns an auto-generated ID to other
     * locations that you register. </p>
     */
    inline void SetAccessGrantsLocationId(const char* value) { m_accessGrantsLocationIdHasBeenSet = true; m_accessGrantsLocationId.assign(value); }

    /**
     * <p>The ID of the registered location that you are deregistering from your S3
     * Access Grants instance. S3 Access Grants assigned this ID when you registered
     * the location. S3 Access Grants assigns the ID <code>default</code> to the
     * default location <code>s3://</code> and assigns an auto-generated ID to other
     * locations that you register. </p>
     */
    inline DeleteAccessGrantsLocationRequest& WithAccessGrantsLocationId(const Aws::String& value) { SetAccessGrantsLocationId(value); return *this;}

    /**
     * <p>The ID of the registered location that you are deregistering from your S3
     * Access Grants instance. S3 Access Grants assigned this ID when you registered
     * the location. S3 Access Grants assigns the ID <code>default</code> to the
     * default location <code>s3://</code> and assigns an auto-generated ID to other
     * locations that you register. </p>
     */
    inline DeleteAccessGrantsLocationRequest& WithAccessGrantsLocationId(Aws::String&& value) { SetAccessGrantsLocationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the registered location that you are deregistering from your S3
     * Access Grants instance. S3 Access Grants assigned this ID when you registered
     * the location. S3 Access Grants assigns the ID <code>default</code> to the
     * default location <code>s3://</code> and assigns an auto-generated ID to other
     * locations that you register. </p>
     */
    inline DeleteAccessGrantsLocationRequest& WithAccessGrantsLocationId(const char* value) { SetAccessGrantsLocationId(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_accessGrantsLocationId;
    bool m_accessGrantsLocationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

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
  class ListTagsForResourceRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API ListTagsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p> The Amazon Web Services account ID of the resource owner. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p> The Amazon Web Services account ID of the resource owner. </p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p> The Amazon Web Services account ID of the resource owner. </p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p> The Amazon Web Services account ID of the resource owner. </p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p> The Amazon Web Services account ID of the resource owner. </p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p> The Amazon Web Services account ID of the resource owner. </p>
     */
    inline ListTagsForResourceRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p> The Amazon Web Services account ID of the resource owner. </p>
     */
    inline ListTagsForResourceRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p> The Amazon Web Services account ID of the resource owner. </p>
     */
    inline ListTagsForResourceRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the S3 resource that you want to list the
     * tags for. The tagged resource can be an S3 Storage Lens group or S3 Access
     * Grants instance, registered location, or grant. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the S3 resource that you want to list the
     * tags for. The tagged resource can be an S3 Storage Lens group or S3 Access
     * Grants instance, registered location, or grant. </p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the S3 resource that you want to list the
     * tags for. The tagged resource can be an S3 Storage Lens group or S3 Access
     * Grants instance, registered location, or grant. </p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the S3 resource that you want to list the
     * tags for. The tagged resource can be an S3 Storage Lens group or S3 Access
     * Grants instance, registered location, or grant. </p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the S3 resource that you want to list the
     * tags for. The tagged resource can be an S3 Storage Lens group or S3 Access
     * Grants instance, registered location, or grant. </p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the S3 resource that you want to list the
     * tags for. The tagged resource can be an S3 Storage Lens group or S3 Access
     * Grants instance, registered location, or grant. </p>
     */
    inline ListTagsForResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the S3 resource that you want to list the
     * tags for. The tagged resource can be an S3 Storage Lens group or S3 Access
     * Grants instance, registered location, or grant. </p>
     */
    inline ListTagsForResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the S3 resource that you want to list the
     * tags for. The tagged resource can be an S3 Storage Lens group or S3 Access
     * Grants instance, registered location, or grant. </p>
     */
    inline ListTagsForResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

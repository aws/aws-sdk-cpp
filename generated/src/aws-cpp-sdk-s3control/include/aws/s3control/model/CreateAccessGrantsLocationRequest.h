/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/Tag.h>
#include <utility>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class CreateAccessGrantsLocationRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API CreateAccessGrantsLocationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAccessGrantsLocation"; }

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
    inline CreateAccessGrantsLocationRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline CreateAccessGrantsLocationRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that is making this request.</p>
     */
    inline CreateAccessGrantsLocationRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The S3 path to the location that you are registering. The location scope can
     * be the default S3 location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. A prefix in S3 is a string of
     * characters at the beginning of an object key name used to organize the objects
     * that you store in your S3 buckets. For example, object key names that start with
     * the <code>engineering/</code> prefix or object key names that start with the
     * <code>marketing/campaigns/</code> prefix.</p>
     */
    inline const Aws::String& GetLocationScope() const{ return m_locationScope; }

    /**
     * <p>The S3 path to the location that you are registering. The location scope can
     * be the default S3 location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. A prefix in S3 is a string of
     * characters at the beginning of an object key name used to organize the objects
     * that you store in your S3 buckets. For example, object key names that start with
     * the <code>engineering/</code> prefix or object key names that start with the
     * <code>marketing/campaigns/</code> prefix.</p>
     */
    inline bool LocationScopeHasBeenSet() const { return m_locationScopeHasBeenSet; }

    /**
     * <p>The S3 path to the location that you are registering. The location scope can
     * be the default S3 location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. A prefix in S3 is a string of
     * characters at the beginning of an object key name used to organize the objects
     * that you store in your S3 buckets. For example, object key names that start with
     * the <code>engineering/</code> prefix or object key names that start with the
     * <code>marketing/campaigns/</code> prefix.</p>
     */
    inline void SetLocationScope(const Aws::String& value) { m_locationScopeHasBeenSet = true; m_locationScope = value; }

    /**
     * <p>The S3 path to the location that you are registering. The location scope can
     * be the default S3 location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. A prefix in S3 is a string of
     * characters at the beginning of an object key name used to organize the objects
     * that you store in your S3 buckets. For example, object key names that start with
     * the <code>engineering/</code> prefix or object key names that start with the
     * <code>marketing/campaigns/</code> prefix.</p>
     */
    inline void SetLocationScope(Aws::String&& value) { m_locationScopeHasBeenSet = true; m_locationScope = std::move(value); }

    /**
     * <p>The S3 path to the location that you are registering. The location scope can
     * be the default S3 location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. A prefix in S3 is a string of
     * characters at the beginning of an object key name used to organize the objects
     * that you store in your S3 buckets. For example, object key names that start with
     * the <code>engineering/</code> prefix or object key names that start with the
     * <code>marketing/campaigns/</code> prefix.</p>
     */
    inline void SetLocationScope(const char* value) { m_locationScopeHasBeenSet = true; m_locationScope.assign(value); }

    /**
     * <p>The S3 path to the location that you are registering. The location scope can
     * be the default S3 location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. A prefix in S3 is a string of
     * characters at the beginning of an object key name used to organize the objects
     * that you store in your S3 buckets. For example, object key names that start with
     * the <code>engineering/</code> prefix or object key names that start with the
     * <code>marketing/campaigns/</code> prefix.</p>
     */
    inline CreateAccessGrantsLocationRequest& WithLocationScope(const Aws::String& value) { SetLocationScope(value); return *this;}

    /**
     * <p>The S3 path to the location that you are registering. The location scope can
     * be the default S3 location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. A prefix in S3 is a string of
     * characters at the beginning of an object key name used to organize the objects
     * that you store in your S3 buckets. For example, object key names that start with
     * the <code>engineering/</code> prefix or object key names that start with the
     * <code>marketing/campaigns/</code> prefix.</p>
     */
    inline CreateAccessGrantsLocationRequest& WithLocationScope(Aws::String&& value) { SetLocationScope(std::move(value)); return *this;}

    /**
     * <p>The S3 path to the location that you are registering. The location scope can
     * be the default S3 location <code>s3://</code>, the S3 path to a bucket
     * <code>s3://&lt;bucket&gt;</code>, or the S3 path to a bucket and prefix
     * <code>s3://&lt;bucket&gt;/&lt;prefix&gt;</code>. A prefix in S3 is a string of
     * characters at the beginning of an object key name used to organize the objects
     * that you store in your S3 buckets. For example, object key names that start with
     * the <code>engineering/</code> prefix or object key names that start with the
     * <code>marketing/campaigns/</code> prefix.</p>
     */
    inline CreateAccessGrantsLocationRequest& WithLocationScope(const char* value) { SetLocationScope(value); return *this;}


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
    inline CreateAccessGrantsLocationRequest& WithIAMRoleArn(const Aws::String& value) { SetIAMRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the registered location.
     * S3 Access Grants assumes this role to manage access to the registered location.
     * </p>
     */
    inline CreateAccessGrantsLocationRequest& WithIAMRoleArn(Aws::String&& value) { SetIAMRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role for the registered location.
     * S3 Access Grants assumes this role to manage access to the registered location.
     * </p>
     */
    inline CreateAccessGrantsLocationRequest& WithIAMRoleArn(const char* value) { SetIAMRoleArn(value); return *this;}


    /**
     * <p>The Amazon Web Services resource tags that you are adding to the S3 Access
     * Grants location. Each tag is a label consisting of a user-defined key and value.
     * Tags can help you manage, identify, organize, search for, and filter
     * resources.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The Amazon Web Services resource tags that you are adding to the S3 Access
     * Grants location. Each tag is a label consisting of a user-defined key and value.
     * Tags can help you manage, identify, organize, search for, and filter
     * resources.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The Amazon Web Services resource tags that you are adding to the S3 Access
     * Grants location. Each tag is a label consisting of a user-defined key and value.
     * Tags can help you manage, identify, organize, search for, and filter
     * resources.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The Amazon Web Services resource tags that you are adding to the S3 Access
     * Grants location. Each tag is a label consisting of a user-defined key and value.
     * Tags can help you manage, identify, organize, search for, and filter
     * resources.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The Amazon Web Services resource tags that you are adding to the S3 Access
     * Grants location. Each tag is a label consisting of a user-defined key and value.
     * Tags can help you manage, identify, organize, search for, and filter
     * resources.</p>
     */
    inline CreateAccessGrantsLocationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The Amazon Web Services resource tags that you are adding to the S3 Access
     * Grants location. Each tag is a label consisting of a user-defined key and value.
     * Tags can help you manage, identify, organize, search for, and filter
     * resources.</p>
     */
    inline CreateAccessGrantsLocationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services resource tags that you are adding to the S3 Access
     * Grants location. Each tag is a label consisting of a user-defined key and value.
     * Tags can help you manage, identify, organize, search for, and filter
     * resources.</p>
     */
    inline CreateAccessGrantsLocationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The Amazon Web Services resource tags that you are adding to the S3 Access
     * Grants location. Each tag is a label consisting of a user-defined key and value.
     * Tags can help you manage, identify, organize, search for, and filter
     * resources.</p>
     */
    inline CreateAccessGrantsLocationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_locationScope;
    bool m_locationScopeHasBeenSet = false;

    Aws::String m_iAMRoleArn;
    bool m_iAMRoleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

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
  class TagResourceRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p> The Amazon Web Services account ID that created the S3 resource that you're
     * trying to add tags to or the requester's account ID. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p> The Amazon Web Services account ID that created the S3 resource that you're
     * trying to add tags to or the requester's account ID. </p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p> The Amazon Web Services account ID that created the S3 resource that you're
     * trying to add tags to or the requester's account ID. </p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p> The Amazon Web Services account ID that created the S3 resource that you're
     * trying to add tags to or the requester's account ID. </p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p> The Amazon Web Services account ID that created the S3 resource that you're
     * trying to add tags to or the requester's account ID. </p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p> The Amazon Web Services account ID that created the S3 resource that you're
     * trying to add tags to or the requester's account ID. </p>
     */
    inline TagResourceRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p> The Amazon Web Services account ID that created the S3 resource that you're
     * trying to add tags to or the requester's account ID. </p>
     */
    inline TagResourceRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p> The Amazon Web Services account ID that created the S3 resource that you're
     * trying to add tags to or the requester's account ID. </p>
     */
    inline TagResourceRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the S3 resource that you're trying to add
     * tags to. The tagged resource can be an S3 Storage Lens group or S3 Access Grants
     * instance, registered location, or grant.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 resource that you're trying to add
     * tags to. The tagged resource can be an S3 Storage Lens group or S3 Access Grants
     * instance, registered location, or grant.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 resource that you're trying to add
     * tags to. The tagged resource can be an S3 Storage Lens group or S3 Access Grants
     * instance, registered location, or grant.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 resource that you're trying to add
     * tags to. The tagged resource can be an S3 Storage Lens group or S3 Access Grants
     * instance, registered location, or grant.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 resource that you're trying to add
     * tags to. The tagged resource can be an S3 Storage Lens group or S3 Access Grants
     * instance, registered location, or grant.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 resource that you're trying to add
     * tags to. The tagged resource can be an S3 Storage Lens group or S3 Access Grants
     * instance, registered location, or grant.</p>
     */
    inline TagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 resource that you're trying to add
     * tags to. The tagged resource can be an S3 Storage Lens group or S3 Access Grants
     * instance, registered location, or grant.</p>
     */
    inline TagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 resource that you're trying to add
     * tags to. The tagged resource can be an S3 Storage Lens group or S3 Access Grants
     * instance, registered location, or grant.</p>
     */
    inline TagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p> The Amazon Web Services resource tags that you want to add to the specified
     * S3 resource. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p> The Amazon Web Services resource tags that you want to add to the specified
     * S3 resource. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> The Amazon Web Services resource tags that you want to add to the specified
     * S3 resource. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> The Amazon Web Services resource tags that you want to add to the specified
     * S3 resource. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> The Amazon Web Services resource tags that you want to add to the specified
     * S3 resource. </p>
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p> The Amazon Web Services resource tags that you want to add to the specified
     * S3 resource. </p>
     */
    inline TagResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> The Amazon Web Services resource tags that you want to add to the specified
     * S3 resource. </p>
     */
    inline TagResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p> The Amazon Web Services resource tags that you want to add to the specified
     * S3 resource. </p>
     */
    inline TagResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

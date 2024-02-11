/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/RAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace RAM
{
namespace Model
{

  /**
   */
  class UntagResourceRequest : public RAMRequest
  {
  public:
    AWS_RAM_API UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_RAM_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the resource share that you want to remove tags from.
     * The tags are removed from the resource share, not the resources in the resource
     * share. You must specify either <code>resourceShareArn</code>, or
     * <code>resourceArn</code>, but not both.</p>
     */
    inline const Aws::String& GetResourceShareArn() const{ return m_resourceShareArn; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the resource share that you want to remove tags from.
     * The tags are removed from the resource share, not the resources in the resource
     * share. You must specify either <code>resourceShareArn</code>, or
     * <code>resourceArn</code>, but not both.</p>
     */
    inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the resource share that you want to remove tags from.
     * The tags are removed from the resource share, not the resources in the resource
     * share. You must specify either <code>resourceShareArn</code>, or
     * <code>resourceArn</code>, but not both.</p>
     */
    inline void SetResourceShareArn(const Aws::String& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = value; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the resource share that you want to remove tags from.
     * The tags are removed from the resource share, not the resources in the resource
     * share. You must specify either <code>resourceShareArn</code>, or
     * <code>resourceArn</code>, but not both.</p>
     */
    inline void SetResourceShareArn(Aws::String&& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = std::move(value); }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the resource share that you want to remove tags from.
     * The tags are removed from the resource share, not the resources in the resource
     * share. You must specify either <code>resourceShareArn</code>, or
     * <code>resourceArn</code>, but not both.</p>
     */
    inline void SetResourceShareArn(const char* value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn.assign(value); }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the resource share that you want to remove tags from.
     * The tags are removed from the resource share, not the resources in the resource
     * share. You must specify either <code>resourceShareArn</code>, or
     * <code>resourceArn</code>, but not both.</p>
     */
    inline UntagResourceRequest& WithResourceShareArn(const Aws::String& value) { SetResourceShareArn(value); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the resource share that you want to remove tags from.
     * The tags are removed from the resource share, not the resources in the resource
     * share. You must specify either <code>resourceShareArn</code>, or
     * <code>resourceArn</code>, but not both.</p>
     */
    inline UntagResourceRequest& WithResourceShareArn(Aws::String&& value) { SetResourceShareArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the resource share that you want to remove tags from.
     * The tags are removed from the resource share, not the resources in the resource
     * share. You must specify either <code>resourceShareArn</code>, or
     * <code>resourceArn</code>, but not both.</p>
     */
    inline UntagResourceRequest& WithResourceShareArn(const char* value) { SetResourceShareArn(value); return *this;}


    /**
     * <p>Specifies a list of one or more tag keys that you want to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>Specifies a list of one or more tag keys that you want to remove.</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>Specifies a list of one or more tag keys that you want to remove.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>Specifies a list of one or more tag keys that you want to remove.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>Specifies a list of one or more tag keys that you want to remove.</p>
     */
    inline UntagResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>Specifies a list of one or more tag keys that you want to remove.</p>
     */
    inline UntagResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>Specifies a list of one or more tag keys that you want to remove.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>Specifies a list of one or more tag keys that you want to remove.</p>
     */
    inline UntagResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies a list of one or more tag keys that you want to remove.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }


    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission that you want to remove tags
     * from. You must specify either <code>resourceArn</code>, or
     * <code>resourceShareArn</code>, but not both.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission that you want to remove tags
     * from. You must specify either <code>resourceArn</code>, or
     * <code>resourceShareArn</code>, but not both.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission that you want to remove tags
     * from. You must specify either <code>resourceArn</code>, or
     * <code>resourceShareArn</code>, but not both.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission that you want to remove tags
     * from. You must specify either <code>resourceArn</code>, or
     * <code>resourceShareArn</code>, but not both.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission that you want to remove tags
     * from. You must specify either <code>resourceArn</code>, or
     * <code>resourceShareArn</code>, but not both.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission that you want to remove tags
     * from. You must specify either <code>resourceArn</code>, or
     * <code>resourceShareArn</code>, but not both.</p>
     */
    inline UntagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission that you want to remove tags
     * from. You must specify either <code>resourceArn</code>, or
     * <code>resourceShareArn</code>, but not both.</p>
     */
    inline UntagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission that you want to remove tags
     * from. You must specify either <code>resourceArn</code>, or
     * <code>resourceShareArn</code>, but not both.</p>
     */
    inline UntagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_resourceShareArn;
    bool m_resourceShareArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws

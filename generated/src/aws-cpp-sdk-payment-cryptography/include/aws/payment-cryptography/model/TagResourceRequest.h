﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/PaymentCryptographyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/payment-cryptography/model/Tag.h>
#include <utility>

namespace Aws
{
namespace PaymentCryptography
{
namespace Model
{

  /**
   */
  class TagResourceRequest : public PaymentCryptographyRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::String SerializePayload() const override;

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>KeyARN</code> of the key whose tags are being updated.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The <code>KeyARN</code> of the key whose tags are being updated.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The <code>KeyARN</code> of the key whose tags are being updated.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The <code>KeyARN</code> of the key whose tags are being updated.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The <code>KeyARN</code> of the key whose tags are being updated.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The <code>KeyARN</code> of the key whose tags are being updated.</p>
     */
    inline TagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The <code>KeyARN</code> of the key whose tags are being updated.</p>
     */
    inline TagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The <code>KeyARN</code> of the key whose tags are being updated.</p>
     */
    inline TagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>One or more tags. Each tag consists of a tag key and a tag value. The tag
     * value can be an empty (null) string. You can't have more than one tag on an
     * Amazon Web Services Payment Cryptography key with the same tag key. If you
     * specify an existing tag key with a different tag value, Amazon Web Services
     * Payment Cryptography replaces the current tag value with the new one.</p>
     *  <p>Don't include personal, confidential or sensitive information in
     * this field. This field may be displayed in plaintext in CloudTrail logs and
     * other output.</p>  <p>To use this parameter, you must have
     * <a>TagResource</a> permission in an IAM policy.</p>  <p>Don't include
     * personal, confidential or sensitive information in this field. This field may be
     * displayed in plaintext in CloudTrail logs and other output.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more tags. Each tag consists of a tag key and a tag value. The tag
     * value can be an empty (null) string. You can't have more than one tag on an
     * Amazon Web Services Payment Cryptography key with the same tag key. If you
     * specify an existing tag key with a different tag value, Amazon Web Services
     * Payment Cryptography replaces the current tag value with the new one.</p>
     *  <p>Don't include personal, confidential or sensitive information in
     * this field. This field may be displayed in plaintext in CloudTrail logs and
     * other output.</p>  <p>To use this parameter, you must have
     * <a>TagResource</a> permission in an IAM policy.</p>  <p>Don't include
     * personal, confidential or sensitive information in this field. This field may be
     * displayed in plaintext in CloudTrail logs and other output.</p> 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more tags. Each tag consists of a tag key and a tag value. The tag
     * value can be an empty (null) string. You can't have more than one tag on an
     * Amazon Web Services Payment Cryptography key with the same tag key. If you
     * specify an existing tag key with a different tag value, Amazon Web Services
     * Payment Cryptography replaces the current tag value with the new one.</p>
     *  <p>Don't include personal, confidential or sensitive information in
     * this field. This field may be displayed in plaintext in CloudTrail logs and
     * other output.</p>  <p>To use this parameter, you must have
     * <a>TagResource</a> permission in an IAM policy.</p>  <p>Don't include
     * personal, confidential or sensitive information in this field. This field may be
     * displayed in plaintext in CloudTrail logs and other output.</p> 
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more tags. Each tag consists of a tag key and a tag value. The tag
     * value can be an empty (null) string. You can't have more than one tag on an
     * Amazon Web Services Payment Cryptography key with the same tag key. If you
     * specify an existing tag key with a different tag value, Amazon Web Services
     * Payment Cryptography replaces the current tag value with the new one.</p>
     *  <p>Don't include personal, confidential or sensitive information in
     * this field. This field may be displayed in plaintext in CloudTrail logs and
     * other output.</p>  <p>To use this parameter, you must have
     * <a>TagResource</a> permission in an IAM policy.</p>  <p>Don't include
     * personal, confidential or sensitive information in this field. This field may be
     * displayed in plaintext in CloudTrail logs and other output.</p> 
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more tags. Each tag consists of a tag key and a tag value. The tag
     * value can be an empty (null) string. You can't have more than one tag on an
     * Amazon Web Services Payment Cryptography key with the same tag key. If you
     * specify an existing tag key with a different tag value, Amazon Web Services
     * Payment Cryptography replaces the current tag value with the new one.</p>
     *  <p>Don't include personal, confidential or sensitive information in
     * this field. This field may be displayed in plaintext in CloudTrail logs and
     * other output.</p>  <p>To use this parameter, you must have
     * <a>TagResource</a> permission in an IAM policy.</p>  <p>Don't include
     * personal, confidential or sensitive information in this field. This field may be
     * displayed in plaintext in CloudTrail logs and other output.</p> 
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more tags. Each tag consists of a tag key and a tag value. The tag
     * value can be an empty (null) string. You can't have more than one tag on an
     * Amazon Web Services Payment Cryptography key with the same tag key. If you
     * specify an existing tag key with a different tag value, Amazon Web Services
     * Payment Cryptography replaces the current tag value with the new one.</p>
     *  <p>Don't include personal, confidential or sensitive information in
     * this field. This field may be displayed in plaintext in CloudTrail logs and
     * other output.</p>  <p>To use this parameter, you must have
     * <a>TagResource</a> permission in an IAM policy.</p>  <p>Don't include
     * personal, confidential or sensitive information in this field. This field may be
     * displayed in plaintext in CloudTrail logs and other output.</p> 
     */
    inline TagResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more tags. Each tag consists of a tag key and a tag value. The tag
     * value can be an empty (null) string. You can't have more than one tag on an
     * Amazon Web Services Payment Cryptography key with the same tag key. If you
     * specify an existing tag key with a different tag value, Amazon Web Services
     * Payment Cryptography replaces the current tag value with the new one.</p>
     *  <p>Don't include personal, confidential or sensitive information in
     * this field. This field may be displayed in plaintext in CloudTrail logs and
     * other output.</p>  <p>To use this parameter, you must have
     * <a>TagResource</a> permission in an IAM policy.</p>  <p>Don't include
     * personal, confidential or sensitive information in this field. This field may be
     * displayed in plaintext in CloudTrail logs and other output.</p> 
     */
    inline TagResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>One or more tags. Each tag consists of a tag key and a tag value. The tag
     * value can be an empty (null) string. You can't have more than one tag on an
     * Amazon Web Services Payment Cryptography key with the same tag key. If you
     * specify an existing tag key with a different tag value, Amazon Web Services
     * Payment Cryptography replaces the current tag value with the new one.</p>
     *  <p>Don't include personal, confidential or sensitive information in
     * this field. This field may be displayed in plaintext in CloudTrail logs and
     * other output.</p>  <p>To use this parameter, you must have
     * <a>TagResource</a> permission in an IAM policy.</p>  <p>Don't include
     * personal, confidential or sensitive information in this field. This field may be
     * displayed in plaintext in CloudTrail logs and other output.</p> 
     */
    inline TagResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws

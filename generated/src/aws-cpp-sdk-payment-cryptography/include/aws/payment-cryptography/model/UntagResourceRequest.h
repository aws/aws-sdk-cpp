/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/PaymentCryptographyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace PaymentCryptography
{
namespace Model
{

  /**
   */
  class UntagResourceRequest : public PaymentCryptographyRequest
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::String SerializePayload() const override;

    AWS_PAYMENTCRYPTOGRAPHY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>KeyARN</code> of the key whose tags are being removed.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The <code>KeyARN</code> of the key whose tags are being removed.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The <code>KeyARN</code> of the key whose tags are being removed.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The <code>KeyARN</code> of the key whose tags are being removed.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The <code>KeyARN</code> of the key whose tags are being removed.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The <code>KeyARN</code> of the key whose tags are being removed.</p>
     */
    inline UntagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The <code>KeyARN</code> of the key whose tags are being removed.</p>
     */
    inline UntagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The <code>KeyARN</code> of the key whose tags are being removed.</p>
     */
    inline UntagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>One or more tag keys. Don't include the tag values.</p> <p>If the Amazon Web
     * Services Payment Cryptography key doesn't have the specified tag key, Amazon Web
     * Services Payment Cryptography doesn't throw an exception or return a response.
     * To confirm that the operation succeeded, use the <a>ListTagsForResource</a>
     * operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>One or more tag keys. Don't include the tag values.</p> <p>If the Amazon Web
     * Services Payment Cryptography key doesn't have the specified tag key, Amazon Web
     * Services Payment Cryptography doesn't throw an exception or return a response.
     * To confirm that the operation succeeded, use the <a>ListTagsForResource</a>
     * operation.</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>One or more tag keys. Don't include the tag values.</p> <p>If the Amazon Web
     * Services Payment Cryptography key doesn't have the specified tag key, Amazon Web
     * Services Payment Cryptography doesn't throw an exception or return a response.
     * To confirm that the operation succeeded, use the <a>ListTagsForResource</a>
     * operation.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>One or more tag keys. Don't include the tag values.</p> <p>If the Amazon Web
     * Services Payment Cryptography key doesn't have the specified tag key, Amazon Web
     * Services Payment Cryptography doesn't throw an exception or return a response.
     * To confirm that the operation succeeded, use the <a>ListTagsForResource</a>
     * operation.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>One or more tag keys. Don't include the tag values.</p> <p>If the Amazon Web
     * Services Payment Cryptography key doesn't have the specified tag key, Amazon Web
     * Services Payment Cryptography doesn't throw an exception or return a response.
     * To confirm that the operation succeeded, use the <a>ListTagsForResource</a>
     * operation.</p>
     */
    inline UntagResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>One or more tag keys. Don't include the tag values.</p> <p>If the Amazon Web
     * Services Payment Cryptography key doesn't have the specified tag key, Amazon Web
     * Services Payment Cryptography doesn't throw an exception or return a response.
     * To confirm that the operation succeeded, use the <a>ListTagsForResource</a>
     * operation.</p>
     */
    inline UntagResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>One or more tag keys. Don't include the tag values.</p> <p>If the Amazon Web
     * Services Payment Cryptography key doesn't have the specified tag key, Amazon Web
     * Services Payment Cryptography doesn't throw an exception or return a response.
     * To confirm that the operation succeeded, use the <a>ListTagsForResource</a>
     * operation.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>One or more tag keys. Don't include the tag values.</p> <p>If the Amazon Web
     * Services Payment Cryptography key doesn't have the specified tag key, Amazon Web
     * Services Payment Cryptography doesn't throw an exception or return a response.
     * To confirm that the operation succeeded, use the <a>ListTagsForResource</a>
     * operation.</p>
     */
    inline UntagResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more tag keys. Don't include the tag values.</p> <p>If the Amazon Web
     * Services Payment Cryptography key doesn't have the specified tag key, Amazon Web
     * Services Payment Cryptography doesn't throw an exception or return a response.
     * To confirm that the operation succeeded, use the <a>ListTagsForResource</a>
     * operation.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecurityLake
{
namespace Model
{
  class CreateSubscriberResult
  {
  public:
    AWS_SECURITYLAKE_API CreateSubscriberResult();
    AWS_SECURITYLAKE_API CreateSubscriberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API CreateSubscriberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) which uniquely defines the AWS RAM resource
     * share. Before accepting the RAM resource share invitation, you can view details
     * related to the RAM resource share.</p>
     */
    inline const Aws::String& GetResourceShareArn() const{ return m_resourceShareArn; }

    /**
     * <p>The Amazon Resource Name (ARN) which uniquely defines the AWS RAM resource
     * share. Before accepting the RAM resource share invitation, you can view details
     * related to the RAM resource share.</p>
     */
    inline void SetResourceShareArn(const Aws::String& value) { m_resourceShareArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) which uniquely defines the AWS RAM resource
     * share. Before accepting the RAM resource share invitation, you can view details
     * related to the RAM resource share.</p>
     */
    inline void SetResourceShareArn(Aws::String&& value) { m_resourceShareArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) which uniquely defines the AWS RAM resource
     * share. Before accepting the RAM resource share invitation, you can view details
     * related to the RAM resource share.</p>
     */
    inline void SetResourceShareArn(const char* value) { m_resourceShareArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) which uniquely defines the AWS RAM resource
     * share. Before accepting the RAM resource share invitation, you can view details
     * related to the RAM resource share.</p>
     */
    inline CreateSubscriberResult& WithResourceShareArn(const Aws::String& value) { SetResourceShareArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) which uniquely defines the AWS RAM resource
     * share. Before accepting the RAM resource share invitation, you can view details
     * related to the RAM resource share.</p>
     */
    inline CreateSubscriberResult& WithResourceShareArn(Aws::String&& value) { SetResourceShareArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) which uniquely defines the AWS RAM resource
     * share. Before accepting the RAM resource share invitation, you can view details
     * related to the RAM resource share.</p>
     */
    inline CreateSubscriberResult& WithResourceShareArn(const char* value) { SetResourceShareArn(value); return *this;}


    /**
     * <p>The name of the resource share.</p>
     */
    inline const Aws::String& GetResourceShareName() const{ return m_resourceShareName; }

    /**
     * <p>The name of the resource share.</p>
     */
    inline void SetResourceShareName(const Aws::String& value) { m_resourceShareName = value; }

    /**
     * <p>The name of the resource share.</p>
     */
    inline void SetResourceShareName(Aws::String&& value) { m_resourceShareName = std::move(value); }

    /**
     * <p>The name of the resource share.</p>
     */
    inline void SetResourceShareName(const char* value) { m_resourceShareName.assign(value); }

    /**
     * <p>The name of the resource share.</p>
     */
    inline CreateSubscriberResult& WithResourceShareName(const Aws::String& value) { SetResourceShareName(value); return *this;}

    /**
     * <p>The name of the resource share.</p>
     */
    inline CreateSubscriberResult& WithResourceShareName(Aws::String&& value) { SetResourceShareName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource share.</p>
     */
    inline CreateSubscriberResult& WithResourceShareName(const char* value) { SetResourceShareName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline CreateSubscriberResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline CreateSubscriberResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) created by you to provide to the subscriber.
     * For more information about ARNs and how to use them in policies, see <a
     * href="https://docs.aws.amazon.com/security-lake/latest/userguide/subscriber-management.html">Amazon
     * Security Lake User Guide</a>.</p>
     */
    inline CreateSubscriberResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The ARN for the Amazon S3 bucket. </p>
     */
    inline const Aws::String& GetS3BucketArn() const{ return m_s3BucketArn; }

    /**
     * <p>The ARN for the Amazon S3 bucket. </p>
     */
    inline void SetS3BucketArn(const Aws::String& value) { m_s3BucketArn = value; }

    /**
     * <p>The ARN for the Amazon S3 bucket. </p>
     */
    inline void SetS3BucketArn(Aws::String&& value) { m_s3BucketArn = std::move(value); }

    /**
     * <p>The ARN for the Amazon S3 bucket. </p>
     */
    inline void SetS3BucketArn(const char* value) { m_s3BucketArn.assign(value); }

    /**
     * <p>The ARN for the Amazon S3 bucket. </p>
     */
    inline CreateSubscriberResult& WithS3BucketArn(const Aws::String& value) { SetS3BucketArn(value); return *this;}

    /**
     * <p>The ARN for the Amazon S3 bucket. </p>
     */
    inline CreateSubscriberResult& WithS3BucketArn(Aws::String&& value) { SetS3BucketArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the Amazon S3 bucket. </p>
     */
    inline CreateSubscriberResult& WithS3BucketArn(const char* value) { SetS3BucketArn(value); return *this;}


    /**
     * <p>The ARN for the Amazon Simple Notification Service.</p>
     */
    inline const Aws::String& GetSnsArn() const{ return m_snsArn; }

    /**
     * <p>The ARN for the Amazon Simple Notification Service.</p>
     */
    inline void SetSnsArn(const Aws::String& value) { m_snsArn = value; }

    /**
     * <p>The ARN for the Amazon Simple Notification Service.</p>
     */
    inline void SetSnsArn(Aws::String&& value) { m_snsArn = std::move(value); }

    /**
     * <p>The ARN for the Amazon Simple Notification Service.</p>
     */
    inline void SetSnsArn(const char* value) { m_snsArn.assign(value); }

    /**
     * <p>The ARN for the Amazon Simple Notification Service.</p>
     */
    inline CreateSubscriberResult& WithSnsArn(const Aws::String& value) { SetSnsArn(value); return *this;}

    /**
     * <p>The ARN for the Amazon Simple Notification Service.</p>
     */
    inline CreateSubscriberResult& WithSnsArn(Aws::String&& value) { SetSnsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the Amazon Simple Notification Service.</p>
     */
    inline CreateSubscriberResult& WithSnsArn(const char* value) { SetSnsArn(value); return *this;}


    /**
     * <p>The <code>subscriptionId</code> created by the <code>CreateSubscriber</code>
     * API call.</p>
     */
    inline const Aws::String& GetSubscriptionId() const{ return m_subscriptionId; }

    /**
     * <p>The <code>subscriptionId</code> created by the <code>CreateSubscriber</code>
     * API call.</p>
     */
    inline void SetSubscriptionId(const Aws::String& value) { m_subscriptionId = value; }

    /**
     * <p>The <code>subscriptionId</code> created by the <code>CreateSubscriber</code>
     * API call.</p>
     */
    inline void SetSubscriptionId(Aws::String&& value) { m_subscriptionId = std::move(value); }

    /**
     * <p>The <code>subscriptionId</code> created by the <code>CreateSubscriber</code>
     * API call.</p>
     */
    inline void SetSubscriptionId(const char* value) { m_subscriptionId.assign(value); }

    /**
     * <p>The <code>subscriptionId</code> created by the <code>CreateSubscriber</code>
     * API call.</p>
     */
    inline CreateSubscriberResult& WithSubscriptionId(const Aws::String& value) { SetSubscriptionId(value); return *this;}

    /**
     * <p>The <code>subscriptionId</code> created by the <code>CreateSubscriber</code>
     * API call.</p>
     */
    inline CreateSubscriberResult& WithSubscriptionId(Aws::String&& value) { SetSubscriptionId(std::move(value)); return *this;}

    /**
     * <p>The <code>subscriptionId</code> created by the <code>CreateSubscriber</code>
     * API call.</p>
     */
    inline CreateSubscriberResult& WithSubscriptionId(const char* value) { SetSubscriptionId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateSubscriberResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateSubscriberResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateSubscriberResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_resourceShareArn;

    Aws::String m_resourceShareName;

    Aws::String m_roleArn;

    Aws::String m_s3BucketArn;

    Aws::String m_snsArn;

    Aws::String m_subscriptionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws

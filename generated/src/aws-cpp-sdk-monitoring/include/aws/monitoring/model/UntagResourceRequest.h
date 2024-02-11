/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class UntagResourceRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ARN of the CloudWatch resource that you're removing tags from.</p> <p>The
     * ARN format of an alarm is
     * <code>arn:aws:cloudwatch:<i>Region</i>:<i>account-id</i>:alarm:<i>alarm-name</i>
     * </code> </p> <p>The ARN format of a Contributor Insights rule is
     * <code>arn:aws:cloudwatch:<i>Region</i>:<i>account-id</i>:insight-rule/<i>insight-rule-name</i>
     * </code> </p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_amazoncloudwatch.html#amazoncloudwatch-resources-for-iam-policies">
     * Resource Types Defined by Amazon CloudWatch</a> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The ARN of the CloudWatch resource that you're removing tags from.</p> <p>The
     * ARN format of an alarm is
     * <code>arn:aws:cloudwatch:<i>Region</i>:<i>account-id</i>:alarm:<i>alarm-name</i>
     * </code> </p> <p>The ARN format of a Contributor Insights rule is
     * <code>arn:aws:cloudwatch:<i>Region</i>:<i>account-id</i>:insight-rule/<i>insight-rule-name</i>
     * </code> </p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_amazoncloudwatch.html#amazoncloudwatch-resources-for-iam-policies">
     * Resource Types Defined by Amazon CloudWatch</a> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>The ARN of the CloudWatch resource that you're removing tags from.</p> <p>The
     * ARN format of an alarm is
     * <code>arn:aws:cloudwatch:<i>Region</i>:<i>account-id</i>:alarm:<i>alarm-name</i>
     * </code> </p> <p>The ARN format of a Contributor Insights rule is
     * <code>arn:aws:cloudwatch:<i>Region</i>:<i>account-id</i>:insight-rule/<i>insight-rule-name</i>
     * </code> </p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_amazoncloudwatch.html#amazoncloudwatch-resources-for-iam-policies">
     * Resource Types Defined by Amazon CloudWatch</a> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The ARN of the CloudWatch resource that you're removing tags from.</p> <p>The
     * ARN format of an alarm is
     * <code>arn:aws:cloudwatch:<i>Region</i>:<i>account-id</i>:alarm:<i>alarm-name</i>
     * </code> </p> <p>The ARN format of a Contributor Insights rule is
     * <code>arn:aws:cloudwatch:<i>Region</i>:<i>account-id</i>:insight-rule/<i>insight-rule-name</i>
     * </code> </p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_amazoncloudwatch.html#amazoncloudwatch-resources-for-iam-policies">
     * Resource Types Defined by Amazon CloudWatch</a> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>The ARN of the CloudWatch resource that you're removing tags from.</p> <p>The
     * ARN format of an alarm is
     * <code>arn:aws:cloudwatch:<i>Region</i>:<i>account-id</i>:alarm:<i>alarm-name</i>
     * </code> </p> <p>The ARN format of a Contributor Insights rule is
     * <code>arn:aws:cloudwatch:<i>Region</i>:<i>account-id</i>:insight-rule/<i>insight-rule-name</i>
     * </code> </p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_amazoncloudwatch.html#amazoncloudwatch-resources-for-iam-policies">
     * Resource Types Defined by Amazon CloudWatch</a> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The ARN of the CloudWatch resource that you're removing tags from.</p> <p>The
     * ARN format of an alarm is
     * <code>arn:aws:cloudwatch:<i>Region</i>:<i>account-id</i>:alarm:<i>alarm-name</i>
     * </code> </p> <p>The ARN format of a Contributor Insights rule is
     * <code>arn:aws:cloudwatch:<i>Region</i>:<i>account-id</i>:insight-rule/<i>insight-rule-name</i>
     * </code> </p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_amazoncloudwatch.html#amazoncloudwatch-resources-for-iam-policies">
     * Resource Types Defined by Amazon CloudWatch</a> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline UntagResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The ARN of the CloudWatch resource that you're removing tags from.</p> <p>The
     * ARN format of an alarm is
     * <code>arn:aws:cloudwatch:<i>Region</i>:<i>account-id</i>:alarm:<i>alarm-name</i>
     * </code> </p> <p>The ARN format of a Contributor Insights rule is
     * <code>arn:aws:cloudwatch:<i>Region</i>:<i>account-id</i>:insight-rule/<i>insight-rule-name</i>
     * </code> </p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_amazoncloudwatch.html#amazoncloudwatch-resources-for-iam-policies">
     * Resource Types Defined by Amazon CloudWatch</a> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline UntagResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the CloudWatch resource that you're removing tags from.</p> <p>The
     * ARN format of an alarm is
     * <code>arn:aws:cloudwatch:<i>Region</i>:<i>account-id</i>:alarm:<i>alarm-name</i>
     * </code> </p> <p>The ARN format of a Contributor Insights rule is
     * <code>arn:aws:cloudwatch:<i>Region</i>:<i>account-id</i>:insight-rule/<i>insight-rule-name</i>
     * </code> </p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_amazoncloudwatch.html#amazoncloudwatch-resources-for-iam-policies">
     * Resource Types Defined by Amazon CloudWatch</a> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline UntagResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>The list of tag keys to remove from the resource.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>The list of tag keys to remove from the resource.</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>The list of tag keys to remove from the resource.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>The list of tag keys to remove from the resource.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>The list of tag keys to remove from the resource.</p>
     */
    inline UntagResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>The list of tag keys to remove from the resource.</p>
     */
    inline UntagResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>The list of tag keys to remove from the resource.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>The list of tag keys to remove from the resource.</p>
     */
    inline UntagResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of tag keys to remove from the resource.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws

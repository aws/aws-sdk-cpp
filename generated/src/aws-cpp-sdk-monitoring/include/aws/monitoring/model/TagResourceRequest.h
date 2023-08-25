/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/Tag.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class TagResourceRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ARN of the CloudWatch resource that you're adding tags to.</p> <p>The ARN
     * format of an alarm is
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
     * <p>The ARN of the CloudWatch resource that you're adding tags to.</p> <p>The ARN
     * format of an alarm is
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
     * <p>The ARN of the CloudWatch resource that you're adding tags to.</p> <p>The ARN
     * format of an alarm is
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
     * <p>The ARN of the CloudWatch resource that you're adding tags to.</p> <p>The ARN
     * format of an alarm is
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
     * <p>The ARN of the CloudWatch resource that you're adding tags to.</p> <p>The ARN
     * format of an alarm is
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
     * <p>The ARN of the CloudWatch resource that you're adding tags to.</p> <p>The ARN
     * format of an alarm is
     * <code>arn:aws:cloudwatch:<i>Region</i>:<i>account-id</i>:alarm:<i>alarm-name</i>
     * </code> </p> <p>The ARN format of a Contributor Insights rule is
     * <code>arn:aws:cloudwatch:<i>Region</i>:<i>account-id</i>:insight-rule/<i>insight-rule-name</i>
     * </code> </p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_amazoncloudwatch.html#amazoncloudwatch-resources-for-iam-policies">
     * Resource Types Defined by Amazon CloudWatch</a> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline TagResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The ARN of the CloudWatch resource that you're adding tags to.</p> <p>The ARN
     * format of an alarm is
     * <code>arn:aws:cloudwatch:<i>Region</i>:<i>account-id</i>:alarm:<i>alarm-name</i>
     * </code> </p> <p>The ARN format of a Contributor Insights rule is
     * <code>arn:aws:cloudwatch:<i>Region</i>:<i>account-id</i>:insight-rule/<i>insight-rule-name</i>
     * </code> </p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_amazoncloudwatch.html#amazoncloudwatch-resources-for-iam-policies">
     * Resource Types Defined by Amazon CloudWatch</a> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline TagResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the CloudWatch resource that you're adding tags to.</p> <p>The ARN
     * format of an alarm is
     * <code>arn:aws:cloudwatch:<i>Region</i>:<i>account-id</i>:alarm:<i>alarm-name</i>
     * </code> </p> <p>The ARN format of a Contributor Insights rule is
     * <code>arn:aws:cloudwatch:<i>Region</i>:<i>account-id</i>:insight-rule/<i>insight-rule-name</i>
     * </code> </p> <p>For more information about ARN format, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_amazoncloudwatch.html#amazoncloudwatch-resources-for-iam-policies">
     * Resource Types Defined by Amazon CloudWatch</a> in the <i>Amazon Web Services
     * General Reference</i>.</p>
     */
    inline TagResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>The list of key-value pairs to associate with the alarm.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of key-value pairs to associate with the alarm.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of key-value pairs to associate with the alarm.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of key-value pairs to associate with the alarm.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of key-value pairs to associate with the alarm.</p>
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of key-value pairs to associate with the alarm.</p>
     */
    inline TagResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of key-value pairs to associate with the alarm.</p>
     */
    inline TagResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of key-value pairs to associate with the alarm.</p>
     */
    inline TagResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws

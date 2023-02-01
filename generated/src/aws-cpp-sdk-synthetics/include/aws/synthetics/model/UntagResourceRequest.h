/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/SyntheticsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Synthetics
{
namespace Model
{

  /**
   */
  class UntagResourceRequest : public SyntheticsRequest
  {
  public:
    AWS_SYNTHETICS_API UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_SYNTHETICS_API Aws::String SerializePayload() const override;

    AWS_SYNTHETICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ARN of the canary or group that you're removing tags from.</p> <p>The ARN
     * format of a canary is
     * <code>arn:aws:synthetics:<i>Region</i>:<i>account-id</i>:canary:<i>canary-name</i>
     * </code>.</p> <p>The ARN format of a group is
     * <code>arn:aws:synthetics:<i>Region</i>:<i>account-id</i>:group:<i>group-name</i>
     * </code> </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the canary or group that you're removing tags from.</p> <p>The ARN
     * format of a canary is
     * <code>arn:aws:synthetics:<i>Region</i>:<i>account-id</i>:canary:<i>canary-name</i>
     * </code>.</p> <p>The ARN format of a group is
     * <code>arn:aws:synthetics:<i>Region</i>:<i>account-id</i>:group:<i>group-name</i>
     * </code> </p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN of the canary or group that you're removing tags from.</p> <p>The ARN
     * format of a canary is
     * <code>arn:aws:synthetics:<i>Region</i>:<i>account-id</i>:canary:<i>canary-name</i>
     * </code>.</p> <p>The ARN format of a group is
     * <code>arn:aws:synthetics:<i>Region</i>:<i>account-id</i>:group:<i>group-name</i>
     * </code> </p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN of the canary or group that you're removing tags from.</p> <p>The ARN
     * format of a canary is
     * <code>arn:aws:synthetics:<i>Region</i>:<i>account-id</i>:canary:<i>canary-name</i>
     * </code>.</p> <p>The ARN format of a group is
     * <code>arn:aws:synthetics:<i>Region</i>:<i>account-id</i>:group:<i>group-name</i>
     * </code> </p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN of the canary or group that you're removing tags from.</p> <p>The ARN
     * format of a canary is
     * <code>arn:aws:synthetics:<i>Region</i>:<i>account-id</i>:canary:<i>canary-name</i>
     * </code>.</p> <p>The ARN format of a group is
     * <code>arn:aws:synthetics:<i>Region</i>:<i>account-id</i>:group:<i>group-name</i>
     * </code> </p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the canary or group that you're removing tags from.</p> <p>The ARN
     * format of a canary is
     * <code>arn:aws:synthetics:<i>Region</i>:<i>account-id</i>:canary:<i>canary-name</i>
     * </code>.</p> <p>The ARN format of a group is
     * <code>arn:aws:synthetics:<i>Region</i>:<i>account-id</i>:group:<i>group-name</i>
     * </code> </p>
     */
    inline UntagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the canary or group that you're removing tags from.</p> <p>The ARN
     * format of a canary is
     * <code>arn:aws:synthetics:<i>Region</i>:<i>account-id</i>:canary:<i>canary-name</i>
     * </code>.</p> <p>The ARN format of a group is
     * <code>arn:aws:synthetics:<i>Region</i>:<i>account-id</i>:group:<i>group-name</i>
     * </code> </p>
     */
    inline UntagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the canary or group that you're removing tags from.</p> <p>The ARN
     * format of a canary is
     * <code>arn:aws:synthetics:<i>Region</i>:<i>account-id</i>:canary:<i>canary-name</i>
     * </code>.</p> <p>The ARN format of a group is
     * <code>arn:aws:synthetics:<i>Region</i>:<i>account-id</i>:group:<i>group-name</i>
     * </code> </p>
     */
    inline UntagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


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

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws

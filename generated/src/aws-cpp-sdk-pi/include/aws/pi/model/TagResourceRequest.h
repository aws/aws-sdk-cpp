/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/PIRequest.h>
#include <aws/pi/model/ServiceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pi/model/Tag.h>
#include <utility>

namespace Aws
{
namespace PI
{
namespace Model
{

  /**
   */
  class TagResourceRequest : public PIRequest
  {
  public:
    AWS_PI_API TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    AWS_PI_API Aws::String SerializePayload() const override;

    AWS_PI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Web Services service for which Performance Insights returns
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline const ServiceType& GetServiceType() const{ return m_serviceType; }

    /**
     * <p>The Amazon Web Services service for which Performance Insights returns
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }

    /**
     * <p>The Amazon Web Services service for which Performance Insights returns
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline void SetServiceType(const ServiceType& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }

    /**
     * <p>The Amazon Web Services service for which Performance Insights returns
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline void SetServiceType(ServiceType&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }

    /**
     * <p>The Amazon Web Services service for which Performance Insights returns
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline TagResourceRequest& WithServiceType(const ServiceType& value) { SetServiceType(value); return *this;}

    /**
     * <p>The Amazon Web Services service for which Performance Insights returns
     * metrics. Valid value is <code>RDS</code>.</p>
     */
    inline TagResourceRequest& WithServiceType(ServiceType&& value) { SetServiceType(std::move(value)); return *this;}


    /**
     * <p>The Amazon RDS Performance Insights resource that the tags are added to. This
     * value is an Amazon Resource Name (ARN). For information about creating an ARN,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The Amazon RDS Performance Insights resource that the tags are added to. This
     * value is an Amazon Resource Name (ARN). For information about creating an ARN,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>The Amazon RDS Performance Insights resource that the tags are added to. This
     * value is an Amazon Resource Name (ARN). For information about creating an ARN,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The Amazon RDS Performance Insights resource that the tags are added to. This
     * value is an Amazon Resource Name (ARN). For information about creating an ARN,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>The Amazon RDS Performance Insights resource that the tags are added to. This
     * value is an Amazon Resource Name (ARN). For information about creating an ARN,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The Amazon RDS Performance Insights resource that the tags are added to. This
     * value is an Amazon Resource Name (ARN). For information about creating an ARN,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline TagResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The Amazon RDS Performance Insights resource that the tags are added to. This
     * value is an Amazon Resource Name (ARN). For information about creating an ARN,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline TagResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon RDS Performance Insights resource that the tags are added to. This
     * value is an Amazon Resource Name (ARN). For information about creating an ARN,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline TagResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>The metadata assigned to an Amazon RDS resource consisting of a key-value
     * pair.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The metadata assigned to an Amazon RDS resource consisting of a key-value
     * pair.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The metadata assigned to an Amazon RDS resource consisting of a key-value
     * pair.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The metadata assigned to an Amazon RDS resource consisting of a key-value
     * pair.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The metadata assigned to an Amazon RDS resource consisting of a key-value
     * pair.</p>
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The metadata assigned to an Amazon RDS resource consisting of a key-value
     * pair.</p>
     */
    inline TagResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The metadata assigned to an Amazon RDS resource consisting of a key-value
     * pair.</p>
     */
    inline TagResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The metadata assigned to an Amazon RDS resource consisting of a key-value
     * pair.</p>
     */
    inline TagResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    ServiceType m_serviceType;
    bool m_serviceTypeHasBeenSet = false;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws

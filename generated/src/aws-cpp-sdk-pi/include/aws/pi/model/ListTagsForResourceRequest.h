/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/PIRequest.h>
#include <aws/pi/model/ServiceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PI
{
namespace Model
{

  /**
   */
  class ListTagsForResourceRequest : public PIRequest
  {
  public:
    AWS_PI_API ListTagsForResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTagsForResource"; }

    AWS_PI_API Aws::String SerializePayload() const override;

    AWS_PI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>List the tags for the Amazon Web Services service for which Performance
     * Insights returns metrics. Valid value is <code>RDS</code>.</p>
     */
    inline const ServiceType& GetServiceType() const{ return m_serviceType; }

    /**
     * <p>List the tags for the Amazon Web Services service for which Performance
     * Insights returns metrics. Valid value is <code>RDS</code>.</p>
     */
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }

    /**
     * <p>List the tags for the Amazon Web Services service for which Performance
     * Insights returns metrics. Valid value is <code>RDS</code>.</p>
     */
    inline void SetServiceType(const ServiceType& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }

    /**
     * <p>List the tags for the Amazon Web Services service for which Performance
     * Insights returns metrics. Valid value is <code>RDS</code>.</p>
     */
    inline void SetServiceType(ServiceType&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }

    /**
     * <p>List the tags for the Amazon Web Services service for which Performance
     * Insights returns metrics. Valid value is <code>RDS</code>.</p>
     */
    inline ListTagsForResourceRequest& WithServiceType(const ServiceType& value) { SetServiceType(value); return *this;}

    /**
     * <p>List the tags for the Amazon Web Services service for which Performance
     * Insights returns metrics. Valid value is <code>RDS</code>.</p>
     */
    inline ListTagsForResourceRequest& WithServiceType(ServiceType&& value) { SetServiceType(std::move(value)); return *this;}


    /**
     * <p>Lists all the tags for the Amazon RDS Performance Insights resource. This
     * value is an Amazon Resource Name (ARN). For information about creating an ARN,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>Lists all the tags for the Amazon RDS Performance Insights resource. This
     * value is an Amazon Resource Name (ARN). For information about creating an ARN,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>Lists all the tags for the Amazon RDS Performance Insights resource. This
     * value is an Amazon Resource Name (ARN). For information about creating an ARN,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>Lists all the tags for the Amazon RDS Performance Insights resource. This
     * value is an Amazon Resource Name (ARN). For information about creating an ARN,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>Lists all the tags for the Amazon RDS Performance Insights resource. This
     * value is an Amazon Resource Name (ARN). For information about creating an ARN,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>Lists all the tags for the Amazon RDS Performance Insights resource. This
     * value is an Amazon Resource Name (ARN). For information about creating an ARN,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline ListTagsForResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>Lists all the tags for the Amazon RDS Performance Insights resource. This
     * value is an Amazon Resource Name (ARN). For information about creating an ARN,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline ListTagsForResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>Lists all the tags for the Amazon RDS Performance Insights resource. This
     * value is an Amazon Resource Name (ARN). For information about creating an ARN,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing an RDS Amazon Resource Name (ARN)</a>.</p>
     */
    inline ListTagsForResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}

  private:

    ServiceType m_serviceType;
    bool m_serviceTypeHasBeenSet = false;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws

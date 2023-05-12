/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class DescribeTopicRefreshRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API DescribeTopicRefreshRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTopicRefresh"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account that contains the topic whose
     * refresh you want to describe.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the topic whose
     * refresh you want to describe.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the topic whose
     * refresh you want to describe.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the topic whose
     * refresh you want to describe.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the topic whose
     * refresh you want to describe.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the topic whose
     * refresh you want to describe.</p>
     */
    inline DescribeTopicRefreshRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the topic whose
     * refresh you want to describe.</p>
     */
    inline DescribeTopicRefreshRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the topic whose
     * refresh you want to describe.</p>
     */
    inline DescribeTopicRefreshRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID of the topic that you want to describe. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTopicId() const{ return m_topicId; }

    /**
     * <p>The ID of the topic that you want to describe. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline bool TopicIdHasBeenSet() const { return m_topicIdHasBeenSet; }

    /**
     * <p>The ID of the topic that you want to describe. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline void SetTopicId(const Aws::String& value) { m_topicIdHasBeenSet = true; m_topicId = value; }

    /**
     * <p>The ID of the topic that you want to describe. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline void SetTopicId(Aws::String&& value) { m_topicIdHasBeenSet = true; m_topicId = std::move(value); }

    /**
     * <p>The ID of the topic that you want to describe. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline void SetTopicId(const char* value) { m_topicIdHasBeenSet = true; m_topicId.assign(value); }

    /**
     * <p>The ID of the topic that you want to describe. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline DescribeTopicRefreshRequest& WithTopicId(const Aws::String& value) { SetTopicId(value); return *this;}

    /**
     * <p>The ID of the topic that you want to describe. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline DescribeTopicRefreshRequest& WithTopicId(Aws::String&& value) { SetTopicId(std::move(value)); return *this;}

    /**
     * <p>The ID of the topic that you want to describe. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline DescribeTopicRefreshRequest& WithTopicId(const char* value) { SetTopicId(value); return *this;}


    /**
     * <p>The ID of the refresh, which is performed when the topic is created or
     * updated.</p>
     */
    inline const Aws::String& GetRefreshId() const{ return m_refreshId; }

    /**
     * <p>The ID of the refresh, which is performed when the topic is created or
     * updated.</p>
     */
    inline bool RefreshIdHasBeenSet() const { return m_refreshIdHasBeenSet; }

    /**
     * <p>The ID of the refresh, which is performed when the topic is created or
     * updated.</p>
     */
    inline void SetRefreshId(const Aws::String& value) { m_refreshIdHasBeenSet = true; m_refreshId = value; }

    /**
     * <p>The ID of the refresh, which is performed when the topic is created or
     * updated.</p>
     */
    inline void SetRefreshId(Aws::String&& value) { m_refreshIdHasBeenSet = true; m_refreshId = std::move(value); }

    /**
     * <p>The ID of the refresh, which is performed when the topic is created or
     * updated.</p>
     */
    inline void SetRefreshId(const char* value) { m_refreshIdHasBeenSet = true; m_refreshId.assign(value); }

    /**
     * <p>The ID of the refresh, which is performed when the topic is created or
     * updated.</p>
     */
    inline DescribeTopicRefreshRequest& WithRefreshId(const Aws::String& value) { SetRefreshId(value); return *this;}

    /**
     * <p>The ID of the refresh, which is performed when the topic is created or
     * updated.</p>
     */
    inline DescribeTopicRefreshRequest& WithRefreshId(Aws::String&& value) { SetRefreshId(std::move(value)); return *this;}

    /**
     * <p>The ID of the refresh, which is performed when the topic is created or
     * updated.</p>
     */
    inline DescribeTopicRefreshRequest& WithRefreshId(const char* value) { SetRefreshId(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_topicId;
    bool m_topicIdHasBeenSet = false;

    Aws::String m_refreshId;
    bool m_refreshIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

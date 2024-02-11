/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TopicRefreshSchedule.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateTopicRefreshScheduleRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateTopicRefreshScheduleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTopicRefreshSchedule"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account that contains the topic whose
     * refresh schedule you want to update.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the topic whose
     * refresh schedule you want to update.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the topic whose
     * refresh schedule you want to update.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the topic whose
     * refresh schedule you want to update.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the topic whose
     * refresh schedule you want to update.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the topic whose
     * refresh schedule you want to update.</p>
     */
    inline UpdateTopicRefreshScheduleRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the topic whose
     * refresh schedule you want to update.</p>
     */
    inline UpdateTopicRefreshScheduleRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the topic whose
     * refresh schedule you want to update.</p>
     */
    inline UpdateTopicRefreshScheduleRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTopicId() const{ return m_topicId; }

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline bool TopicIdHasBeenSet() const { return m_topicIdHasBeenSet; }

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline void SetTopicId(const Aws::String& value) { m_topicIdHasBeenSet = true; m_topicId = value; }

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline void SetTopicId(Aws::String&& value) { m_topicIdHasBeenSet = true; m_topicId = std::move(value); }

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline void SetTopicId(const char* value) { m_topicIdHasBeenSet = true; m_topicId.assign(value); }

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline UpdateTopicRefreshScheduleRequest& WithTopicId(const Aws::String& value) { SetTopicId(value); return *this;}

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline UpdateTopicRefreshScheduleRequest& WithTopicId(Aws::String&& value) { SetTopicId(std::move(value)); return *this;}

    /**
     * <p>The ID of the topic that you want to modify. This ID is unique per Amazon Web
     * Services Region for each Amazon Web Services account.</p>
     */
    inline UpdateTopicRefreshScheduleRequest& WithTopicId(const char* value) { SetTopicId(value); return *this;}


    /**
     * <p>The ID of the dataset.</p>
     */
    inline const Aws::String& GetDatasetId() const{ return m_datasetId; }

    /**
     * <p>The ID of the dataset.</p>
     */
    inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }

    /**
     * <p>The ID of the dataset.</p>
     */
    inline void SetDatasetId(const Aws::String& value) { m_datasetIdHasBeenSet = true; m_datasetId = value; }

    /**
     * <p>The ID of the dataset.</p>
     */
    inline void SetDatasetId(Aws::String&& value) { m_datasetIdHasBeenSet = true; m_datasetId = std::move(value); }

    /**
     * <p>The ID of the dataset.</p>
     */
    inline void SetDatasetId(const char* value) { m_datasetIdHasBeenSet = true; m_datasetId.assign(value); }

    /**
     * <p>The ID of the dataset.</p>
     */
    inline UpdateTopicRefreshScheduleRequest& WithDatasetId(const Aws::String& value) { SetDatasetId(value); return *this;}

    /**
     * <p>The ID of the dataset.</p>
     */
    inline UpdateTopicRefreshScheduleRequest& WithDatasetId(Aws::String&& value) { SetDatasetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the dataset.</p>
     */
    inline UpdateTopicRefreshScheduleRequest& WithDatasetId(const char* value) { SetDatasetId(value); return *this;}


    /**
     * <p>The definition of a refresh schedule.</p>
     */
    inline const TopicRefreshSchedule& GetRefreshSchedule() const{ return m_refreshSchedule; }

    /**
     * <p>The definition of a refresh schedule.</p>
     */
    inline bool RefreshScheduleHasBeenSet() const { return m_refreshScheduleHasBeenSet; }

    /**
     * <p>The definition of a refresh schedule.</p>
     */
    inline void SetRefreshSchedule(const TopicRefreshSchedule& value) { m_refreshScheduleHasBeenSet = true; m_refreshSchedule = value; }

    /**
     * <p>The definition of a refresh schedule.</p>
     */
    inline void SetRefreshSchedule(TopicRefreshSchedule&& value) { m_refreshScheduleHasBeenSet = true; m_refreshSchedule = std::move(value); }

    /**
     * <p>The definition of a refresh schedule.</p>
     */
    inline UpdateTopicRefreshScheduleRequest& WithRefreshSchedule(const TopicRefreshSchedule& value) { SetRefreshSchedule(value); return *this;}

    /**
     * <p>The definition of a refresh schedule.</p>
     */
    inline UpdateTopicRefreshScheduleRequest& WithRefreshSchedule(TopicRefreshSchedule&& value) { SetRefreshSchedule(std::move(value)); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_topicId;
    bool m_topicIdHasBeenSet = false;

    Aws::String m_datasetId;
    bool m_datasetIdHasBeenSet = false;

    TopicRefreshSchedule m_refreshSchedule;
    bool m_refreshScheduleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

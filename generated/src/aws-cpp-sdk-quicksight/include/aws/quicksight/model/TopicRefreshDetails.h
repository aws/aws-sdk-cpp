/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TopicRefreshStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The details about the refresh of a topic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicRefreshDetails">AWS
   * API Reference</a></p>
   */
  class TopicRefreshDetails
  {
  public:
    AWS_QUICKSIGHT_API TopicRefreshDetails();
    AWS_QUICKSIGHT_API TopicRefreshDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicRefreshDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the topic refresh.</p>
     */
    inline const Aws::String& GetRefreshArn() const{ return m_refreshArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic refresh.</p>
     */
    inline bool RefreshArnHasBeenSet() const { return m_refreshArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic refresh.</p>
     */
    inline void SetRefreshArn(const Aws::String& value) { m_refreshArnHasBeenSet = true; m_refreshArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic refresh.</p>
     */
    inline void SetRefreshArn(Aws::String&& value) { m_refreshArnHasBeenSet = true; m_refreshArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic refresh.</p>
     */
    inline void SetRefreshArn(const char* value) { m_refreshArnHasBeenSet = true; m_refreshArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic refresh.</p>
     */
    inline TopicRefreshDetails& WithRefreshArn(const Aws::String& value) { SetRefreshArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the topic refresh.</p>
     */
    inline TopicRefreshDetails& WithRefreshArn(Aws::String&& value) { SetRefreshArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the topic refresh.</p>
     */
    inline TopicRefreshDetails& WithRefreshArn(const char* value) { SetRefreshArn(value); return *this;}


    /**
     * <p>The ID of the refresh, which occurs as a result of topic creation or topic
     * update.</p>
     */
    inline const Aws::String& GetRefreshId() const{ return m_refreshId; }

    /**
     * <p>The ID of the refresh, which occurs as a result of topic creation or topic
     * update.</p>
     */
    inline bool RefreshIdHasBeenSet() const { return m_refreshIdHasBeenSet; }

    /**
     * <p>The ID of the refresh, which occurs as a result of topic creation or topic
     * update.</p>
     */
    inline void SetRefreshId(const Aws::String& value) { m_refreshIdHasBeenSet = true; m_refreshId = value; }

    /**
     * <p>The ID of the refresh, which occurs as a result of topic creation or topic
     * update.</p>
     */
    inline void SetRefreshId(Aws::String&& value) { m_refreshIdHasBeenSet = true; m_refreshId = std::move(value); }

    /**
     * <p>The ID of the refresh, which occurs as a result of topic creation or topic
     * update.</p>
     */
    inline void SetRefreshId(const char* value) { m_refreshIdHasBeenSet = true; m_refreshId.assign(value); }

    /**
     * <p>The ID of the refresh, which occurs as a result of topic creation or topic
     * update.</p>
     */
    inline TopicRefreshDetails& WithRefreshId(const Aws::String& value) { SetRefreshId(value); return *this;}

    /**
     * <p>The ID of the refresh, which occurs as a result of topic creation or topic
     * update.</p>
     */
    inline TopicRefreshDetails& WithRefreshId(Aws::String&& value) { SetRefreshId(std::move(value)); return *this;}

    /**
     * <p>The ID of the refresh, which occurs as a result of topic creation or topic
     * update.</p>
     */
    inline TopicRefreshDetails& WithRefreshId(const char* value) { SetRefreshId(value); return *this;}


    /**
     * <p>The status of the refresh job that indicates whether the job is still
     * running, completed successfully, or failed.</p>
     */
    inline const TopicRefreshStatus& GetRefreshStatus() const{ return m_refreshStatus; }

    /**
     * <p>The status of the refresh job that indicates whether the job is still
     * running, completed successfully, or failed.</p>
     */
    inline bool RefreshStatusHasBeenSet() const { return m_refreshStatusHasBeenSet; }

    /**
     * <p>The status of the refresh job that indicates whether the job is still
     * running, completed successfully, or failed.</p>
     */
    inline void SetRefreshStatus(const TopicRefreshStatus& value) { m_refreshStatusHasBeenSet = true; m_refreshStatus = value; }

    /**
     * <p>The status of the refresh job that indicates whether the job is still
     * running, completed successfully, or failed.</p>
     */
    inline void SetRefreshStatus(TopicRefreshStatus&& value) { m_refreshStatusHasBeenSet = true; m_refreshStatus = std::move(value); }

    /**
     * <p>The status of the refresh job that indicates whether the job is still
     * running, completed successfully, or failed.</p>
     */
    inline TopicRefreshDetails& WithRefreshStatus(const TopicRefreshStatus& value) { SetRefreshStatus(value); return *this;}

    /**
     * <p>The status of the refresh job that indicates whether the job is still
     * running, completed successfully, or failed.</p>
     */
    inline TopicRefreshDetails& WithRefreshStatus(TopicRefreshStatus&& value) { SetRefreshStatus(std::move(value)); return *this;}

  private:

    Aws::String m_refreshArn;
    bool m_refreshArnHasBeenSet = false;

    Aws::String m_refreshId;
    bool m_refreshIdHasBeenSet = false;

    TopicRefreshStatus m_refreshStatus;
    bool m_refreshStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

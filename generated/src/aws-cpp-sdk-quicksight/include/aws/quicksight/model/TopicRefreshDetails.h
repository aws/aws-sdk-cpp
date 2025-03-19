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
    AWS_QUICKSIGHT_API TopicRefreshDetails() = default;
    AWS_QUICKSIGHT_API TopicRefreshDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicRefreshDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the topic refresh.</p>
     */
    inline const Aws::String& GetRefreshArn() const { return m_refreshArn; }
    inline bool RefreshArnHasBeenSet() const { return m_refreshArnHasBeenSet; }
    template<typename RefreshArnT = Aws::String>
    void SetRefreshArn(RefreshArnT&& value) { m_refreshArnHasBeenSet = true; m_refreshArn = std::forward<RefreshArnT>(value); }
    template<typename RefreshArnT = Aws::String>
    TopicRefreshDetails& WithRefreshArn(RefreshArnT&& value) { SetRefreshArn(std::forward<RefreshArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the refresh, which occurs as a result of topic creation or topic
     * update.</p>
     */
    inline const Aws::String& GetRefreshId() const { return m_refreshId; }
    inline bool RefreshIdHasBeenSet() const { return m_refreshIdHasBeenSet; }
    template<typename RefreshIdT = Aws::String>
    void SetRefreshId(RefreshIdT&& value) { m_refreshIdHasBeenSet = true; m_refreshId = std::forward<RefreshIdT>(value); }
    template<typename RefreshIdT = Aws::String>
    TopicRefreshDetails& WithRefreshId(RefreshIdT&& value) { SetRefreshId(std::forward<RefreshIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the refresh job that indicates whether the job is still
     * running, completed successfully, or failed.</p>
     */
    inline TopicRefreshStatus GetRefreshStatus() const { return m_refreshStatus; }
    inline bool RefreshStatusHasBeenSet() const { return m_refreshStatusHasBeenSet; }
    inline void SetRefreshStatus(TopicRefreshStatus value) { m_refreshStatusHasBeenSet = true; m_refreshStatus = value; }
    inline TopicRefreshDetails& WithRefreshStatus(TopicRefreshStatus value) { SetRefreshStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_refreshArn;
    bool m_refreshArnHasBeenSet = false;

    Aws::String m_refreshId;
    bool m_refreshIdHasBeenSet = false;

    TopicRefreshStatus m_refreshStatus{TopicRefreshStatus::NOT_SET};
    bool m_refreshStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

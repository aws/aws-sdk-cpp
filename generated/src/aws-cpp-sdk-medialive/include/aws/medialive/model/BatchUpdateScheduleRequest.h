/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/BatchScheduleActionCreateRequest.h>
#include <aws/medialive/model/BatchScheduleActionDeleteRequest.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * List of actions to create and list of actions to delete.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchUpdateScheduleRequest">AWS
   * API Reference</a></p>
   */
  class BatchUpdateScheduleRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API BatchUpdateScheduleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateSchedule"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * Id of the channel whose schedule is being updated.
     */
    inline const Aws::String& GetChannelId() const { return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    template<typename ChannelIdT = Aws::String>
    void SetChannelId(ChannelIdT&& value) { m_channelIdHasBeenSet = true; m_channelId = std::forward<ChannelIdT>(value); }
    template<typename ChannelIdT = Aws::String>
    BatchUpdateScheduleRequest& WithChannelId(ChannelIdT&& value) { SetChannelId(std::forward<ChannelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Schedule actions to create in the schedule.
     */
    inline const BatchScheduleActionCreateRequest& GetCreates() const { return m_creates; }
    inline bool CreatesHasBeenSet() const { return m_createsHasBeenSet; }
    template<typename CreatesT = BatchScheduleActionCreateRequest>
    void SetCreates(CreatesT&& value) { m_createsHasBeenSet = true; m_creates = std::forward<CreatesT>(value); }
    template<typename CreatesT = BatchScheduleActionCreateRequest>
    BatchUpdateScheduleRequest& WithCreates(CreatesT&& value) { SetCreates(std::forward<CreatesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Schedule actions to delete from the schedule.
     */
    inline const BatchScheduleActionDeleteRequest& GetDeletes() const { return m_deletes; }
    inline bool DeletesHasBeenSet() const { return m_deletesHasBeenSet; }
    template<typename DeletesT = BatchScheduleActionDeleteRequest>
    void SetDeletes(DeletesT&& value) { m_deletesHasBeenSet = true; m_deletes = std::forward<DeletesT>(value); }
    template<typename DeletesT = BatchScheduleActionDeleteRequest>
    BatchUpdateScheduleRequest& WithDeletes(DeletesT&& value) { SetDeletes(std::forward<DeletesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;

    BatchScheduleActionCreateRequest m_creates;
    bool m_createsHasBeenSet = false;

    BatchScheduleActionDeleteRequest m_deletes;
    bool m_deletesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

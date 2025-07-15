/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/repostspace/model/ChannelStatus.h>
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
namespace repostspace
{
namespace Model
{

  /**
   * <p>A structure that contains some information about a channel in a private
   * re:Post.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/repostspace-2022-05-13/ChannelData">AWS
   * API Reference</a></p>
   */
  class ChannelData
  {
  public:
    AWS_REPOSTSPACE_API ChannelData() = default;
    AWS_REPOSTSPACE_API ChannelData(Aws::Utils::Json::JsonView jsonValue);
    AWS_REPOSTSPACE_API ChannelData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REPOSTSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline const Aws::String& GetSpaceId() const { return m_spaceId; }
    inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
    template<typename SpaceIdT = Aws::String>
    void SetSpaceId(SpaceIdT&& value) { m_spaceIdHasBeenSet = true; m_spaceId = std::forward<SpaceIdT>(value); }
    template<typename SpaceIdT = Aws::String>
    ChannelData& WithSpaceId(SpaceIdT&& value) { SetSpaceId(std::forward<SpaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the private re:Post channel.</p>
     */
    inline const Aws::String& GetChannelId() const { return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    template<typename ChannelIdT = Aws::String>
    void SetChannelId(ChannelIdT&& value) { m_channelIdHasBeenSet = true; m_channelId = std::forward<ChannelIdT>(value); }
    template<typename ChannelIdT = Aws::String>
    ChannelData& WithChannelId(ChannelIdT&& value) { SetChannelId(std::forward<ChannelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the channel. This must be unique per private re:Post.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    ChannelData& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the channel. This is used only to help you identify this
     * channel.</p>
     */
    inline const Aws::String& GetChannelDescription() const { return m_channelDescription; }
    inline bool ChannelDescriptionHasBeenSet() const { return m_channelDescriptionHasBeenSet; }
    template<typename ChannelDescriptionT = Aws::String>
    void SetChannelDescription(ChannelDescriptionT&& value) { m_channelDescriptionHasBeenSet = true; m_channelDescription = std::forward<ChannelDescriptionT>(value); }
    template<typename ChannelDescriptionT = Aws::String>
    ChannelData& WithChannelDescription(ChannelDescriptionT&& value) { SetChannelDescription(std::forward<ChannelDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the channel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDateTime() const { return m_createDateTime; }
    inline bool CreateDateTimeHasBeenSet() const { return m_createDateTimeHasBeenSet; }
    template<typename CreateDateTimeT = Aws::Utils::DateTime>
    void SetCreateDateTime(CreateDateTimeT&& value) { m_createDateTimeHasBeenSet = true; m_createDateTime = std::forward<CreateDateTimeT>(value); }
    template<typename CreateDateTimeT = Aws::Utils::DateTime>
    ChannelData& WithCreateDateTime(CreateDateTimeT&& value) { SetCreateDateTime(std::forward<CreateDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the channel was deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeleteDateTime() const { return m_deleteDateTime; }
    inline bool DeleteDateTimeHasBeenSet() const { return m_deleteDateTimeHasBeenSet; }
    template<typename DeleteDateTimeT = Aws::Utils::DateTime>
    void SetDeleteDateTime(DeleteDateTimeT&& value) { m_deleteDateTimeHasBeenSet = true; m_deleteDateTime = std::forward<DeleteDateTimeT>(value); }
    template<typename DeleteDateTimeT = Aws::Utils::DateTime>
    ChannelData& WithDeleteDateTime(DeleteDateTimeT&& value) { SetDeleteDateTime(std::forward<DeleteDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status pf the channel.</p>
     */
    inline ChannelStatus GetChannelStatus() const { return m_channelStatus; }
    inline bool ChannelStatusHasBeenSet() const { return m_channelStatusHasBeenSet; }
    inline void SetChannelStatus(ChannelStatus value) { m_channelStatusHasBeenSet = true; m_channelStatus = value; }
    inline ChannelData& WithChannelStatus(ChannelStatus value) { SetChannelStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of users that are part of the channel.</p>
     */
    inline int GetUserCount() const { return m_userCount; }
    inline bool UserCountHasBeenSet() const { return m_userCountHasBeenSet; }
    inline void SetUserCount(int value) { m_userCountHasBeenSet = true; m_userCount = value; }
    inline ChannelData& WithUserCount(int value) { SetUserCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of groups that are part of the channel.</p>
     */
    inline int GetGroupCount() const { return m_groupCount; }
    inline bool GroupCountHasBeenSet() const { return m_groupCountHasBeenSet; }
    inline void SetGroupCount(int value) { m_groupCountHasBeenSet = true; m_groupCount = value; }
    inline ChannelData& WithGroupCount(int value) { SetGroupCount(value); return *this;}
    ///@}
  private:

    Aws::String m_spaceId;
    bool m_spaceIdHasBeenSet = false;

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_channelDescription;
    bool m_channelDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createDateTime{};
    bool m_createDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_deleteDateTime{};
    bool m_deleteDateTimeHasBeenSet = false;

    ChannelStatus m_channelStatus{ChannelStatus::NOT_SET};
    bool m_channelStatusHasBeenSet = false;

    int m_userCount{0};
    bool m_userCountHasBeenSet = false;

    int m_groupCount{0};
    bool m_groupCountHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/repostspace/model/ChannelStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/repostspace/model/ChannelRole.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace repostspace
{
namespace Model
{
  class GetChannelResult
  {
  public:
    AWS_REPOSTSPACE_API GetChannelResult() = default;
    AWS_REPOSTSPACE_API GetChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REPOSTSPACE_API GetChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline const Aws::String& GetSpaceId() const { return m_spaceId; }
    template<typename SpaceIdT = Aws::String>
    void SetSpaceId(SpaceIdT&& value) { m_spaceIdHasBeenSet = true; m_spaceId = std::forward<SpaceIdT>(value); }
    template<typename SpaceIdT = Aws::String>
    GetChannelResult& WithSpaceId(SpaceIdT&& value) { SetSpaceId(std::forward<SpaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the private re:Post channel.</p>
     */
    inline const Aws::String& GetChannelId() const { return m_channelId; }
    template<typename ChannelIdT = Aws::String>
    void SetChannelId(ChannelIdT&& value) { m_channelIdHasBeenSet = true; m_channelId = std::forward<ChannelIdT>(value); }
    template<typename ChannelIdT = Aws::String>
    GetChannelResult& WithChannelId(ChannelIdT&& value) { SetChannelId(std::forward<ChannelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the channel. This must be unique per private re:Post.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    GetChannelResult& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the channel. This is used only to help you identify this
     * channel.</p>
     */
    inline const Aws::String& GetChannelDescription() const { return m_channelDescription; }
    template<typename ChannelDescriptionT = Aws::String>
    void SetChannelDescription(ChannelDescriptionT&& value) { m_channelDescriptionHasBeenSet = true; m_channelDescription = std::forward<ChannelDescriptionT>(value); }
    template<typename ChannelDescriptionT = Aws::String>
    GetChannelResult& WithChannelDescription(ChannelDescriptionT&& value) { SetChannelDescription(std::forward<ChannelDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the channel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateDateTime() const { return m_createDateTime; }
    template<typename CreateDateTimeT = Aws::Utils::DateTime>
    void SetCreateDateTime(CreateDateTimeT&& value) { m_createDateTimeHasBeenSet = true; m_createDateTime = std::forward<CreateDateTimeT>(value); }
    template<typename CreateDateTimeT = Aws::Utils::DateTime>
    GetChannelResult& WithCreateDateTime(CreateDateTimeT&& value) { SetCreateDateTime(std::forward<CreateDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the channel was deleted.</p>
     */
    inline const Aws::Utils::DateTime& GetDeleteDateTime() const { return m_deleteDateTime; }
    template<typename DeleteDateTimeT = Aws::Utils::DateTime>
    void SetDeleteDateTime(DeleteDateTimeT&& value) { m_deleteDateTimeHasBeenSet = true; m_deleteDateTime = std::forward<DeleteDateTimeT>(value); }
    template<typename DeleteDateTimeT = Aws::Utils::DateTime>
    GetChannelResult& WithDeleteDateTime(DeleteDateTimeT&& value) { SetDeleteDateTime(std::forward<DeleteDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The channel roles associated to the users and groups of the channel.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ChannelRole>>& GetChannelRoles() const { return m_channelRoles; }
    template<typename ChannelRolesT = Aws::Map<Aws::String, Aws::Vector<ChannelRole>>>
    void SetChannelRoles(ChannelRolesT&& value) { m_channelRolesHasBeenSet = true; m_channelRoles = std::forward<ChannelRolesT>(value); }
    template<typename ChannelRolesT = Aws::Map<Aws::String, Aws::Vector<ChannelRole>>>
    GetChannelResult& WithChannelRoles(ChannelRolesT&& value) { SetChannelRoles(std::forward<ChannelRolesT>(value)); return *this;}
    template<typename ChannelRolesKeyT = Aws::String, typename ChannelRolesValueT = Aws::Vector<ChannelRole>>
    GetChannelResult& AddChannelRoles(ChannelRolesKeyT&& key, ChannelRolesValueT&& value) {
      m_channelRolesHasBeenSet = true; m_channelRoles.emplace(std::forward<ChannelRolesKeyT>(key), std::forward<ChannelRolesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status pf the channel.</p>
     */
    inline ChannelStatus GetChannelStatus() const { return m_channelStatus; }
    inline void SetChannelStatus(ChannelStatus value) { m_channelStatusHasBeenSet = true; m_channelStatus = value; }
    inline GetChannelResult& WithChannelStatus(ChannelStatus value) { SetChannelStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetChannelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::Map<Aws::String, Aws::Vector<ChannelRole>> m_channelRoles;
    bool m_channelRolesHasBeenSet = false;

    ChannelStatus m_channelStatus{ChannelStatus::NOT_SET};
    bool m_channelStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws

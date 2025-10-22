/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/medialive/model/ClusterAlertState.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * An alert on a cluster<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ClusterAlert">AWS
   * API Reference</a></p>
   */
  class ClusterAlert
  {
  public:
    AWS_MEDIALIVE_API ClusterAlert() = default;
    AWS_MEDIALIVE_API ClusterAlert(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API ClusterAlert& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The type of the alert
     */
    inline const Aws::String& GetAlertType() const { return m_alertType; }
    inline bool AlertTypeHasBeenSet() const { return m_alertTypeHasBeenSet; }
    template<typename AlertTypeT = Aws::String>
    void SetAlertType(AlertTypeT&& value) { m_alertTypeHasBeenSet = true; m_alertType = std::forward<AlertTypeT>(value); }
    template<typename AlertTypeT = Aws::String>
    ClusterAlert& WithAlertType(AlertTypeT&& value) { SetAlertType(std::forward<AlertTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the channel this alert is associated with
     */
    inline const Aws::String& GetChannelId() const { return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    template<typename ChannelIdT = Aws::String>
    void SetChannelId(ChannelIdT&& value) { m_channelIdHasBeenSet = true; m_channelId = std::forward<ChannelIdT>(value); }
    template<typename ChannelIdT = Aws::String>
    ClusterAlert& WithChannelId(ChannelIdT&& value) { SetChannelId(std::forward<ChannelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The time when the alert was cleared
     */
    inline const Aws::Utils::DateTime& GetClearedTimestamp() const { return m_clearedTimestamp; }
    inline bool ClearedTimestampHasBeenSet() const { return m_clearedTimestampHasBeenSet; }
    template<typename ClearedTimestampT = Aws::Utils::DateTime>
    void SetClearedTimestamp(ClearedTimestampT&& value) { m_clearedTimestampHasBeenSet = true; m_clearedTimestamp = std::forward<ClearedTimestampT>(value); }
    template<typename ClearedTimestampT = Aws::Utils::DateTime>
    ClusterAlert& WithClearedTimestamp(ClearedTimestampT&& value) { SetClearedTimestamp(std::forward<ClearedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The further subtype of this alert
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ClusterAlert& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The user facing alert message which can have more context
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ClusterAlert& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the node this alert is associated with
     */
    inline const Aws::String& GetNodeId() const { return m_nodeId; }
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }
    template<typename NodeIdT = Aws::String>
    void SetNodeId(NodeIdT&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::forward<NodeIdT>(value); }
    template<typename NodeIdT = Aws::String>
    ClusterAlert& WithNodeId(NodeIdT&& value) { SetNodeId(std::forward<NodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The time when the alert was set
     */
    inline const Aws::Utils::DateTime& GetSetTimestamp() const { return m_setTimestamp; }
    inline bool SetTimestampHasBeenSet() const { return m_setTimestampHasBeenSet; }
    template<typename SetTimestampT = Aws::Utils::DateTime>
    void SetSetTimestamp(SetTimestampT&& value) { m_setTimestampHasBeenSet = true; m_setTimestamp = std::forward<SetTimestampT>(value); }
    template<typename SetTimestampT = Aws::Utils::DateTime>
    ClusterAlert& WithSetTimestamp(SetTimestampT&& value) { SetSetTimestamp(std::forward<SetTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The state of the alert
     */
    inline ClusterAlertState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ClusterAlertState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ClusterAlert& WithState(ClusterAlertState value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_alertType;
    bool m_alertTypeHasBeenSet = false;

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;

    Aws::Utils::DateTime m_clearedTimestamp{};
    bool m_clearedTimestampHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;

    Aws::Utils::DateTime m_setTimestamp{};
    bool m_setTimestampHasBeenSet = false;

    ClusterAlertState m_state{ClusterAlertState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

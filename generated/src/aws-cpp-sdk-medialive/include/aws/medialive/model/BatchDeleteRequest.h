/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to delete resources<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchDeleteRequest">AWS
   * API Reference</a></p>
   */
  class BatchDeleteRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API BatchDeleteRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDelete"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * List of channel IDs
     */
    inline const Aws::Vector<Aws::String>& GetChannelIds() const { return m_channelIds; }
    inline bool ChannelIdsHasBeenSet() const { return m_channelIdsHasBeenSet; }
    template<typename ChannelIdsT = Aws::Vector<Aws::String>>
    void SetChannelIds(ChannelIdsT&& value) { m_channelIdsHasBeenSet = true; m_channelIds = std::forward<ChannelIdsT>(value); }
    template<typename ChannelIdsT = Aws::Vector<Aws::String>>
    BatchDeleteRequest& WithChannelIds(ChannelIdsT&& value) { SetChannelIds(std::forward<ChannelIdsT>(value)); return *this;}
    template<typename ChannelIdsT = Aws::String>
    BatchDeleteRequest& AddChannelIds(ChannelIdsT&& value) { m_channelIdsHasBeenSet = true; m_channelIds.emplace_back(std::forward<ChannelIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * List of input IDs
     */
    inline const Aws::Vector<Aws::String>& GetInputIds() const { return m_inputIds; }
    inline bool InputIdsHasBeenSet() const { return m_inputIdsHasBeenSet; }
    template<typename InputIdsT = Aws::Vector<Aws::String>>
    void SetInputIds(InputIdsT&& value) { m_inputIdsHasBeenSet = true; m_inputIds = std::forward<InputIdsT>(value); }
    template<typename InputIdsT = Aws::Vector<Aws::String>>
    BatchDeleteRequest& WithInputIds(InputIdsT&& value) { SetInputIds(std::forward<InputIdsT>(value)); return *this;}
    template<typename InputIdsT = Aws::String>
    BatchDeleteRequest& AddInputIds(InputIdsT&& value) { m_inputIdsHasBeenSet = true; m_inputIds.emplace_back(std::forward<InputIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * List of input security group IDs
     */
    inline const Aws::Vector<Aws::String>& GetInputSecurityGroupIds() const { return m_inputSecurityGroupIds; }
    inline bool InputSecurityGroupIdsHasBeenSet() const { return m_inputSecurityGroupIdsHasBeenSet; }
    template<typename InputSecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetInputSecurityGroupIds(InputSecurityGroupIdsT&& value) { m_inputSecurityGroupIdsHasBeenSet = true; m_inputSecurityGroupIds = std::forward<InputSecurityGroupIdsT>(value); }
    template<typename InputSecurityGroupIdsT = Aws::Vector<Aws::String>>
    BatchDeleteRequest& WithInputSecurityGroupIds(InputSecurityGroupIdsT&& value) { SetInputSecurityGroupIds(std::forward<InputSecurityGroupIdsT>(value)); return *this;}
    template<typename InputSecurityGroupIdsT = Aws::String>
    BatchDeleteRequest& AddInputSecurityGroupIds(InputSecurityGroupIdsT&& value) { m_inputSecurityGroupIdsHasBeenSet = true; m_inputSecurityGroupIds.emplace_back(std::forward<InputSecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * List of multiplex IDs
     */
    inline const Aws::Vector<Aws::String>& GetMultiplexIds() const { return m_multiplexIds; }
    inline bool MultiplexIdsHasBeenSet() const { return m_multiplexIdsHasBeenSet; }
    template<typename MultiplexIdsT = Aws::Vector<Aws::String>>
    void SetMultiplexIds(MultiplexIdsT&& value) { m_multiplexIdsHasBeenSet = true; m_multiplexIds = std::forward<MultiplexIdsT>(value); }
    template<typename MultiplexIdsT = Aws::Vector<Aws::String>>
    BatchDeleteRequest& WithMultiplexIds(MultiplexIdsT&& value) { SetMultiplexIds(std::forward<MultiplexIdsT>(value)); return *this;}
    template<typename MultiplexIdsT = Aws::String>
    BatchDeleteRequest& AddMultiplexIds(MultiplexIdsT&& value) { m_multiplexIdsHasBeenSet = true; m_multiplexIds.emplace_back(std::forward<MultiplexIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_channelIds;
    bool m_channelIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputIds;
    bool m_inputIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputSecurityGroupIds;
    bool m_inputSecurityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_multiplexIds;
    bool m_multiplexIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

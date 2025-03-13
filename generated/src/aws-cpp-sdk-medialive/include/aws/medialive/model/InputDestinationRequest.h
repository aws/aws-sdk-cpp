/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/InputRequestDestinationRoute.h>
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
   * Endpoint settings for a PUSH type input.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputDestinationRequest">AWS
   * API Reference</a></p>
   */
  class InputDestinationRequest
  {
  public:
    AWS_MEDIALIVE_API InputDestinationRequest() = default;
    AWS_MEDIALIVE_API InputDestinationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputDestinationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A unique name for the location the RTMP stream is being pushed
to.
     */
    inline const Aws::String& GetStreamName() const { return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    template<typename StreamNameT = Aws::String>
    void SetStreamName(StreamNameT&& value) { m_streamNameHasBeenSet = true; m_streamName = std::forward<StreamNameT>(value); }
    template<typename StreamNameT = Aws::String>
    InputDestinationRequest& WithStreamName(StreamNameT&& value) { SetStreamName(std::forward<StreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * If the push input has an input location of ON-PREM, ID the ID of the attached
     * network.
     */
    inline const Aws::String& GetNetwork() const { return m_network; }
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }
    template<typename NetworkT = Aws::String>
    void SetNetwork(NetworkT&& value) { m_networkHasBeenSet = true; m_network = std::forward<NetworkT>(value); }
    template<typename NetworkT = Aws::String>
    InputDestinationRequest& WithNetwork(NetworkT&& value) { SetNetwork(std::forward<NetworkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * If the push input has an input location of ON-PREM it's a requirement to specify
     * what the route of the input
is going to be on the customer local network.
     */
    inline const Aws::Vector<InputRequestDestinationRoute>& GetNetworkRoutes() const { return m_networkRoutes; }
    inline bool NetworkRoutesHasBeenSet() const { return m_networkRoutesHasBeenSet; }
    template<typename NetworkRoutesT = Aws::Vector<InputRequestDestinationRoute>>
    void SetNetworkRoutes(NetworkRoutesT&& value) { m_networkRoutesHasBeenSet = true; m_networkRoutes = std::forward<NetworkRoutesT>(value); }
    template<typename NetworkRoutesT = Aws::Vector<InputRequestDestinationRoute>>
    InputDestinationRequest& WithNetworkRoutes(NetworkRoutesT&& value) { SetNetworkRoutes(std::forward<NetworkRoutesT>(value)); return *this;}
    template<typename NetworkRoutesT = InputRequestDestinationRoute>
    InputDestinationRequest& AddNetworkRoutes(NetworkRoutesT&& value) { m_networkRoutesHasBeenSet = true; m_networkRoutes.emplace_back(std::forward<NetworkRoutesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * If the push input has an input location of ON-PREM it's optional to specify what
     * the ip address
of the input is going to be on the customer local network.
     */
    inline const Aws::String& GetStaticIpAddress() const { return m_staticIpAddress; }
    inline bool StaticIpAddressHasBeenSet() const { return m_staticIpAddressHasBeenSet; }
    template<typename StaticIpAddressT = Aws::String>
    void SetStaticIpAddress(StaticIpAddressT&& value) { m_staticIpAddressHasBeenSet = true; m_staticIpAddress = std::forward<StaticIpAddressT>(value); }
    template<typename StaticIpAddressT = Aws::String>
    InputDestinationRequest& WithStaticIpAddress(StaticIpAddressT&& value) { SetStaticIpAddress(std::forward<StaticIpAddressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_streamName;
    bool m_streamNameHasBeenSet = false;

    Aws::String m_network;
    bool m_networkHasBeenSet = false;

    Aws::Vector<InputRequestDestinationRoute> m_networkRoutes;
    bool m_networkRoutesHasBeenSet = false;

    Aws::String m_staticIpAddress;
    bool m_staticIpAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

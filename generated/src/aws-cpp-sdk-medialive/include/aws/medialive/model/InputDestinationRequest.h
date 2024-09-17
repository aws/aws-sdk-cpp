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
    AWS_MEDIALIVE_API InputDestinationRequest();
    AWS_MEDIALIVE_API InputDestinationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputDestinationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A unique name for the location the RTMP stream is being pushed
to.
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }
    inline bool StreamNameHasBeenSet() const { return m_streamNameHasBeenSet; }
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = std::move(value); }
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }
    inline InputDestinationRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}
    inline InputDestinationRequest& WithStreamName(Aws::String&& value) { SetStreamName(std::move(value)); return *this;}
    inline InputDestinationRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * If the push input has an input location of ON-PREM, ID the ID of the attached
     * network.
     */
    inline const Aws::String& GetNetwork() const{ return m_network; }
    inline bool NetworkHasBeenSet() const { return m_networkHasBeenSet; }
    inline void SetNetwork(const Aws::String& value) { m_networkHasBeenSet = true; m_network = value; }
    inline void SetNetwork(Aws::String&& value) { m_networkHasBeenSet = true; m_network = std::move(value); }
    inline void SetNetwork(const char* value) { m_networkHasBeenSet = true; m_network.assign(value); }
    inline InputDestinationRequest& WithNetwork(const Aws::String& value) { SetNetwork(value); return *this;}
    inline InputDestinationRequest& WithNetwork(Aws::String&& value) { SetNetwork(std::move(value)); return *this;}
    inline InputDestinationRequest& WithNetwork(const char* value) { SetNetwork(value); return *this;}
    ///@}

    ///@{
    /**
     * If the push input has an input location of ON-PREM it's a requirement to specify
     * what the route of the input
is going to be on the customer local network.
     */
    inline const Aws::Vector<InputRequestDestinationRoute>& GetNetworkRoutes() const{ return m_networkRoutes; }
    inline bool NetworkRoutesHasBeenSet() const { return m_networkRoutesHasBeenSet; }
    inline void SetNetworkRoutes(const Aws::Vector<InputRequestDestinationRoute>& value) { m_networkRoutesHasBeenSet = true; m_networkRoutes = value; }
    inline void SetNetworkRoutes(Aws::Vector<InputRequestDestinationRoute>&& value) { m_networkRoutesHasBeenSet = true; m_networkRoutes = std::move(value); }
    inline InputDestinationRequest& WithNetworkRoutes(const Aws::Vector<InputRequestDestinationRoute>& value) { SetNetworkRoutes(value); return *this;}
    inline InputDestinationRequest& WithNetworkRoutes(Aws::Vector<InputRequestDestinationRoute>&& value) { SetNetworkRoutes(std::move(value)); return *this;}
    inline InputDestinationRequest& AddNetworkRoutes(const InputRequestDestinationRoute& value) { m_networkRoutesHasBeenSet = true; m_networkRoutes.push_back(value); return *this; }
    inline InputDestinationRequest& AddNetworkRoutes(InputRequestDestinationRoute&& value) { m_networkRoutesHasBeenSet = true; m_networkRoutes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * If the push input has an input location of ON-PREM it's optional to specify what
     * the ip address
of the input is going to be on the customer local network.
     */
    inline const Aws::String& GetStaticIpAddress() const{ return m_staticIpAddress; }
    inline bool StaticIpAddressHasBeenSet() const { return m_staticIpAddressHasBeenSet; }
    inline void SetStaticIpAddress(const Aws::String& value) { m_staticIpAddressHasBeenSet = true; m_staticIpAddress = value; }
    inline void SetStaticIpAddress(Aws::String&& value) { m_staticIpAddressHasBeenSet = true; m_staticIpAddress = std::move(value); }
    inline void SetStaticIpAddress(const char* value) { m_staticIpAddressHasBeenSet = true; m_staticIpAddress.assign(value); }
    inline InputDestinationRequest& WithStaticIpAddress(const Aws::String& value) { SetStaticIpAddress(value); return *this;}
    inline InputDestinationRequest& WithStaticIpAddress(Aws::String&& value) { SetStaticIpAddress(std::move(value)); return *this;}
    inline InputDestinationRequest& WithStaticIpAddress(const char* value) { SetStaticIpAddress(value); return *this;}
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

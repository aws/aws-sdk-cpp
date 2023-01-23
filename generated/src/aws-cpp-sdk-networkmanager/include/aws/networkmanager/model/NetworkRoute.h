/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/RouteState.h>
#include <aws/networkmanager/model/RouteType.h>
#include <aws/networkmanager/model/NetworkRouteDestination.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a network route.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/NetworkRoute">AWS
   * API Reference</a></p>
   */
  class NetworkRoute
  {
  public:
    AWS_NETWORKMANAGER_API NetworkRoute();
    AWS_NETWORKMANAGER_API NetworkRoute(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API NetworkRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the route, such as a CIDR block.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const{ return m_destinationCidrBlock; }

    /**
     * <p>A unique identifier for the route, such as a CIDR block.</p>
     */
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }

    /**
     * <p>A unique identifier for the route, such as a CIDR block.</p>
     */
    inline void SetDestinationCidrBlock(const Aws::String& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }

    /**
     * <p>A unique identifier for the route, such as a CIDR block.</p>
     */
    inline void SetDestinationCidrBlock(Aws::String&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::move(value); }

    /**
     * <p>A unique identifier for the route, such as a CIDR block.</p>
     */
    inline void SetDestinationCidrBlock(const char* value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock.assign(value); }

    /**
     * <p>A unique identifier for the route, such as a CIDR block.</p>
     */
    inline NetworkRoute& WithDestinationCidrBlock(const Aws::String& value) { SetDestinationCidrBlock(value); return *this;}

    /**
     * <p>A unique identifier for the route, such as a CIDR block.</p>
     */
    inline NetworkRoute& WithDestinationCidrBlock(Aws::String&& value) { SetDestinationCidrBlock(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the route, such as a CIDR block.</p>
     */
    inline NetworkRoute& WithDestinationCidrBlock(const char* value) { SetDestinationCidrBlock(value); return *this;}


    /**
     * <p>The destinations.</p>
     */
    inline const Aws::Vector<NetworkRouteDestination>& GetDestinations() const{ return m_destinations; }

    /**
     * <p>The destinations.</p>
     */
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    /**
     * <p>The destinations.</p>
     */
    inline void SetDestinations(const Aws::Vector<NetworkRouteDestination>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * <p>The destinations.</p>
     */
    inline void SetDestinations(Aws::Vector<NetworkRouteDestination>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * <p>The destinations.</p>
     */
    inline NetworkRoute& WithDestinations(const Aws::Vector<NetworkRouteDestination>& value) { SetDestinations(value); return *this;}

    /**
     * <p>The destinations.</p>
     */
    inline NetworkRoute& WithDestinations(Aws::Vector<NetworkRouteDestination>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * <p>The destinations.</p>
     */
    inline NetworkRoute& AddDestinations(const NetworkRouteDestination& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * <p>The destinations.</p>
     */
    inline NetworkRoute& AddDestinations(NetworkRouteDestination&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the prefix list.</p>
     */
    inline const Aws::String& GetPrefixListId() const{ return m_prefixListId; }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline bool PrefixListIdHasBeenSet() const { return m_prefixListIdHasBeenSet; }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline void SetPrefixListId(const Aws::String& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = value; }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline void SetPrefixListId(Aws::String&& value) { m_prefixListIdHasBeenSet = true; m_prefixListId = std::move(value); }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline void SetPrefixListId(const char* value) { m_prefixListIdHasBeenSet = true; m_prefixListId.assign(value); }

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline NetworkRoute& WithPrefixListId(const Aws::String& value) { SetPrefixListId(value); return *this;}

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline NetworkRoute& WithPrefixListId(Aws::String&& value) { SetPrefixListId(std::move(value)); return *this;}

    /**
     * <p>The ID of the prefix list.</p>
     */
    inline NetworkRoute& WithPrefixListId(const char* value) { SetPrefixListId(value); return *this;}


    /**
     * <p>The route state. The possible values are <code>active</code> and
     * <code>blackhole</code>.</p>
     */
    inline const RouteState& GetState() const{ return m_state; }

    /**
     * <p>The route state. The possible values are <code>active</code> and
     * <code>blackhole</code>.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The route state. The possible values are <code>active</code> and
     * <code>blackhole</code>.</p>
     */
    inline void SetState(const RouteState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The route state. The possible values are <code>active</code> and
     * <code>blackhole</code>.</p>
     */
    inline void SetState(RouteState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The route state. The possible values are <code>active</code> and
     * <code>blackhole</code>.</p>
     */
    inline NetworkRoute& WithState(const RouteState& value) { SetState(value); return *this;}

    /**
     * <p>The route state. The possible values are <code>active</code> and
     * <code>blackhole</code>.</p>
     */
    inline NetworkRoute& WithState(RouteState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The route type. The possible values are <code>propagated</code> and
     * <code>static</code>.</p>
     */
    inline const RouteType& GetType() const{ return m_type; }

    /**
     * <p>The route type. The possible values are <code>propagated</code> and
     * <code>static</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The route type. The possible values are <code>propagated</code> and
     * <code>static</code>.</p>
     */
    inline void SetType(const RouteType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The route type. The possible values are <code>propagated</code> and
     * <code>static</code>.</p>
     */
    inline void SetType(RouteType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The route type. The possible values are <code>propagated</code> and
     * <code>static</code>.</p>
     */
    inline NetworkRoute& WithType(const RouteType& value) { SetType(value); return *this;}

    /**
     * <p>The route type. The possible values are <code>propagated</code> and
     * <code>static</code>.</p>
     */
    inline NetworkRoute& WithType(RouteType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet = false;

    Aws::Vector<NetworkRouteDestination> m_destinations;
    bool m_destinationsHasBeenSet = false;

    Aws::String m_prefixListId;
    bool m_prefixListIdHasBeenSet = false;

    RouteState m_state;
    bool m_stateHasBeenSet = false;

    RouteType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws

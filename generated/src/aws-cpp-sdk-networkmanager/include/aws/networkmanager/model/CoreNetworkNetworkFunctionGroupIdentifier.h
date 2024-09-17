/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes a core network </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CoreNetworkNetworkFunctionGroupIdentifier">AWS
   * API Reference</a></p>
   */
  class CoreNetworkNetworkFunctionGroupIdentifier
  {
  public:
    AWS_NETWORKMANAGER_API CoreNetworkNetworkFunctionGroupIdentifier();
    AWS_NETWORKMANAGER_API CoreNetworkNetworkFunctionGroupIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CoreNetworkNetworkFunctionGroupIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the core network.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const{ return m_coreNetworkId; }
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }
    inline void SetCoreNetworkId(const Aws::String& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = value; }
    inline void SetCoreNetworkId(Aws::String&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::move(value); }
    inline void SetCoreNetworkId(const char* value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId.assign(value); }
    inline CoreNetworkNetworkFunctionGroupIdentifier& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}
    inline CoreNetworkNetworkFunctionGroupIdentifier& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}
    inline CoreNetworkNetworkFunctionGroupIdentifier& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network function group name.</p>
     */
    inline const Aws::String& GetNetworkFunctionGroupName() const{ return m_networkFunctionGroupName; }
    inline bool NetworkFunctionGroupNameHasBeenSet() const { return m_networkFunctionGroupNameHasBeenSet; }
    inline void SetNetworkFunctionGroupName(const Aws::String& value) { m_networkFunctionGroupNameHasBeenSet = true; m_networkFunctionGroupName = value; }
    inline void SetNetworkFunctionGroupName(Aws::String&& value) { m_networkFunctionGroupNameHasBeenSet = true; m_networkFunctionGroupName = std::move(value); }
    inline void SetNetworkFunctionGroupName(const char* value) { m_networkFunctionGroupNameHasBeenSet = true; m_networkFunctionGroupName.assign(value); }
    inline CoreNetworkNetworkFunctionGroupIdentifier& WithNetworkFunctionGroupName(const Aws::String& value) { SetNetworkFunctionGroupName(value); return *this;}
    inline CoreNetworkNetworkFunctionGroupIdentifier& WithNetworkFunctionGroupName(Aws::String&& value) { SetNetworkFunctionGroupName(std::move(value)); return *this;}
    inline CoreNetworkNetworkFunctionGroupIdentifier& WithNetworkFunctionGroupName(const char* value) { SetNetworkFunctionGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location for the core network edge.</p>
     */
    inline const Aws::String& GetEdgeLocation() const{ return m_edgeLocation; }
    inline bool EdgeLocationHasBeenSet() const { return m_edgeLocationHasBeenSet; }
    inline void SetEdgeLocation(const Aws::String& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = value; }
    inline void SetEdgeLocation(Aws::String&& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = std::move(value); }
    inline void SetEdgeLocation(const char* value) { m_edgeLocationHasBeenSet = true; m_edgeLocation.assign(value); }
    inline CoreNetworkNetworkFunctionGroupIdentifier& WithEdgeLocation(const Aws::String& value) { SetEdgeLocation(value); return *this;}
    inline CoreNetworkNetworkFunctionGroupIdentifier& WithEdgeLocation(Aws::String&& value) { SetEdgeLocation(std::move(value)); return *this;}
    inline CoreNetworkNetworkFunctionGroupIdentifier& WithEdgeLocation(const char* value) { SetEdgeLocation(value); return *this;}
    ///@}
  private:

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    Aws::String m_networkFunctionGroupName;
    bool m_networkFunctionGroupNameHasBeenSet = false;

    Aws::String m_edgeLocation;
    bool m_edgeLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws

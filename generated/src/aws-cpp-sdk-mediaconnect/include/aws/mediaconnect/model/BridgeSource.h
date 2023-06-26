/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/BridgeFlowSource.h>
#include <aws/mediaconnect/model/BridgeNetworkSource.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * The bridge's source.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/BridgeSource">AWS
   * API Reference</a></p>
   */
  class BridgeSource
  {
  public:
    AWS_MEDIACONNECT_API BridgeSource();
    AWS_MEDIACONNECT_API BridgeSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API BridgeSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const BridgeFlowSource& GetFlowSource() const{ return m_flowSource; }

    
    inline bool FlowSourceHasBeenSet() const { return m_flowSourceHasBeenSet; }

    
    inline void SetFlowSource(const BridgeFlowSource& value) { m_flowSourceHasBeenSet = true; m_flowSource = value; }

    
    inline void SetFlowSource(BridgeFlowSource&& value) { m_flowSourceHasBeenSet = true; m_flowSource = std::move(value); }

    
    inline BridgeSource& WithFlowSource(const BridgeFlowSource& value) { SetFlowSource(value); return *this;}

    
    inline BridgeSource& WithFlowSource(BridgeFlowSource&& value) { SetFlowSource(std::move(value)); return *this;}


    
    inline const BridgeNetworkSource& GetNetworkSource() const{ return m_networkSource; }

    
    inline bool NetworkSourceHasBeenSet() const { return m_networkSourceHasBeenSet; }

    
    inline void SetNetworkSource(const BridgeNetworkSource& value) { m_networkSourceHasBeenSet = true; m_networkSource = value; }

    
    inline void SetNetworkSource(BridgeNetworkSource&& value) { m_networkSourceHasBeenSet = true; m_networkSource = std::move(value); }

    
    inline BridgeSource& WithNetworkSource(const BridgeNetworkSource& value) { SetNetworkSource(value); return *this;}

    
    inline BridgeSource& WithNetworkSource(BridgeNetworkSource&& value) { SetNetworkSource(std::move(value)); return *this;}

  private:

    BridgeFlowSource m_flowSource;
    bool m_flowSourceHasBeenSet = false;

    BridgeNetworkSource m_networkSource;
    bool m_networkSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws

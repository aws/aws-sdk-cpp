/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/AddBridgeFlowSourceRequest.h>
#include <aws/mediaconnect/model/AddBridgeNetworkSourceRequest.h>
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
   * Add a source to an existing bridge.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddBridgeSourceRequest">AWS
   * API Reference</a></p>
   */
  class AddBridgeSourceRequest
  {
  public:
    AWS_MEDIACONNECT_API AddBridgeSourceRequest();
    AWS_MEDIACONNECT_API AddBridgeSourceRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API AddBridgeSourceRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AddBridgeFlowSourceRequest& GetFlowSource() const{ return m_flowSource; }

    
    inline bool FlowSourceHasBeenSet() const { return m_flowSourceHasBeenSet; }

    
    inline void SetFlowSource(const AddBridgeFlowSourceRequest& value) { m_flowSourceHasBeenSet = true; m_flowSource = value; }

    
    inline void SetFlowSource(AddBridgeFlowSourceRequest&& value) { m_flowSourceHasBeenSet = true; m_flowSource = std::move(value); }

    
    inline AddBridgeSourceRequest& WithFlowSource(const AddBridgeFlowSourceRequest& value) { SetFlowSource(value); return *this;}

    
    inline AddBridgeSourceRequest& WithFlowSource(AddBridgeFlowSourceRequest&& value) { SetFlowSource(std::move(value)); return *this;}


    
    inline const AddBridgeNetworkSourceRequest& GetNetworkSource() const{ return m_networkSource; }

    
    inline bool NetworkSourceHasBeenSet() const { return m_networkSourceHasBeenSet; }

    
    inline void SetNetworkSource(const AddBridgeNetworkSourceRequest& value) { m_networkSourceHasBeenSet = true; m_networkSource = value; }

    
    inline void SetNetworkSource(AddBridgeNetworkSourceRequest&& value) { m_networkSourceHasBeenSet = true; m_networkSource = std::move(value); }

    
    inline AddBridgeSourceRequest& WithNetworkSource(const AddBridgeNetworkSourceRequest& value) { SetNetworkSource(value); return *this;}

    
    inline AddBridgeSourceRequest& WithNetworkSource(AddBridgeNetworkSourceRequest&& value) { SetNetworkSource(std::move(value)); return *this;}

  private:

    AddBridgeFlowSourceRequest m_flowSource;
    bool m_flowSourceHasBeenSet = false;

    AddBridgeNetworkSourceRequest m_networkSource;
    bool m_networkSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws

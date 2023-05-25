/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/AddBridgeNetworkOutputRequest.h>
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
   * Add an output to a bridge.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddBridgeOutputRequest">AWS
   * API Reference</a></p>
   */
  class AddBridgeOutputRequest
  {
  public:
    AWS_MEDIACONNECT_API AddBridgeOutputRequest();
    AWS_MEDIACONNECT_API AddBridgeOutputRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API AddBridgeOutputRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AddBridgeNetworkOutputRequest& GetNetworkOutput() const{ return m_networkOutput; }

    
    inline bool NetworkOutputHasBeenSet() const { return m_networkOutputHasBeenSet; }

    
    inline void SetNetworkOutput(const AddBridgeNetworkOutputRequest& value) { m_networkOutputHasBeenSet = true; m_networkOutput = value; }

    
    inline void SetNetworkOutput(AddBridgeNetworkOutputRequest&& value) { m_networkOutputHasBeenSet = true; m_networkOutput = std::move(value); }

    
    inline AddBridgeOutputRequest& WithNetworkOutput(const AddBridgeNetworkOutputRequest& value) { SetNetworkOutput(value); return *this;}

    
    inline AddBridgeOutputRequest& WithNetworkOutput(AddBridgeNetworkOutputRequest&& value) { SetNetworkOutput(std::move(value)); return *this;}

  private:

    AddBridgeNetworkOutputRequest m_networkOutput;
    bool m_networkOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws

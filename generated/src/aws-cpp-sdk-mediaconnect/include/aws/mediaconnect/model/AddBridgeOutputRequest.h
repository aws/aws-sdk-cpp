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
    AWS_MEDIACONNECT_API AddBridgeOutputRequest() = default;
    AWS_MEDIACONNECT_API AddBridgeOutputRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API AddBridgeOutputRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const AddBridgeNetworkOutputRequest& GetNetworkOutput() const { return m_networkOutput; }
    inline bool NetworkOutputHasBeenSet() const { return m_networkOutputHasBeenSet; }
    template<typename NetworkOutputT = AddBridgeNetworkOutputRequest>
    void SetNetworkOutput(NetworkOutputT&& value) { m_networkOutputHasBeenSet = true; m_networkOutput = std::forward<NetworkOutputT>(value); }
    template<typename NetworkOutputT = AddBridgeNetworkOutputRequest>
    AddBridgeOutputRequest& WithNetworkOutput(NetworkOutputT&& value) { SetNetworkOutput(std::forward<NetworkOutputT>(value)); return *this;}
    ///@}
  private:

    AddBridgeNetworkOutputRequest m_networkOutput;
    bool m_networkOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws

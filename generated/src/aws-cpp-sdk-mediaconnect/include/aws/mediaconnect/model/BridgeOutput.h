/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/BridgeFlowOutput.h>
#include <aws/mediaconnect/model/BridgeNetworkOutput.h>
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
   * The output of the bridge.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/BridgeOutput">AWS
   * API Reference</a></p>
   */
  class BridgeOutput
  {
  public:
    AWS_MEDIACONNECT_API BridgeOutput();
    AWS_MEDIACONNECT_API BridgeOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API BridgeOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const BridgeFlowOutput& GetFlowOutput() const{ return m_flowOutput; }

    
    inline bool FlowOutputHasBeenSet() const { return m_flowOutputHasBeenSet; }

    
    inline void SetFlowOutput(const BridgeFlowOutput& value) { m_flowOutputHasBeenSet = true; m_flowOutput = value; }

    
    inline void SetFlowOutput(BridgeFlowOutput&& value) { m_flowOutputHasBeenSet = true; m_flowOutput = std::move(value); }

    
    inline BridgeOutput& WithFlowOutput(const BridgeFlowOutput& value) { SetFlowOutput(value); return *this;}

    
    inline BridgeOutput& WithFlowOutput(BridgeFlowOutput&& value) { SetFlowOutput(std::move(value)); return *this;}


    
    inline const BridgeNetworkOutput& GetNetworkOutput() const{ return m_networkOutput; }

    
    inline bool NetworkOutputHasBeenSet() const { return m_networkOutputHasBeenSet; }

    
    inline void SetNetworkOutput(const BridgeNetworkOutput& value) { m_networkOutputHasBeenSet = true; m_networkOutput = value; }

    
    inline void SetNetworkOutput(BridgeNetworkOutput&& value) { m_networkOutputHasBeenSet = true; m_networkOutput = std::move(value); }

    
    inline BridgeOutput& WithNetworkOutput(const BridgeNetworkOutput& value) { SetNetworkOutput(value); return *this;}

    
    inline BridgeOutput& WithNetworkOutput(BridgeNetworkOutput&& value) { SetNetworkOutput(std::move(value)); return *this;}

  private:

    BridgeFlowOutput m_flowOutput;
    bool m_flowOutputHasBeenSet = false;

    BridgeNetworkOutput m_networkOutput;
    bool m_networkOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws

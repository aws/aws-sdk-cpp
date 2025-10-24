﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/AddBridgeOutputRequest.h>

#include <utility>

namespace Aws {
namespace MediaConnect {
namespace Model {

/**
 */
class AddBridgeOutputsRequest : public MediaConnectRequest {
 public:
  AWS_MEDIACONNECT_API AddBridgeOutputsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AddBridgeOutputs"; }

  AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the bridge that you want to update.</p>
   */
  inline const Aws::String& GetBridgeArn() const { return m_bridgeArn; }
  inline bool BridgeArnHasBeenSet() const { return m_bridgeArnHasBeenSet; }
  template <typename BridgeArnT = Aws::String>
  void SetBridgeArn(BridgeArnT&& value) {
    m_bridgeArnHasBeenSet = true;
    m_bridgeArn = std::forward<BridgeArnT>(value);
  }
  template <typename BridgeArnT = Aws::String>
  AddBridgeOutputsRequest& WithBridgeArn(BridgeArnT&& value) {
    SetBridgeArn(std::forward<BridgeArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The outputs that you want to add to this bridge.</p>
   */
  inline const Aws::Vector<AddBridgeOutputRequest>& GetOutputs() const { return m_outputs; }
  inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
  template <typename OutputsT = Aws::Vector<AddBridgeOutputRequest>>
  void SetOutputs(OutputsT&& value) {
    m_outputsHasBeenSet = true;
    m_outputs = std::forward<OutputsT>(value);
  }
  template <typename OutputsT = Aws::Vector<AddBridgeOutputRequest>>
  AddBridgeOutputsRequest& WithOutputs(OutputsT&& value) {
    SetOutputs(std::forward<OutputsT>(value));
    return *this;
  }
  template <typename OutputsT = AddBridgeOutputRequest>
  AddBridgeOutputsRequest& AddOutputs(OutputsT&& value) {
    m_outputsHasBeenSet = true;
    m_outputs.emplace_back(std::forward<OutputsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bridgeArn;
  bool m_bridgeArnHasBeenSet = false;

  Aws::Vector<AddBridgeOutputRequest> m_outputs;
  bool m_outputsHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws

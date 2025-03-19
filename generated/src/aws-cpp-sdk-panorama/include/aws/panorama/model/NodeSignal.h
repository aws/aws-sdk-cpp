/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/NodeSignalValue.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>A signal to a camera node to start or stop processing video.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/NodeSignal">AWS
   * API Reference</a></p>
   */
  class NodeSignal
  {
  public:
    AWS_PANORAMA_API NodeSignal() = default;
    AWS_PANORAMA_API NodeSignal(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API NodeSignal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The camera node's name, from the application manifest.</p>
     */
    inline const Aws::String& GetNodeInstanceId() const { return m_nodeInstanceId; }
    inline bool NodeInstanceIdHasBeenSet() const { return m_nodeInstanceIdHasBeenSet; }
    template<typename NodeInstanceIdT = Aws::String>
    void SetNodeInstanceId(NodeInstanceIdT&& value) { m_nodeInstanceIdHasBeenSet = true; m_nodeInstanceId = std::forward<NodeInstanceIdT>(value); }
    template<typename NodeInstanceIdT = Aws::String>
    NodeSignal& WithNodeInstanceId(NodeInstanceIdT&& value) { SetNodeInstanceId(std::forward<NodeInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signal value.</p>
     */
    inline NodeSignalValue GetSignal() const { return m_signal; }
    inline bool SignalHasBeenSet() const { return m_signalHasBeenSet; }
    inline void SetSignal(NodeSignalValue value) { m_signalHasBeenSet = true; m_signal = value; }
    inline NodeSignal& WithSignal(NodeSignalValue value) { SetSignal(value); return *this;}
    ///@}
  private:

    Aws::String m_nodeInstanceId;
    bool m_nodeInstanceIdHasBeenSet = false;

    NodeSignalValue m_signal{NodeSignalValue::NOT_SET};
    bool m_signalHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws

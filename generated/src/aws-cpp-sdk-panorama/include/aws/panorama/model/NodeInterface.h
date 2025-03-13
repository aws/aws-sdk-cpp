/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/panorama/model/NodeInputPort.h>
#include <aws/panorama/model/NodeOutputPort.h>
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
   * <p>A node interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/NodeInterface">AWS
   * API Reference</a></p>
   */
  class NodeInterface
  {
  public:
    AWS_PANORAMA_API NodeInterface() = default;
    AWS_PANORAMA_API NodeInterface(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API NodeInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The node interface's inputs.</p>
     */
    inline const Aws::Vector<NodeInputPort>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<NodeInputPort>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<NodeInputPort>>
    NodeInterface& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = NodeInputPort>
    NodeInterface& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The node interface's outputs.</p>
     */
    inline const Aws::Vector<NodeOutputPort>& GetOutputs() const { return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    template<typename OutputsT = Aws::Vector<NodeOutputPort>>
    void SetOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs = std::forward<OutputsT>(value); }
    template<typename OutputsT = Aws::Vector<NodeOutputPort>>
    NodeInterface& WithOutputs(OutputsT&& value) { SetOutputs(std::forward<OutputsT>(value)); return *this;}
    template<typename OutputsT = NodeOutputPort>
    NodeInterface& AddOutputs(OutputsT&& value) { m_outputsHasBeenSet = true; m_outputs.emplace_back(std::forward<OutputsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<NodeInputPort> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::Vector<NodeOutputPort> m_outputs;
    bool m_outputsHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws

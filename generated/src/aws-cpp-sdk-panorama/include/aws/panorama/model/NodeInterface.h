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
    AWS_PANORAMA_API NodeInterface();
    AWS_PANORAMA_API NodeInterface(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API NodeInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The node interface's inputs.</p>
     */
    inline const Aws::Vector<NodeInputPort>& GetInputs() const{ return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    inline void SetInputs(const Aws::Vector<NodeInputPort>& value) { m_inputsHasBeenSet = true; m_inputs = value; }
    inline void SetInputs(Aws::Vector<NodeInputPort>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }
    inline NodeInterface& WithInputs(const Aws::Vector<NodeInputPort>& value) { SetInputs(value); return *this;}
    inline NodeInterface& WithInputs(Aws::Vector<NodeInputPort>&& value) { SetInputs(std::move(value)); return *this;}
    inline NodeInterface& AddInputs(const NodeInputPort& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    inline NodeInterface& AddInputs(NodeInputPort&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The node interface's outputs.</p>
     */
    inline const Aws::Vector<NodeOutputPort>& GetOutputs() const{ return m_outputs; }
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }
    inline void SetOutputs(const Aws::Vector<NodeOutputPort>& value) { m_outputsHasBeenSet = true; m_outputs = value; }
    inline void SetOutputs(Aws::Vector<NodeOutputPort>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }
    inline NodeInterface& WithOutputs(const Aws::Vector<NodeOutputPort>& value) { SetOutputs(value); return *this;}
    inline NodeInterface& WithOutputs(Aws::Vector<NodeOutputPort>&& value) { SetOutputs(std::move(value)); return *this;}
    inline NodeInterface& AddOutputs(const NodeOutputPort& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }
    inline NodeInterface& AddOutputs(NodeOutputPort&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }
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

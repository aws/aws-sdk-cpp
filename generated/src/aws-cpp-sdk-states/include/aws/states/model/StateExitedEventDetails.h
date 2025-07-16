/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/HistoryEventExecutionDataDetails.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/states/model/AssignedVariablesDetails.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about an exit from a state during an
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/StateExitedEventDetails">AWS
   * API Reference</a></p>
   */
  class StateExitedEventDetails
  {
  public:
    AWS_SFN_API StateExitedEventDetails() = default;
    AWS_SFN_API StateExitedEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API StateExitedEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the state.</p> <p>A name must <i>not</i> contain:</p> <ul> <li>
     * <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code> </p>
     * </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li> <p>special
     * characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li> <li>
     * <p>control characters (<code>U+0000-001F</code>, <code>U+007F-009F</code>,
     * <code>U+FFFE-FFFF</code>)</p> </li> <li> <p>surrogates
     * (<code>U+D800-DFFF</code>)</p> </li> <li> <p>invalid characters (<code>
     * U+10FFFF</code>)</p> </li> </ul> <p>To enable logging with CloudWatch Logs, the
     * name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StateExitedEventDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON output data of the state. Length constraints apply to the payload
     * size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline const Aws::String& GetOutput() const { return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    template<typename OutputT = Aws::String>
    void SetOutput(OutputT&& value) { m_outputHasBeenSet = true; m_output = std::forward<OutputT>(value); }
    template<typename OutputT = Aws::String>
    StateExitedEventDetails& WithOutput(OutputT&& value) { SetOutput(std::forward<OutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the output of an execution history event.</p>
     */
    inline const HistoryEventExecutionDataDetails& GetOutputDetails() const { return m_outputDetails; }
    inline bool OutputDetailsHasBeenSet() const { return m_outputDetailsHasBeenSet; }
    template<typename OutputDetailsT = HistoryEventExecutionDataDetails>
    void SetOutputDetails(OutputDetailsT&& value) { m_outputDetailsHasBeenSet = true; m_outputDetails = std::forward<OutputDetailsT>(value); }
    template<typename OutputDetailsT = HistoryEventExecutionDataDetails>
    StateExitedEventDetails& WithOutputDetails(OutputDetailsT&& value) { SetOutputDetails(std::forward<OutputDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Map of variable name and value as a serialized JSON representation.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAssignedVariables() const { return m_assignedVariables; }
    inline bool AssignedVariablesHasBeenSet() const { return m_assignedVariablesHasBeenSet; }
    template<typename AssignedVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetAssignedVariables(AssignedVariablesT&& value) { m_assignedVariablesHasBeenSet = true; m_assignedVariables = std::forward<AssignedVariablesT>(value); }
    template<typename AssignedVariablesT = Aws::Map<Aws::String, Aws::String>>
    StateExitedEventDetails& WithAssignedVariables(AssignedVariablesT&& value) { SetAssignedVariables(std::forward<AssignedVariablesT>(value)); return *this;}
    template<typename AssignedVariablesKeyT = Aws::String, typename AssignedVariablesValueT = Aws::String>
    StateExitedEventDetails& AddAssignedVariables(AssignedVariablesKeyT&& key, AssignedVariablesValueT&& value) {
      m_assignedVariablesHasBeenSet = true; m_assignedVariables.emplace(std::forward<AssignedVariablesKeyT>(key), std::forward<AssignedVariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Provides details about input or output in an execution history event.</p>
     */
    inline const AssignedVariablesDetails& GetAssignedVariablesDetails() const { return m_assignedVariablesDetails; }
    inline bool AssignedVariablesDetailsHasBeenSet() const { return m_assignedVariablesDetailsHasBeenSet; }
    template<typename AssignedVariablesDetailsT = AssignedVariablesDetails>
    void SetAssignedVariablesDetails(AssignedVariablesDetailsT&& value) { m_assignedVariablesDetailsHasBeenSet = true; m_assignedVariablesDetails = std::forward<AssignedVariablesDetailsT>(value); }
    template<typename AssignedVariablesDetailsT = AssignedVariablesDetails>
    StateExitedEventDetails& WithAssignedVariablesDetails(AssignedVariablesDetailsT&& value) { SetAssignedVariablesDetails(std::forward<AssignedVariablesDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_output;
    bool m_outputHasBeenSet = false;

    HistoryEventExecutionDataDetails m_outputDetails;
    bool m_outputDetailsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_assignedVariables;
    bool m_assignedVariablesHasBeenSet = false;

    AssignedVariablesDetails m_assignedVariablesDetails;
    bool m_assignedVariablesDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws

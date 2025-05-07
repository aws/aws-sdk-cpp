/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>Returns the dry run configurations set for a canary.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/DryRunConfigOutput">AWS
   * API Reference</a></p>
   */
  class DryRunConfigOutput
  {
  public:
    AWS_SYNTHETICS_API DryRunConfigOutput() = default;
    AWS_SYNTHETICS_API DryRunConfigOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API DryRunConfigOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DryRunId associated with an existing canary’s dry run. You can use this
     * DryRunId to retrieve information about the dry run.</p>
     */
    inline const Aws::String& GetDryRunId() const { return m_dryRunId; }
    inline bool DryRunIdHasBeenSet() const { return m_dryRunIdHasBeenSet; }
    template<typename DryRunIdT = Aws::String>
    void SetDryRunId(DryRunIdT&& value) { m_dryRunIdHasBeenSet = true; m_dryRunId = std::forward<DryRunIdT>(value); }
    template<typename DryRunIdT = Aws::String>
    DryRunConfigOutput& WithDryRunId(DryRunIdT&& value) { SetDryRunId(std::forward<DryRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the last execution status for a canary's dry run.</p>
     */
    inline const Aws::String& GetLastDryRunExecutionStatus() const { return m_lastDryRunExecutionStatus; }
    inline bool LastDryRunExecutionStatusHasBeenSet() const { return m_lastDryRunExecutionStatusHasBeenSet; }
    template<typename LastDryRunExecutionStatusT = Aws::String>
    void SetLastDryRunExecutionStatus(LastDryRunExecutionStatusT&& value) { m_lastDryRunExecutionStatusHasBeenSet = true; m_lastDryRunExecutionStatus = std::forward<LastDryRunExecutionStatusT>(value); }
    template<typename LastDryRunExecutionStatusT = Aws::String>
    DryRunConfigOutput& WithLastDryRunExecutionStatus(LastDryRunExecutionStatusT&& value) { SetLastDryRunExecutionStatus(std::forward<LastDryRunExecutionStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dryRunId;
    bool m_dryRunIdHasBeenSet = false;

    Aws::String m_lastDryRunExecutionStatus;
    bool m_lastDryRunExecutionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws

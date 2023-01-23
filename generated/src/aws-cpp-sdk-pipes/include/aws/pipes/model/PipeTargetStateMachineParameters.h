/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/pipes/model/PipeTargetInvocationType.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The parameters for using a Step Functions state machine as a
   * target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeTargetStateMachineParameters">AWS
   * API Reference</a></p>
   */
  class PipeTargetStateMachineParameters
  {
  public:
    AWS_PIPES_API PipeTargetStateMachineParameters();
    AWS_PIPES_API PipeTargetStateMachineParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeTargetStateMachineParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify whether to wait for the state machine to finish or not.</p>
     */
    inline const PipeTargetInvocationType& GetInvocationType() const{ return m_invocationType; }

    /**
     * <p>Specify whether to wait for the state machine to finish or not.</p>
     */
    inline bool InvocationTypeHasBeenSet() const { return m_invocationTypeHasBeenSet; }

    /**
     * <p>Specify whether to wait for the state machine to finish or not.</p>
     */
    inline void SetInvocationType(const PipeTargetInvocationType& value) { m_invocationTypeHasBeenSet = true; m_invocationType = value; }

    /**
     * <p>Specify whether to wait for the state machine to finish or not.</p>
     */
    inline void SetInvocationType(PipeTargetInvocationType&& value) { m_invocationTypeHasBeenSet = true; m_invocationType = std::move(value); }

    /**
     * <p>Specify whether to wait for the state machine to finish or not.</p>
     */
    inline PipeTargetStateMachineParameters& WithInvocationType(const PipeTargetInvocationType& value) { SetInvocationType(value); return *this;}

    /**
     * <p>Specify whether to wait for the state machine to finish or not.</p>
     */
    inline PipeTargetStateMachineParameters& WithInvocationType(PipeTargetInvocationType&& value) { SetInvocationType(std::move(value)); return *this;}

  private:

    PipeTargetInvocationType m_invocationType;
    bool m_invocationTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws

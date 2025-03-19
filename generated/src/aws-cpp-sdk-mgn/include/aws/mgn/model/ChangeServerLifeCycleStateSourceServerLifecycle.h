/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/ChangeServerLifeCycleStateSourceServerLifecycleState.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>The request to change the source server migration lifecycle
   * state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ChangeServerLifeCycleStateSourceServerLifecycle">AWS
   * API Reference</a></p>
   */
  class ChangeServerLifeCycleStateSourceServerLifecycle
  {
  public:
    AWS_MGN_API ChangeServerLifeCycleStateSourceServerLifecycle() = default;
    AWS_MGN_API ChangeServerLifeCycleStateSourceServerLifecycle(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ChangeServerLifeCycleStateSourceServerLifecycle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The request to change the source server migration lifecycle state.</p>
     */
    inline ChangeServerLifeCycleStateSourceServerLifecycleState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ChangeServerLifeCycleStateSourceServerLifecycleState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ChangeServerLifeCycleStateSourceServerLifecycle& WithState(ChangeServerLifeCycleStateSourceServerLifecycleState value) { SetState(value); return *this;}
    ///@}
  private:

    ChangeServerLifeCycleStateSourceServerLifecycleState m_state{ChangeServerLifeCycleStateSourceServerLifecycleState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws

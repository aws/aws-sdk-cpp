/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AugmentedAIRuntime
{
namespace Model
{

  /**
   */
  class DeleteHumanLoopRequest : public AugmentedAIRuntimeRequest
  {
  public:
    AWS_AUGMENTEDAIRUNTIME_API DeleteHumanLoopRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteHumanLoop"; }

    AWS_AUGMENTEDAIRUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the human loop that you want to delete.</p>
     */
    inline const Aws::String& GetHumanLoopName() const { return m_humanLoopName; }
    inline bool HumanLoopNameHasBeenSet() const { return m_humanLoopNameHasBeenSet; }
    template<typename HumanLoopNameT = Aws::String>
    void SetHumanLoopName(HumanLoopNameT&& value) { m_humanLoopNameHasBeenSet = true; m_humanLoopName = std::forward<HumanLoopNameT>(value); }
    template<typename HumanLoopNameT = Aws::String>
    DeleteHumanLoopRequest& WithHumanLoopName(HumanLoopNameT&& value) { SetHumanLoopName(std::forward<HumanLoopNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_humanLoopName;
    bool m_humanLoopNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws

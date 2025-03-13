/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/PollyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Polly
{
namespace Model
{

  /**
   */
  class GetSpeechSynthesisTaskRequest : public PollyRequest
  {
  public:
    AWS_POLLY_API GetSpeechSynthesisTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSpeechSynthesisTask"; }

    AWS_POLLY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Polly generated identifier for a speech synthesis task.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    GetSpeechSynthesisTaskRequest& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws

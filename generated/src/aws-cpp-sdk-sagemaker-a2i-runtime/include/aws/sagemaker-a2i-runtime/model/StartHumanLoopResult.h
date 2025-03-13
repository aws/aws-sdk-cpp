/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AugmentedAIRuntime
{
namespace Model
{
  class StartHumanLoopResult
  {
  public:
    AWS_AUGMENTEDAIRUNTIME_API StartHumanLoopResult() = default;
    AWS_AUGMENTEDAIRUNTIME_API StartHumanLoopResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUGMENTEDAIRUNTIME_API StartHumanLoopResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline const Aws::String& GetHumanLoopArn() const { return m_humanLoopArn; }
    template<typename HumanLoopArnT = Aws::String>
    void SetHumanLoopArn(HumanLoopArnT&& value) { m_humanLoopArnHasBeenSet = true; m_humanLoopArn = std::forward<HumanLoopArnT>(value); }
    template<typename HumanLoopArnT = Aws::String>
    StartHumanLoopResult& WithHumanLoopArn(HumanLoopArnT&& value) { SetHumanLoopArn(std::forward<HumanLoopArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartHumanLoopResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_humanLoopArn;
    bool m_humanLoopArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws

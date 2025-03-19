/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{
  class CreateStudioLifecycleConfigResult
  {
  public:
    AWS_SAGEMAKER_API CreateStudioLifecycleConfigResult() = default;
    AWS_SAGEMAKER_API CreateStudioLifecycleConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateStudioLifecycleConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of your created Lifecycle Configuration.</p>
     */
    inline const Aws::String& GetStudioLifecycleConfigArn() const { return m_studioLifecycleConfigArn; }
    template<typename StudioLifecycleConfigArnT = Aws::String>
    void SetStudioLifecycleConfigArn(StudioLifecycleConfigArnT&& value) { m_studioLifecycleConfigArnHasBeenSet = true; m_studioLifecycleConfigArn = std::forward<StudioLifecycleConfigArnT>(value); }
    template<typename StudioLifecycleConfigArnT = Aws::String>
    CreateStudioLifecycleConfigResult& WithStudioLifecycleConfigArn(StudioLifecycleConfigArnT&& value) { SetStudioLifecycleConfigArn(std::forward<StudioLifecycleConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateStudioLifecycleConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_studioLifecycleConfigArn;
    bool m_studioLifecycleConfigArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

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
  class CreateHumanTaskUiResult
  {
  public:
    AWS_SAGEMAKER_API CreateHumanTaskUiResult() = default;
    AWS_SAGEMAKER_API CreateHumanTaskUiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateHumanTaskUiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the human review workflow user interface
     * you create.</p>
     */
    inline const Aws::String& GetHumanTaskUiArn() const { return m_humanTaskUiArn; }
    template<typename HumanTaskUiArnT = Aws::String>
    void SetHumanTaskUiArn(HumanTaskUiArnT&& value) { m_humanTaskUiArnHasBeenSet = true; m_humanTaskUiArn = std::forward<HumanTaskUiArnT>(value); }
    template<typename HumanTaskUiArnT = Aws::String>
    CreateHumanTaskUiResult& WithHumanTaskUiArn(HumanTaskUiArnT&& value) { SetHumanTaskUiArn(std::forward<HumanTaskUiArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateHumanTaskUiResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_humanTaskUiArn;
    bool m_humanTaskUiArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

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
  class UpdateAppImageConfigResult
  {
  public:
    AWS_SAGEMAKER_API UpdateAppImageConfigResult() = default;
    AWS_SAGEMAKER_API UpdateAppImageConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateAppImageConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN for the AppImageConfig.</p>
     */
    inline const Aws::String& GetAppImageConfigArn() const { return m_appImageConfigArn; }
    template<typename AppImageConfigArnT = Aws::String>
    void SetAppImageConfigArn(AppImageConfigArnT&& value) { m_appImageConfigArnHasBeenSet = true; m_appImageConfigArn = std::forward<AppImageConfigArnT>(value); }
    template<typename AppImageConfigArnT = Aws::String>
    UpdateAppImageConfigResult& WithAppImageConfigArn(AppImageConfigArnT&& value) { SetAppImageConfigArn(std::forward<AppImageConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAppImageConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appImageConfigArn;
    bool m_appImageConfigArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

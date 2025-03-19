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
  class CreateAutoMLJobResult
  {
  public:
    AWS_SAGEMAKER_API CreateAutoMLJobResult() = default;
    AWS_SAGEMAKER_API CreateAutoMLJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateAutoMLJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ARN assigned to the AutoML job when it is created.</p>
     */
    inline const Aws::String& GetAutoMLJobArn() const { return m_autoMLJobArn; }
    template<typename AutoMLJobArnT = Aws::String>
    void SetAutoMLJobArn(AutoMLJobArnT&& value) { m_autoMLJobArnHasBeenSet = true; m_autoMLJobArn = std::forward<AutoMLJobArnT>(value); }
    template<typename AutoMLJobArnT = Aws::String>
    CreateAutoMLJobResult& WithAutoMLJobArn(AutoMLJobArnT&& value) { SetAutoMLJobArn(std::forward<AutoMLJobArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAutoMLJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_autoMLJobArn;
    bool m_autoMLJobArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

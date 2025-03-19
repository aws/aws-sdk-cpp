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
  class CreateImageVersionResult
  {
  public:
    AWS_SAGEMAKER_API CreateImageVersionResult() = default;
    AWS_SAGEMAKER_API CreateImageVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateImageVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the image version.</p>
     */
    inline const Aws::String& GetImageVersionArn() const { return m_imageVersionArn; }
    template<typename ImageVersionArnT = Aws::String>
    void SetImageVersionArn(ImageVersionArnT&& value) { m_imageVersionArnHasBeenSet = true; m_imageVersionArn = std::forward<ImageVersionArnT>(value); }
    template<typename ImageVersionArnT = Aws::String>
    CreateImageVersionResult& WithImageVersionArn(ImageVersionArnT&& value) { SetImageVersionArn(std::forward<ImageVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateImageVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_imageVersionArn;
    bool m_imageVersionArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

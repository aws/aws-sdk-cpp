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
  class UpdateHubContentReferenceResult
  {
  public:
    AWS_SAGEMAKER_API UpdateHubContentReferenceResult() = default;
    AWS_SAGEMAKER_API UpdateHubContentReferenceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateHubContentReferenceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the private model hub that contains the updated hub content.</p>
     */
    inline const Aws::String& GetHubArn() const { return m_hubArn; }
    template<typename HubArnT = Aws::String>
    void SetHubArn(HubArnT&& value) { m_hubArnHasBeenSet = true; m_hubArn = std::forward<HubArnT>(value); }
    template<typename HubArnT = Aws::String>
    UpdateHubContentReferenceResult& WithHubArn(HubArnT&& value) { SetHubArn(std::forward<HubArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the hub content resource that was updated.</p>
     */
    inline const Aws::String& GetHubContentArn() const { return m_hubContentArn; }
    template<typename HubContentArnT = Aws::String>
    void SetHubContentArn(HubContentArnT&& value) { m_hubContentArnHasBeenSet = true; m_hubContentArn = std::forward<HubContentArnT>(value); }
    template<typename HubContentArnT = Aws::String>
    UpdateHubContentReferenceResult& WithHubContentArn(HubContentArnT&& value) { SetHubContentArn(std::forward<HubContentArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateHubContentReferenceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hubArn;
    bool m_hubArnHasBeenSet = false;

    Aws::String m_hubContentArn;
    bool m_hubContentArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

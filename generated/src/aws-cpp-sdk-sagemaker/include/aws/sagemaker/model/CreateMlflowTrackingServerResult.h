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
  class CreateMlflowTrackingServerResult
  {
  public:
    AWS_SAGEMAKER_API CreateMlflowTrackingServerResult() = default;
    AWS_SAGEMAKER_API CreateMlflowTrackingServerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateMlflowTrackingServerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the tracking server.</p>
     */
    inline const Aws::String& GetTrackingServerArn() const { return m_trackingServerArn; }
    template<typename TrackingServerArnT = Aws::String>
    void SetTrackingServerArn(TrackingServerArnT&& value) { m_trackingServerArnHasBeenSet = true; m_trackingServerArn = std::forward<TrackingServerArnT>(value); }
    template<typename TrackingServerArnT = Aws::String>
    CreateMlflowTrackingServerResult& WithTrackingServerArn(TrackingServerArnT&& value) { SetTrackingServerArn(std::forward<TrackingServerArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateMlflowTrackingServerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trackingServerArn;
    bool m_trackingServerArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

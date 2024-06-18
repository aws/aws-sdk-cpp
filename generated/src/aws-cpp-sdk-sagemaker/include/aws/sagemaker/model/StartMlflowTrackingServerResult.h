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
  class StartMlflowTrackingServerResult
  {
  public:
    AWS_SAGEMAKER_API StartMlflowTrackingServerResult();
    AWS_SAGEMAKER_API StartMlflowTrackingServerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API StartMlflowTrackingServerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the started tracking server.</p>
     */
    inline const Aws::String& GetTrackingServerArn() const{ return m_trackingServerArn; }
    inline void SetTrackingServerArn(const Aws::String& value) { m_trackingServerArn = value; }
    inline void SetTrackingServerArn(Aws::String&& value) { m_trackingServerArn = std::move(value); }
    inline void SetTrackingServerArn(const char* value) { m_trackingServerArn.assign(value); }
    inline StartMlflowTrackingServerResult& WithTrackingServerArn(const Aws::String& value) { SetTrackingServerArn(value); return *this;}
    inline StartMlflowTrackingServerResult& WithTrackingServerArn(Aws::String&& value) { SetTrackingServerArn(std::move(value)); return *this;}
    inline StartMlflowTrackingServerResult& WithTrackingServerArn(const char* value) { SetTrackingServerArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartMlflowTrackingServerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartMlflowTrackingServerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartMlflowTrackingServerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_trackingServerArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

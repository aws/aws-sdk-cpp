/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/DeviceSummary.h>
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
  class ListDevicesResult
  {
  public:
    AWS_SAGEMAKER_API ListDevicesResult();
    AWS_SAGEMAKER_API ListDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary of devices.</p>
     */
    inline const Aws::Vector<DeviceSummary>& GetDeviceSummaries() const{ return m_deviceSummaries; }
    inline void SetDeviceSummaries(const Aws::Vector<DeviceSummary>& value) { m_deviceSummaries = value; }
    inline void SetDeviceSummaries(Aws::Vector<DeviceSummary>&& value) { m_deviceSummaries = std::move(value); }
    inline ListDevicesResult& WithDeviceSummaries(const Aws::Vector<DeviceSummary>& value) { SetDeviceSummaries(value); return *this;}
    inline ListDevicesResult& WithDeviceSummaries(Aws::Vector<DeviceSummary>&& value) { SetDeviceSummaries(std::move(value)); return *this;}
    inline ListDevicesResult& AddDeviceSummaries(const DeviceSummary& value) { m_deviceSummaries.push_back(value); return *this; }
    inline ListDevicesResult& AddDeviceSummaries(DeviceSummary&& value) { m_deviceSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The response from the last list when returning a list large enough to need
     * tokening.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDevicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDevicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDevicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDevicesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDevicesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDevicesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DeviceSummary> m_deviceSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/DeviceFleetSummary.h>
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
  class ListDeviceFleetsResult
  {
  public:
    AWS_SAGEMAKER_API ListDeviceFleetsResult();
    AWS_SAGEMAKER_API ListDeviceFleetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListDeviceFleetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary of the device fleet.</p>
     */
    inline const Aws::Vector<DeviceFleetSummary>& GetDeviceFleetSummaries() const{ return m_deviceFleetSummaries; }
    inline void SetDeviceFleetSummaries(const Aws::Vector<DeviceFleetSummary>& value) { m_deviceFleetSummaries = value; }
    inline void SetDeviceFleetSummaries(Aws::Vector<DeviceFleetSummary>&& value) { m_deviceFleetSummaries = std::move(value); }
    inline ListDeviceFleetsResult& WithDeviceFleetSummaries(const Aws::Vector<DeviceFleetSummary>& value) { SetDeviceFleetSummaries(value); return *this;}
    inline ListDeviceFleetsResult& WithDeviceFleetSummaries(Aws::Vector<DeviceFleetSummary>&& value) { SetDeviceFleetSummaries(std::move(value)); return *this;}
    inline ListDeviceFleetsResult& AddDeviceFleetSummaries(const DeviceFleetSummary& value) { m_deviceFleetSummaries.push_back(value); return *this; }
    inline ListDeviceFleetsResult& AddDeviceFleetSummaries(DeviceFleetSummary&& value) { m_deviceFleetSummaries.push_back(std::move(value)); return *this; }
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
    inline ListDeviceFleetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDeviceFleetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDeviceFleetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDeviceFleetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDeviceFleetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDeviceFleetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DeviceFleetSummary> m_deviceFleetSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

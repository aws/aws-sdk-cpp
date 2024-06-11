﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
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
namespace StorageGateway
{
namespace Model
{
  class StartAvailabilityMonitorTestResult
  {
  public:
    AWS_STORAGEGATEWAY_API StartAvailabilityMonitorTestResult();
    AWS_STORAGEGATEWAY_API StartAvailabilityMonitorTestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API StartAvailabilityMonitorTestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = std::move(value); }
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }
    inline StartAvailabilityMonitorTestResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}
    inline StartAvailabilityMonitorTestResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}
    inline StartAvailabilityMonitorTestResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartAvailabilityMonitorTestResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartAvailabilityMonitorTestResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartAvailabilityMonitorTestResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayARN;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/model/DedicatedIp.h>
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
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>Information about a dedicated IP address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetDedicatedIpResponse">AWS
   * API Reference</a></p>
   */
  class GetDedicatedIpResult
  {
  public:
    AWS_PINPOINTEMAIL_API GetDedicatedIpResult();
    AWS_PINPOINTEMAIL_API GetDedicatedIpResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTEMAIL_API GetDedicatedIpResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains information about a dedicated IP address.</p>
     */
    inline const DedicatedIp& GetDedicatedIp() const{ return m_dedicatedIp; }
    inline void SetDedicatedIp(const DedicatedIp& value) { m_dedicatedIp = value; }
    inline void SetDedicatedIp(DedicatedIp&& value) { m_dedicatedIp = std::move(value); }
    inline GetDedicatedIpResult& WithDedicatedIp(const DedicatedIp& value) { SetDedicatedIp(value); return *this;}
    inline GetDedicatedIpResult& WithDedicatedIp(DedicatedIp&& value) { SetDedicatedIp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDedicatedIpResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDedicatedIpResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDedicatedIpResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DedicatedIp m_dedicatedIp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
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
namespace PrivateNetworks
{
namespace Model
{
  class PingResult
  {
  public:
    AWS_PRIVATENETWORKS_API PingResult();
    AWS_PRIVATENETWORKS_API PingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API PingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the health of the service.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Information about the health of the service.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>Information about the health of the service.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>Information about the health of the service.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>Information about the health of the service.</p>
     */
    inline PingResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Information about the health of the service.</p>
     */
    inline PingResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Information about the health of the service.</p>
     */
    inline PingResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws

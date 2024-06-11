/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
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
namespace Outposts
{
namespace Model
{
  class StartConnectionResult
  {
  public:
    AWS_OUTPOSTS_API StartConnectionResult();
    AWS_OUTPOSTS_API StartConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API StartConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The ID of the connection. </p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }
    inline void SetConnectionId(const Aws::String& value) { m_connectionId = value; }
    inline void SetConnectionId(Aws::String&& value) { m_connectionId = std::move(value); }
    inline void SetConnectionId(const char* value) { m_connectionId.assign(value); }
    inline StartConnectionResult& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}
    inline StartConnectionResult& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}
    inline StartConnectionResult& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The underlay IP address. </p>
     */
    inline const Aws::String& GetUnderlayIpAddress() const{ return m_underlayIpAddress; }
    inline void SetUnderlayIpAddress(const Aws::String& value) { m_underlayIpAddress = value; }
    inline void SetUnderlayIpAddress(Aws::String&& value) { m_underlayIpAddress = std::move(value); }
    inline void SetUnderlayIpAddress(const char* value) { m_underlayIpAddress.assign(value); }
    inline StartConnectionResult& WithUnderlayIpAddress(const Aws::String& value) { SetUnderlayIpAddress(value); return *this;}
    inline StartConnectionResult& WithUnderlayIpAddress(Aws::String&& value) { SetUnderlayIpAddress(std::move(value)); return *this;}
    inline StartConnectionResult& WithUnderlayIpAddress(const char* value) { SetUnderlayIpAddress(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_connectionId;

    Aws::String m_underlayIpAddress;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws

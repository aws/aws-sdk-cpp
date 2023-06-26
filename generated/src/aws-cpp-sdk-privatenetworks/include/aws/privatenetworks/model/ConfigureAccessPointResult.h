﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/model/NetworkResource.h>
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
  class ConfigureAccessPointResult
  {
  public:
    AWS_PRIVATENETWORKS_API ConfigureAccessPointResult();
    AWS_PRIVATENETWORKS_API ConfigureAccessPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API ConfigureAccessPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the network resource.</p>
     */
    inline const NetworkResource& GetAccessPoint() const{ return m_accessPoint; }

    /**
     * <p>Information about the network resource.</p>
     */
    inline void SetAccessPoint(const NetworkResource& value) { m_accessPoint = value; }

    /**
     * <p>Information about the network resource.</p>
     */
    inline void SetAccessPoint(NetworkResource&& value) { m_accessPoint = std::move(value); }

    /**
     * <p>Information about the network resource.</p>
     */
    inline ConfigureAccessPointResult& WithAccessPoint(const NetworkResource& value) { SetAccessPoint(value); return *this;}

    /**
     * <p>Information about the network resource.</p>
     */
    inline ConfigureAccessPointResult& WithAccessPoint(NetworkResource&& value) { SetAccessPoint(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ConfigureAccessPointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ConfigureAccessPointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ConfigureAccessPointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    NetworkResource m_accessPoint;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws

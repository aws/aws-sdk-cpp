﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/model/DeviceIdentifier.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class ActivateDeviceIdentifierResult
  {
  public:
    AWS_PRIVATENETWORKS_API ActivateDeviceIdentifierResult();
    AWS_PRIVATENETWORKS_API ActivateDeviceIdentifierResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API ActivateDeviceIdentifierResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the device identifier.</p>
     */
    inline const DeviceIdentifier& GetDeviceIdentifier() const{ return m_deviceIdentifier; }
    inline void SetDeviceIdentifier(const DeviceIdentifier& value) { m_deviceIdentifier = value; }
    inline void SetDeviceIdentifier(DeviceIdentifier&& value) { m_deviceIdentifier = std::move(value); }
    inline ActivateDeviceIdentifierResult& WithDeviceIdentifier(const DeviceIdentifier& value) { SetDeviceIdentifier(value); return *this;}
    inline ActivateDeviceIdentifierResult& WithDeviceIdentifier(DeviceIdentifier&& value) { SetDeviceIdentifier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The tags on the device identifier. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline ActivateDeviceIdentifierResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ActivateDeviceIdentifierResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ActivateDeviceIdentifierResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline ActivateDeviceIdentifierResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline ActivateDeviceIdentifierResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline ActivateDeviceIdentifierResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ActivateDeviceIdentifierResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline ActivateDeviceIdentifierResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline ActivateDeviceIdentifierResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ActivateDeviceIdentifierResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ActivateDeviceIdentifierResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ActivateDeviceIdentifierResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DeviceIdentifier m_deviceIdentifier;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws

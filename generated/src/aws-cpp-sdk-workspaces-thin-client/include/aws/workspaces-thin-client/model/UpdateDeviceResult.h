/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>
#include <aws/workspaces-thin-client/model/DeviceSummary.h>
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
namespace WorkSpacesThinClient
{
namespace Model
{
  class UpdateDeviceResult
  {
  public:
    AWS_WORKSPACESTHINCLIENT_API UpdateDeviceResult();
    AWS_WORKSPACESTHINCLIENT_API UpdateDeviceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESTHINCLIENT_API UpdateDeviceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes a device.</p>
     */
    inline const DeviceSummary& GetDevice() const{ return m_device; }

    /**
     * <p>Describes a device.</p>
     */
    inline void SetDevice(const DeviceSummary& value) { m_device = value; }

    /**
     * <p>Describes a device.</p>
     */
    inline void SetDevice(DeviceSummary&& value) { m_device = std::move(value); }

    /**
     * <p>Describes a device.</p>
     */
    inline UpdateDeviceResult& WithDevice(const DeviceSummary& value) { SetDevice(value); return *this;}

    /**
     * <p>Describes a device.</p>
     */
    inline UpdateDeviceResult& WithDevice(DeviceSummary&& value) { SetDevice(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateDeviceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateDeviceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateDeviceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DeviceSummary m_device;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws

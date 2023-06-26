/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/ApplicationSettingsResource.h>
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
namespace Pinpoint
{
namespace Model
{
  class UpdateApplicationSettingsResult
  {
  public:
    AWS_PINPOINT_API UpdateApplicationSettingsResult();
    AWS_PINPOINT_API UpdateApplicationSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API UpdateApplicationSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ApplicationSettingsResource& GetApplicationSettingsResource() const{ return m_applicationSettingsResource; }

    
    inline void SetApplicationSettingsResource(const ApplicationSettingsResource& value) { m_applicationSettingsResource = value; }

    
    inline void SetApplicationSettingsResource(ApplicationSettingsResource&& value) { m_applicationSettingsResource = std::move(value); }

    
    inline UpdateApplicationSettingsResult& WithApplicationSettingsResource(const ApplicationSettingsResource& value) { SetApplicationSettingsResource(value); return *this;}

    
    inline UpdateApplicationSettingsResult& WithApplicationSettingsResource(ApplicationSettingsResource&& value) { SetApplicationSettingsResource(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateApplicationSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateApplicationSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateApplicationSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ApplicationSettingsResource m_applicationSettingsResource;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

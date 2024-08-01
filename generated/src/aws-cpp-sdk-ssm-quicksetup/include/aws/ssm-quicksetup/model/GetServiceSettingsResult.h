/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
#include <aws/ssm-quicksetup/model/ServiceSettings.h>
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
namespace SSMQuickSetup
{
namespace Model
{
  class GetServiceSettingsResult
  {
  public:
    AWS_SSMQUICKSETUP_API GetServiceSettingsResult();
    AWS_SSMQUICKSETUP_API GetServiceSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMQUICKSETUP_API GetServiceSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns details about the settings for Quick Setup in the requesting Amazon
     * Web Services account and Amazon Web Services Region.</p>
     */
    inline const ServiceSettings& GetServiceSettings() const{ return m_serviceSettings; }
    inline void SetServiceSettings(const ServiceSettings& value) { m_serviceSettings = value; }
    inline void SetServiceSettings(ServiceSettings&& value) { m_serviceSettings = std::move(value); }
    inline GetServiceSettingsResult& WithServiceSettings(const ServiceSettings& value) { SetServiceSettings(value); return *this;}
    inline GetServiceSettingsResult& WithServiceSettings(ServiceSettings&& value) { SetServiceSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetServiceSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetServiceSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetServiceSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ServiceSettings m_serviceSettings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws

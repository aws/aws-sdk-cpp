/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/ServiceSetting.h>
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
namespace SSM
{
namespace Model
{
  /**
   * <p>The query result body of the GetServiceSetting API operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/GetServiceSettingResult">AWS
   * API Reference</a></p>
   */
  class GetServiceSettingResult
  {
  public:
    AWS_SSM_API GetServiceSettingResult();
    AWS_SSM_API GetServiceSettingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetServiceSettingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The query result of the current service setting.</p>
     */
    inline const ServiceSetting& GetServiceSetting() const{ return m_serviceSetting; }
    inline void SetServiceSetting(const ServiceSetting& value) { m_serviceSetting = value; }
    inline void SetServiceSetting(ServiceSetting&& value) { m_serviceSetting = std::move(value); }
    inline GetServiceSettingResult& WithServiceSetting(const ServiceSetting& value) { SetServiceSetting(value); return *this;}
    inline GetServiceSettingResult& WithServiceSetting(ServiceSetting&& value) { SetServiceSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetServiceSettingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetServiceSettingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetServiceSettingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ServiceSetting m_serviceSetting;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

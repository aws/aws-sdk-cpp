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
   * <p>The result body of the ResetServiceSetting API operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResetServiceSettingResult">AWS
   * API Reference</a></p>
   */
  class ResetServiceSettingResult
  {
  public:
    AWS_SSM_API ResetServiceSettingResult();
    AWS_SSM_API ResetServiceSettingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API ResetServiceSettingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current, effective service setting after calling the ResetServiceSetting
     * API operation.</p>
     */
    inline const ServiceSetting& GetServiceSetting() const{ return m_serviceSetting; }

    /**
     * <p>The current, effective service setting after calling the ResetServiceSetting
     * API operation.</p>
     */
    inline void SetServiceSetting(const ServiceSetting& value) { m_serviceSetting = value; }

    /**
     * <p>The current, effective service setting after calling the ResetServiceSetting
     * API operation.</p>
     */
    inline void SetServiceSetting(ServiceSetting&& value) { m_serviceSetting = std::move(value); }

    /**
     * <p>The current, effective service setting after calling the ResetServiceSetting
     * API operation.</p>
     */
    inline ResetServiceSettingResult& WithServiceSetting(const ServiceSetting& value) { SetServiceSetting(value); return *this;}

    /**
     * <p>The current, effective service setting after calling the ResetServiceSetting
     * API operation.</p>
     */
    inline ResetServiceSettingResult& WithServiceSetting(ServiceSetting&& value) { SetServiceSetting(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ResetServiceSettingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ResetServiceSettingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ResetServiceSettingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ServiceSetting m_serviceSetting;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

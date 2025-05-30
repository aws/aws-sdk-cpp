﻿/**
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
    AWS_SSM_API GetServiceSettingResult() = default;
    AWS_SSM_API GetServiceSettingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetServiceSettingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The query result of the current service setting.</p>
     */
    inline const ServiceSetting& GetServiceSetting() const { return m_serviceSetting; }
    template<typename ServiceSettingT = ServiceSetting>
    void SetServiceSetting(ServiceSettingT&& value) { m_serviceSettingHasBeenSet = true; m_serviceSetting = std::forward<ServiceSettingT>(value); }
    template<typename ServiceSettingT = ServiceSetting>
    GetServiceSettingResult& WithServiceSetting(ServiceSettingT&& value) { SetServiceSetting(std::forward<ServiceSettingT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetServiceSettingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ServiceSetting m_serviceSetting;
    bool m_serviceSettingHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

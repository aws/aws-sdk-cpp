﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/ServiceId.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace XRay
{
namespace Model
{

  /**
   * <p>The service within the service graph that has anomalously high fault rates.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/AnomalousService">AWS
   * API Reference</a></p>
   */
  class AnomalousService
  {
  public:
    AWS_XRAY_API AnomalousService() = default;
    AWS_XRAY_API AnomalousService(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API AnomalousService& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ServiceId& GetServiceId() const { return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    template<typename ServiceIdT = ServiceId>
    void SetServiceId(ServiceIdT&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::forward<ServiceIdT>(value); }
    template<typename ServiceIdT = ServiceId>
    AnomalousService& WithServiceId(ServiceIdT&& value) { SetServiceId(std::forward<ServiceIdT>(value)); return *this;}
    ///@}
  private:

    ServiceId m_serviceId;
    bool m_serviceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/ErrorRootCauseService.h>
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
   * <p>The root cause of a trace summary error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/ErrorRootCause">AWS
   * API Reference</a></p>
   */
  class ErrorRootCause
  {
  public:
    AWS_XRAY_API ErrorRootCause() = default;
    AWS_XRAY_API ErrorRootCause(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API ErrorRootCause& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of services corresponding to an error. A service identifies a segment
     * and it contains a name, account ID, type, and inferred flag.</p>
     */
    inline const Aws::Vector<ErrorRootCauseService>& GetServices() const { return m_services; }
    inline bool ServicesHasBeenSet() const { return m_servicesHasBeenSet; }
    template<typename ServicesT = Aws::Vector<ErrorRootCauseService>>
    void SetServices(ServicesT&& value) { m_servicesHasBeenSet = true; m_services = std::forward<ServicesT>(value); }
    template<typename ServicesT = Aws::Vector<ErrorRootCauseService>>
    ErrorRootCause& WithServices(ServicesT&& value) { SetServices(std::forward<ServicesT>(value)); return *this;}
    template<typename ServicesT = ErrorRootCauseService>
    ErrorRootCause& AddServices(ServicesT&& value) { m_servicesHasBeenSet = true; m_services.emplace_back(std::forward<ServicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag that denotes that the root cause impacts the trace client.</p>
     */
    inline bool GetClientImpacting() const { return m_clientImpacting; }
    inline bool ClientImpactingHasBeenSet() const { return m_clientImpactingHasBeenSet; }
    inline void SetClientImpacting(bool value) { m_clientImpactingHasBeenSet = true; m_clientImpacting = value; }
    inline ErrorRootCause& WithClientImpacting(bool value) { SetClientImpacting(value); return *this;}
    ///@}
  private:

    Aws::Vector<ErrorRootCauseService> m_services;
    bool m_servicesHasBeenSet = false;

    bool m_clientImpacting{false};
    bool m_clientImpactingHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws

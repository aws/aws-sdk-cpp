/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/ServiceName.h>
#include <aws/snowball/model/ServiceVersion.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>The name and version of the service dependant on the requested
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/DependentService">AWS
   * API Reference</a></p>
   */
  class DependentService
  {
  public:
    AWS_SNOWBALL_API DependentService() = default;
    AWS_SNOWBALL_API DependentService(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API DependentService& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the dependent service.</p>
     */
    inline ServiceName GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(ServiceName value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline DependentService& WithServiceName(ServiceName value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the dependent service.</p>
     */
    inline const ServiceVersion& GetServiceVersion() const { return m_serviceVersion; }
    inline bool ServiceVersionHasBeenSet() const { return m_serviceVersionHasBeenSet; }
    template<typename ServiceVersionT = ServiceVersion>
    void SetServiceVersion(ServiceVersionT&& value) { m_serviceVersionHasBeenSet = true; m_serviceVersion = std::forward<ServiceVersionT>(value); }
    template<typename ServiceVersionT = ServiceVersion>
    DependentService& WithServiceVersion(ServiceVersionT&& value) { SetServiceVersion(std::forward<ServiceVersionT>(value)); return *this;}
    ///@}
  private:

    ServiceName m_serviceName{ServiceName::NOT_SET};
    bool m_serviceNameHasBeenSet = false;

    ServiceVersion m_serviceVersion;
    bool m_serviceVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws

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
    AWS_SNOWBALL_API DependentService();
    AWS_SNOWBALL_API DependentService(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API DependentService& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the dependent service.</p>
     */
    inline const ServiceName& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the dependent service.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the dependent service.</p>
     */
    inline void SetServiceName(const ServiceName& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the dependent service.</p>
     */
    inline void SetServiceName(ServiceName&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the dependent service.</p>
     */
    inline DependentService& WithServiceName(const ServiceName& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the dependent service.</p>
     */
    inline DependentService& WithServiceName(ServiceName&& value) { SetServiceName(std::move(value)); return *this;}


    /**
     * <p>The version of the dependent service.</p>
     */
    inline const ServiceVersion& GetServiceVersion() const{ return m_serviceVersion; }

    /**
     * <p>The version of the dependent service.</p>
     */
    inline bool ServiceVersionHasBeenSet() const { return m_serviceVersionHasBeenSet; }

    /**
     * <p>The version of the dependent service.</p>
     */
    inline void SetServiceVersion(const ServiceVersion& value) { m_serviceVersionHasBeenSet = true; m_serviceVersion = value; }

    /**
     * <p>The version of the dependent service.</p>
     */
    inline void SetServiceVersion(ServiceVersion&& value) { m_serviceVersionHasBeenSet = true; m_serviceVersion = std::move(value); }

    /**
     * <p>The version of the dependent service.</p>
     */
    inline DependentService& WithServiceVersion(const ServiceVersion& value) { SetServiceVersion(value); return *this;}

    /**
     * <p>The version of the dependent service.</p>
     */
    inline DependentService& WithServiceVersion(ServiceVersion&& value) { SetServiceVersion(std::move(value)); return *this;}

  private:

    ServiceName m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    ServiceVersion m_serviceVersion;
    bool m_serviceVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws

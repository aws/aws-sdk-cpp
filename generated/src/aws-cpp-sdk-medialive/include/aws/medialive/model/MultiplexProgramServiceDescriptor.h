/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Transport stream service descriptor configuration for the Multiplex
   * program.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexProgramServiceDescriptor">AWS
   * API Reference</a></p>
   */
  class MultiplexProgramServiceDescriptor
  {
  public:
    AWS_MEDIALIVE_API MultiplexProgramServiceDescriptor();
    AWS_MEDIALIVE_API MultiplexProgramServiceDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexProgramServiceDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Name of the provider.
     */
    inline const Aws::String& GetProviderName() const{ return m_providerName; }

    /**
     * Name of the provider.
     */
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }

    /**
     * Name of the provider.
     */
    inline void SetProviderName(const Aws::String& value) { m_providerNameHasBeenSet = true; m_providerName = value; }

    /**
     * Name of the provider.
     */
    inline void SetProviderName(Aws::String&& value) { m_providerNameHasBeenSet = true; m_providerName = std::move(value); }

    /**
     * Name of the provider.
     */
    inline void SetProviderName(const char* value) { m_providerNameHasBeenSet = true; m_providerName.assign(value); }

    /**
     * Name of the provider.
     */
    inline MultiplexProgramServiceDescriptor& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}

    /**
     * Name of the provider.
     */
    inline MultiplexProgramServiceDescriptor& WithProviderName(Aws::String&& value) { SetProviderName(std::move(value)); return *this;}

    /**
     * Name of the provider.
     */
    inline MultiplexProgramServiceDescriptor& WithProviderName(const char* value) { SetProviderName(value); return *this;}


    /**
     * Name of the service.
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * Name of the service.
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * Name of the service.
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * Name of the service.
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * Name of the service.
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * Name of the service.
     */
    inline MultiplexProgramServiceDescriptor& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * Name of the service.
     */
    inline MultiplexProgramServiceDescriptor& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * Name of the service.
     */
    inline MultiplexProgramServiceDescriptor& WithServiceName(const char* value) { SetServiceName(value); return *this;}

  private:

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws

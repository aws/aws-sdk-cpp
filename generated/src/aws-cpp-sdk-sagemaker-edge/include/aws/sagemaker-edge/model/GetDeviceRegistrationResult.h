/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
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
namespace SagemakerEdgeManager
{
namespace Model
{
  class GetDeviceRegistrationResult
  {
  public:
    AWS_SAGEMAKEREDGEMANAGER_API GetDeviceRegistrationResult();
    AWS_SAGEMAKEREDGEMANAGER_API GetDeviceRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKEREDGEMANAGER_API GetDeviceRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes if the device is currently registered with SageMaker Edge
     * Manager.</p>
     */
    inline const Aws::String& GetDeviceRegistration() const{ return m_deviceRegistration; }

    /**
     * <p>Describes if the device is currently registered with SageMaker Edge
     * Manager.</p>
     */
    inline void SetDeviceRegistration(const Aws::String& value) { m_deviceRegistration = value; }

    /**
     * <p>Describes if the device is currently registered with SageMaker Edge
     * Manager.</p>
     */
    inline void SetDeviceRegistration(Aws::String&& value) { m_deviceRegistration = std::move(value); }

    /**
     * <p>Describes if the device is currently registered with SageMaker Edge
     * Manager.</p>
     */
    inline void SetDeviceRegistration(const char* value) { m_deviceRegistration.assign(value); }

    /**
     * <p>Describes if the device is currently registered with SageMaker Edge
     * Manager.</p>
     */
    inline GetDeviceRegistrationResult& WithDeviceRegistration(const Aws::String& value) { SetDeviceRegistration(value); return *this;}

    /**
     * <p>Describes if the device is currently registered with SageMaker Edge
     * Manager.</p>
     */
    inline GetDeviceRegistrationResult& WithDeviceRegistration(Aws::String&& value) { SetDeviceRegistration(std::move(value)); return *this;}

    /**
     * <p>Describes if the device is currently registered with SageMaker Edge
     * Manager.</p>
     */
    inline GetDeviceRegistrationResult& WithDeviceRegistration(const char* value) { SetDeviceRegistration(value); return *this;}


    /**
     * <p>The amount of time, in seconds, that the registration status is stored on the
     * device’s cache before it is refreshed.</p>
     */
    inline const Aws::String& GetCacheTTL() const{ return m_cacheTTL; }

    /**
     * <p>The amount of time, in seconds, that the registration status is stored on the
     * device’s cache before it is refreshed.</p>
     */
    inline void SetCacheTTL(const Aws::String& value) { m_cacheTTL = value; }

    /**
     * <p>The amount of time, in seconds, that the registration status is stored on the
     * device’s cache before it is refreshed.</p>
     */
    inline void SetCacheTTL(Aws::String&& value) { m_cacheTTL = std::move(value); }

    /**
     * <p>The amount of time, in seconds, that the registration status is stored on the
     * device’s cache before it is refreshed.</p>
     */
    inline void SetCacheTTL(const char* value) { m_cacheTTL.assign(value); }

    /**
     * <p>The amount of time, in seconds, that the registration status is stored on the
     * device’s cache before it is refreshed.</p>
     */
    inline GetDeviceRegistrationResult& WithCacheTTL(const Aws::String& value) { SetCacheTTL(value); return *this;}

    /**
     * <p>The amount of time, in seconds, that the registration status is stored on the
     * device’s cache before it is refreshed.</p>
     */
    inline GetDeviceRegistrationResult& WithCacheTTL(Aws::String&& value) { SetCacheTTL(std::move(value)); return *this;}

    /**
     * <p>The amount of time, in seconds, that the registration status is stored on the
     * device’s cache before it is refreshed.</p>
     */
    inline GetDeviceRegistrationResult& WithCacheTTL(const char* value) { SetCacheTTL(value); return *this;}

  private:

    Aws::String m_deviceRegistration;

    Aws::String m_cacheTTL;
  };

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws

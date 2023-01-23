/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/panorama/model/ManifestOverridesPayload.h>
#include <aws/panorama/model/ManifestPayload.h>
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
namespace Panorama
{
namespace Model
{
  class DescribeApplicationInstanceDetailsResult
  {
  public:
    AWS_PANORAMA_API DescribeApplicationInstanceDetailsResult();
    AWS_PANORAMA_API DescribeApplicationInstanceDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API DescribeApplicationInstanceDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The application instance's ID.</p>
     */
    inline const Aws::String& GetApplicationInstanceId() const{ return m_applicationInstanceId; }

    /**
     * <p>The application instance's ID.</p>
     */
    inline void SetApplicationInstanceId(const Aws::String& value) { m_applicationInstanceId = value; }

    /**
     * <p>The application instance's ID.</p>
     */
    inline void SetApplicationInstanceId(Aws::String&& value) { m_applicationInstanceId = std::move(value); }

    /**
     * <p>The application instance's ID.</p>
     */
    inline void SetApplicationInstanceId(const char* value) { m_applicationInstanceId.assign(value); }

    /**
     * <p>The application instance's ID.</p>
     */
    inline DescribeApplicationInstanceDetailsResult& WithApplicationInstanceId(const Aws::String& value) { SetApplicationInstanceId(value); return *this;}

    /**
     * <p>The application instance's ID.</p>
     */
    inline DescribeApplicationInstanceDetailsResult& WithApplicationInstanceId(Aws::String&& value) { SetApplicationInstanceId(std::move(value)); return *this;}

    /**
     * <p>The application instance's ID.</p>
     */
    inline DescribeApplicationInstanceDetailsResult& WithApplicationInstanceId(const char* value) { SetApplicationInstanceId(value); return *this;}


    /**
     * <p>The ID of the application instance that this instance replaced.</p>
     */
    inline const Aws::String& GetApplicationInstanceIdToReplace() const{ return m_applicationInstanceIdToReplace; }

    /**
     * <p>The ID of the application instance that this instance replaced.</p>
     */
    inline void SetApplicationInstanceIdToReplace(const Aws::String& value) { m_applicationInstanceIdToReplace = value; }

    /**
     * <p>The ID of the application instance that this instance replaced.</p>
     */
    inline void SetApplicationInstanceIdToReplace(Aws::String&& value) { m_applicationInstanceIdToReplace = std::move(value); }

    /**
     * <p>The ID of the application instance that this instance replaced.</p>
     */
    inline void SetApplicationInstanceIdToReplace(const char* value) { m_applicationInstanceIdToReplace.assign(value); }

    /**
     * <p>The ID of the application instance that this instance replaced.</p>
     */
    inline DescribeApplicationInstanceDetailsResult& WithApplicationInstanceIdToReplace(const Aws::String& value) { SetApplicationInstanceIdToReplace(value); return *this;}

    /**
     * <p>The ID of the application instance that this instance replaced.</p>
     */
    inline DescribeApplicationInstanceDetailsResult& WithApplicationInstanceIdToReplace(Aws::String&& value) { SetApplicationInstanceIdToReplace(std::move(value)); return *this;}

    /**
     * <p>The ID of the application instance that this instance replaced.</p>
     */
    inline DescribeApplicationInstanceDetailsResult& WithApplicationInstanceIdToReplace(const char* value) { SetApplicationInstanceIdToReplace(value); return *this;}


    /**
     * <p>When the application instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>When the application instance was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>When the application instance was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>When the application instance was created.</p>
     */
    inline DescribeApplicationInstanceDetailsResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>When the application instance was created.</p>
     */
    inline DescribeApplicationInstanceDetailsResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The application instance's default runtime context device.</p>
     */
    inline const Aws::String& GetDefaultRuntimeContextDevice() const{ return m_defaultRuntimeContextDevice; }

    /**
     * <p>The application instance's default runtime context device.</p>
     */
    inline void SetDefaultRuntimeContextDevice(const Aws::String& value) { m_defaultRuntimeContextDevice = value; }

    /**
     * <p>The application instance's default runtime context device.</p>
     */
    inline void SetDefaultRuntimeContextDevice(Aws::String&& value) { m_defaultRuntimeContextDevice = std::move(value); }

    /**
     * <p>The application instance's default runtime context device.</p>
     */
    inline void SetDefaultRuntimeContextDevice(const char* value) { m_defaultRuntimeContextDevice.assign(value); }

    /**
     * <p>The application instance's default runtime context device.</p>
     */
    inline DescribeApplicationInstanceDetailsResult& WithDefaultRuntimeContextDevice(const Aws::String& value) { SetDefaultRuntimeContextDevice(value); return *this;}

    /**
     * <p>The application instance's default runtime context device.</p>
     */
    inline DescribeApplicationInstanceDetailsResult& WithDefaultRuntimeContextDevice(Aws::String&& value) { SetDefaultRuntimeContextDevice(std::move(value)); return *this;}

    /**
     * <p>The application instance's default runtime context device.</p>
     */
    inline DescribeApplicationInstanceDetailsResult& WithDefaultRuntimeContextDevice(const char* value) { SetDefaultRuntimeContextDevice(value); return *this;}


    /**
     * <p>The application instance's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The application instance's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The application instance's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The application instance's description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The application instance's description.</p>
     */
    inline DescribeApplicationInstanceDetailsResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The application instance's description.</p>
     */
    inline DescribeApplicationInstanceDetailsResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The application instance's description.</p>
     */
    inline DescribeApplicationInstanceDetailsResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Parameter overrides for the configuration manifest.</p>
     */
    inline const ManifestOverridesPayload& GetManifestOverridesPayload() const{ return m_manifestOverridesPayload; }

    /**
     * <p>Parameter overrides for the configuration manifest.</p>
     */
    inline void SetManifestOverridesPayload(const ManifestOverridesPayload& value) { m_manifestOverridesPayload = value; }

    /**
     * <p>Parameter overrides for the configuration manifest.</p>
     */
    inline void SetManifestOverridesPayload(ManifestOverridesPayload&& value) { m_manifestOverridesPayload = std::move(value); }

    /**
     * <p>Parameter overrides for the configuration manifest.</p>
     */
    inline DescribeApplicationInstanceDetailsResult& WithManifestOverridesPayload(const ManifestOverridesPayload& value) { SetManifestOverridesPayload(value); return *this;}

    /**
     * <p>Parameter overrides for the configuration manifest.</p>
     */
    inline DescribeApplicationInstanceDetailsResult& WithManifestOverridesPayload(ManifestOverridesPayload&& value) { SetManifestOverridesPayload(std::move(value)); return *this;}


    /**
     * <p>The application instance's configuration manifest.</p>
     */
    inline const ManifestPayload& GetManifestPayload() const{ return m_manifestPayload; }

    /**
     * <p>The application instance's configuration manifest.</p>
     */
    inline void SetManifestPayload(const ManifestPayload& value) { m_manifestPayload = value; }

    /**
     * <p>The application instance's configuration manifest.</p>
     */
    inline void SetManifestPayload(ManifestPayload&& value) { m_manifestPayload = std::move(value); }

    /**
     * <p>The application instance's configuration manifest.</p>
     */
    inline DescribeApplicationInstanceDetailsResult& WithManifestPayload(const ManifestPayload& value) { SetManifestPayload(value); return *this;}

    /**
     * <p>The application instance's configuration manifest.</p>
     */
    inline DescribeApplicationInstanceDetailsResult& WithManifestPayload(ManifestPayload&& value) { SetManifestPayload(std::move(value)); return *this;}


    /**
     * <p>The application instance's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The application instance's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The application instance's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The application instance's name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The application instance's name.</p>
     */
    inline DescribeApplicationInstanceDetailsResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The application instance's name.</p>
     */
    inline DescribeApplicationInstanceDetailsResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The application instance's name.</p>
     */
    inline DescribeApplicationInstanceDetailsResult& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_applicationInstanceId;

    Aws::String m_applicationInstanceIdToReplace;

    Aws::Utils::DateTime m_createdTime;

    Aws::String m_defaultRuntimeContextDevice;

    Aws::String m_description;

    ManifestOverridesPayload m_manifestOverridesPayload;

    ManifestPayload m_manifestPayload;

    Aws::String m_name;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws

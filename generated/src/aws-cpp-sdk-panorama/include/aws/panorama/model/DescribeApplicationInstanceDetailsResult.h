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
    AWS_PANORAMA_API DescribeApplicationInstanceDetailsResult() = default;
    AWS_PANORAMA_API DescribeApplicationInstanceDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API DescribeApplicationInstanceDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The application instance's ID.</p>
     */
    inline const Aws::String& GetApplicationInstanceId() const { return m_applicationInstanceId; }
    template<typename ApplicationInstanceIdT = Aws::String>
    void SetApplicationInstanceId(ApplicationInstanceIdT&& value) { m_applicationInstanceIdHasBeenSet = true; m_applicationInstanceId = std::forward<ApplicationInstanceIdT>(value); }
    template<typename ApplicationInstanceIdT = Aws::String>
    DescribeApplicationInstanceDetailsResult& WithApplicationInstanceId(ApplicationInstanceIdT&& value) { SetApplicationInstanceId(std::forward<ApplicationInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the application instance that this instance replaced.</p>
     */
    inline const Aws::String& GetApplicationInstanceIdToReplace() const { return m_applicationInstanceIdToReplace; }
    template<typename ApplicationInstanceIdToReplaceT = Aws::String>
    void SetApplicationInstanceIdToReplace(ApplicationInstanceIdToReplaceT&& value) { m_applicationInstanceIdToReplaceHasBeenSet = true; m_applicationInstanceIdToReplace = std::forward<ApplicationInstanceIdToReplaceT>(value); }
    template<typename ApplicationInstanceIdToReplaceT = Aws::String>
    DescribeApplicationInstanceDetailsResult& WithApplicationInstanceIdToReplace(ApplicationInstanceIdToReplaceT&& value) { SetApplicationInstanceIdToReplace(std::forward<ApplicationInstanceIdToReplaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the application instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    DescribeApplicationInstanceDetailsResult& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application instance's default runtime context device.</p>
     */
    inline const Aws::String& GetDefaultRuntimeContextDevice() const { return m_defaultRuntimeContextDevice; }
    template<typename DefaultRuntimeContextDeviceT = Aws::String>
    void SetDefaultRuntimeContextDevice(DefaultRuntimeContextDeviceT&& value) { m_defaultRuntimeContextDeviceHasBeenSet = true; m_defaultRuntimeContextDevice = std::forward<DefaultRuntimeContextDeviceT>(value); }
    template<typename DefaultRuntimeContextDeviceT = Aws::String>
    DescribeApplicationInstanceDetailsResult& WithDefaultRuntimeContextDevice(DefaultRuntimeContextDeviceT&& value) { SetDefaultRuntimeContextDevice(std::forward<DefaultRuntimeContextDeviceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application instance's description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeApplicationInstanceDetailsResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Parameter overrides for the configuration manifest.</p>
     */
    inline const ManifestOverridesPayload& GetManifestOverridesPayload() const { return m_manifestOverridesPayload; }
    template<typename ManifestOverridesPayloadT = ManifestOverridesPayload>
    void SetManifestOverridesPayload(ManifestOverridesPayloadT&& value) { m_manifestOverridesPayloadHasBeenSet = true; m_manifestOverridesPayload = std::forward<ManifestOverridesPayloadT>(value); }
    template<typename ManifestOverridesPayloadT = ManifestOverridesPayload>
    DescribeApplicationInstanceDetailsResult& WithManifestOverridesPayload(ManifestOverridesPayloadT&& value) { SetManifestOverridesPayload(std::forward<ManifestOverridesPayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application instance's configuration manifest.</p>
     */
    inline const ManifestPayload& GetManifestPayload() const { return m_manifestPayload; }
    template<typename ManifestPayloadT = ManifestPayload>
    void SetManifestPayload(ManifestPayloadT&& value) { m_manifestPayloadHasBeenSet = true; m_manifestPayload = std::forward<ManifestPayloadT>(value); }
    template<typename ManifestPayloadT = ManifestPayload>
    DescribeApplicationInstanceDetailsResult& WithManifestPayload(ManifestPayloadT&& value) { SetManifestPayload(std::forward<ManifestPayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application instance's name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeApplicationInstanceDetailsResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeApplicationInstanceDetailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationInstanceId;
    bool m_applicationInstanceIdHasBeenSet = false;

    Aws::String m_applicationInstanceIdToReplace;
    bool m_applicationInstanceIdToReplaceHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_defaultRuntimeContextDevice;
    bool m_defaultRuntimeContextDeviceHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ManifestOverridesPayload m_manifestOverridesPayload;
    bool m_manifestOverridesPayloadHasBeenSet = false;

    ManifestPayload m_manifestPayload;
    bool m_manifestPayloadHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws

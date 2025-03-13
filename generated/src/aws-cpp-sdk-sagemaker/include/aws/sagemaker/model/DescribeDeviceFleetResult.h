/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/EdgeOutputConfig.h>
#include <aws/core/utils/DateTime.h>
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
namespace SageMaker
{
namespace Model
{
  class DescribeDeviceFleetResult
  {
  public:
    AWS_SAGEMAKER_API DescribeDeviceFleetResult() = default;
    AWS_SAGEMAKER_API DescribeDeviceFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeDeviceFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the fleet.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const { return m_deviceFleetName; }
    template<typename DeviceFleetNameT = Aws::String>
    void SetDeviceFleetName(DeviceFleetNameT&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::forward<DeviceFleetNameT>(value); }
    template<typename DeviceFleetNameT = Aws::String>
    DescribeDeviceFleetResult& WithDeviceFleetName(DeviceFleetNameT&& value) { SetDeviceFleetName(std::forward<DeviceFleetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline const Aws::String& GetDeviceFleetArn() const { return m_deviceFleetArn; }
    template<typename DeviceFleetArnT = Aws::String>
    void SetDeviceFleetArn(DeviceFleetArnT&& value) { m_deviceFleetArnHasBeenSet = true; m_deviceFleetArn = std::forward<DeviceFleetArnT>(value); }
    template<typename DeviceFleetArnT = Aws::String>
    DescribeDeviceFleetResult& WithDeviceFleetArn(DeviceFleetArnT&& value) { SetDeviceFleetArn(std::forward<DeviceFleetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output configuration for storing sampled data.</p>
     */
    inline const EdgeOutputConfig& GetOutputConfig() const { return m_outputConfig; }
    template<typename OutputConfigT = EdgeOutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = EdgeOutputConfig>
    DescribeDeviceFleetResult& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the fleet.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeDeviceFleetResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of when the device fleet was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeDeviceFleetResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of when the device fleet was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeDeviceFleetResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that has access to Amazon Web Services
     * Internet of Things (IoT).</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeDeviceFleetResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) alias created in Amazon Web Services Internet
     * of Things (IoT).</p>
     */
    inline const Aws::String& GetIotRoleAlias() const { return m_iotRoleAlias; }
    template<typename IotRoleAliasT = Aws::String>
    void SetIotRoleAlias(IotRoleAliasT&& value) { m_iotRoleAliasHasBeenSet = true; m_iotRoleAlias = std::forward<IotRoleAliasT>(value); }
    template<typename IotRoleAliasT = Aws::String>
    DescribeDeviceFleetResult& WithIotRoleAlias(IotRoleAliasT&& value) { SetIotRoleAlias(std::forward<IotRoleAliasT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDeviceFleetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceFleetName;
    bool m_deviceFleetNameHasBeenSet = false;

    Aws::String m_deviceFleetArn;
    bool m_deviceFleetArnHasBeenSet = false;

    EdgeOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_iotRoleAlias;
    bool m_iotRoleAliasHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

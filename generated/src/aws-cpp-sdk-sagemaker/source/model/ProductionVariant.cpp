/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ProductionVariant.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ProductionVariant::ProductionVariant(JsonView jsonValue) { *this = jsonValue; }

ProductionVariant& ProductionVariant::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("VariantName")) {
    m_variantName = jsonValue.GetString("VariantName");
    m_variantNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ModelName")) {
    m_modelName = jsonValue.GetString("ModelName");
    m_modelNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InitialInstanceCount")) {
    m_initialInstanceCount = jsonValue.GetInteger("InitialInstanceCount");
    m_initialInstanceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InstanceType")) {
    m_instanceType = ProductionVariantInstanceTypeMapper::GetProductionVariantInstanceTypeForName(jsonValue.GetString("InstanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InstancePools")) {
    Aws::Utils::Array<JsonView> instancePoolsJsonList = jsonValue.GetArray("InstancePools");
    for (unsigned instancePoolsIndex = 0; instancePoolsIndex < instancePoolsJsonList.GetLength(); ++instancePoolsIndex) {
      m_instancePools.push_back(instancePoolsJsonList[instancePoolsIndex].AsObject());
    }
    m_instancePoolsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VariantInstanceProvisionTimeoutInSeconds")) {
    m_variantInstanceProvisionTimeoutInSeconds = jsonValue.GetInteger("VariantInstanceProvisionTimeoutInSeconds");
    m_variantInstanceProvisionTimeoutInSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InitialVariantWeight")) {
    m_initialVariantWeight = jsonValue.GetDouble("InitialVariantWeight");
    m_initialVariantWeightHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AcceleratorType")) {
    m_acceleratorType =
        ProductionVariantAcceleratorTypeMapper::GetProductionVariantAcceleratorTypeForName(jsonValue.GetString("AcceleratorType"));
    m_acceleratorTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CoreDumpConfig")) {
    m_coreDumpConfig = jsonValue.GetObject("CoreDumpConfig");
    m_coreDumpConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ServerlessConfig")) {
    m_serverlessConfig = jsonValue.GetObject("ServerlessConfig");
    m_serverlessConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VolumeSizeInGB")) {
    m_volumeSizeInGB = jsonValue.GetInteger("VolumeSizeInGB");
    m_volumeSizeInGBHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ModelDataDownloadTimeoutInSeconds")) {
    m_modelDataDownloadTimeoutInSeconds = jsonValue.GetInteger("ModelDataDownloadTimeoutInSeconds");
    m_modelDataDownloadTimeoutInSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContainerStartupHealthCheckTimeoutInSeconds")) {
    m_containerStartupHealthCheckTimeoutInSeconds = jsonValue.GetInteger("ContainerStartupHealthCheckTimeoutInSeconds");
    m_containerStartupHealthCheckTimeoutInSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EnableSSMAccess")) {
    m_enableSSMAccess = jsonValue.GetBool("EnableSSMAccess");
    m_enableSSMAccessHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ManagedInstanceScaling")) {
    m_managedInstanceScaling = jsonValue.GetObject("ManagedInstanceScaling");
    m_managedInstanceScalingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoutingConfig")) {
    m_routingConfig = jsonValue.GetObject("RoutingConfig");
    m_routingConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InferenceAmiVersion")) {
    m_inferenceAmiVersion = ProductionVariantInferenceAmiVersionMapper::GetProductionVariantInferenceAmiVersionForName(
        jsonValue.GetString("InferenceAmiVersion"));
    m_inferenceAmiVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CapacityReservationConfig")) {
    m_capacityReservationConfig = jsonValue.GetObject("CapacityReservationConfig");
    m_capacityReservationConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AcceleratorPartitionLayouts")) {
    Aws::Utils::Array<JsonView> acceleratorPartitionLayoutsJsonList = jsonValue.GetArray("AcceleratorPartitionLayouts");
    for (unsigned acceleratorPartitionLayoutsIndex = 0; acceleratorPartitionLayoutsIndex < acceleratorPartitionLayoutsJsonList.GetLength();
         ++acceleratorPartitionLayoutsIndex) {
      m_acceleratorPartitionLayouts.push_back(acceleratorPartitionLayoutsJsonList[acceleratorPartitionLayoutsIndex].AsObject());
    }
    m_acceleratorPartitionLayoutsHasBeenSet = true;
  }
  return *this;
}

JsonValue ProductionVariant::Jsonize() const {
  JsonValue payload;

  if (m_variantNameHasBeenSet) {
    payload.WithString("VariantName", m_variantName);
  }

  if (m_modelNameHasBeenSet) {
    payload.WithString("ModelName", m_modelName);
  }

  if (m_initialInstanceCountHasBeenSet) {
    payload.WithInteger("InitialInstanceCount", m_initialInstanceCount);
  }

  if (m_instanceTypeHasBeenSet) {
    payload.WithString("InstanceType", ProductionVariantInstanceTypeMapper::GetNameForProductionVariantInstanceType(m_instanceType));
  }

  if (m_instancePoolsHasBeenSet) {
    Aws::Utils::Array<JsonValue> instancePoolsJsonList(m_instancePools.size());
    for (unsigned instancePoolsIndex = 0; instancePoolsIndex < instancePoolsJsonList.GetLength(); ++instancePoolsIndex) {
      instancePoolsJsonList[instancePoolsIndex].AsObject(m_instancePools[instancePoolsIndex].Jsonize());
    }
    payload.WithArray("InstancePools", std::move(instancePoolsJsonList));
  }

  if (m_variantInstanceProvisionTimeoutInSecondsHasBeenSet) {
    payload.WithInteger("VariantInstanceProvisionTimeoutInSeconds", m_variantInstanceProvisionTimeoutInSeconds);
  }

  if (m_initialVariantWeightHasBeenSet) {
    payload.WithDouble("InitialVariantWeight", m_initialVariantWeight);
  }

  if (m_acceleratorTypeHasBeenSet) {
    payload.WithString("AcceleratorType",
                       ProductionVariantAcceleratorTypeMapper::GetNameForProductionVariantAcceleratorType(m_acceleratorType));
  }

  if (m_coreDumpConfigHasBeenSet) {
    payload.WithObject("CoreDumpConfig", m_coreDumpConfig.Jsonize());
  }

  if (m_serverlessConfigHasBeenSet) {
    payload.WithObject("ServerlessConfig", m_serverlessConfig.Jsonize());
  }

  if (m_volumeSizeInGBHasBeenSet) {
    payload.WithInteger("VolumeSizeInGB", m_volumeSizeInGB);
  }

  if (m_modelDataDownloadTimeoutInSecondsHasBeenSet) {
    payload.WithInteger("ModelDataDownloadTimeoutInSeconds", m_modelDataDownloadTimeoutInSeconds);
  }

  if (m_containerStartupHealthCheckTimeoutInSecondsHasBeenSet) {
    payload.WithInteger("ContainerStartupHealthCheckTimeoutInSeconds", m_containerStartupHealthCheckTimeoutInSeconds);
  }

  if (m_enableSSMAccessHasBeenSet) {
    payload.WithBool("EnableSSMAccess", m_enableSSMAccess);
  }

  if (m_managedInstanceScalingHasBeenSet) {
    payload.WithObject("ManagedInstanceScaling", m_managedInstanceScaling.Jsonize());
  }

  if (m_routingConfigHasBeenSet) {
    payload.WithObject("RoutingConfig", m_routingConfig.Jsonize());
  }

  if (m_inferenceAmiVersionHasBeenSet) {
    payload.WithString("InferenceAmiVersion",
                       ProductionVariantInferenceAmiVersionMapper::GetNameForProductionVariantInferenceAmiVersion(m_inferenceAmiVersion));
  }

  if (m_capacityReservationConfigHasBeenSet) {
    payload.WithObject("CapacityReservationConfig", m_capacityReservationConfig.Jsonize());
  }

  if (m_acceleratorPartitionLayoutsHasBeenSet) {
    Aws::Utils::Array<JsonValue> acceleratorPartitionLayoutsJsonList(m_acceleratorPartitionLayouts.size());
    for (unsigned acceleratorPartitionLayoutsIndex = 0; acceleratorPartitionLayoutsIndex < acceleratorPartitionLayoutsJsonList.GetLength();
         ++acceleratorPartitionLayoutsIndex) {
      acceleratorPartitionLayoutsJsonList[acceleratorPartitionLayoutsIndex].AsObject(
          m_acceleratorPartitionLayouts[acceleratorPartitionLayoutsIndex].Jsonize());
    }
    payload.WithArray("AcceleratorPartitionLayouts", std::move(acceleratorPartitionLayoutsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

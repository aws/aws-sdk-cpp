/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/PendingProductionVariantSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

PendingProductionVariantSummary::PendingProductionVariantSummary(JsonView jsonValue) { *this = jsonValue; }

PendingProductionVariantSummary& PendingProductionVariantSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("VariantName")) {
    m_variantName = jsonValue.GetString("VariantName");
    m_variantNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeployedImages")) {
    Aws::Utils::Array<JsonView> deployedImagesJsonList = jsonValue.GetArray("DeployedImages");
    for (unsigned deployedImagesIndex = 0; deployedImagesIndex < deployedImagesJsonList.GetLength(); ++deployedImagesIndex) {
      m_deployedImages.push_back(deployedImagesJsonList[deployedImagesIndex].AsObject());
    }
    m_deployedImagesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CurrentWeight")) {
    m_currentWeight = jsonValue.GetDouble("CurrentWeight");
    m_currentWeightHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DesiredWeight")) {
    m_desiredWeight = jsonValue.GetDouble("DesiredWeight");
    m_desiredWeightHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CurrentInstanceCount")) {
    m_currentInstanceCount = jsonValue.GetInteger("CurrentInstanceCount");
    m_currentInstanceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DesiredInstanceCount")) {
    m_desiredInstanceCount = jsonValue.GetInteger("DesiredInstanceCount");
    m_desiredInstanceCountHasBeenSet = true;
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
  if (jsonValue.ValueExists("AcceleratorType")) {
    m_acceleratorType =
        ProductionVariantAcceleratorTypeMapper::GetProductionVariantAcceleratorTypeForName(jsonValue.GetString("AcceleratorType"));
    m_acceleratorTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VariantStatus")) {
    Aws::Utils::Array<JsonView> variantStatusJsonList = jsonValue.GetArray("VariantStatus");
    for (unsigned variantStatusIndex = 0; variantStatusIndex < variantStatusJsonList.GetLength(); ++variantStatusIndex) {
      m_variantStatus.push_back(variantStatusJsonList[variantStatusIndex].AsObject());
    }
    m_variantStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CurrentServerlessConfig")) {
    m_currentServerlessConfig = jsonValue.GetObject("CurrentServerlessConfig");
    m_currentServerlessConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DesiredServerlessConfig")) {
    m_desiredServerlessConfig = jsonValue.GetObject("DesiredServerlessConfig");
    m_desiredServerlessConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ManagedInstanceScaling")) {
    m_managedInstanceScaling = jsonValue.GetObject("ManagedInstanceScaling");
    m_managedInstanceScalingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoutingConfig")) {
    m_routingConfig = jsonValue.GetObject("RoutingConfig");
    m_routingConfigHasBeenSet = true;
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

JsonValue PendingProductionVariantSummary::Jsonize() const {
  JsonValue payload;

  if (m_variantNameHasBeenSet) {
    payload.WithString("VariantName", m_variantName);
  }

  if (m_deployedImagesHasBeenSet) {
    Aws::Utils::Array<JsonValue> deployedImagesJsonList(m_deployedImages.size());
    for (unsigned deployedImagesIndex = 0; deployedImagesIndex < deployedImagesJsonList.GetLength(); ++deployedImagesIndex) {
      deployedImagesJsonList[deployedImagesIndex].AsObject(m_deployedImages[deployedImagesIndex].Jsonize());
    }
    payload.WithArray("DeployedImages", std::move(deployedImagesJsonList));
  }

  if (m_currentWeightHasBeenSet) {
    payload.WithDouble("CurrentWeight", m_currentWeight);
  }

  if (m_desiredWeightHasBeenSet) {
    payload.WithDouble("DesiredWeight", m_desiredWeight);
  }

  if (m_currentInstanceCountHasBeenSet) {
    payload.WithInteger("CurrentInstanceCount", m_currentInstanceCount);
  }

  if (m_desiredInstanceCountHasBeenSet) {
    payload.WithInteger("DesiredInstanceCount", m_desiredInstanceCount);
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

  if (m_acceleratorTypeHasBeenSet) {
    payload.WithString("AcceleratorType",
                       ProductionVariantAcceleratorTypeMapper::GetNameForProductionVariantAcceleratorType(m_acceleratorType));
  }

  if (m_variantStatusHasBeenSet) {
    Aws::Utils::Array<JsonValue> variantStatusJsonList(m_variantStatus.size());
    for (unsigned variantStatusIndex = 0; variantStatusIndex < variantStatusJsonList.GetLength(); ++variantStatusIndex) {
      variantStatusJsonList[variantStatusIndex].AsObject(m_variantStatus[variantStatusIndex].Jsonize());
    }
    payload.WithArray("VariantStatus", std::move(variantStatusJsonList));
  }

  if (m_currentServerlessConfigHasBeenSet) {
    payload.WithObject("CurrentServerlessConfig", m_currentServerlessConfig.Jsonize());
  }

  if (m_desiredServerlessConfigHasBeenSet) {
    payload.WithObject("DesiredServerlessConfig", m_desiredServerlessConfig.Jsonize());
  }

  if (m_managedInstanceScalingHasBeenSet) {
    payload.WithObject("ManagedInstanceScaling", m_managedInstanceScaling.Jsonize());
  }

  if (m_routingConfigHasBeenSet) {
    payload.WithObject("RoutingConfig", m_routingConfig.Jsonize());
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

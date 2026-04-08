/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/FulfillmentOption.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

FulfillmentOption::FulfillmentOption(JsonView jsonValue) { *this = jsonValue; }

FulfillmentOption& FulfillmentOption::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("amazonMachineImageFulfillmentOption")) {
    m_amazonMachineImageFulfillmentOption = jsonValue.GetObject("amazonMachineImageFulfillmentOption");
    m_amazonMachineImageFulfillmentOptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("apiFulfillmentOption")) {
    m_apiFulfillmentOption = jsonValue.GetObject("apiFulfillmentOption");
    m_apiFulfillmentOptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cloudFormationFulfillmentOption")) {
    m_cloudFormationFulfillmentOption = jsonValue.GetObject("cloudFormationFulfillmentOption");
    m_cloudFormationFulfillmentOptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("containerFulfillmentOption")) {
    m_containerFulfillmentOption = jsonValue.GetObject("containerFulfillmentOption");
    m_containerFulfillmentOptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("helmFulfillmentOption")) {
    m_helmFulfillmentOption = jsonValue.GetObject("helmFulfillmentOption");
    m_helmFulfillmentOptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eksAddOnFulfillmentOption")) {
    m_eksAddOnFulfillmentOption = jsonValue.GetObject("eksAddOnFulfillmentOption");
    m_eksAddOnFulfillmentOptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ec2ImageBuilderComponentFulfillmentOption")) {
    m_ec2ImageBuilderComponentFulfillmentOption = jsonValue.GetObject("ec2ImageBuilderComponentFulfillmentOption");
    m_ec2ImageBuilderComponentFulfillmentOptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataExchangeFulfillmentOption")) {
    m_dataExchangeFulfillmentOption = jsonValue.GetObject("dataExchangeFulfillmentOption");
    m_dataExchangeFulfillmentOptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("professionalServicesFulfillmentOption")) {
    m_professionalServicesFulfillmentOption = jsonValue.GetObject("professionalServicesFulfillmentOption");
    m_professionalServicesFulfillmentOptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("saasFulfillmentOption")) {
    m_saasFulfillmentOption = jsonValue.GetObject("saasFulfillmentOption");
    m_saasFulfillmentOptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sageMakerAlgorithmFulfillmentOption")) {
    m_sageMakerAlgorithmFulfillmentOption = jsonValue.GetObject("sageMakerAlgorithmFulfillmentOption");
    m_sageMakerAlgorithmFulfillmentOptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sageMakerModelFulfillmentOption")) {
    m_sageMakerModelFulfillmentOption = jsonValue.GetObject("sageMakerModelFulfillmentOption");
    m_sageMakerModelFulfillmentOptionHasBeenSet = true;
  }
  return *this;
}

JsonValue FulfillmentOption::Jsonize() const {
  JsonValue payload;

  if (m_amazonMachineImageFulfillmentOptionHasBeenSet) {
    payload.WithObject("amazonMachineImageFulfillmentOption", m_amazonMachineImageFulfillmentOption.Jsonize());
  }

  if (m_apiFulfillmentOptionHasBeenSet) {
    payload.WithObject("apiFulfillmentOption", m_apiFulfillmentOption.Jsonize());
  }

  if (m_cloudFormationFulfillmentOptionHasBeenSet) {
    payload.WithObject("cloudFormationFulfillmentOption", m_cloudFormationFulfillmentOption.Jsonize());
  }

  if (m_containerFulfillmentOptionHasBeenSet) {
    payload.WithObject("containerFulfillmentOption", m_containerFulfillmentOption.Jsonize());
  }

  if (m_helmFulfillmentOptionHasBeenSet) {
    payload.WithObject("helmFulfillmentOption", m_helmFulfillmentOption.Jsonize());
  }

  if (m_eksAddOnFulfillmentOptionHasBeenSet) {
    payload.WithObject("eksAddOnFulfillmentOption", m_eksAddOnFulfillmentOption.Jsonize());
  }

  if (m_ec2ImageBuilderComponentFulfillmentOptionHasBeenSet) {
    payload.WithObject("ec2ImageBuilderComponentFulfillmentOption", m_ec2ImageBuilderComponentFulfillmentOption.Jsonize());
  }

  if (m_dataExchangeFulfillmentOptionHasBeenSet) {
    payload.WithObject("dataExchangeFulfillmentOption", m_dataExchangeFulfillmentOption.Jsonize());
  }

  if (m_professionalServicesFulfillmentOptionHasBeenSet) {
    payload.WithObject("professionalServicesFulfillmentOption", m_professionalServicesFulfillmentOption.Jsonize());
  }

  if (m_saasFulfillmentOptionHasBeenSet) {
    payload.WithObject("saasFulfillmentOption", m_saasFulfillmentOption.Jsonize());
  }

  if (m_sageMakerAlgorithmFulfillmentOptionHasBeenSet) {
    payload.WithObject("sageMakerAlgorithmFulfillmentOption", m_sageMakerAlgorithmFulfillmentOption.Jsonize());
  }

  if (m_sageMakerModelFulfillmentOptionHasBeenSet) {
    payload.WithObject("sageMakerModelFulfillmentOption", m_sageMakerModelFulfillmentOption.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws

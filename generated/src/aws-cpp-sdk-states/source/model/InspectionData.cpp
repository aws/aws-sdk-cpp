/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/states/model/InspectionData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SFN {
namespace Model {

InspectionData::InspectionData(JsonView jsonValue) { *this = jsonValue; }

InspectionData& InspectionData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("input")) {
    m_input = jsonValue.GetString("input");
    m_inputHasBeenSet = true;
  }
  if (jsonValue.ValueExists("afterArguments")) {
    m_afterArguments = jsonValue.GetString("afterArguments");
    m_afterArgumentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("afterInputPath")) {
    m_afterInputPath = jsonValue.GetString("afterInputPath");
    m_afterInputPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("afterParameters")) {
    m_afterParameters = jsonValue.GetString("afterParameters");
    m_afterParametersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("result")) {
    m_result = jsonValue.GetString("result");
    m_resultHasBeenSet = true;
  }
  if (jsonValue.ValueExists("afterResultSelector")) {
    m_afterResultSelector = jsonValue.GetString("afterResultSelector");
    m_afterResultSelectorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("afterResultPath")) {
    m_afterResultPath = jsonValue.GetString("afterResultPath");
    m_afterResultPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("request")) {
    m_request = jsonValue.GetObject("request");
    m_requestHasBeenSet = true;
  }
  if (jsonValue.ValueExists("response")) {
    m_response = jsonValue.GetObject("response");
    m_responseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("variables")) {
    m_variables = jsonValue.GetString("variables");
    m_variablesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorDetails")) {
    m_errorDetails = jsonValue.GetObject("errorDetails");
    m_errorDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("afterItemsPath")) {
    m_afterItemsPath = jsonValue.GetString("afterItemsPath");
    m_afterItemsPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("afterItemSelector")) {
    m_afterItemSelector = jsonValue.GetString("afterItemSelector");
    m_afterItemSelectorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("afterItemBatcher")) {
    m_afterItemBatcher = jsonValue.GetString("afterItemBatcher");
    m_afterItemBatcherHasBeenSet = true;
  }
  if (jsonValue.ValueExists("afterItemsPointer")) {
    m_afterItemsPointer = jsonValue.GetString("afterItemsPointer");
    m_afterItemsPointerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("toleratedFailureCount")) {
    m_toleratedFailureCount = jsonValue.GetInteger("toleratedFailureCount");
    m_toleratedFailureCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("toleratedFailurePercentage")) {
    m_toleratedFailurePercentage = jsonValue.GetDouble("toleratedFailurePercentage");
    m_toleratedFailurePercentageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxConcurrency")) {
    m_maxConcurrency = jsonValue.GetInteger("maxConcurrency");
    m_maxConcurrencyHasBeenSet = true;
  }
  return *this;
}

JsonValue InspectionData::Jsonize() const {
  JsonValue payload;

  if (m_inputHasBeenSet) {
    payload.WithString("input", m_input);
  }

  if (m_afterArgumentsHasBeenSet) {
    payload.WithString("afterArguments", m_afterArguments);
  }

  if (m_afterInputPathHasBeenSet) {
    payload.WithString("afterInputPath", m_afterInputPath);
  }

  if (m_afterParametersHasBeenSet) {
    payload.WithString("afterParameters", m_afterParameters);
  }

  if (m_resultHasBeenSet) {
    payload.WithString("result", m_result);
  }

  if (m_afterResultSelectorHasBeenSet) {
    payload.WithString("afterResultSelector", m_afterResultSelector);
  }

  if (m_afterResultPathHasBeenSet) {
    payload.WithString("afterResultPath", m_afterResultPath);
  }

  if (m_requestHasBeenSet) {
    payload.WithObject("request", m_request.Jsonize());
  }

  if (m_responseHasBeenSet) {
    payload.WithObject("response", m_response.Jsonize());
  }

  if (m_variablesHasBeenSet) {
    payload.WithString("variables", m_variables);
  }

  if (m_errorDetailsHasBeenSet) {
    payload.WithObject("errorDetails", m_errorDetails.Jsonize());
  }

  if (m_afterItemsPathHasBeenSet) {
    payload.WithString("afterItemsPath", m_afterItemsPath);
  }

  if (m_afterItemSelectorHasBeenSet) {
    payload.WithString("afterItemSelector", m_afterItemSelector);
  }

  if (m_afterItemBatcherHasBeenSet) {
    payload.WithString("afterItemBatcher", m_afterItemBatcher);
  }

  if (m_afterItemsPointerHasBeenSet) {
    payload.WithString("afterItemsPointer", m_afterItemsPointer);
  }

  if (m_toleratedFailureCountHasBeenSet) {
    payload.WithInteger("toleratedFailureCount", m_toleratedFailureCount);
  }

  if (m_toleratedFailurePercentageHasBeenSet) {
    payload.WithDouble("toleratedFailurePercentage", m_toleratedFailurePercentage);
  }

  if (m_maxConcurrencyHasBeenSet) {
    payload.WithInteger("maxConcurrency", m_maxConcurrency);
  }

  return payload;
}

}  // namespace Model
}  // namespace SFN
}  // namespace Aws

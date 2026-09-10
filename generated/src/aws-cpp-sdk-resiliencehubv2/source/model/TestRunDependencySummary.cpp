/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/TestRunDependencySummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

TestRunDependencySummary::TestRunDependencySummary(JsonView jsonValue) { *this = jsonValue; }

TestRunDependencySummary& TestRunDependencySummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dependencyId")) {
    m_dependencyId = jsonValue.GetString("dependencyId");
    m_dependencyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dependencyName")) {
    m_dependencyName = jsonValue.GetString("dependencyName");
    m_dependencyNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dnsName")) {
    m_dnsName = jsonValue.GetString("dnsName");
    m_dnsNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("criticality")) {
    m_criticality = DependencyCriticalityMapper::GetDependencyCriticalityForName(jsonValue.GetString("criticality"));
    m_criticalityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("source")) {
    m_source = TestRunDependencySourceMapper::GetTestRunDependencySourceForName(jsonValue.GetString("source"));
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("location")) {
    m_location = jsonValue.GetString("location");
    m_locationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceRegions")) {
    Aws::Utils::Array<JsonView> sourceRegionsJsonList = jsonValue.GetArray("sourceRegions");
    for (unsigned sourceRegionsIndex = 0; sourceRegionsIndex < sourceRegionsJsonList.GetLength(); ++sourceRegionsIndex) {
      m_sourceRegions.push_back(sourceRegionsJsonList[sourceRegionsIndex].AsString());
    }
    m_sourceRegionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("provider")) {
    m_provider = jsonValue.GetString("provider");
    m_providerHasBeenSet = true;
  }
  return *this;
}

JsonValue TestRunDependencySummary::Jsonize() const {
  JsonValue payload;

  if (m_dependencyIdHasBeenSet) {
    payload.WithString("dependencyId", m_dependencyId);
  }

  if (m_dependencyNameHasBeenSet) {
    payload.WithString("dependencyName", m_dependencyName);
  }

  if (m_dnsNameHasBeenSet) {
    payload.WithString("dnsName", m_dnsName);
  }

  if (m_criticalityHasBeenSet) {
    payload.WithString("criticality", DependencyCriticalityMapper::GetNameForDependencyCriticality(m_criticality));
  }

  if (m_sourceHasBeenSet) {
    payload.WithString("source", TestRunDependencySourceMapper::GetNameForTestRunDependencySource(m_source));
  }

  if (m_locationHasBeenSet) {
    payload.WithString("location", m_location);
  }

  if (m_sourceRegionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourceRegionsJsonList(m_sourceRegions.size());
    for (unsigned sourceRegionsIndex = 0; sourceRegionsIndex < sourceRegionsJsonList.GetLength(); ++sourceRegionsIndex) {
      sourceRegionsJsonList[sourceRegionsIndex].AsString(m_sourceRegions[sourceRegionsIndex]);
    }
    payload.WithArray("sourceRegions", std::move(sourceRegionsJsonList));
  }

  if (m_providerHasBeenSet) {
    payload.WithString("provider", m_provider);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws

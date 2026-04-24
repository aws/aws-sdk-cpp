/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/CompositeFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

CompositeFilter::CompositeFilter(JsonView jsonValue) { *this = jsonValue; }

CompositeFilter& CompositeFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StringFilters")) {
    Aws::Utils::Array<JsonView> stringFiltersJsonList = jsonValue.GetArray("StringFilters");
    for (unsigned stringFiltersIndex = 0; stringFiltersIndex < stringFiltersJsonList.GetLength(); ++stringFiltersIndex) {
      m_stringFilters.push_back(stringFiltersJsonList[stringFiltersIndex].AsObject());
    }
    m_stringFiltersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DateFilters")) {
    Aws::Utils::Array<JsonView> dateFiltersJsonList = jsonValue.GetArray("DateFilters");
    for (unsigned dateFiltersIndex = 0; dateFiltersIndex < dateFiltersJsonList.GetLength(); ++dateFiltersIndex) {
      m_dateFilters.push_back(dateFiltersJsonList[dateFiltersIndex].AsObject());
    }
    m_dateFiltersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BooleanFilters")) {
    Aws::Utils::Array<JsonView> booleanFiltersJsonList = jsonValue.GetArray("BooleanFilters");
    for (unsigned booleanFiltersIndex = 0; booleanFiltersIndex < booleanFiltersJsonList.GetLength(); ++booleanFiltersIndex) {
      m_booleanFilters.push_back(booleanFiltersJsonList[booleanFiltersIndex].AsObject());
    }
    m_booleanFiltersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NumberFilters")) {
    Aws::Utils::Array<JsonView> numberFiltersJsonList = jsonValue.GetArray("NumberFilters");
    for (unsigned numberFiltersIndex = 0; numberFiltersIndex < numberFiltersJsonList.GetLength(); ++numberFiltersIndex) {
      m_numberFilters.push_back(numberFiltersJsonList[numberFiltersIndex].AsObject());
    }
    m_numberFiltersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MapFilters")) {
    Aws::Utils::Array<JsonView> mapFiltersJsonList = jsonValue.GetArray("MapFilters");
    for (unsigned mapFiltersIndex = 0; mapFiltersIndex < mapFiltersJsonList.GetLength(); ++mapFiltersIndex) {
      m_mapFilters.push_back(mapFiltersJsonList[mapFiltersIndex].AsObject());
    }
    m_mapFiltersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IpFilters")) {
    Aws::Utils::Array<JsonView> ipFiltersJsonList = jsonValue.GetArray("IpFilters");
    for (unsigned ipFiltersIndex = 0; ipFiltersIndex < ipFiltersJsonList.GetLength(); ++ipFiltersIndex) {
      m_ipFilters.push_back(ipFiltersJsonList[ipFiltersIndex].AsObject());
    }
    m_ipFiltersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NestedCompositeFilters")) {
    Aws::Utils::Array<JsonView> nestedCompositeFiltersJsonList = jsonValue.GetArray("NestedCompositeFilters");
    for (unsigned nestedCompositeFiltersIndex = 0; nestedCompositeFiltersIndex < nestedCompositeFiltersJsonList.GetLength();
         ++nestedCompositeFiltersIndex) {
      m_nestedCompositeFilters.push_back(nestedCompositeFiltersJsonList[nestedCompositeFiltersIndex].AsObject());
    }
    m_nestedCompositeFiltersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Operator")) {
    m_operator = AllowedOperatorsMapper::GetAllowedOperatorsForName(jsonValue.GetString("Operator"));
    m_operatorHasBeenSet = true;
  }
  return *this;
}

JsonValue CompositeFilter::Jsonize() const {
  JsonValue payload;

  if (m_stringFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> stringFiltersJsonList(m_stringFilters.size());
    for (unsigned stringFiltersIndex = 0; stringFiltersIndex < stringFiltersJsonList.GetLength(); ++stringFiltersIndex) {
      stringFiltersJsonList[stringFiltersIndex].AsObject(m_stringFilters[stringFiltersIndex].Jsonize());
    }
    payload.WithArray("StringFilters", std::move(stringFiltersJsonList));
  }

  if (m_dateFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> dateFiltersJsonList(m_dateFilters.size());
    for (unsigned dateFiltersIndex = 0; dateFiltersIndex < dateFiltersJsonList.GetLength(); ++dateFiltersIndex) {
      dateFiltersJsonList[dateFiltersIndex].AsObject(m_dateFilters[dateFiltersIndex].Jsonize());
    }
    payload.WithArray("DateFilters", std::move(dateFiltersJsonList));
  }

  if (m_booleanFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> booleanFiltersJsonList(m_booleanFilters.size());
    for (unsigned booleanFiltersIndex = 0; booleanFiltersIndex < booleanFiltersJsonList.GetLength(); ++booleanFiltersIndex) {
      booleanFiltersJsonList[booleanFiltersIndex].AsObject(m_booleanFilters[booleanFiltersIndex].Jsonize());
    }
    payload.WithArray("BooleanFilters", std::move(booleanFiltersJsonList));
  }

  if (m_numberFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> numberFiltersJsonList(m_numberFilters.size());
    for (unsigned numberFiltersIndex = 0; numberFiltersIndex < numberFiltersJsonList.GetLength(); ++numberFiltersIndex) {
      numberFiltersJsonList[numberFiltersIndex].AsObject(m_numberFilters[numberFiltersIndex].Jsonize());
    }
    payload.WithArray("NumberFilters", std::move(numberFiltersJsonList));
  }

  if (m_mapFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> mapFiltersJsonList(m_mapFilters.size());
    for (unsigned mapFiltersIndex = 0; mapFiltersIndex < mapFiltersJsonList.GetLength(); ++mapFiltersIndex) {
      mapFiltersJsonList[mapFiltersIndex].AsObject(m_mapFilters[mapFiltersIndex].Jsonize());
    }
    payload.WithArray("MapFilters", std::move(mapFiltersJsonList));
  }

  if (m_ipFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> ipFiltersJsonList(m_ipFilters.size());
    for (unsigned ipFiltersIndex = 0; ipFiltersIndex < ipFiltersJsonList.GetLength(); ++ipFiltersIndex) {
      ipFiltersJsonList[ipFiltersIndex].AsObject(m_ipFilters[ipFiltersIndex].Jsonize());
    }
    payload.WithArray("IpFilters", std::move(ipFiltersJsonList));
  }

  if (m_nestedCompositeFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> nestedCompositeFiltersJsonList(m_nestedCompositeFilters.size());
    for (unsigned nestedCompositeFiltersIndex = 0; nestedCompositeFiltersIndex < nestedCompositeFiltersJsonList.GetLength();
         ++nestedCompositeFiltersIndex) {
      nestedCompositeFiltersJsonList[nestedCompositeFiltersIndex].AsObject(m_nestedCompositeFilters[nestedCompositeFiltersIndex].Jsonize());
    }
    payload.WithArray("NestedCompositeFilters", std::move(nestedCompositeFiltersJsonList));
  }

  if (m_operatorHasBeenSet) {
    payload.WithString("Operator", AllowedOperatorsMapper::GetNameForAllowedOperators(m_operator));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws

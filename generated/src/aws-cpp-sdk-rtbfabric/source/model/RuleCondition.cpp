/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/RuleCondition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

RuleCondition::RuleCondition(JsonView jsonValue) { *this = jsonValue; }

RuleCondition& RuleCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("hostHeader")) {
    m_hostHeader = jsonValue.GetString("hostHeader");
    m_hostHeaderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hostHeaderWildcard")) {
    m_hostHeaderWildcard = jsonValue.GetString("hostHeaderWildcard");
    m_hostHeaderWildcardHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pathPrefix")) {
    m_pathPrefix = jsonValue.GetString("pathPrefix");
    m_pathPrefixHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pathExact")) {
    m_pathExact = jsonValue.GetString("pathExact");
    m_pathExactHasBeenSet = true;
  }
  if (jsonValue.ValueExists("queryStringEquals")) {
    m_queryStringEquals = jsonValue.GetObject("queryStringEquals");
    m_queryStringEqualsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("queryStringExists")) {
    m_queryStringExists = jsonValue.GetString("queryStringExists");
    m_queryStringExistsHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleCondition::Jsonize() const {
  JsonValue payload;

  if (m_hostHeaderHasBeenSet) {
    payload.WithString("hostHeader", m_hostHeader);
  }

  if (m_hostHeaderWildcardHasBeenSet) {
    payload.WithString("hostHeaderWildcard", m_hostHeaderWildcard);
  }

  if (m_pathPrefixHasBeenSet) {
    payload.WithString("pathPrefix", m_pathPrefix);
  }

  if (m_pathExactHasBeenSet) {
    payload.WithString("pathExact", m_pathExact);
  }

  if (m_queryStringEqualsHasBeenSet) {
    payload.WithObject("queryStringEquals", m_queryStringEquals.Jsonize());
  }

  if (m_queryStringExistsHasBeenSet) {
    payload.WithString("queryStringExists", m_queryStringExists);
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws

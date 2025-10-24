﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/vpc-lattice/model/PathMatch.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace VPCLattice {
namespace Model {

PathMatch::PathMatch(JsonView jsonValue) { *this = jsonValue; }

PathMatch& PathMatch::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("match")) {
    m_match = jsonValue.GetObject("match");
    m_matchHasBeenSet = true;
  }
  if (jsonValue.ValueExists("caseSensitive")) {
    m_caseSensitive = jsonValue.GetBool("caseSensitive");
    m_caseSensitiveHasBeenSet = true;
  }
  return *this;
}

JsonValue PathMatch::Jsonize() const {
  JsonValue payload;

  if (m_matchHasBeenSet) {
    payload.WithObject("match", m_match.Jsonize());
  }

  if (m_caseSensitiveHasBeenSet) {
    payload.WithBool("caseSensitive", m_caseSensitive);
  }

  return payload;
}

}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws

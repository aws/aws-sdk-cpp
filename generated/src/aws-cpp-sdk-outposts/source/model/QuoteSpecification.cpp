/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/outposts/model/QuoteSpecification.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {

QuoteSpecification::QuoteSpecification(JsonView jsonValue) { *this = jsonValue; }

QuoteSpecification& QuoteSpecification::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("QuoteSpecificationType")) {
    m_quoteSpecificationType =
        QuoteSpecificationTypeMapper::GetQuoteSpecificationTypeForName(jsonValue.GetString("QuoteSpecificationType"));
    m_quoteSpecificationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExistingRackSpecificationDetails")) {
    m_existingRackSpecificationDetails = jsonValue.GetObject("ExistingRackSpecificationDetails");
    m_existingRackSpecificationDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FinalRackSpecificationDetails")) {
    m_finalRackSpecificationDetails = jsonValue.GetObject("FinalRackSpecificationDetails");
    m_finalRackSpecificationDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ServerSpecificationDetails")) {
    m_serverSpecificationDetails = jsonValue.GetObject("ServerSpecificationDetails");
    m_serverSpecificationDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue QuoteSpecification::Jsonize() const {
  JsonValue payload;

  if (m_quoteSpecificationTypeHasBeenSet) {
    payload.WithString("QuoteSpecificationType", QuoteSpecificationTypeMapper::GetNameForQuoteSpecificationType(m_quoteSpecificationType));
  }

  if (m_existingRackSpecificationDetailsHasBeenSet) {
    payload.WithObject("ExistingRackSpecificationDetails", m_existingRackSpecificationDetails.Jsonize());
  }

  if (m_finalRackSpecificationDetailsHasBeenSet) {
    payload.WithObject("FinalRackSpecificationDetails", m_finalRackSpecificationDetails.Jsonize());
  }

  if (m_serverSpecificationDetailsHasBeenSet) {
    payload.WithObject("ServerSpecificationDetails", m_serverSpecificationDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws

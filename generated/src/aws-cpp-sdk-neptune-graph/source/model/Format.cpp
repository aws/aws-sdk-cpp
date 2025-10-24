﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/neptune-graph/model/Format.h>

using namespace Aws::Utils;

namespace Aws {
namespace NeptuneGraph {
namespace Model {
namespace FormatMapper {

static const int CSV_HASH = HashingUtils::HashString("CSV");
static const int OPEN_CYPHER_HASH = HashingUtils::HashString("OPEN_CYPHER");
static const int PARQUET_HASH = HashingUtils::HashString("PARQUET");
static const int NTRIPLES_HASH = HashingUtils::HashString("NTRIPLES");

Format GetFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CSV_HASH) {
    return Format::CSV;
  } else if (hashCode == OPEN_CYPHER_HASH) {
    return Format::OPEN_CYPHER;
  } else if (hashCode == PARQUET_HASH) {
    return Format::PARQUET;
  } else if (hashCode == NTRIPLES_HASH) {
    return Format::NTRIPLES;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<Format>(hashCode);
  }

  return Format::NOT_SET;
}

Aws::String GetNameForFormat(Format enumValue) {
  switch (enumValue) {
    case Format::NOT_SET:
      return {};
    case Format::CSV:
      return "CSV";
    case Format::OPEN_CYPHER:
      return "OPEN_CYPHER";
    case Format::PARQUET:
      return "PARQUET";
    case Format::NTRIPLES:
      return "NTRIPLES";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FormatMapper
}  // namespace Model
}  // namespace NeptuneGraph
}  // namespace Aws

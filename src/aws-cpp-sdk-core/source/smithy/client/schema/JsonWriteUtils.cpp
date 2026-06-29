/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/memory/stl/AWSArray.h>
#include <smithy/client/schema/JsonWriteUtils.h>

namespace {

static const Aws::Array<char, 16> HEX = {{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'}};

void EscapeChar(Aws::String& buf, unsigned char c) {
  switch (c) {
    case '\"':
      buf += "\\\"";
      break;
    case '\\':
      buf += "\\\\";
      break;
    case '\b':
      buf += "\\b";
      break;
    case '\f':
      buf += "\\f";
      break;
    case '\n':
      buf += "\\n";
      break;
    case '\r':
      buf += "\\r";
      break;
    case '\t':
      buf += "\\t";
      break;
    default:
      buf += "\\u00";
      buf += HEX[(c >> 4) & 0xF];
      buf += HEX[c & 0xF];
      break;
  }
}

bool NeedsEscape(unsigned char c) { return c < 0x20 || c == '"' || c == '\\'; }

}  // anonymous namespace

namespace Aws {
namespace Schema {

void WriteQuotedJsonString(Aws::String& buf, const Aws::String& value) {
  buf += '"';
  const char* data = value.data();
  const size_t len = value.size();

  size_t i = 0;
  while (i < len) {
    size_t start = i;
    while (i < len) {
      unsigned char c = static_cast<unsigned char>(data[i]);
      if (c < 0x80 && NeedsEscape(c)) break;
      i++;
    }
    if (i > start) {
      buf.append(data + start, i - start);
    }
    if (i < len) {
      EscapeChar(buf, static_cast<unsigned char>(data[i]));
      i++;
    }
  }
  buf += '"';
}

}  // namespace Schema
}  // namespace Aws

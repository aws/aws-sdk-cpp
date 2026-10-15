/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/Optional.h>
#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/SerdeTraits.h>

#include <cstdint>

namespace smithy {
namespace schema {

/**
 * Text forms of member values bound to HTTP headers, query parameters and URI labels (Smithy HTTP
 * binding rules), shared by the binding serializer and deserializer.
 */
namespace HttpBindingValues {

// --- request (format) ---------------------------------------------------------------------------

/** {@code true} / {@code false}. */
SMITHY_API Aws::String FormatBoolean(bool value);

/** Shortest text that round-trips the double; {@code NaN} / {@code Infinity} / {@code -Infinity} when non-finite. */
SMITHY_API Aws::String FormatDouble(double value);

/**
 * Percent-encodes everything except the RFC 3986 unreserved characters ({@code A-Za-z0-9-._~}); with
 * {@code preserveSlashes} (greedy labels) {@code /} is kept too.
 */
SMITHY_API Aws::String EncodeUnreserved(const Aws::String& value, bool preserveSlashes);

/**
 * Joins list header values with {@code ", "}. Unless {@code quoteElements} is false (HTTP-date
 * timestamps, whose commas are part of the value), an element containing {@code ,} or {@code "} is
 * wrapped in double quotes with {@code "} and {@code \} backslash-escaped.
 */
SMITHY_API Aws::String JoinHeaderList(const Aws::Vector<Aws::String>& values, bool quoteElements = true);

// --- response (parse) ---------------------------------------------------------------------------

/** Exactly {@code true} / {@code false}; anything else is empty. */
SMITHY_API Aws::Crt::Optional<bool> ParseBoolean(const Aws::String& text);

/** A whole base-10 integer (surrounding whitespace allowed); anything else is empty. */
SMITHY_API Aws::Crt::Optional<int64_t> ParseInteger(const Aws::String& text);

/** A decimal number or {@code NaN} / {@code Infinity} / {@code -Infinity}; anything else is empty. */
SMITHY_API Aws::Crt::Optional<double> ParseDouble(const Aws::String& text);

/** A timestamp in {@code format}; empty when it does not parse. */
SMITHY_API Aws::Crt::Optional<Aws::Utils::DateTime> ParseTimestamp(const Aws::String& text, TimestampFormatTrait::Format format);

/**
 * Splits a list header value on commas outside double quotes, trimming unquoted whitespace; a quoted
 * element is unquoted and unescaped ({@code \x} → {@code x}) with its inner whitespace kept.
 */
SMITHY_API Aws::Vector<Aws::String> SplitHeaderList(const Aws::String& value);

/** Splits a list of HTTP-date timestamps, whose own commas mean every second comma is the separator. */
SMITHY_API Aws::Vector<Aws::String> SplitHttpDateList(const Aws::String& value);

/** True for hop-by-hop / transport header names (lowercase) that an {@code @httpPrefixHeaders} map never collects. */
SMITHY_API bool IsOmittedPrefixHeader(const Aws::String& lowercaseName);

}  // namespace HttpBindingValues
}  // namespace schema
}  // namespace smithy

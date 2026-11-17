/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>
#include <smithy/client/schema/Trait.h>
#include <smithy/client/schema/TraitKey.h>

namespace smithy {
namespace schema {

/** {@code @httpHeader}: the member binds to the named HTTP header. */
class HttpHeaderTrait : public Trait {
 public:
  explicit HttpHeaderTrait(const Aws::String& name) : m_name(name) {}
  const Aws::String& GetName() const { return m_name; }
  static const TraitKey<HttpHeaderTrait>& KEY() { return TraitKey<HttpHeaderTrait>::Instance(); }

 private:
  Aws::String m_name;
};

/** {@code @httpPrefixHeaders}: a map member binds to every header starting with the prefix (may be empty). */
class HttpPrefixHeadersTrait : public Trait {
 public:
  explicit HttpPrefixHeadersTrait(const Aws::String& prefix) : m_prefix(prefix) {}
  const Aws::String& GetPrefix() const { return m_prefix; }
  static const TraitKey<HttpPrefixHeadersTrait>& KEY() { return TraitKey<HttpPrefixHeadersTrait>::Instance(); }

 private:
  Aws::String m_prefix;
};

/** {@code @httpQuery}: the member binds to the named query-string parameter. */
class HttpQueryTrait : public Trait {
 public:
  explicit HttpQueryTrait(const Aws::String& name) : m_name(name) {}
  const Aws::String& GetName() const { return m_name; }
  static const TraitKey<HttpQueryTrait>& KEY() { return TraitKey<HttpQueryTrait>::Instance(); }

 private:
  Aws::String m_name;
};

/** {@code @httpQueryParams}: a map member binds to arbitrary query-string parameters. */
class HttpQueryParamsTrait : public Trait {
 public:
  static const TraitKey<HttpQueryParamsTrait>& KEY() { return TraitKey<HttpQueryParamsTrait>::Instance(); }
};

/** {@code @httpLabel}: the member fills the same-named {@code {label}} of the operation URI pattern. */
class HttpLabelTrait : public Trait {
 public:
  static const TraitKey<HttpLabelTrait>& KEY() { return TraitKey<HttpLabelTrait>::Instance(); }
};

/** {@code @httpPayload}: the member is the entire HTTP body. */
class HttpPayloadTrait : public Trait {
 public:
  static const TraitKey<HttpPayloadTrait>& KEY() { return TraitKey<HttpPayloadTrait>::Instance(); }
};

/** {@code @httpResponseCode}: the member receives the HTTP status code. */
class HttpResponseCodeTrait : public Trait {
 public:
  static const TraitKey<HttpResponseCodeTrait>& KEY() { return TraitKey<HttpResponseCodeTrait>::Instance(); }
};

/** {@code @hostLabel}: the member fills the same-named label of the operation's {@code @endpoint} host prefix. */
class HostLabelTrait : public Trait {
 public:
  static const TraitKey<HostLabelTrait>& KEY() { return TraitKey<HostLabelTrait>::Instance(); }
};

/**
 * {@code @mediaType} on the member's target: a string header carrying it is base64-encoded, and a
 * blob / string payload carrying it uses it as the Content-Type.
 */
class MediaTypeTrait : public Trait {
 public:
  explicit MediaTypeTrait(const Aws::String& value) : m_value(value) {}
  const Aws::String& GetValue() const { return m_value; }
  static const TraitKey<MediaTypeTrait>& KEY() { return TraitKey<MediaTypeTrait>::Instance(); }

 private:
  Aws::String m_value;
};

extern template class TraitKey<HttpHeaderTrait>;
extern template class TraitKey<HttpPrefixHeadersTrait>;
extern template class TraitKey<HttpQueryTrait>;
extern template class TraitKey<HttpQueryParamsTrait>;
extern template class TraitKey<HttpLabelTrait>;
extern template class TraitKey<HttpPayloadTrait>;
extern template class TraitKey<HttpResponseCodeTrait>;
extern template class TraitKey<HostLabelTrait>;
extern template class TraitKey<MediaTypeTrait>;

}  // namespace schema
}  // namespace smithy

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaTailor {
namespace Model {

/**
 * <p>The optional response-caching configuration shared by the HTTP-based function
 * types (<code>HTTP_REQUEST</code>, <code>AWS_SERVICE_REQUEST</code>, and
 * <code>VAST_REQUEST</code>). When you provide this configuration, MediaTailor
 * caches the function's responses that have one of the following HTTP status
 * codes: <code>200</code>, <code>203</code>, <code>204</code>, <code>404</code>,
 * <code>405</code>, <code>410</code>, <code>414</code>, and <code>501</code>. For
 * a cacheable response, MediaTailor caches it for the number of seconds given by
 * the response's <code>Cache-Control</code> <code>max-age</code> directive,
 * limited to the range between <code>TtlMinimumSeconds</code> and
 * <code>TtlMaximumSeconds</code>. If the response has no
 * <code>Cache-Control</code> <code>max-age</code> directive, MediaTailor caches it
 * for <code>TtlMinimumSeconds</code> seconds. Cached HTTP responses are scoped per
 * playback configuration, not per function.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/HttpRequestCacheConfiguration">AWS
 * API Reference</a></p>
 */
class HttpRequestCacheConfiguration {
 public:
  AWS_MEDIATAILOR_API HttpRequestCacheConfiguration() = default;
  AWS_MEDIATAILOR_API HttpRequestCacheConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API HttpRequestCacheConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The lower bound, in seconds, on how long MediaTailor caches a response.
   * MediaTailor also uses this value as the cache duration when a response has no
   * <code>Cache-Control</code> <code>max-age</code> directive.</p>
   */
  inline int GetTtlMinimumSeconds() const { return m_ttlMinimumSeconds; }
  inline bool TtlMinimumSecondsHasBeenSet() const { return m_ttlMinimumSecondsHasBeenSet; }
  inline void SetTtlMinimumSeconds(int value) {
    m_ttlMinimumSecondsHasBeenSet = true;
    m_ttlMinimumSeconds = value;
  }
  inline HttpRequestCacheConfiguration& WithTtlMinimumSeconds(int value) {
    SetTtlMinimumSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The upper bound, in seconds, on how long MediaTailor caches a response. This
   * value must be greater than or equal to <code>TtlMinimumSeconds</code>.</p>
   */
  inline int GetTtlMaximumSeconds() const { return m_ttlMaximumSeconds; }
  inline bool TtlMaximumSecondsHasBeenSet() const { return m_ttlMaximumSecondsHasBeenSet; }
  inline void SetTtlMaximumSeconds(int value) {
    m_ttlMaximumSecondsHasBeenSet = true;
    m_ttlMaximumSeconds = value;
  }
  inline HttpRequestCacheConfiguration& WithTtlMaximumSeconds(int value) {
    SetTtlMaximumSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A JSONata expression that MediaTailor evaluates to a custom cache key. By
   * default, the cache key is a hash of the HTTP URL, the request body, and the HTTP
   * method; request headers are not included. You can specify a custom cache key
   * expression to vary caching by request headers and more. The evaluated key must
   * be smaller than 1 KB; otherwise the HTTP function will fail.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  HttpRequestCacheConfiguration& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}
 private:
  int m_ttlMinimumSeconds{0};

  int m_ttlMaximumSeconds{0};

  Aws::String m_key;
  bool m_ttlMinimumSecondsHasBeenSet = false;
  bool m_ttlMaximumSecondsHasBeenSet = false;
  bool m_keyHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws

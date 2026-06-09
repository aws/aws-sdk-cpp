/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/QueryStringKeyValuePair.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {

/**
 * <p>The conditions for a routing rule. All specified fields must match for the
 * rule to apply (AND logic). At least one condition field must be
 * set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rtbfabric-2023-05-15/RuleCondition">AWS
 * API Reference</a></p>
 */
class RuleCondition {
 public:
  AWS_RTBFABRIC_API RuleCondition() = default;
  AWS_RTBFABRIC_API RuleCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API RuleCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RTBFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The exact host header value to match.</p>
   */
  inline const Aws::String& GetHostHeader() const { return m_hostHeader; }
  inline bool HostHeaderHasBeenSet() const { return m_hostHeaderHasBeenSet; }
  template <typename HostHeaderT = Aws::String>
  void SetHostHeader(HostHeaderT&& value) {
    m_hostHeaderHasBeenSet = true;
    m_hostHeader = std::forward<HostHeaderT>(value);
  }
  template <typename HostHeaderT = Aws::String>
  RuleCondition& WithHostHeader(HostHeaderT&& value) {
    SetHostHeader(std::forward<HostHeaderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A wildcard pattern for host header matching (for example,
   * <code>*.example.com</code>).</p>
   */
  inline const Aws::String& GetHostHeaderWildcard() const { return m_hostHeaderWildcard; }
  inline bool HostHeaderWildcardHasBeenSet() const { return m_hostHeaderWildcardHasBeenSet; }
  template <typename HostHeaderWildcardT = Aws::String>
  void SetHostHeaderWildcard(HostHeaderWildcardT&& value) {
    m_hostHeaderWildcardHasBeenSet = true;
    m_hostHeaderWildcard = std::forward<HostHeaderWildcardT>(value);
  }
  template <typename HostHeaderWildcardT = Aws::String>
  RuleCondition& WithHostHeaderWildcard(HostHeaderWildcardT&& value) {
    SetHostHeaderWildcard(std::forward<HostHeaderWildcardT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path prefix to match. The request path must start with this value. Must
   * start with <code>/</code>.</p>
   */
  inline const Aws::String& GetPathPrefix() const { return m_pathPrefix; }
  inline bool PathPrefixHasBeenSet() const { return m_pathPrefixHasBeenSet; }
  template <typename PathPrefixT = Aws::String>
  void SetPathPrefix(PathPrefixT&& value) {
    m_pathPrefixHasBeenSet = true;
    m_pathPrefix = std::forward<PathPrefixT>(value);
  }
  template <typename PathPrefixT = Aws::String>
  RuleCondition& WithPathPrefix(PathPrefixT&& value) {
    SetPathPrefix(std::forward<PathPrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exact path to match. Must start with <code>/</code>.</p>
   */
  inline const Aws::String& GetPathExact() const { return m_pathExact; }
  inline bool PathExactHasBeenSet() const { return m_pathExactHasBeenSet; }
  template <typename PathExactT = Aws::String>
  void SetPathExact(PathExactT&& value) {
    m_pathExactHasBeenSet = true;
    m_pathExact = std::forward<PathExactT>(value);
  }
  template <typename PathExactT = Aws::String>
  RuleCondition& WithPathExact(PathExactT&& value) {
    SetPathExact(std::forward<PathExactT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A query string key-value pair that must be present and match exactly.</p>
   */
  inline const QueryStringKeyValuePair& GetQueryStringEquals() const { return m_queryStringEquals; }
  inline bool QueryStringEqualsHasBeenSet() const { return m_queryStringEqualsHasBeenSet; }
  template <typename QueryStringEqualsT = QueryStringKeyValuePair>
  void SetQueryStringEquals(QueryStringEqualsT&& value) {
    m_queryStringEqualsHasBeenSet = true;
    m_queryStringEquals = std::forward<QueryStringEqualsT>(value);
  }
  template <typename QueryStringEqualsT = QueryStringKeyValuePair>
  RuleCondition& WithQueryStringEquals(QueryStringEqualsT&& value) {
    SetQueryStringEquals(std::forward<QueryStringEqualsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A query string key that must be present in the request (any value is
   * accepted).</p>
   */
  inline const Aws::String& GetQueryStringExists() const { return m_queryStringExists; }
  inline bool QueryStringExistsHasBeenSet() const { return m_queryStringExistsHasBeenSet; }
  template <typename QueryStringExistsT = Aws::String>
  void SetQueryStringExists(QueryStringExistsT&& value) {
    m_queryStringExistsHasBeenSet = true;
    m_queryStringExists = std::forward<QueryStringExistsT>(value);
  }
  template <typename QueryStringExistsT = Aws::String>
  RuleCondition& WithQueryStringExists(QueryStringExistsT&& value) {
    SetQueryStringExists(std::forward<QueryStringExistsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_hostHeader;

  Aws::String m_hostHeaderWildcard;

  Aws::String m_pathPrefix;

  Aws::String m_pathExact;

  QueryStringKeyValuePair m_queryStringEquals;

  Aws::String m_queryStringExists;
  bool m_hostHeaderHasBeenSet = false;
  bool m_hostHeaderWildcardHasBeenSet = false;
  bool m_pathPrefixHasBeenSet = false;
  bool m_pathExactHasBeenSet = false;
  bool m_queryStringEqualsHasBeenSet = false;
  bool m_queryStringExistsHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws

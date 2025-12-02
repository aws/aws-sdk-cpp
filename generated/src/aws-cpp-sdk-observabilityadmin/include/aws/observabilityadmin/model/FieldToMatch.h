/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/SingleHeader.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p> Specifies a field in the request to redact from WAF logs, such as headers,
 * query parameters, or body content. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/FieldToMatch">AWS
 * API Reference</a></p>
 */
class FieldToMatch {
 public:
  AWS_OBSERVABILITYADMIN_API FieldToMatch() = default;
  AWS_OBSERVABILITYADMIN_API FieldToMatch(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API FieldToMatch& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> Redacts a specific header field by name from WAF logs. </p>
   */
  inline const SingleHeader& GetSingleHeader() const { return m_singleHeader; }
  inline bool SingleHeaderHasBeenSet() const { return m_singleHeaderHasBeenSet; }
  template <typename SingleHeaderT = SingleHeader>
  void SetSingleHeader(SingleHeaderT&& value) {
    m_singleHeaderHasBeenSet = true;
    m_singleHeader = std::forward<SingleHeaderT>(value);
  }
  template <typename SingleHeaderT = SingleHeader>
  FieldToMatch& WithSingleHeader(SingleHeaderT&& value) {
    SetSingleHeader(std::forward<SingleHeaderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Redacts the URI path from WAF logs. </p>
   */
  inline const Aws::String& GetUriPath() const { return m_uriPath; }
  inline bool UriPathHasBeenSet() const { return m_uriPathHasBeenSet; }
  template <typename UriPathT = Aws::String>
  void SetUriPath(UriPathT&& value) {
    m_uriPathHasBeenSet = true;
    m_uriPath = std::forward<UriPathT>(value);
  }
  template <typename UriPathT = Aws::String>
  FieldToMatch& WithUriPath(UriPathT&& value) {
    SetUriPath(std::forward<UriPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Redacts the entire query string from WAF logs. </p>
   */
  inline const Aws::String& GetQueryString() const { return m_queryString; }
  inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
  template <typename QueryStringT = Aws::String>
  void SetQueryString(QueryStringT&& value) {
    m_queryStringHasBeenSet = true;
    m_queryString = std::forward<QueryStringT>(value);
  }
  template <typename QueryStringT = Aws::String>
  FieldToMatch& WithQueryString(QueryStringT&& value) {
    SetQueryString(std::forward<QueryStringT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Redacts the HTTP method from WAF logs. </p>
   */
  inline const Aws::String& GetMethod() const { return m_method; }
  inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }
  template <typename MethodT = Aws::String>
  void SetMethod(MethodT&& value) {
    m_methodHasBeenSet = true;
    m_method = std::forward<MethodT>(value);
  }
  template <typename MethodT = Aws::String>
  FieldToMatch& WithMethod(MethodT&& value) {
    SetMethod(std::forward<MethodT>(value));
    return *this;
  }
  ///@}
 private:
  SingleHeader m_singleHeader;
  bool m_singleHeaderHasBeenSet = false;

  Aws::String m_uriPath;
  bool m_uriPathHasBeenSet = false;

  Aws::String m_queryString;
  bool m_queryStringHasBeenSet = false;

  Aws::String m_method;
  bool m_methodHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WAFV2 {
namespace Model {

/**
 * <p>An API endpoint pattern that an API security event involves.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ApiPattern">AWS
 * API Reference</a></p>
 */
class ApiPattern {
 public:
  AWS_WAFV2_API ApiPattern() = default;
  AWS_WAFV2_API ApiPattern(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API ApiPattern& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The HTTP method of the API pattern. For example, <code>GET</code> or
   * <code>POST</code>.</p>
   */
  inline const Aws::String& GetMethod() const { return m_method; }
  inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }
  template <typename MethodT = Aws::String>
  void SetMethod(MethodT&& value) {
    m_methodHasBeenSet = true;
    m_method = std::forward<MethodT>(value);
  }
  template <typename MethodT = Aws::String>
  ApiPattern& WithMethod(MethodT&& value) {
    SetMethod(std::forward<MethodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The normalized URI path of the API pattern. Templated path segments are shown
   * in braces. For example, <code>/api/v1/accounts/{id}</code>.</p>
   */
  inline const Aws::String& GetPathPattern() const { return m_pathPattern; }
  inline bool PathPatternHasBeenSet() const { return m_pathPatternHasBeenSet; }
  template <typename PathPatternT = Aws::String>
  void SetPathPattern(PathPatternT&& value) {
    m_pathPatternHasBeenSet = true;
    m_pathPattern = std::forward<PathPatternT>(value);
  }
  template <typename PathPatternT = Aws::String>
  ApiPattern& WithPathPattern(PathPatternT&& value) {
    SetPathPattern(std::forward<PathPatternT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port of the API pattern. For example, <code>443</code>.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline ApiPattern& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domains that the API pattern was observed on. For example,
   * <code>api.example.com</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDomains() const { return m_domains; }
  inline bool DomainsHasBeenSet() const { return m_domainsHasBeenSet; }
  template <typename DomainsT = Aws::Vector<Aws::String>>
  void SetDomains(DomainsT&& value) {
    m_domainsHasBeenSet = true;
    m_domains = std::forward<DomainsT>(value);
  }
  template <typename DomainsT = Aws::Vector<Aws::String>>
  ApiPattern& WithDomains(DomainsT&& value) {
    SetDomains(std::forward<DomainsT>(value));
    return *this;
  }
  template <typename DomainsT = Aws::String>
  ApiPattern& AddDomains(DomainsT&& value) {
    m_domainsHasBeenSet = true;
    m_domains.emplace_back(std::forward<DomainsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_method;

  Aws::String m_pathPattern;

  int m_port{0};

  Aws::Vector<Aws::String> m_domains;
  bool m_methodHasBeenSet = false;
  bool m_pathPatternHasBeenSet = false;
  bool m_portHasBeenSet = false;
  bool m_domainsHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws

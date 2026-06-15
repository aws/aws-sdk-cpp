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
 * <p>A filter for narrowing monetization statistics and settlement record results.
 * Specify a filter name and one or more values to match.</p> <p>Filter
 * behavior:</p> <ul> <li> <p>Multiple values within one filter: OR (match any)</p>
 * </li> <li> <p>Multiple filters: AND (all must match)</p> </li> <li> <p>No
 * duplicate filter names allowed (rejected with error)</p> </li> <li> <p>Duplicate
 * values within a filter are silently deduplicated</p> </li> <li> <p>If no
 * <code>CurrencyMode</code> filter is specified, defaults to <code>REAL</code>
 * </p> </li> </ul><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/MonetizationFilter">AWS
 * API Reference</a></p>
 */
class MonetizationFilter {
 public:
  AWS_WAFV2_API MonetizationFilter() = default;
  AWS_WAFV2_API MonetizationFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API MonetizationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The filter name. Format: Key is a string, Value is a list of strings.</p>
   * <p>Enum-restricted (invalid values rejected):</p> <ul> <li> <p>
   * <code>CurrencyMode</code>: <code>REAL</code>, <code>TEST</code> </p> </li> <li>
   * <p> <code>ChainName</code>: <code>BASE</code>, <code>SOLANA</code>,
   * <code>BASE_SEPOLIA</code>, <code>SOLANA_DEVNET</code> </p> </li> <li> <p>
   * <code>SettlementStatus</code>: <code>SETTLED</code>, <code>PENDING</code>,
   * <code>FAILED</code>, <code>SERVICE_ERROR</code>,
   * <code>SKIPPED_ORIGIN_ERROR</code>, <code>DUPLICATE</code> </p> </li> <li> <p>
   * <code>HttpSourceName</code>: <code>CF</code>, <code>ALB</code>,
   * <code>APIGW</code>, <code>APPRUNNER</code>, <code>COGNITO</code>,
   * <code>VERIFIED_ACCESS</code> </p> </li> </ul> <p>ARN-validated:</p> <ul> <li>
   * <p> <code>WebACLArn</code>: valid WAFv2 web ACL ARN</p> </li> </ul> <p>Free-text
   * (any string up to 256 chars):</p> <ul> <li> <p> <code>SourceName</code>: The
   * name of the bot. Populated from Bot Control verified bot labels.</p> </li> <li>
   * <p> <code>SourceCategory</code>: The category classification of the bot. From
   * Bot Control categorization.</p> </li> <li> <p> <code>Intent</code>: The declared
   * intent of the bot request.</p> </li> <li> <p> <code>Organization</code>: The
   * organization operating the bot.</p> </li> <li> <p> <code>UriPathPrefix</code>:
   * The URI path of the request that was monetized.</p> </li> <li> <p>
   * <code>RequestId</code>: The WAF request ID associated with the transaction.
   * Matches the requestId in WAF logs. Pattern: <code>^[a-zA-Z0-9:._\-=+/]+$</code>
   * </p> </li> <li> <p> <code>TransactionId</code>: The blockchain transaction
   * identifier. Pattern: <code>^[a-zA-Z0-9:._\-=+/]+$</code> </p> </li> <li> <p>
   * <code>TerminatingRuleName</code>: The name of the WAF rule that triggered the
   * Monetize action.</p> </li> <li> <p> <code>PayerAddress</code>: The blockchain
   * wallet address of the paying client. Pattern:
   * <code>^[a-zA-Z0-9:._\-=+/]+$</code> </p> </li> <li> <p>
   * <code>HttpSourceId</code>: The identifier of the Amazon Web Services resource
   * associated with the web ACL (for example, CloudFront distribution ID).</p> </li>
   * </ul>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  MonetizationFilter& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The values to filter on. Specify as a list of strings. Results match any of
   * the specified values (OR logic). Duplicate values are silently deduplicated.
   * Maximum: 20 values per filter.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  MonetizationFilter& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  MonetizationFilter& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::Vector<Aws::String> m_values;
  bool m_nameHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Revenue statistics for a single AI bot source, including the bot name,
 * revenue amount, request count, and verification status.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/SourceStatistics">AWS
 * API Reference</a></p>
 */
class SourceStatistics {
 public:
  AWS_WAFV2_API SourceStatistics() = default;
  AWS_WAFV2_API SourceStatistics(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API SourceStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the AI bot.</p>
   */
  inline const Aws::String& GetSourceName() const { return m_sourceName; }
  inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
  template <typename SourceNameT = Aws::String>
  void SetSourceName(SourceNameT&& value) {
    m_sourceNameHasBeenSet = true;
    m_sourceName = std::forward<SourceNameT>(value);
  }
  template <typename SourceNameT = Aws::String>
  SourceStatistics& WithSourceName(SourceNameT&& value) {
    SetSourceName(std::forward<SourceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of total revenue from this source.</p>
   */
  inline double GetPercentage() const { return m_percentage; }
  inline bool PercentageHasBeenSet() const { return m_percentageHasBeenSet; }
  inline void SetPercentage(double value) {
    m_percentageHasBeenSet = true;
    m_percentage = value;
  }
  inline SourceStatistics& WithPercentage(double value) {
    SetPercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total revenue amount from this source in the specified currency.</p>
   */
  inline const Aws::String& GetAmount() const { return m_amount; }
  inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
  template <typename AmountT = Aws::String>
  void SetAmount(AmountT&& value) {
    m_amountHasBeenSet = true;
    m_amount = std::forward<AmountT>(value);
  }
  template <typename AmountT = Aws::String>
  SourceStatistics& WithAmount(AmountT&& value) {
    SetAmount(std::forward<AmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of monetized requests from this source.</p>
   */
  inline long long GetRequestCount() const { return m_requestCount; }
  inline bool RequestCountHasBeenSet() const { return m_requestCountHasBeenSet; }
  inline void SetRequestCount(long long value) {
    m_requestCountHasBeenSet = true;
    m_requestCount = value;
  }
  inline SourceStatistics& WithRequestCount(long long value) {
    SetRequestCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The category of this AI bot source.</p>
   */
  inline const Aws::String& GetSourceCategory() const { return m_sourceCategory; }
  inline bool SourceCategoryHasBeenSet() const { return m_sourceCategoryHasBeenSet; }
  template <typename SourceCategoryT = Aws::String>
  void SetSourceCategory(SourceCategoryT&& value) {
    m_sourceCategoryHasBeenSet = true;
    m_sourceCategory = std::forward<SourceCategoryT>(value);
  }
  template <typename SourceCategoryT = Aws::String>
  SourceStatistics& WithSourceCategory(SourceCategoryT&& value) {
    SetSourceCategory(std::forward<SourceCategoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The declared intent of the AI bot (for example, summarize, index, or
   * train).</p>
   */
  inline const Aws::String& GetIntent() const { return m_intent; }
  inline bool IntentHasBeenSet() const { return m_intentHasBeenSet; }
  template <typename IntentT = Aws::String>
  void SetIntent(IntentT&& value) {
    m_intentHasBeenSet = true;
    m_intent = std::forward<IntentT>(value);
  }
  template <typename IntentT = Aws::String>
  SourceStatistics& WithIntent(IntentT&& value) {
    SetIntent(std::forward<IntentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The organization associated with the AI bot.</p>
   */
  inline const Aws::String& GetOrganization() const { return m_organization; }
  inline bool OrganizationHasBeenSet() const { return m_organizationHasBeenSet; }
  template <typename OrganizationT = Aws::String>
  void SetOrganization(OrganizationT&& value) {
    m_organizationHasBeenSet = true;
    m_organization = std::forward<OrganizationT>(value);
  }
  template <typename OrganizationT = Aws::String>
  SourceStatistics& WithOrganization(OrganizationT&& value) {
    SetOrganization(std::forward<OrganizationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the AI bot's identity was verified — for example, through a
   * cryptographically signed request (Web Bot Auth) or another published
   * verification method. This value is meaningful only when GroupBy is NAME, where
   * each result represents a single, identifiable bot. For all other GroupBy values
   * (CATEGORY, INTENT, ORGANIZATION, or WEBACL), a result aggregates multiple bots
   * that may have different verification states, so Verified is always returned as
   * false and should be ignored. Type and required-ness are unchanged (Boolean,
   * optional).</p>
   */
  inline bool GetVerified() const { return m_verified; }
  inline bool VerifiedHasBeenSet() const { return m_verifiedHasBeenSet; }
  inline void SetVerified(bool value) {
    m_verifiedHasBeenSet = true;
    m_verified = value;
  }
  inline SourceStatistics& WithVerified(bool value) {
    SetVerified(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value for the group-by dimension, when grouping is applied.</p>
   */
  inline const Aws::String& GetGroupByValue() const { return m_groupByValue; }
  inline bool GroupByValueHasBeenSet() const { return m_groupByValueHasBeenSet; }
  template <typename GroupByValueT = Aws::String>
  void SetGroupByValue(GroupByValueT&& value) {
    m_groupByValueHasBeenSet = true;
    m_groupByValue = std::forward<GroupByValueT>(value);
  }
  template <typename GroupByValueT = Aws::String>
  SourceStatistics& WithGroupByValue(GroupByValueT&& value) {
    SetGroupByValue(std::forward<GroupByValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceName;

  double m_percentage{0.0};

  Aws::String m_amount;

  long long m_requestCount{0};

  Aws::String m_sourceCategory;

  Aws::String m_intent;

  Aws::String m_organization;

  bool m_verified{false};

  Aws::String m_groupByValue;
  bool m_sourceNameHasBeenSet = false;
  bool m_percentageHasBeenSet = false;
  bool m_amountHasBeenSet = false;
  bool m_requestCountHasBeenSet = false;
  bool m_sourceCategoryHasBeenSet = false;
  bool m_intentHasBeenSet = false;
  bool m_organizationHasBeenSet = false;
  bool m_verifiedHasBeenSet = false;
  bool m_groupByValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws

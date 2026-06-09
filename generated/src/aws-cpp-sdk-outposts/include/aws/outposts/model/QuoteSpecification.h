/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/QuoteSpecificationType.h>
#include <aws/outposts/model/RackSpecificationDetails.h>
#include <aws/outposts/model/ServerSpecificationDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Outposts {
namespace Model {

/**
 * <p>A physical specification for a quote option. Describes the rack or server
 * configuration that would be deployed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/QuoteSpecification">AWS
 * API Reference</a></p>
 */
class QuoteSpecification {
 public:
  AWS_OUTPOSTS_API QuoteSpecification() = default;
  AWS_OUTPOSTS_API QuoteSpecification(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API QuoteSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of specification. Valid values are <code>NEW_RACK</code>,
   * <code>UPDATED_RACK</code>, <code>EXISTING_RACK</code>, and
   * <code>SERVER</code>.</p>
   */
  inline QuoteSpecificationType GetQuoteSpecificationType() const { return m_quoteSpecificationType; }
  inline bool QuoteSpecificationTypeHasBeenSet() const { return m_quoteSpecificationTypeHasBeenSet; }
  inline void SetQuoteSpecificationType(QuoteSpecificationType value) {
    m_quoteSpecificationTypeHasBeenSet = true;
    m_quoteSpecificationType = value;
  }
  inline QuoteSpecification& WithQuoteSpecificationType(QuoteSpecificationType value) {
    SetQuoteSpecificationType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The existing rack specification details, if the specification type is
   * <code>UPDATED_RACK</code> or <code>EXISTING_RACK</code>.</p>
   */
  inline const RackSpecificationDetails& GetExistingRackSpecificationDetails() const { return m_existingRackSpecificationDetails; }
  inline bool ExistingRackSpecificationDetailsHasBeenSet() const { return m_existingRackSpecificationDetailsHasBeenSet; }
  template <typename ExistingRackSpecificationDetailsT = RackSpecificationDetails>
  void SetExistingRackSpecificationDetails(ExistingRackSpecificationDetailsT&& value) {
    m_existingRackSpecificationDetailsHasBeenSet = true;
    m_existingRackSpecificationDetails = std::forward<ExistingRackSpecificationDetailsT>(value);
  }
  template <typename ExistingRackSpecificationDetailsT = RackSpecificationDetails>
  QuoteSpecification& WithExistingRackSpecificationDetails(ExistingRackSpecificationDetailsT&& value) {
    SetExistingRackSpecificationDetails(std::forward<ExistingRackSpecificationDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The final rack specification details after the quote is fulfilled.</p>
   */
  inline const RackSpecificationDetails& GetFinalRackSpecificationDetails() const { return m_finalRackSpecificationDetails; }
  inline bool FinalRackSpecificationDetailsHasBeenSet() const { return m_finalRackSpecificationDetailsHasBeenSet; }
  template <typename FinalRackSpecificationDetailsT = RackSpecificationDetails>
  void SetFinalRackSpecificationDetails(FinalRackSpecificationDetailsT&& value) {
    m_finalRackSpecificationDetailsHasBeenSet = true;
    m_finalRackSpecificationDetails = std::forward<FinalRackSpecificationDetailsT>(value);
  }
  template <typename FinalRackSpecificationDetailsT = RackSpecificationDetails>
  QuoteSpecification& WithFinalRackSpecificationDetails(FinalRackSpecificationDetailsT&& value) {
    SetFinalRackSpecificationDetails(std::forward<FinalRackSpecificationDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The server specification details, if the specification type is
   * <code>SERVER</code>.</p>
   */
  inline const ServerSpecificationDetails& GetServerSpecificationDetails() const { return m_serverSpecificationDetails; }
  inline bool ServerSpecificationDetailsHasBeenSet() const { return m_serverSpecificationDetailsHasBeenSet; }
  template <typename ServerSpecificationDetailsT = ServerSpecificationDetails>
  void SetServerSpecificationDetails(ServerSpecificationDetailsT&& value) {
    m_serverSpecificationDetailsHasBeenSet = true;
    m_serverSpecificationDetails = std::forward<ServerSpecificationDetailsT>(value);
  }
  template <typename ServerSpecificationDetailsT = ServerSpecificationDetails>
  QuoteSpecification& WithServerSpecificationDetails(ServerSpecificationDetailsT&& value) {
    SetServerSpecificationDetails(std::forward<ServerSpecificationDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  QuoteSpecificationType m_quoteSpecificationType{QuoteSpecificationType::NOT_SET};

  RackSpecificationDetails m_existingRackSpecificationDetails;

  RackSpecificationDetails m_finalRackSpecificationDetails;

  ServerSpecificationDetails m_serverSpecificationDetails;
  bool m_quoteSpecificationTypeHasBeenSet = false;
  bool m_existingRackSpecificationDetailsHasBeenSet = false;
  bool m_finalRackSpecificationDetailsHasBeenSet = false;
  bool m_serverSpecificationDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws

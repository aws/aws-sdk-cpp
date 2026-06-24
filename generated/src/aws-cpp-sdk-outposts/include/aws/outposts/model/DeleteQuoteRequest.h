/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/outposts/Outposts_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Outposts {
namespace Model {

/**
 */
class DeleteQuoteRequest : public OutpostsRequest {
 public:
  AWS_OUTPOSTS_API DeleteQuoteRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteQuote"; }

  AWS_OUTPOSTS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the quote.</p>
   */
  inline const Aws::String& GetQuoteIdentifier() const { return m_quoteIdentifier; }
  inline bool QuoteIdentifierHasBeenSet() const { return m_quoteIdentifierHasBeenSet; }
  template <typename QuoteIdentifierT = Aws::String>
  void SetQuoteIdentifier(QuoteIdentifierT&& value) {
    m_quoteIdentifierHasBeenSet = true;
    m_quoteIdentifier = std::forward<QuoteIdentifierT>(value);
  }
  template <typename QuoteIdentifierT = Aws::String>
  DeleteQuoteRequest& WithQuoteIdentifier(QuoteIdentifierT&& value) {
    SetQuoteIdentifier(std::forward<QuoteIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_quoteIdentifier;
  bool m_quoteIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws

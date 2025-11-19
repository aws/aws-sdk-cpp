/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sts/STSRequest.h>
#include <aws/sts/STS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace STS {
namespace Model {

/**
 */
class GetDelegatedAccessTokenRequest : public STSRequest {
 public:
  AWS_STS_API GetDelegatedAccessTokenRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetDelegatedAccessToken"; }

  AWS_STS_API Aws::String SerializePayload() const override;

 protected:
  AWS_STS_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The token to exchange for temporary Amazon Web Services credentials. This
   * token must be valid and unexpired at the time of the request.</p>
   */
  inline const Aws::String& GetTradeInToken() const { return m_tradeInToken; }
  inline bool TradeInTokenHasBeenSet() const { return m_tradeInTokenHasBeenSet; }
  template <typename TradeInTokenT = Aws::String>
  void SetTradeInToken(TradeInTokenT&& value) {
    m_tradeInTokenHasBeenSet = true;
    m_tradeInToken = std::forward<TradeInTokenT>(value);
  }
  template <typename TradeInTokenT = Aws::String>
  GetDelegatedAccessTokenRequest& WithTradeInToken(TradeInTokenT&& value) {
    SetTradeInToken(std::forward<TradeInTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tradeInToken;
  bool m_tradeInTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace STS
}  // namespace Aws

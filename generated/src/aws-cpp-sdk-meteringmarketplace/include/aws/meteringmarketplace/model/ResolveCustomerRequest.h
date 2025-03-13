/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/meteringmarketplace/MarketplaceMeteringRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MarketplaceMetering
{
namespace Model
{

  /**
   * <p>Contains input to the <code>ResolveCustomer</code> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/ResolveCustomerRequest">AWS
   * API Reference</a></p>
   */
  class ResolveCustomerRequest : public MarketplaceMeteringRequest
  {
  public:
    AWS_MARKETPLACEMETERING_API ResolveCustomerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResolveCustomer"; }

    AWS_MARKETPLACEMETERING_API Aws::String SerializePayload() const override;

    AWS_MARKETPLACEMETERING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>When a buyer visits your website during the registration process, the buyer
     * submits a registration token through the browser. The registration token is
     * resolved to obtain a <code>CustomerIdentifier</code> along with the
     * <code>CustomerAWSAccountId</code> and <code>ProductCode</code>.</p>
     */
    inline const Aws::String& GetRegistrationToken() const { return m_registrationToken; }
    inline bool RegistrationTokenHasBeenSet() const { return m_registrationTokenHasBeenSet; }
    template<typename RegistrationTokenT = Aws::String>
    void SetRegistrationToken(RegistrationTokenT&& value) { m_registrationTokenHasBeenSet = true; m_registrationToken = std::forward<RegistrationTokenT>(value); }
    template<typename RegistrationTokenT = Aws::String>
    ResolveCustomerRequest& WithRegistrationToken(RegistrationTokenT&& value) { SetRegistrationToken(std::forward<RegistrationTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registrationToken;
    bool m_registrationTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws

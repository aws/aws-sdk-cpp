/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AgreementService
{
namespace Model
{

  /**
   * <p>Additional parameters specified by the acceptor while accepting the
   * term.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/RenewalTermConfiguration">AWS
   * API Reference</a></p>
   */
  class RenewalTermConfiguration
  {
  public:
    AWS_AGREEMENTSERVICE_API RenewalTermConfiguration();
    AWS_AGREEMENTSERVICE_API RenewalTermConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API RenewalTermConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines whether the acceptor has chosen to auto-renew the agreement at the
     * end of its lifecycle. Can be set to <code>True</code> or <code>False</code>.</p>
     */
    inline bool GetEnableAutoRenew() const{ return m_enableAutoRenew; }

    /**
     * <p>Defines whether the acceptor has chosen to auto-renew the agreement at the
     * end of its lifecycle. Can be set to <code>True</code> or <code>False</code>.</p>
     */
    inline bool EnableAutoRenewHasBeenSet() const { return m_enableAutoRenewHasBeenSet; }

    /**
     * <p>Defines whether the acceptor has chosen to auto-renew the agreement at the
     * end of its lifecycle. Can be set to <code>True</code> or <code>False</code>.</p>
     */
    inline void SetEnableAutoRenew(bool value) { m_enableAutoRenewHasBeenSet = true; m_enableAutoRenew = value; }

    /**
     * <p>Defines whether the acceptor has chosen to auto-renew the agreement at the
     * end of its lifecycle. Can be set to <code>True</code> or <code>False</code>.</p>
     */
    inline RenewalTermConfiguration& WithEnableAutoRenew(bool value) { SetEnableAutoRenew(value); return *this;}

  private:

    bool m_enableAutoRenew;
    bool m_enableAutoRenewHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws

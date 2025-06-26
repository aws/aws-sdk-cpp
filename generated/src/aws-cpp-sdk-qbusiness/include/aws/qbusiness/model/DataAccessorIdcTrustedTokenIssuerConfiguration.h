/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Configuration details for IAM Identity Center Trusted Token Issuer (TTI)
   * authentication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DataAccessorIdcTrustedTokenIssuerConfiguration">AWS
   * API Reference</a></p>
   */
  class DataAccessorIdcTrustedTokenIssuerConfiguration
  {
  public:
    AWS_QBUSINESS_API DataAccessorIdcTrustedTokenIssuerConfiguration() = default;
    AWS_QBUSINESS_API DataAccessorIdcTrustedTokenIssuerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DataAccessorIdcTrustedTokenIssuerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM Identity Center Trusted Token
     * Issuer that will be used for authentication.</p>
     */
    inline const Aws::String& GetIdcTrustedTokenIssuerArn() const { return m_idcTrustedTokenIssuerArn; }
    inline bool IdcTrustedTokenIssuerArnHasBeenSet() const { return m_idcTrustedTokenIssuerArnHasBeenSet; }
    template<typename IdcTrustedTokenIssuerArnT = Aws::String>
    void SetIdcTrustedTokenIssuerArn(IdcTrustedTokenIssuerArnT&& value) { m_idcTrustedTokenIssuerArnHasBeenSet = true; m_idcTrustedTokenIssuerArn = std::forward<IdcTrustedTokenIssuerArnT>(value); }
    template<typename IdcTrustedTokenIssuerArnT = Aws::String>
    DataAccessorIdcTrustedTokenIssuerConfiguration& WithIdcTrustedTokenIssuerArn(IdcTrustedTokenIssuerArnT&& value) { SetIdcTrustedTokenIssuerArn(std::forward<IdcTrustedTokenIssuerArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_idcTrustedTokenIssuerArn;
    bool m_idcTrustedTokenIssuerArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws

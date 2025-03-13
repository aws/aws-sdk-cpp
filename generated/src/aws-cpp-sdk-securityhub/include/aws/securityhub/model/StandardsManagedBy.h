/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides details about the management of a security standard.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StandardsManagedBy">AWS
   * API Reference</a></p>
   */
  class StandardsManagedBy
  {
  public:
    AWS_SECURITYHUB_API StandardsManagedBy() = default;
    AWS_SECURITYHUB_API StandardsManagedBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API StandardsManagedBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An identifier for the company that manages a specific security standard. For
     * existing standards, the value is equal to <code>Amazon Web Services</code>.</p>
     */
    inline const Aws::String& GetCompany() const { return m_company; }
    inline bool CompanyHasBeenSet() const { return m_companyHasBeenSet; }
    template<typename CompanyT = Aws::String>
    void SetCompany(CompanyT&& value) { m_companyHasBeenSet = true; m_company = std::forward<CompanyT>(value); }
    template<typename CompanyT = Aws::String>
    StandardsManagedBy& WithCompany(CompanyT&& value) { SetCompany(std::forward<CompanyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier for the product that manages a specific security standard. For
     * existing standards, the value is equal to the Amazon Web Services service that
     * manages the standard.</p>
     */
    inline const Aws::String& GetProduct() const { return m_product; }
    inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }
    template<typename ProductT = Aws::String>
    void SetProduct(ProductT&& value) { m_productHasBeenSet = true; m_product = std::forward<ProductT>(value); }
    template<typename ProductT = Aws::String>
    StandardsManagedBy& WithProduct(ProductT&& value) { SetProduct(std::forward<ProductT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_company;
    bool m_companyHasBeenSet = false;

    Aws::String m_product;
    bool m_productHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

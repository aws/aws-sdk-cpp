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
    AWS_SECURITYHUB_API StandardsManagedBy();
    AWS_SECURITYHUB_API StandardsManagedBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API StandardsManagedBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An identifier for the company that manages a specific security standard. For
     * existing standards, the value is equal to <code>Amazon Web Services</code>.</p>
     */
    inline const Aws::String& GetCompany() const{ return m_company; }

    /**
     * <p>An identifier for the company that manages a specific security standard. For
     * existing standards, the value is equal to <code>Amazon Web Services</code>.</p>
     */
    inline bool CompanyHasBeenSet() const { return m_companyHasBeenSet; }

    /**
     * <p>An identifier for the company that manages a specific security standard. For
     * existing standards, the value is equal to <code>Amazon Web Services</code>.</p>
     */
    inline void SetCompany(const Aws::String& value) { m_companyHasBeenSet = true; m_company = value; }

    /**
     * <p>An identifier for the company that manages a specific security standard. For
     * existing standards, the value is equal to <code>Amazon Web Services</code>.</p>
     */
    inline void SetCompany(Aws::String&& value) { m_companyHasBeenSet = true; m_company = std::move(value); }

    /**
     * <p>An identifier for the company that manages a specific security standard. For
     * existing standards, the value is equal to <code>Amazon Web Services</code>.</p>
     */
    inline void SetCompany(const char* value) { m_companyHasBeenSet = true; m_company.assign(value); }

    /**
     * <p>An identifier for the company that manages a specific security standard. For
     * existing standards, the value is equal to <code>Amazon Web Services</code>.</p>
     */
    inline StandardsManagedBy& WithCompany(const Aws::String& value) { SetCompany(value); return *this;}

    /**
     * <p>An identifier for the company that manages a specific security standard. For
     * existing standards, the value is equal to <code>Amazon Web Services</code>.</p>
     */
    inline StandardsManagedBy& WithCompany(Aws::String&& value) { SetCompany(std::move(value)); return *this;}

    /**
     * <p>An identifier for the company that manages a specific security standard. For
     * existing standards, the value is equal to <code>Amazon Web Services</code>.</p>
     */
    inline StandardsManagedBy& WithCompany(const char* value) { SetCompany(value); return *this;}


    /**
     * <p>An identifier for the product that manages a specific security standard. For
     * existing standards, the value is equal to the Amazon Web Services service that
     * manages the standard.</p>
     */
    inline const Aws::String& GetProduct() const{ return m_product; }

    /**
     * <p>An identifier for the product that manages a specific security standard. For
     * existing standards, the value is equal to the Amazon Web Services service that
     * manages the standard.</p>
     */
    inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }

    /**
     * <p>An identifier for the product that manages a specific security standard. For
     * existing standards, the value is equal to the Amazon Web Services service that
     * manages the standard.</p>
     */
    inline void SetProduct(const Aws::String& value) { m_productHasBeenSet = true; m_product = value; }

    /**
     * <p>An identifier for the product that manages a specific security standard. For
     * existing standards, the value is equal to the Amazon Web Services service that
     * manages the standard.</p>
     */
    inline void SetProduct(Aws::String&& value) { m_productHasBeenSet = true; m_product = std::move(value); }

    /**
     * <p>An identifier for the product that manages a specific security standard. For
     * existing standards, the value is equal to the Amazon Web Services service that
     * manages the standard.</p>
     */
    inline void SetProduct(const char* value) { m_productHasBeenSet = true; m_product.assign(value); }

    /**
     * <p>An identifier for the product that manages a specific security standard. For
     * existing standards, the value is equal to the Amazon Web Services service that
     * manages the standard.</p>
     */
    inline StandardsManagedBy& WithProduct(const Aws::String& value) { SetProduct(value); return *this;}

    /**
     * <p>An identifier for the product that manages a specific security standard. For
     * existing standards, the value is equal to the Amazon Web Services service that
     * manages the standard.</p>
     */
    inline StandardsManagedBy& WithProduct(Aws::String&& value) { SetProduct(std::move(value)); return *this;}

    /**
     * <p>An identifier for the product that manages a specific security standard. For
     * existing standards, the value is equal to the Amazon Web Services service that
     * manages the standard.</p>
     */
    inline StandardsManagedBy& WithProduct(const char* value) { SetProduct(value); return *this;}

  private:

    Aws::String m_company;
    bool m_companyHasBeenSet = false;

    Aws::String m_product;
    bool m_productHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws

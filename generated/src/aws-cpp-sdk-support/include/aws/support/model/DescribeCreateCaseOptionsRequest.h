/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/SupportRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Support
{
namespace Model
{

  /**
   */
  class DescribeCreateCaseOptionsRequest : public SupportRequest
  {
  public:
    AWS_SUPPORT_API DescribeCreateCaseOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCreateCaseOptions"; }

    AWS_SUPPORT_API Aws::String SerializePayload() const override;

    AWS_SUPPORT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>. If you don't specify a value, the default is
     * <code>technical</code>.</p>
     */
    inline const Aws::String& GetIssueType() const{ return m_issueType; }

    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>. If you don't specify a value, the default is
     * <code>technical</code>.</p>
     */
    inline bool IssueTypeHasBeenSet() const { return m_issueTypeHasBeenSet; }

    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>. If you don't specify a value, the default is
     * <code>technical</code>.</p>
     */
    inline void SetIssueType(const Aws::String& value) { m_issueTypeHasBeenSet = true; m_issueType = value; }

    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>. If you don't specify a value, the default is
     * <code>technical</code>.</p>
     */
    inline void SetIssueType(Aws::String&& value) { m_issueTypeHasBeenSet = true; m_issueType = std::move(value); }

    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>. If you don't specify a value, the default is
     * <code>technical</code>.</p>
     */
    inline void SetIssueType(const char* value) { m_issueTypeHasBeenSet = true; m_issueType.assign(value); }

    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>. If you don't specify a value, the default is
     * <code>technical</code>.</p>
     */
    inline DescribeCreateCaseOptionsRequest& WithIssueType(const Aws::String& value) { SetIssueType(value); return *this;}

    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>. If you don't specify a value, the default is
     * <code>technical</code>.</p>
     */
    inline DescribeCreateCaseOptionsRequest& WithIssueType(Aws::String&& value) { SetIssueType(std::move(value)); return *this;}

    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>. If you don't specify a value, the default is
     * <code>technical</code>.</p>
     */
    inline DescribeCreateCaseOptionsRequest& WithIssueType(const char* value) { SetIssueType(value); return *this;}


    /**
     * <p>The code for the Amazon Web Services service. You can use the
     * <a>DescribeServices</a> operation to get the possible <code>serviceCode</code>
     * values.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>The code for the Amazon Web Services service. You can use the
     * <a>DescribeServices</a> operation to get the possible <code>serviceCode</code>
     * values.</p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>The code for the Amazon Web Services service. You can use the
     * <a>DescribeServices</a> operation to get the possible <code>serviceCode</code>
     * values.</p>
     */
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>The code for the Amazon Web Services service. You can use the
     * <a>DescribeServices</a> operation to get the possible <code>serviceCode</code>
     * values.</p>
     */
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>The code for the Amazon Web Services service. You can use the
     * <a>DescribeServices</a> operation to get the possible <code>serviceCode</code>
     * values.</p>
     */
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    /**
     * <p>The code for the Amazon Web Services service. You can use the
     * <a>DescribeServices</a> operation to get the possible <code>serviceCode</code>
     * values.</p>
     */
    inline DescribeCreateCaseOptionsRequest& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>The code for the Amazon Web Services service. You can use the
     * <a>DescribeServices</a> operation to get the possible <code>serviceCode</code>
     * values.</p>
     */
    inline DescribeCreateCaseOptionsRequest& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>The code for the Amazon Web Services service. You can use the
     * <a>DescribeServices</a> operation to get the possible <code>serviceCode</code>
     * values.</p>
     */
    inline DescribeCreateCaseOptionsRequest& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}


    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports Chinese (“zh”), English ("en"), Japanese
     * ("ja") and Korean (“ko”). You must specify the ISO 639-1 code for the
     * <code>language</code> parameter if you want support in that language.</p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports Chinese (“zh”), English ("en"), Japanese
     * ("ja") and Korean (“ko”). You must specify the ISO 639-1 code for the
     * <code>language</code> parameter if you want support in that language.</p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports Chinese (“zh”), English ("en"), Japanese
     * ("ja") and Korean (“ko”). You must specify the ISO 639-1 code for the
     * <code>language</code> parameter if you want support in that language.</p>
     */
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports Chinese (“zh”), English ("en"), Japanese
     * ("ja") and Korean (“ko”). You must specify the ISO 639-1 code for the
     * <code>language</code> parameter if you want support in that language.</p>
     */
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports Chinese (“zh”), English ("en"), Japanese
     * ("ja") and Korean (“ko”). You must specify the ISO 639-1 code for the
     * <code>language</code> parameter if you want support in that language.</p>
     */
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports Chinese (“zh”), English ("en"), Japanese
     * ("ja") and Korean (“ko”). You must specify the ISO 639-1 code for the
     * <code>language</code> parameter if you want support in that language.</p>
     */
    inline DescribeCreateCaseOptionsRequest& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports Chinese (“zh”), English ("en"), Japanese
     * ("ja") and Korean (“ko”). You must specify the ISO 639-1 code for the
     * <code>language</code> parameter if you want support in that language.</p>
     */
    inline DescribeCreateCaseOptionsRequest& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports Chinese (“zh”), English ("en"), Japanese
     * ("ja") and Korean (“ko”). You must specify the ISO 639-1 code for the
     * <code>language</code> parameter if you want support in that language.</p>
     */
    inline DescribeCreateCaseOptionsRequest& WithLanguage(const char* value) { SetLanguage(value); return *this;}


    /**
     * <p>The category of problem for the support case. You also use the
     * <a>DescribeServices</a> operation to get the category code for a service. Each
     * Amazon Web Services service defines its own set of category codes.</p>
     */
    inline const Aws::String& GetCategoryCode() const{ return m_categoryCode; }

    /**
     * <p>The category of problem for the support case. You also use the
     * <a>DescribeServices</a> operation to get the category code for a service. Each
     * Amazon Web Services service defines its own set of category codes.</p>
     */
    inline bool CategoryCodeHasBeenSet() const { return m_categoryCodeHasBeenSet; }

    /**
     * <p>The category of problem for the support case. You also use the
     * <a>DescribeServices</a> operation to get the category code for a service. Each
     * Amazon Web Services service defines its own set of category codes.</p>
     */
    inline void SetCategoryCode(const Aws::String& value) { m_categoryCodeHasBeenSet = true; m_categoryCode = value; }

    /**
     * <p>The category of problem for the support case. You also use the
     * <a>DescribeServices</a> operation to get the category code for a service. Each
     * Amazon Web Services service defines its own set of category codes.</p>
     */
    inline void SetCategoryCode(Aws::String&& value) { m_categoryCodeHasBeenSet = true; m_categoryCode = std::move(value); }

    /**
     * <p>The category of problem for the support case. You also use the
     * <a>DescribeServices</a> operation to get the category code for a service. Each
     * Amazon Web Services service defines its own set of category codes.</p>
     */
    inline void SetCategoryCode(const char* value) { m_categoryCodeHasBeenSet = true; m_categoryCode.assign(value); }

    /**
     * <p>The category of problem for the support case. You also use the
     * <a>DescribeServices</a> operation to get the category code for a service. Each
     * Amazon Web Services service defines its own set of category codes.</p>
     */
    inline DescribeCreateCaseOptionsRequest& WithCategoryCode(const Aws::String& value) { SetCategoryCode(value); return *this;}

    /**
     * <p>The category of problem for the support case. You also use the
     * <a>DescribeServices</a> operation to get the category code for a service. Each
     * Amazon Web Services service defines its own set of category codes.</p>
     */
    inline DescribeCreateCaseOptionsRequest& WithCategoryCode(Aws::String&& value) { SetCategoryCode(std::move(value)); return *this;}

    /**
     * <p>The category of problem for the support case. You also use the
     * <a>DescribeServices</a> operation to get the category code for a service. Each
     * Amazon Web Services service defines its own set of category codes.</p>
     */
    inline DescribeCreateCaseOptionsRequest& WithCategoryCode(const char* value) { SetCategoryCode(value); return *this;}

  private:

    Aws::String m_issueType;
    bool m_issueTypeHasBeenSet = false;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    Aws::String m_categoryCode;
    bool m_categoryCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws

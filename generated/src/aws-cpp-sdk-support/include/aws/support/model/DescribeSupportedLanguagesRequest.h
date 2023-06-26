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
  class DescribeSupportedLanguagesRequest : public SupportRequest
  {
  public:
    AWS_SUPPORT_API DescribeSupportedLanguagesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSupportedLanguages"; }

    AWS_SUPPORT_API Aws::String SerializePayload() const override;

    AWS_SUPPORT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>.</p>
     */
    inline const Aws::String& GetIssueType() const{ return m_issueType; }

    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>.</p>
     */
    inline bool IssueTypeHasBeenSet() const { return m_issueTypeHasBeenSet; }

    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>.</p>
     */
    inline void SetIssueType(const Aws::String& value) { m_issueTypeHasBeenSet = true; m_issueType = value; }

    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>.</p>
     */
    inline void SetIssueType(Aws::String&& value) { m_issueTypeHasBeenSet = true; m_issueType = std::move(value); }

    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>.</p>
     */
    inline void SetIssueType(const char* value) { m_issueTypeHasBeenSet = true; m_issueType.assign(value); }

    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>.</p>
     */
    inline DescribeSupportedLanguagesRequest& WithIssueType(const Aws::String& value) { SetIssueType(value); return *this;}

    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>.</p>
     */
    inline DescribeSupportedLanguagesRequest& WithIssueType(Aws::String&& value) { SetIssueType(std::move(value)); return *this;}

    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>.</p>
     */
    inline DescribeSupportedLanguagesRequest& WithIssueType(const char* value) { SetIssueType(value); return *this;}


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
    inline DescribeSupportedLanguagesRequest& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>The code for the Amazon Web Services service. You can use the
     * <a>DescribeServices</a> operation to get the possible <code>serviceCode</code>
     * values.</p>
     */
    inline DescribeSupportedLanguagesRequest& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>The code for the Amazon Web Services service. You can use the
     * <a>DescribeServices</a> operation to get the possible <code>serviceCode</code>
     * values.</p>
     */
    inline DescribeSupportedLanguagesRequest& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}


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
    inline DescribeSupportedLanguagesRequest& WithCategoryCode(const Aws::String& value) { SetCategoryCode(value); return *this;}

    /**
     * <p>The category of problem for the support case. You also use the
     * <a>DescribeServices</a> operation to get the category code for a service. Each
     * Amazon Web Services service defines its own set of category codes.</p>
     */
    inline DescribeSupportedLanguagesRequest& WithCategoryCode(Aws::String&& value) { SetCategoryCode(std::move(value)); return *this;}

    /**
     * <p>The category of problem for the support case. You also use the
     * <a>DescribeServices</a> operation to get the category code for a service. Each
     * Amazon Web Services service defines its own set of category codes.</p>
     */
    inline DescribeSupportedLanguagesRequest& WithCategoryCode(const char* value) { SetCategoryCode(value); return *this;}

  private:

    Aws::String m_issueType;
    bool m_issueTypeHasBeenSet = false;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    Aws::String m_categoryCode;
    bool m_categoryCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws

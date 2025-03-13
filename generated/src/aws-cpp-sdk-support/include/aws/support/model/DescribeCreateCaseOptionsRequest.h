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
    AWS_SUPPORT_API DescribeCreateCaseOptionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCreateCaseOptions"; }

    AWS_SUPPORT_API Aws::String SerializePayload() const override;

    AWS_SUPPORT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The type of issue for the case. You can specify <code>customer-service</code>
     * or <code>technical</code>. If you don't specify a value, the default is
     * <code>technical</code>.</p>
     */
    inline const Aws::String& GetIssueType() const { return m_issueType; }
    inline bool IssueTypeHasBeenSet() const { return m_issueTypeHasBeenSet; }
    template<typename IssueTypeT = Aws::String>
    void SetIssueType(IssueTypeT&& value) { m_issueTypeHasBeenSet = true; m_issueType = std::forward<IssueTypeT>(value); }
    template<typename IssueTypeT = Aws::String>
    DescribeCreateCaseOptionsRequest& WithIssueType(IssueTypeT&& value) { SetIssueType(std::forward<IssueTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code for the Amazon Web Services service. You can use the
     * <a>DescribeServices</a> operation to get the possible <code>serviceCode</code>
     * values.</p>
     */
    inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    template<typename ServiceCodeT = Aws::String>
    void SetServiceCode(ServiceCodeT&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::forward<ServiceCodeT>(value); }
    template<typename ServiceCodeT = Aws::String>
    DescribeCreateCaseOptionsRequest& WithServiceCode(ServiceCodeT&& value) { SetServiceCode(std::forward<ServiceCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports Chinese (“zh”), English ("en"), Japanese
     * ("ja") and Korean (“ko”). You must specify the ISO 639-1 code for the
     * <code>language</code> parameter if you want support in that language.</p>
     */
    inline const Aws::String& GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    template<typename LanguageT = Aws::String>
    void SetLanguage(LanguageT&& value) { m_languageHasBeenSet = true; m_language = std::forward<LanguageT>(value); }
    template<typename LanguageT = Aws::String>
    DescribeCreateCaseOptionsRequest& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of problem for the support case. You also use the
     * <a>DescribeServices</a> operation to get the category code for a service. Each
     * Amazon Web Services service defines its own set of category codes.</p>
     */
    inline const Aws::String& GetCategoryCode() const { return m_categoryCode; }
    inline bool CategoryCodeHasBeenSet() const { return m_categoryCodeHasBeenSet; }
    template<typename CategoryCodeT = Aws::String>
    void SetCategoryCode(CategoryCodeT&& value) { m_categoryCodeHasBeenSet = true; m_categoryCode = std::forward<CategoryCodeT>(value); }
    template<typename CategoryCodeT = Aws::String>
    DescribeCreateCaseOptionsRequest& WithCategoryCode(CategoryCodeT&& value) { SetCategoryCode(std::forward<CategoryCodeT>(value)); return *this;}
    ///@}
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

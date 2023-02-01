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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorCheckResultRequest">AWS
   * API Reference</a></p>
   */
  class DescribeTrustedAdvisorCheckResultRequest : public SupportRequest
  {
  public:
    AWS_SUPPORT_API DescribeTrustedAdvisorCheckResultRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTrustedAdvisorCheckResult"; }

    AWS_SUPPORT_API Aws::String SerializePayload() const override;

    AWS_SUPPORT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline const Aws::String& GetCheckId() const{ return m_checkId; }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline bool CheckIdHasBeenSet() const { return m_checkIdHasBeenSet; }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline void SetCheckId(const Aws::String& value) { m_checkIdHasBeenSet = true; m_checkId = value; }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline void SetCheckId(Aws::String&& value) { m_checkIdHasBeenSet = true; m_checkId = std::move(value); }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline void SetCheckId(const char* value) { m_checkIdHasBeenSet = true; m_checkId.assign(value); }

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline DescribeTrustedAdvisorCheckResultRequest& WithCheckId(const Aws::String& value) { SetCheckId(value); return *this;}

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline DescribeTrustedAdvisorCheckResultRequest& WithCheckId(Aws::String&& value) { SetCheckId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Trusted Advisor check.</p>
     */
    inline DescribeTrustedAdvisorCheckResultRequest& WithCheckId(const char* value) { SetCheckId(value); return *this;}


    /**
     * <p>The ISO 639-1 code for the language that you want your check results to
     * appear in.</p> <p>The Amazon Web Services Support API currently supports the
     * following languages for Trusted Advisor:</p> <ul> <li> <p>Chinese, Simplified -
     * <code>zh</code> </p> </li> <li> <p>Chinese, Traditional - <code>zh_TW</code>
     * </p> </li> <li> <p>English - <code>en</code> </p> </li> <li> <p>French -
     * <code>fr</code> </p> </li> <li> <p>German - <code>de</code> </p> </li> <li>
     * <p>Indonesian - <code>id</code> </p> </li> <li> <p>Italian - <code>it</code>
     * </p> </li> <li> <p>Japanese - <code>ja</code> </p> </li> <li> <p>Korean -
     * <code>ko</code> </p> </li> <li> <p>Portuguese, Brazilian - <code>pt_BR</code>
     * </p> </li> <li> <p>Spanish - <code>es</code> </p> </li> </ul>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }

    /**
     * <p>The ISO 639-1 code for the language that you want your check results to
     * appear in.</p> <p>The Amazon Web Services Support API currently supports the
     * following languages for Trusted Advisor:</p> <ul> <li> <p>Chinese, Simplified -
     * <code>zh</code> </p> </li> <li> <p>Chinese, Traditional - <code>zh_TW</code>
     * </p> </li> <li> <p>English - <code>en</code> </p> </li> <li> <p>French -
     * <code>fr</code> </p> </li> <li> <p>German - <code>de</code> </p> </li> <li>
     * <p>Indonesian - <code>id</code> </p> </li> <li> <p>Italian - <code>it</code>
     * </p> </li> <li> <p>Japanese - <code>ja</code> </p> </li> <li> <p>Korean -
     * <code>ko</code> </p> </li> <li> <p>Portuguese, Brazilian - <code>pt_BR</code>
     * </p> </li> <li> <p>Spanish - <code>es</code> </p> </li> </ul>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>The ISO 639-1 code for the language that you want your check results to
     * appear in.</p> <p>The Amazon Web Services Support API currently supports the
     * following languages for Trusted Advisor:</p> <ul> <li> <p>Chinese, Simplified -
     * <code>zh</code> </p> </li> <li> <p>Chinese, Traditional - <code>zh_TW</code>
     * </p> </li> <li> <p>English - <code>en</code> </p> </li> <li> <p>French -
     * <code>fr</code> </p> </li> <li> <p>German - <code>de</code> </p> </li> <li>
     * <p>Indonesian - <code>id</code> </p> </li> <li> <p>Italian - <code>it</code>
     * </p> </li> <li> <p>Japanese - <code>ja</code> </p> </li> <li> <p>Korean -
     * <code>ko</code> </p> </li> <li> <p>Portuguese, Brazilian - <code>pt_BR</code>
     * </p> </li> <li> <p>Spanish - <code>es</code> </p> </li> </ul>
     */
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The ISO 639-1 code for the language that you want your check results to
     * appear in.</p> <p>The Amazon Web Services Support API currently supports the
     * following languages for Trusted Advisor:</p> <ul> <li> <p>Chinese, Simplified -
     * <code>zh</code> </p> </li> <li> <p>Chinese, Traditional - <code>zh_TW</code>
     * </p> </li> <li> <p>English - <code>en</code> </p> </li> <li> <p>French -
     * <code>fr</code> </p> </li> <li> <p>German - <code>de</code> </p> </li> <li>
     * <p>Indonesian - <code>id</code> </p> </li> <li> <p>Italian - <code>it</code>
     * </p> </li> <li> <p>Japanese - <code>ja</code> </p> </li> <li> <p>Korean -
     * <code>ko</code> </p> </li> <li> <p>Portuguese, Brazilian - <code>pt_BR</code>
     * </p> </li> <li> <p>Spanish - <code>es</code> </p> </li> </ul>
     */
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>The ISO 639-1 code for the language that you want your check results to
     * appear in.</p> <p>The Amazon Web Services Support API currently supports the
     * following languages for Trusted Advisor:</p> <ul> <li> <p>Chinese, Simplified -
     * <code>zh</code> </p> </li> <li> <p>Chinese, Traditional - <code>zh_TW</code>
     * </p> </li> <li> <p>English - <code>en</code> </p> </li> <li> <p>French -
     * <code>fr</code> </p> </li> <li> <p>German - <code>de</code> </p> </li> <li>
     * <p>Indonesian - <code>id</code> </p> </li> <li> <p>Italian - <code>it</code>
     * </p> </li> <li> <p>Japanese - <code>ja</code> </p> </li> <li> <p>Korean -
     * <code>ko</code> </p> </li> <li> <p>Portuguese, Brazilian - <code>pt_BR</code>
     * </p> </li> <li> <p>Spanish - <code>es</code> </p> </li> </ul>
     */
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }

    /**
     * <p>The ISO 639-1 code for the language that you want your check results to
     * appear in.</p> <p>The Amazon Web Services Support API currently supports the
     * following languages for Trusted Advisor:</p> <ul> <li> <p>Chinese, Simplified -
     * <code>zh</code> </p> </li> <li> <p>Chinese, Traditional - <code>zh_TW</code>
     * </p> </li> <li> <p>English - <code>en</code> </p> </li> <li> <p>French -
     * <code>fr</code> </p> </li> <li> <p>German - <code>de</code> </p> </li> <li>
     * <p>Indonesian - <code>id</code> </p> </li> <li> <p>Italian - <code>it</code>
     * </p> </li> <li> <p>Japanese - <code>ja</code> </p> </li> <li> <p>Korean -
     * <code>ko</code> </p> </li> <li> <p>Portuguese, Brazilian - <code>pt_BR</code>
     * </p> </li> <li> <p>Spanish - <code>es</code> </p> </li> </ul>
     */
    inline DescribeTrustedAdvisorCheckResultRequest& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}

    /**
     * <p>The ISO 639-1 code for the language that you want your check results to
     * appear in.</p> <p>The Amazon Web Services Support API currently supports the
     * following languages for Trusted Advisor:</p> <ul> <li> <p>Chinese, Simplified -
     * <code>zh</code> </p> </li> <li> <p>Chinese, Traditional - <code>zh_TW</code>
     * </p> </li> <li> <p>English - <code>en</code> </p> </li> <li> <p>French -
     * <code>fr</code> </p> </li> <li> <p>German - <code>de</code> </p> </li> <li>
     * <p>Indonesian - <code>id</code> </p> </li> <li> <p>Italian - <code>it</code>
     * </p> </li> <li> <p>Japanese - <code>ja</code> </p> </li> <li> <p>Korean -
     * <code>ko</code> </p> </li> <li> <p>Portuguese, Brazilian - <code>pt_BR</code>
     * </p> </li> <li> <p>Spanish - <code>es</code> </p> </li> </ul>
     */
    inline DescribeTrustedAdvisorCheckResultRequest& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}

    /**
     * <p>The ISO 639-1 code for the language that you want your check results to
     * appear in.</p> <p>The Amazon Web Services Support API currently supports the
     * following languages for Trusted Advisor:</p> <ul> <li> <p>Chinese, Simplified -
     * <code>zh</code> </p> </li> <li> <p>Chinese, Traditional - <code>zh_TW</code>
     * </p> </li> <li> <p>English - <code>en</code> </p> </li> <li> <p>French -
     * <code>fr</code> </p> </li> <li> <p>German - <code>de</code> </p> </li> <li>
     * <p>Indonesian - <code>id</code> </p> </li> <li> <p>Italian - <code>it</code>
     * </p> </li> <li> <p>Japanese - <code>ja</code> </p> </li> <li> <p>Korean -
     * <code>ko</code> </p> </li> <li> <p>Portuguese, Brazilian - <code>pt_BR</code>
     * </p> </li> <li> <p>Spanish - <code>es</code> </p> </li> </ul>
     */
    inline DescribeTrustedAdvisorCheckResultRequest& WithLanguage(const char* value) { SetLanguage(value); return *this;}

  private:

    Aws::String m_checkId;
    bool m_checkIdHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws

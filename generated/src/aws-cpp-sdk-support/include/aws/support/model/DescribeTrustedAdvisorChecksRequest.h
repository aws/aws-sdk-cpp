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
  class DescribeTrustedAdvisorChecksRequest : public SupportRequest
  {
  public:
    AWS_SUPPORT_API DescribeTrustedAdvisorChecksRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTrustedAdvisorChecks"; }

    AWS_SUPPORT_API Aws::String SerializePayload() const override;

    AWS_SUPPORT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ISO 639-1 code for the language that you want your checks to appear
     * in.</p> <p>The Amazon Web Services Support API currently supports the following
     * languages for Trusted Advisor:</p> <ul> <li> <p>Chinese, Simplified -
     * <code>zh</code> </p> </li> <li> <p>Chinese, Traditional - <code>zh_TW</code>
     * </p> </li> <li> <p>English - <code>en</code> </p> </li> <li> <p>French -
     * <code>fr</code> </p> </li> <li> <p>German - <code>de</code> </p> </li> <li>
     * <p>Indonesian - <code>id</code> </p> </li> <li> <p>Italian - <code>it</code>
     * </p> </li> <li> <p>Japanese - <code>ja</code> </p> </li> <li> <p>Korean -
     * <code>ko</code> </p> </li> <li> <p>Portuguese, Brazilian - <code>pt_BR</code>
     * </p> </li> <li> <p>Spanish - <code>es</code> </p> </li> </ul>
     */
    inline const Aws::String& GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    template<typename LanguageT = Aws::String>
    void SetLanguage(LanguageT&& value) { m_languageHasBeenSet = true; m_language = std::forward<LanguageT>(value); }
    template<typename LanguageT = Aws::String>
    DescribeTrustedAdvisorChecksRequest& WithLanguage(LanguageT&& value) { SetLanguage(std::forward<LanguageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_language;
    bool m_languageHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws

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
  class DescribeSeverityLevelsRequest : public SupportRequest
  {
  public:
    AWS_SUPPORT_API DescribeSeverityLevelsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSeverityLevels"; }

    AWS_SUPPORT_API Aws::String SerializePayload() const override;

    AWS_SUPPORT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline DescribeSeverityLevelsRequest& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline DescribeSeverityLevelsRequest& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline DescribeSeverityLevelsRequest& WithLanguage(const char* value) { SetLanguage(value); return *this;}

  private:

    Aws::String m_language;
    bool m_languageHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws

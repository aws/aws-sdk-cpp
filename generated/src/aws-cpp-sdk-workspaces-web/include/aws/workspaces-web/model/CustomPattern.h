/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
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
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>The pattern configuration for redacting custom data types in
   * session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/CustomPattern">AWS
   * API Reference</a></p>
   */
  class CustomPattern
  {
  public:
    AWS_WORKSPACESWEB_API CustomPattern();
    AWS_WORKSPACESWEB_API CustomPattern(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API CustomPattern& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The keyword regex for the customer pattern. After there is a match to the
     * pattern regex, the keyword regex is used to search within the proximity of the
     * match. If there is a keyword match, then the match is confirmed. If no keyword
     * regex is provided, the pattern regex match will automatically be confirmed. The
     * format must follow JavaScript regex format. The pattern must be enclosed between
     * slashes, and can have flags behind the second slash. For example, “/ab+c/gi”</p>
     */
    inline const Aws::String& GetKeywordRegex() const{ return m_keywordRegex; }
    inline bool KeywordRegexHasBeenSet() const { return m_keywordRegexHasBeenSet; }
    inline void SetKeywordRegex(const Aws::String& value) { m_keywordRegexHasBeenSet = true; m_keywordRegex = value; }
    inline void SetKeywordRegex(Aws::String&& value) { m_keywordRegexHasBeenSet = true; m_keywordRegex = std::move(value); }
    inline void SetKeywordRegex(const char* value) { m_keywordRegexHasBeenSet = true; m_keywordRegex.assign(value); }
    inline CustomPattern& WithKeywordRegex(const Aws::String& value) { SetKeywordRegex(value); return *this;}
    inline CustomPattern& WithKeywordRegex(Aws::String&& value) { SetKeywordRegex(std::move(value)); return *this;}
    inline CustomPattern& WithKeywordRegex(const char* value) { SetKeywordRegex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pattern description for the customer pattern.</p>
     */
    inline const Aws::String& GetPatternDescription() const{ return m_patternDescription; }
    inline bool PatternDescriptionHasBeenSet() const { return m_patternDescriptionHasBeenSet; }
    inline void SetPatternDescription(const Aws::String& value) { m_patternDescriptionHasBeenSet = true; m_patternDescription = value; }
    inline void SetPatternDescription(Aws::String&& value) { m_patternDescriptionHasBeenSet = true; m_patternDescription = std::move(value); }
    inline void SetPatternDescription(const char* value) { m_patternDescriptionHasBeenSet = true; m_patternDescription.assign(value); }
    inline CustomPattern& WithPatternDescription(const Aws::String& value) { SetPatternDescription(value); return *this;}
    inline CustomPattern& WithPatternDescription(Aws::String&& value) { SetPatternDescription(std::move(value)); return *this;}
    inline CustomPattern& WithPatternDescription(const char* value) { SetPatternDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pattern name for the custom pattern.</p>
     */
    inline const Aws::String& GetPatternName() const{ return m_patternName; }
    inline bool PatternNameHasBeenSet() const { return m_patternNameHasBeenSet; }
    inline void SetPatternName(const Aws::String& value) { m_patternNameHasBeenSet = true; m_patternName = value; }
    inline void SetPatternName(Aws::String&& value) { m_patternNameHasBeenSet = true; m_patternName = std::move(value); }
    inline void SetPatternName(const char* value) { m_patternNameHasBeenSet = true; m_patternName.assign(value); }
    inline CustomPattern& WithPatternName(const Aws::String& value) { SetPatternName(value); return *this;}
    inline CustomPattern& WithPatternName(Aws::String&& value) { SetPatternName(std::move(value)); return *this;}
    inline CustomPattern& WithPatternName(const char* value) { SetPatternName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pattern regex for the customer pattern. The format must follow JavaScript
     * regex format. The pattern must be enclosed between slashes, and can have flags
     * behind the second slash. For example: “/ab+c/gi”.</p>
     */
    inline const Aws::String& GetPatternRegex() const{ return m_patternRegex; }
    inline bool PatternRegexHasBeenSet() const { return m_patternRegexHasBeenSet; }
    inline void SetPatternRegex(const Aws::String& value) { m_patternRegexHasBeenSet = true; m_patternRegex = value; }
    inline void SetPatternRegex(Aws::String&& value) { m_patternRegexHasBeenSet = true; m_patternRegex = std::move(value); }
    inline void SetPatternRegex(const char* value) { m_patternRegexHasBeenSet = true; m_patternRegex.assign(value); }
    inline CustomPattern& WithPatternRegex(const Aws::String& value) { SetPatternRegex(value); return *this;}
    inline CustomPattern& WithPatternRegex(Aws::String&& value) { SetPatternRegex(std::move(value)); return *this;}
    inline CustomPattern& WithPatternRegex(const char* value) { SetPatternRegex(value); return *this;}
    ///@}
  private:

    Aws::String m_keywordRegex;
    bool m_keywordRegexHasBeenSet = false;

    Aws::String m_patternDescription;
    bool m_patternDescriptionHasBeenSet = false;

    Aws::String m_patternName;
    bool m_patternNameHasBeenSet = false;

    Aws::String m_patternRegex;
    bool m_patternRegexHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws

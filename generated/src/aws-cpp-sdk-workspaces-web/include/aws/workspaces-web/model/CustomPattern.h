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
    AWS_WORKSPACESWEB_API CustomPattern() = default;
    AWS_WORKSPACESWEB_API CustomPattern(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API CustomPattern& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The pattern name for the custom pattern.</p>
     */
    inline const Aws::String& GetPatternName() const { return m_patternName; }
    inline bool PatternNameHasBeenSet() const { return m_patternNameHasBeenSet; }
    template<typename PatternNameT = Aws::String>
    void SetPatternName(PatternNameT&& value) { m_patternNameHasBeenSet = true; m_patternName = std::forward<PatternNameT>(value); }
    template<typename PatternNameT = Aws::String>
    CustomPattern& WithPatternName(PatternNameT&& value) { SetPatternName(std::forward<PatternNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pattern regex for the customer pattern. The format must follow JavaScript
     * regex format. The pattern must be enclosed between slashes, and can have flags
     * behind the second slash. For example: “/ab+c/gi”.</p>
     */
    inline const Aws::String& GetPatternRegex() const { return m_patternRegex; }
    inline bool PatternRegexHasBeenSet() const { return m_patternRegexHasBeenSet; }
    template<typename PatternRegexT = Aws::String>
    void SetPatternRegex(PatternRegexT&& value) { m_patternRegexHasBeenSet = true; m_patternRegex = std::forward<PatternRegexT>(value); }
    template<typename PatternRegexT = Aws::String>
    CustomPattern& WithPatternRegex(PatternRegexT&& value) { SetPatternRegex(std::forward<PatternRegexT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pattern description for the customer pattern.</p>
     */
    inline const Aws::String& GetPatternDescription() const { return m_patternDescription; }
    inline bool PatternDescriptionHasBeenSet() const { return m_patternDescriptionHasBeenSet; }
    template<typename PatternDescriptionT = Aws::String>
    void SetPatternDescription(PatternDescriptionT&& value) { m_patternDescriptionHasBeenSet = true; m_patternDescription = std::forward<PatternDescriptionT>(value); }
    template<typename PatternDescriptionT = Aws::String>
    CustomPattern& WithPatternDescription(PatternDescriptionT&& value) { SetPatternDescription(std::forward<PatternDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The keyword regex for the customer pattern. After there is a match to the
     * pattern regex, the keyword regex is used to search within the proximity of the
     * match. If there is a keyword match, then the match is confirmed. If no keyword
     * regex is provided, the pattern regex match will automatically be confirmed. The
     * format must follow JavaScript regex format. The pattern must be enclosed between
     * slashes, and can have flags behind the second slash. For example, “/ab+c/gi”</p>
     */
    inline const Aws::String& GetKeywordRegex() const { return m_keywordRegex; }
    inline bool KeywordRegexHasBeenSet() const { return m_keywordRegexHasBeenSet; }
    template<typename KeywordRegexT = Aws::String>
    void SetKeywordRegex(KeywordRegexT&& value) { m_keywordRegexHasBeenSet = true; m_keywordRegex = std::forward<KeywordRegexT>(value); }
    template<typename KeywordRegexT = Aws::String>
    CustomPattern& WithKeywordRegex(KeywordRegexT&& value) { SetKeywordRegex(std::forward<KeywordRegexT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_patternName;
    bool m_patternNameHasBeenSet = false;

    Aws::String m_patternRegex;
    bool m_patternRegexHasBeenSet = false;

    Aws::String m_patternDescription;
    bool m_patternDescriptionHasBeenSet = false;

    Aws::String m_keywordRegex;
    bool m_keywordRegexHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/CustomPattern.h>
#include <aws/workspaces-web/model/RedactionPlaceHolder.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The set of patterns that determine the data types redacted in
   * session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/InlineRedactionPattern">AWS
   * API Reference</a></p>
   */
  class InlineRedactionPattern
  {
  public:
    AWS_WORKSPACESWEB_API InlineRedactionPattern() = default;
    AWS_WORKSPACESWEB_API InlineRedactionPattern(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API InlineRedactionPattern& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The built-in pattern from the list of preconfigured patterns. Either a
     * customPattern or builtInPatternId is required.</p>
     */
    inline const Aws::String& GetBuiltInPatternId() const { return m_builtInPatternId; }
    inline bool BuiltInPatternIdHasBeenSet() const { return m_builtInPatternIdHasBeenSet; }
    template<typename BuiltInPatternIdT = Aws::String>
    void SetBuiltInPatternId(BuiltInPatternIdT&& value) { m_builtInPatternIdHasBeenSet = true; m_builtInPatternId = std::forward<BuiltInPatternIdT>(value); }
    template<typename BuiltInPatternIdT = Aws::String>
    InlineRedactionPattern& WithBuiltInPatternId(BuiltInPatternIdT&& value) { SetBuiltInPatternId(std::forward<BuiltInPatternIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>&gt;The configuration for a custom pattern. Either a customPattern or
     * builtInPatternId is required.</p>
     */
    inline const CustomPattern& GetCustomPattern() const { return m_customPattern; }
    inline bool CustomPatternHasBeenSet() const { return m_customPatternHasBeenSet; }
    template<typename CustomPatternT = CustomPattern>
    void SetCustomPattern(CustomPatternT&& value) { m_customPatternHasBeenSet = true; m_customPattern = std::forward<CustomPatternT>(value); }
    template<typename CustomPatternT = CustomPattern>
    InlineRedactionPattern& WithCustomPattern(CustomPatternT&& value) { SetCustomPattern(std::forward<CustomPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The redaction placeholder that will replace the redacted text in session for
     * the inline redaction pattern.</p>
     */
    inline const RedactionPlaceHolder& GetRedactionPlaceHolder() const { return m_redactionPlaceHolder; }
    inline bool RedactionPlaceHolderHasBeenSet() const { return m_redactionPlaceHolderHasBeenSet; }
    template<typename RedactionPlaceHolderT = RedactionPlaceHolder>
    void SetRedactionPlaceHolder(RedactionPlaceHolderT&& value) { m_redactionPlaceHolderHasBeenSet = true; m_redactionPlaceHolder = std::forward<RedactionPlaceHolderT>(value); }
    template<typename RedactionPlaceHolderT = RedactionPlaceHolder>
    InlineRedactionPattern& WithRedactionPlaceHolder(RedactionPlaceHolderT&& value) { SetRedactionPlaceHolder(std::forward<RedactionPlaceHolderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The enforced URL configuration for the inline redaction pattern. This will
     * override the global enforced URL configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnforcedUrls() const { return m_enforcedUrls; }
    inline bool EnforcedUrlsHasBeenSet() const { return m_enforcedUrlsHasBeenSet; }
    template<typename EnforcedUrlsT = Aws::Vector<Aws::String>>
    void SetEnforcedUrls(EnforcedUrlsT&& value) { m_enforcedUrlsHasBeenSet = true; m_enforcedUrls = std::forward<EnforcedUrlsT>(value); }
    template<typename EnforcedUrlsT = Aws::Vector<Aws::String>>
    InlineRedactionPattern& WithEnforcedUrls(EnforcedUrlsT&& value) { SetEnforcedUrls(std::forward<EnforcedUrlsT>(value)); return *this;}
    template<typename EnforcedUrlsT = Aws::String>
    InlineRedactionPattern& AddEnforcedUrls(EnforcedUrlsT&& value) { m_enforcedUrlsHasBeenSet = true; m_enforcedUrls.emplace_back(std::forward<EnforcedUrlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The exempt URL configuration for the inline redaction pattern. This will
     * override the global exempt URL configuration for the inline redaction
     * pattern.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExemptUrls() const { return m_exemptUrls; }
    inline bool ExemptUrlsHasBeenSet() const { return m_exemptUrlsHasBeenSet; }
    template<typename ExemptUrlsT = Aws::Vector<Aws::String>>
    void SetExemptUrls(ExemptUrlsT&& value) { m_exemptUrlsHasBeenSet = true; m_exemptUrls = std::forward<ExemptUrlsT>(value); }
    template<typename ExemptUrlsT = Aws::Vector<Aws::String>>
    InlineRedactionPattern& WithExemptUrls(ExemptUrlsT&& value) { SetExemptUrls(std::forward<ExemptUrlsT>(value)); return *this;}
    template<typename ExemptUrlsT = Aws::String>
    InlineRedactionPattern& AddExemptUrls(ExemptUrlsT&& value) { m_exemptUrlsHasBeenSet = true; m_exemptUrls.emplace_back(std::forward<ExemptUrlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The confidence level for inline redaction pattern. This indicates the
     * certainty of data type matches in the redaction process. Confidence level 3
     * means high confidence, and requires a formatted text pattern match in order for
     * content to be redacted. Confidence level 2 means medium confidence, and
     * redaction considers both formatted and unformatted text, and adds keyword
     * associate to the logic. Confidence level 1 means low confidence, and redaction
     * is enforced for both formatted pattern + unformatted pattern without keyword.
     * This overrides the global confidence level.</p>
     */
    inline int GetConfidenceLevel() const { return m_confidenceLevel; }
    inline bool ConfidenceLevelHasBeenSet() const { return m_confidenceLevelHasBeenSet; }
    inline void SetConfidenceLevel(int value) { m_confidenceLevelHasBeenSet = true; m_confidenceLevel = value; }
    inline InlineRedactionPattern& WithConfidenceLevel(int value) { SetConfidenceLevel(value); return *this;}
    ///@}
  private:

    Aws::String m_builtInPatternId;
    bool m_builtInPatternIdHasBeenSet = false;

    CustomPattern m_customPattern;
    bool m_customPatternHasBeenSet = false;

    RedactionPlaceHolder m_redactionPlaceHolder;
    bool m_redactionPlaceHolderHasBeenSet = false;

    Aws::Vector<Aws::String> m_enforcedUrls;
    bool m_enforcedUrlsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exemptUrls;
    bool m_exemptUrlsHasBeenSet = false;

    int m_confidenceLevel{0};
    bool m_confidenceLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws

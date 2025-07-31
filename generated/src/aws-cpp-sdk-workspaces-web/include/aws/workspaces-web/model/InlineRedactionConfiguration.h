/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-web/model/InlineRedactionPattern.h>
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
   * <p>The configuration for in-session inline redaction.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/InlineRedactionConfiguration">AWS
   * API Reference</a></p>
   */
  class InlineRedactionConfiguration
  {
  public:
    AWS_WORKSPACESWEB_API InlineRedactionConfiguration() = default;
    AWS_WORKSPACESWEB_API InlineRedactionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API InlineRedactionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The inline redaction patterns to be enabled for the inline redaction
     * configuration.</p>
     */
    inline const Aws::Vector<InlineRedactionPattern>& GetInlineRedactionPatterns() const { return m_inlineRedactionPatterns; }
    inline bool InlineRedactionPatternsHasBeenSet() const { return m_inlineRedactionPatternsHasBeenSet; }
    template<typename InlineRedactionPatternsT = Aws::Vector<InlineRedactionPattern>>
    void SetInlineRedactionPatterns(InlineRedactionPatternsT&& value) { m_inlineRedactionPatternsHasBeenSet = true; m_inlineRedactionPatterns = std::forward<InlineRedactionPatternsT>(value); }
    template<typename InlineRedactionPatternsT = Aws::Vector<InlineRedactionPattern>>
    InlineRedactionConfiguration& WithInlineRedactionPatterns(InlineRedactionPatternsT&& value) { SetInlineRedactionPatterns(std::forward<InlineRedactionPatternsT>(value)); return *this;}
    template<typename InlineRedactionPatternsT = InlineRedactionPattern>
    InlineRedactionConfiguration& AddInlineRedactionPatterns(InlineRedactionPatternsT&& value) { m_inlineRedactionPatternsHasBeenSet = true; m_inlineRedactionPatterns.emplace_back(std::forward<InlineRedactionPatternsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The global enforced URL configuration for the inline redaction configuration.
     * This is applied to patterns that do not have a pattern-level enforced URL
     * list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlobalEnforcedUrls() const { return m_globalEnforcedUrls; }
    inline bool GlobalEnforcedUrlsHasBeenSet() const { return m_globalEnforcedUrlsHasBeenSet; }
    template<typename GlobalEnforcedUrlsT = Aws::Vector<Aws::String>>
    void SetGlobalEnforcedUrls(GlobalEnforcedUrlsT&& value) { m_globalEnforcedUrlsHasBeenSet = true; m_globalEnforcedUrls = std::forward<GlobalEnforcedUrlsT>(value); }
    template<typename GlobalEnforcedUrlsT = Aws::Vector<Aws::String>>
    InlineRedactionConfiguration& WithGlobalEnforcedUrls(GlobalEnforcedUrlsT&& value) { SetGlobalEnforcedUrls(std::forward<GlobalEnforcedUrlsT>(value)); return *this;}
    template<typename GlobalEnforcedUrlsT = Aws::String>
    InlineRedactionConfiguration& AddGlobalEnforcedUrls(GlobalEnforcedUrlsT&& value) { m_globalEnforcedUrlsHasBeenSet = true; m_globalEnforcedUrls.emplace_back(std::forward<GlobalEnforcedUrlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The global exempt URL configuration for the inline redaction configuration.
     * This is applied to patterns that do not have a pattern-level exempt URL
     * list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlobalExemptUrls() const { return m_globalExemptUrls; }
    inline bool GlobalExemptUrlsHasBeenSet() const { return m_globalExemptUrlsHasBeenSet; }
    template<typename GlobalExemptUrlsT = Aws::Vector<Aws::String>>
    void SetGlobalExemptUrls(GlobalExemptUrlsT&& value) { m_globalExemptUrlsHasBeenSet = true; m_globalExemptUrls = std::forward<GlobalExemptUrlsT>(value); }
    template<typename GlobalExemptUrlsT = Aws::Vector<Aws::String>>
    InlineRedactionConfiguration& WithGlobalExemptUrls(GlobalExemptUrlsT&& value) { SetGlobalExemptUrls(std::forward<GlobalExemptUrlsT>(value)); return *this;}
    template<typename GlobalExemptUrlsT = Aws::String>
    InlineRedactionConfiguration& AddGlobalExemptUrls(GlobalExemptUrlsT&& value) { m_globalExemptUrlsHasBeenSet = true; m_globalExemptUrls.emplace_back(std::forward<GlobalExemptUrlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The global confidence level for the inline redaction configuration. This
     * indicates the certainty of data type matches in the redaction process.
     * Confidence level 3 means high confidence, and requires a formatted text pattern
     * match in order for content to be redacted. Confidence level 2 means medium
     * confidence, and redaction considers both formatted and unformatted text, and
     * adds keyword associate to the logic. Confidence level 1 means low confidence,
     * and redaction is enforced for both formatted pattern + unformatted pattern
     * without keyword. This is applied to patterns that do not have a pattern-level
     * confidence level. Defaults to confidence level 2.</p>
     */
    inline int GetGlobalConfidenceLevel() const { return m_globalConfidenceLevel; }
    inline bool GlobalConfidenceLevelHasBeenSet() const { return m_globalConfidenceLevelHasBeenSet; }
    inline void SetGlobalConfidenceLevel(int value) { m_globalConfidenceLevelHasBeenSet = true; m_globalConfidenceLevel = value; }
    inline InlineRedactionConfiguration& WithGlobalConfidenceLevel(int value) { SetGlobalConfidenceLevel(value); return *this;}
    ///@}
  private:

    Aws::Vector<InlineRedactionPattern> m_inlineRedactionPatterns;
    bool m_inlineRedactionPatternsHasBeenSet = false;

    Aws::Vector<Aws::String> m_globalEnforcedUrls;
    bool m_globalEnforcedUrlsHasBeenSet = false;

    Aws::Vector<Aws::String> m_globalExemptUrls;
    bool m_globalExemptUrlsHasBeenSet = false;

    int m_globalConfidenceLevel{0};
    bool m_globalConfidenceLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws

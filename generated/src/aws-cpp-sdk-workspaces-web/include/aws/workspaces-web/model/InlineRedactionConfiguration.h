/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/InlineRedactionPattern.h>
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
    AWS_WORKSPACESWEB_API InlineRedactionConfiguration();
    AWS_WORKSPACESWEB_API InlineRedactionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API InlineRedactionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline int GetGlobalConfidenceLevel() const{ return m_globalConfidenceLevel; }
    inline bool GlobalConfidenceLevelHasBeenSet() const { return m_globalConfidenceLevelHasBeenSet; }
    inline void SetGlobalConfidenceLevel(int value) { m_globalConfidenceLevelHasBeenSet = true; m_globalConfidenceLevel = value; }
    inline InlineRedactionConfiguration& WithGlobalConfidenceLevel(int value) { SetGlobalConfidenceLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The global enforced URL configuration for the inline redaction configuration.
     * This is applied to patterns that do not have a pattern-level enforced URL
     * list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlobalEnforcedUrls() const{ return m_globalEnforcedUrls; }
    inline bool GlobalEnforcedUrlsHasBeenSet() const { return m_globalEnforcedUrlsHasBeenSet; }
    inline void SetGlobalEnforcedUrls(const Aws::Vector<Aws::String>& value) { m_globalEnforcedUrlsHasBeenSet = true; m_globalEnforcedUrls = value; }
    inline void SetGlobalEnforcedUrls(Aws::Vector<Aws::String>&& value) { m_globalEnforcedUrlsHasBeenSet = true; m_globalEnforcedUrls = std::move(value); }
    inline InlineRedactionConfiguration& WithGlobalEnforcedUrls(const Aws::Vector<Aws::String>& value) { SetGlobalEnforcedUrls(value); return *this;}
    inline InlineRedactionConfiguration& WithGlobalEnforcedUrls(Aws::Vector<Aws::String>&& value) { SetGlobalEnforcedUrls(std::move(value)); return *this;}
    inline InlineRedactionConfiguration& AddGlobalEnforcedUrls(const Aws::String& value) { m_globalEnforcedUrlsHasBeenSet = true; m_globalEnforcedUrls.push_back(value); return *this; }
    inline InlineRedactionConfiguration& AddGlobalEnforcedUrls(Aws::String&& value) { m_globalEnforcedUrlsHasBeenSet = true; m_globalEnforcedUrls.push_back(std::move(value)); return *this; }
    inline InlineRedactionConfiguration& AddGlobalEnforcedUrls(const char* value) { m_globalEnforcedUrlsHasBeenSet = true; m_globalEnforcedUrls.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The global exempt URL configuration for the inline redaction configuration.
     * This is applied to patterns that do not have a pattern-level exempt URL
     * list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlobalExemptUrls() const{ return m_globalExemptUrls; }
    inline bool GlobalExemptUrlsHasBeenSet() const { return m_globalExemptUrlsHasBeenSet; }
    inline void SetGlobalExemptUrls(const Aws::Vector<Aws::String>& value) { m_globalExemptUrlsHasBeenSet = true; m_globalExemptUrls = value; }
    inline void SetGlobalExemptUrls(Aws::Vector<Aws::String>&& value) { m_globalExemptUrlsHasBeenSet = true; m_globalExemptUrls = std::move(value); }
    inline InlineRedactionConfiguration& WithGlobalExemptUrls(const Aws::Vector<Aws::String>& value) { SetGlobalExemptUrls(value); return *this;}
    inline InlineRedactionConfiguration& WithGlobalExemptUrls(Aws::Vector<Aws::String>&& value) { SetGlobalExemptUrls(std::move(value)); return *this;}
    inline InlineRedactionConfiguration& AddGlobalExemptUrls(const Aws::String& value) { m_globalExemptUrlsHasBeenSet = true; m_globalExemptUrls.push_back(value); return *this; }
    inline InlineRedactionConfiguration& AddGlobalExemptUrls(Aws::String&& value) { m_globalExemptUrlsHasBeenSet = true; m_globalExemptUrls.push_back(std::move(value)); return *this; }
    inline InlineRedactionConfiguration& AddGlobalExemptUrls(const char* value) { m_globalExemptUrlsHasBeenSet = true; m_globalExemptUrls.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The inline redaction patterns to be enabled for the inline redaction
     * configuration.</p>
     */
    inline const Aws::Vector<InlineRedactionPattern>& GetInlineRedactionPatterns() const{ return m_inlineRedactionPatterns; }
    inline bool InlineRedactionPatternsHasBeenSet() const { return m_inlineRedactionPatternsHasBeenSet; }
    inline void SetInlineRedactionPatterns(const Aws::Vector<InlineRedactionPattern>& value) { m_inlineRedactionPatternsHasBeenSet = true; m_inlineRedactionPatterns = value; }
    inline void SetInlineRedactionPatterns(Aws::Vector<InlineRedactionPattern>&& value) { m_inlineRedactionPatternsHasBeenSet = true; m_inlineRedactionPatterns = std::move(value); }
    inline InlineRedactionConfiguration& WithInlineRedactionPatterns(const Aws::Vector<InlineRedactionPattern>& value) { SetInlineRedactionPatterns(value); return *this;}
    inline InlineRedactionConfiguration& WithInlineRedactionPatterns(Aws::Vector<InlineRedactionPattern>&& value) { SetInlineRedactionPatterns(std::move(value)); return *this;}
    inline InlineRedactionConfiguration& AddInlineRedactionPatterns(const InlineRedactionPattern& value) { m_inlineRedactionPatternsHasBeenSet = true; m_inlineRedactionPatterns.push_back(value); return *this; }
    inline InlineRedactionConfiguration& AddInlineRedactionPatterns(InlineRedactionPattern&& value) { m_inlineRedactionPatternsHasBeenSet = true; m_inlineRedactionPatterns.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_globalConfidenceLevel;
    bool m_globalConfidenceLevelHasBeenSet = false;

    Aws::Vector<Aws::String> m_globalEnforcedUrls;
    bool m_globalEnforcedUrlsHasBeenSet = false;

    Aws::Vector<Aws::String> m_globalExemptUrls;
    bool m_globalExemptUrlsHasBeenSet = false;

    Aws::Vector<InlineRedactionPattern> m_inlineRedactionPatterns;
    bool m_inlineRedactionPatternsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws

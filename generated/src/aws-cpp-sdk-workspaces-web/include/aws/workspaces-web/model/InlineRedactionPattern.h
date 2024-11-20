/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/CustomPattern.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-web/model/RedactionPlaceHolder.h>
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
    AWS_WORKSPACESWEB_API InlineRedactionPattern();
    AWS_WORKSPACESWEB_API InlineRedactionPattern(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API InlineRedactionPattern& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The built-in pattern from the list of preconfigured patterns. Either a
     * customPattern or builtInPatternId is required.</p>
     */
    inline const Aws::String& GetBuiltInPatternId() const{ return m_builtInPatternId; }
    inline bool BuiltInPatternIdHasBeenSet() const { return m_builtInPatternIdHasBeenSet; }
    inline void SetBuiltInPatternId(const Aws::String& value) { m_builtInPatternIdHasBeenSet = true; m_builtInPatternId = value; }
    inline void SetBuiltInPatternId(Aws::String&& value) { m_builtInPatternIdHasBeenSet = true; m_builtInPatternId = std::move(value); }
    inline void SetBuiltInPatternId(const char* value) { m_builtInPatternIdHasBeenSet = true; m_builtInPatternId.assign(value); }
    inline InlineRedactionPattern& WithBuiltInPatternId(const Aws::String& value) { SetBuiltInPatternId(value); return *this;}
    inline InlineRedactionPattern& WithBuiltInPatternId(Aws::String&& value) { SetBuiltInPatternId(std::move(value)); return *this;}
    inline InlineRedactionPattern& WithBuiltInPatternId(const char* value) { SetBuiltInPatternId(value); return *this;}
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
    inline int GetConfidenceLevel() const{ return m_confidenceLevel; }
    inline bool ConfidenceLevelHasBeenSet() const { return m_confidenceLevelHasBeenSet; }
    inline void SetConfidenceLevel(int value) { m_confidenceLevelHasBeenSet = true; m_confidenceLevel = value; }
    inline InlineRedactionPattern& WithConfidenceLevel(int value) { SetConfidenceLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>&gt;The configuration for a custom pattern. Either a customPattern or
     * builtInPatternId is required.</p>
     */
    inline const CustomPattern& GetCustomPattern() const{ return m_customPattern; }
    inline bool CustomPatternHasBeenSet() const { return m_customPatternHasBeenSet; }
    inline void SetCustomPattern(const CustomPattern& value) { m_customPatternHasBeenSet = true; m_customPattern = value; }
    inline void SetCustomPattern(CustomPattern&& value) { m_customPatternHasBeenSet = true; m_customPattern = std::move(value); }
    inline InlineRedactionPattern& WithCustomPattern(const CustomPattern& value) { SetCustomPattern(value); return *this;}
    inline InlineRedactionPattern& WithCustomPattern(CustomPattern&& value) { SetCustomPattern(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The enforced URL configuration for the inline redaction pattern. This will
     * override the global enforced URL configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnforcedUrls() const{ return m_enforcedUrls; }
    inline bool EnforcedUrlsHasBeenSet() const { return m_enforcedUrlsHasBeenSet; }
    inline void SetEnforcedUrls(const Aws::Vector<Aws::String>& value) { m_enforcedUrlsHasBeenSet = true; m_enforcedUrls = value; }
    inline void SetEnforcedUrls(Aws::Vector<Aws::String>&& value) { m_enforcedUrlsHasBeenSet = true; m_enforcedUrls = std::move(value); }
    inline InlineRedactionPattern& WithEnforcedUrls(const Aws::Vector<Aws::String>& value) { SetEnforcedUrls(value); return *this;}
    inline InlineRedactionPattern& WithEnforcedUrls(Aws::Vector<Aws::String>&& value) { SetEnforcedUrls(std::move(value)); return *this;}
    inline InlineRedactionPattern& AddEnforcedUrls(const Aws::String& value) { m_enforcedUrlsHasBeenSet = true; m_enforcedUrls.push_back(value); return *this; }
    inline InlineRedactionPattern& AddEnforcedUrls(Aws::String&& value) { m_enforcedUrlsHasBeenSet = true; m_enforcedUrls.push_back(std::move(value)); return *this; }
    inline InlineRedactionPattern& AddEnforcedUrls(const char* value) { m_enforcedUrlsHasBeenSet = true; m_enforcedUrls.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The exempt URL configuration for the inline redaction pattern. This will
     * override the global exempt URL configuration for the inline redaction
     * pattern.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExemptUrls() const{ return m_exemptUrls; }
    inline bool ExemptUrlsHasBeenSet() const { return m_exemptUrlsHasBeenSet; }
    inline void SetExemptUrls(const Aws::Vector<Aws::String>& value) { m_exemptUrlsHasBeenSet = true; m_exemptUrls = value; }
    inline void SetExemptUrls(Aws::Vector<Aws::String>&& value) { m_exemptUrlsHasBeenSet = true; m_exemptUrls = std::move(value); }
    inline InlineRedactionPattern& WithExemptUrls(const Aws::Vector<Aws::String>& value) { SetExemptUrls(value); return *this;}
    inline InlineRedactionPattern& WithExemptUrls(Aws::Vector<Aws::String>&& value) { SetExemptUrls(std::move(value)); return *this;}
    inline InlineRedactionPattern& AddExemptUrls(const Aws::String& value) { m_exemptUrlsHasBeenSet = true; m_exemptUrls.push_back(value); return *this; }
    inline InlineRedactionPattern& AddExemptUrls(Aws::String&& value) { m_exemptUrlsHasBeenSet = true; m_exemptUrls.push_back(std::move(value)); return *this; }
    inline InlineRedactionPattern& AddExemptUrls(const char* value) { m_exemptUrlsHasBeenSet = true; m_exemptUrls.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The redaction placeholder that will replace the redacted text in session for
     * the inline redaction pattern.</p>
     */
    inline const RedactionPlaceHolder& GetRedactionPlaceHolder() const{ return m_redactionPlaceHolder; }
    inline bool RedactionPlaceHolderHasBeenSet() const { return m_redactionPlaceHolderHasBeenSet; }
    inline void SetRedactionPlaceHolder(const RedactionPlaceHolder& value) { m_redactionPlaceHolderHasBeenSet = true; m_redactionPlaceHolder = value; }
    inline void SetRedactionPlaceHolder(RedactionPlaceHolder&& value) { m_redactionPlaceHolderHasBeenSet = true; m_redactionPlaceHolder = std::move(value); }
    inline InlineRedactionPattern& WithRedactionPlaceHolder(const RedactionPlaceHolder& value) { SetRedactionPlaceHolder(value); return *this;}
    inline InlineRedactionPattern& WithRedactionPlaceHolder(RedactionPlaceHolder&& value) { SetRedactionPlaceHolder(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_builtInPatternId;
    bool m_builtInPatternIdHasBeenSet = false;

    int m_confidenceLevel;
    bool m_confidenceLevelHasBeenSet = false;

    CustomPattern m_customPattern;
    bool m_customPatternHasBeenSet = false;

    Aws::Vector<Aws::String> m_enforcedUrls;
    bool m_enforcedUrlsHasBeenSet = false;

    Aws::Vector<Aws::String> m_exemptUrls;
    bool m_exemptUrlsHasBeenSet = false;

    RedactionPlaceHolder m_redactionPlaceHolder;
    bool m_redactionPlaceHolderHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws

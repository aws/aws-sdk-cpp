/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>Details about the content that you want MediaPackage to pass through in the
   * manifest to the playback device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/DashProgramInformation">AWS
   * API Reference</a></p>
   */
  class DashProgramInformation
  {
  public:
    AWS_MEDIAPACKAGEV2_API DashProgramInformation() = default;
    AWS_MEDIAPACKAGEV2_API DashProgramInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API DashProgramInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title for the manifest.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    DashProgramInformation& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the content provider.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    DashProgramInformation& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A copyright statement about the content.</p>
     */
    inline const Aws::String& GetCopyright() const { return m_copyright; }
    inline bool CopyrightHasBeenSet() const { return m_copyrightHasBeenSet; }
    template<typename CopyrightT = Aws::String>
    void SetCopyright(CopyrightT&& value) { m_copyrightHasBeenSet = true; m_copyright = std::forward<CopyrightT>(value); }
    template<typename CopyrightT = Aws::String>
    DashProgramInformation& WithCopyright(CopyrightT&& value) { SetCopyright(std::forward<CopyrightT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language code for this manifest.</p>
     */
    inline const Aws::String& GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    template<typename LanguageCodeT = Aws::String>
    void SetLanguageCode(LanguageCodeT&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::forward<LanguageCodeT>(value); }
    template<typename LanguageCodeT = Aws::String>
    DashProgramInformation& WithLanguageCode(LanguageCodeT&& value) { SetLanguageCode(std::forward<LanguageCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An absolute URL that contains more information about this content.</p>
     */
    inline const Aws::String& GetMoreInformationUrl() const { return m_moreInformationUrl; }
    inline bool MoreInformationUrlHasBeenSet() const { return m_moreInformationUrlHasBeenSet; }
    template<typename MoreInformationUrlT = Aws::String>
    void SetMoreInformationUrl(MoreInformationUrlT&& value) { m_moreInformationUrlHasBeenSet = true; m_moreInformationUrl = std::forward<MoreInformationUrlT>(value); }
    template<typename MoreInformationUrlT = Aws::String>
    DashProgramInformation& WithMoreInformationUrl(MoreInformationUrlT&& value) { SetMoreInformationUrl(std::forward<MoreInformationUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_copyright;
    bool m_copyrightHasBeenSet = false;

    Aws::String m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::String m_moreInformationUrl;
    bool m_moreInformationUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws

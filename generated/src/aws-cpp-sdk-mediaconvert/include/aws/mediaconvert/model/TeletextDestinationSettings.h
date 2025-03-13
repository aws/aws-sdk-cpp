/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/TeletextPageType.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings related to teletext captions. Set up teletext captions in the same
   * output as your video. For more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/teletext-output-captions.html.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TeletextDestinationSettings">AWS
   * API Reference</a></p>
   */
  class TeletextDestinationSettings
  {
  public:
    AWS_MEDIACONVERT_API TeletextDestinationSettings() = default;
    AWS_MEDIACONVERT_API TeletextDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API TeletextDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Set pageNumber to the Teletext page number for the destination captions for this
     * output. This value must be a three-digit hexadecimal string; strings ending in
     * -FF are invalid. If you are passing through the entire set of Teletext data, do
     * not use this field.
     */
    inline const Aws::String& GetPageNumber() const { return m_pageNumber; }
    inline bool PageNumberHasBeenSet() const { return m_pageNumberHasBeenSet; }
    template<typename PageNumberT = Aws::String>
    void SetPageNumber(PageNumberT&& value) { m_pageNumberHasBeenSet = true; m_pageNumber = std::forward<PageNumberT>(value); }
    template<typename PageNumberT = Aws::String>
    TeletextDestinationSettings& WithPageNumber(PageNumberT&& value) { SetPageNumber(std::forward<PageNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the page types for this Teletext page. If you don't specify a value
     * here, the service sets the page type to the default value Subtitle. If you pass
     * through the entire set of Teletext data, don't use this field. When you pass
     * through a set of Teletext pages, your output has the same page types as your
     * input.
     */
    inline const Aws::Vector<TeletextPageType>& GetPageTypes() const { return m_pageTypes; }
    inline bool PageTypesHasBeenSet() const { return m_pageTypesHasBeenSet; }
    template<typename PageTypesT = Aws::Vector<TeletextPageType>>
    void SetPageTypes(PageTypesT&& value) { m_pageTypesHasBeenSet = true; m_pageTypes = std::forward<PageTypesT>(value); }
    template<typename PageTypesT = Aws::Vector<TeletextPageType>>
    TeletextDestinationSettings& WithPageTypes(PageTypesT&& value) { SetPageTypes(std::forward<PageTypesT>(value)); return *this;}
    inline TeletextDestinationSettings& AddPageTypes(TeletextPageType value) { m_pageTypesHasBeenSet = true; m_pageTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_pageNumber;
    bool m_pageNumberHasBeenSet = false;

    Aws::Vector<TeletextPageType> m_pageTypes;
    bool m_pageTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws

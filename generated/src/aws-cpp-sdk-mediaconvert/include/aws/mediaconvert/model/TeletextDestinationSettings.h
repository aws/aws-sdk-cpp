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
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/teletext-output-captions.html.
   * When you work directly in your JSON job specification, include this object and
   * any required children when you set destinationType to TELETEXT.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TeletextDestinationSettings">AWS
   * API Reference</a></p>
   */
  class TeletextDestinationSettings
  {
  public:
    AWS_MEDIACONVERT_API TeletextDestinationSettings();
    AWS_MEDIACONVERT_API TeletextDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API TeletextDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Set pageNumber to the Teletext page number for the destination captions for this
     * output. This value must be a three-digit hexadecimal string; strings ending in
     * -FF are invalid. If you are passing through the entire set of Teletext data, do
     * not use this field.
     */
    inline const Aws::String& GetPageNumber() const{ return m_pageNumber; }

    /**
     * Set pageNumber to the Teletext page number for the destination captions for this
     * output. This value must be a three-digit hexadecimal string; strings ending in
     * -FF are invalid. If you are passing through the entire set of Teletext data, do
     * not use this field.
     */
    inline bool PageNumberHasBeenSet() const { return m_pageNumberHasBeenSet; }

    /**
     * Set pageNumber to the Teletext page number for the destination captions for this
     * output. This value must be a three-digit hexadecimal string; strings ending in
     * -FF are invalid. If you are passing through the entire set of Teletext data, do
     * not use this field.
     */
    inline void SetPageNumber(const Aws::String& value) { m_pageNumberHasBeenSet = true; m_pageNumber = value; }

    /**
     * Set pageNumber to the Teletext page number for the destination captions for this
     * output. This value must be a three-digit hexadecimal string; strings ending in
     * -FF are invalid. If you are passing through the entire set of Teletext data, do
     * not use this field.
     */
    inline void SetPageNumber(Aws::String&& value) { m_pageNumberHasBeenSet = true; m_pageNumber = std::move(value); }

    /**
     * Set pageNumber to the Teletext page number for the destination captions for this
     * output. This value must be a three-digit hexadecimal string; strings ending in
     * -FF are invalid. If you are passing through the entire set of Teletext data, do
     * not use this field.
     */
    inline void SetPageNumber(const char* value) { m_pageNumberHasBeenSet = true; m_pageNumber.assign(value); }

    /**
     * Set pageNumber to the Teletext page number for the destination captions for this
     * output. This value must be a three-digit hexadecimal string; strings ending in
     * -FF are invalid. If you are passing through the entire set of Teletext data, do
     * not use this field.
     */
    inline TeletextDestinationSettings& WithPageNumber(const Aws::String& value) { SetPageNumber(value); return *this;}

    /**
     * Set pageNumber to the Teletext page number for the destination captions for this
     * output. This value must be a three-digit hexadecimal string; strings ending in
     * -FF are invalid. If you are passing through the entire set of Teletext data, do
     * not use this field.
     */
    inline TeletextDestinationSettings& WithPageNumber(Aws::String&& value) { SetPageNumber(std::move(value)); return *this;}

    /**
     * Set pageNumber to the Teletext page number for the destination captions for this
     * output. This value must be a three-digit hexadecimal string; strings ending in
     * -FF are invalid. If you are passing through the entire set of Teletext data, do
     * not use this field.
     */
    inline TeletextDestinationSettings& WithPageNumber(const char* value) { SetPageNumber(value); return *this;}


    /**
     * Specify the page types for this Teletext page. If you don't specify a value
     * here, the service sets the page type to the default value Subtitle
     * (PAGE_TYPE_SUBTITLE). If you pass through the entire set of Teletext data, don't
     * use this field. When you pass through a set of Teletext pages, your output has
     * the same page types as your input.
     */
    inline const Aws::Vector<TeletextPageType>& GetPageTypes() const{ return m_pageTypes; }

    /**
     * Specify the page types for this Teletext page. If you don't specify a value
     * here, the service sets the page type to the default value Subtitle
     * (PAGE_TYPE_SUBTITLE). If you pass through the entire set of Teletext data, don't
     * use this field. When you pass through a set of Teletext pages, your output has
     * the same page types as your input.
     */
    inline bool PageTypesHasBeenSet() const { return m_pageTypesHasBeenSet; }

    /**
     * Specify the page types for this Teletext page. If you don't specify a value
     * here, the service sets the page type to the default value Subtitle
     * (PAGE_TYPE_SUBTITLE). If you pass through the entire set of Teletext data, don't
     * use this field. When you pass through a set of Teletext pages, your output has
     * the same page types as your input.
     */
    inline void SetPageTypes(const Aws::Vector<TeletextPageType>& value) { m_pageTypesHasBeenSet = true; m_pageTypes = value; }

    /**
     * Specify the page types for this Teletext page. If you don't specify a value
     * here, the service sets the page type to the default value Subtitle
     * (PAGE_TYPE_SUBTITLE). If you pass through the entire set of Teletext data, don't
     * use this field. When you pass through a set of Teletext pages, your output has
     * the same page types as your input.
     */
    inline void SetPageTypes(Aws::Vector<TeletextPageType>&& value) { m_pageTypesHasBeenSet = true; m_pageTypes = std::move(value); }

    /**
     * Specify the page types for this Teletext page. If you don't specify a value
     * here, the service sets the page type to the default value Subtitle
     * (PAGE_TYPE_SUBTITLE). If you pass through the entire set of Teletext data, don't
     * use this field. When you pass through a set of Teletext pages, your output has
     * the same page types as your input.
     */
    inline TeletextDestinationSettings& WithPageTypes(const Aws::Vector<TeletextPageType>& value) { SetPageTypes(value); return *this;}

    /**
     * Specify the page types for this Teletext page. If you don't specify a value
     * here, the service sets the page type to the default value Subtitle
     * (PAGE_TYPE_SUBTITLE). If you pass through the entire set of Teletext data, don't
     * use this field. When you pass through a set of Teletext pages, your output has
     * the same page types as your input.
     */
    inline TeletextDestinationSettings& WithPageTypes(Aws::Vector<TeletextPageType>&& value) { SetPageTypes(std::move(value)); return *this;}

    /**
     * Specify the page types for this Teletext page. If you don't specify a value
     * here, the service sets the page type to the default value Subtitle
     * (PAGE_TYPE_SUBTITLE). If you pass through the entire set of Teletext data, don't
     * use this field. When you pass through a set of Teletext pages, your output has
     * the same page types as your input.
     */
    inline TeletextDestinationSettings& AddPageTypes(const TeletextPageType& value) { m_pageTypesHasBeenSet = true; m_pageTypes.push_back(value); return *this; }

    /**
     * Specify the page types for this Teletext page. If you don't specify a value
     * here, the service sets the page type to the default value Subtitle
     * (PAGE_TYPE_SUBTITLE). If you pass through the entire set of Teletext data, don't
     * use this field. When you pass through a set of Teletext pages, your output has
     * the same page types as your input.
     */
    inline TeletextDestinationSettings& AddPageTypes(TeletextPageType&& value) { m_pageTypesHasBeenSet = true; m_pageTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_pageNumber;
    bool m_pageNumberHasBeenSet = false;

    Aws::Vector<TeletextPageType> m_pageTypes;
    bool m_pageTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws

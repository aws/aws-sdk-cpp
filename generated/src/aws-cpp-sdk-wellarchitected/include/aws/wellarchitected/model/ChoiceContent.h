/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>The choice content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ChoiceContent">AWS
   * API Reference</a></p>
   */
  class ChoiceContent
  {
  public:
    AWS_WELLARCHITECTED_API ChoiceContent();
    AWS_WELLARCHITECTED_API ChoiceContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ChoiceContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The display text for the choice content.</p>
     */
    inline const Aws::String& GetDisplayText() const{ return m_displayText; }

    /**
     * <p>The display text for the choice content.</p>
     */
    inline bool DisplayTextHasBeenSet() const { return m_displayTextHasBeenSet; }

    /**
     * <p>The display text for the choice content.</p>
     */
    inline void SetDisplayText(const Aws::String& value) { m_displayTextHasBeenSet = true; m_displayText = value; }

    /**
     * <p>The display text for the choice content.</p>
     */
    inline void SetDisplayText(Aws::String&& value) { m_displayTextHasBeenSet = true; m_displayText = std::move(value); }

    /**
     * <p>The display text for the choice content.</p>
     */
    inline void SetDisplayText(const char* value) { m_displayTextHasBeenSet = true; m_displayText.assign(value); }

    /**
     * <p>The display text for the choice content.</p>
     */
    inline ChoiceContent& WithDisplayText(const Aws::String& value) { SetDisplayText(value); return *this;}

    /**
     * <p>The display text for the choice content.</p>
     */
    inline ChoiceContent& WithDisplayText(Aws::String&& value) { SetDisplayText(std::move(value)); return *this;}

    /**
     * <p>The display text for the choice content.</p>
     */
    inline ChoiceContent& WithDisplayText(const char* value) { SetDisplayText(value); return *this;}


    /**
     * <p>The URL for the choice content.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>The URL for the choice content.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL for the choice content.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL for the choice content.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL for the choice content.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>The URL for the choice content.</p>
     */
    inline ChoiceContent& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL for the choice content.</p>
     */
    inline ChoiceContent& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for the choice content.</p>
     */
    inline ChoiceContent& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_displayText;
    bool m_displayTextHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws

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
    AWS_WELLARCHITECTED_API ChoiceContent() = default;
    AWS_WELLARCHITECTED_API ChoiceContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ChoiceContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The display text for the choice content.</p>
     */
    inline const Aws::String& GetDisplayText() const { return m_displayText; }
    inline bool DisplayTextHasBeenSet() const { return m_displayTextHasBeenSet; }
    template<typename DisplayTextT = Aws::String>
    void SetDisplayText(DisplayTextT&& value) { m_displayTextHasBeenSet = true; m_displayText = std::forward<DisplayTextT>(value); }
    template<typename DisplayTextT = Aws::String>
    ChoiceContent& WithDisplayText(DisplayTextT&& value) { SetDisplayText(std::forward<DisplayTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for the choice content.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    ChoiceContent& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_displayText;
    bool m_displayTextHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws

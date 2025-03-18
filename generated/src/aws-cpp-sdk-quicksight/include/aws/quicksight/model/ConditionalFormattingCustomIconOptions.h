/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Icon.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Custom icon options for an icon set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ConditionalFormattingCustomIconOptions">AWS
   * API Reference</a></p>
   */
  class ConditionalFormattingCustomIconOptions
  {
  public:
    AWS_QUICKSIGHT_API ConditionalFormattingCustomIconOptions() = default;
    AWS_QUICKSIGHT_API ConditionalFormattingCustomIconOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ConditionalFormattingCustomIconOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines the type of icon.</p>
     */
    inline Icon GetIcon() const { return m_icon; }
    inline bool IconHasBeenSet() const { return m_iconHasBeenSet; }
    inline void SetIcon(Icon value) { m_iconHasBeenSet = true; m_icon = value; }
    inline ConditionalFormattingCustomIconOptions& WithIcon(Icon value) { SetIcon(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the Unicode icon type.</p>
     */
    inline const Aws::String& GetUnicodeIcon() const { return m_unicodeIcon; }
    inline bool UnicodeIconHasBeenSet() const { return m_unicodeIconHasBeenSet; }
    template<typename UnicodeIconT = Aws::String>
    void SetUnicodeIcon(UnicodeIconT&& value) { m_unicodeIconHasBeenSet = true; m_unicodeIcon = std::forward<UnicodeIconT>(value); }
    template<typename UnicodeIconT = Aws::String>
    ConditionalFormattingCustomIconOptions& WithUnicodeIcon(UnicodeIconT&& value) { SetUnicodeIcon(std::forward<UnicodeIconT>(value)); return *this;}
    ///@}
  private:

    Icon m_icon{Icon::NOT_SET};
    bool m_iconHasBeenSet = false;

    Aws::String m_unicodeIcon;
    bool m_unicodeIconHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

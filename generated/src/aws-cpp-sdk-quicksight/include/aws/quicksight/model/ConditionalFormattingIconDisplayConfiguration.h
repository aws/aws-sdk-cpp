/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ConditionalFormattingIconDisplayOption.h>
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
   * <p>Determines the icon display configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ConditionalFormattingIconDisplayConfiguration">AWS
   * API Reference</a></p>
   */
  class ConditionalFormattingIconDisplayConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ConditionalFormattingIconDisplayConfiguration();
    AWS_QUICKSIGHT_API ConditionalFormattingIconDisplayConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ConditionalFormattingIconDisplayConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines the icon display configuration.</p>
     */
    inline const ConditionalFormattingIconDisplayOption& GetIconDisplayOption() const{ return m_iconDisplayOption; }

    /**
     * <p>Determines the icon display configuration.</p>
     */
    inline bool IconDisplayOptionHasBeenSet() const { return m_iconDisplayOptionHasBeenSet; }

    /**
     * <p>Determines the icon display configuration.</p>
     */
    inline void SetIconDisplayOption(const ConditionalFormattingIconDisplayOption& value) { m_iconDisplayOptionHasBeenSet = true; m_iconDisplayOption = value; }

    /**
     * <p>Determines the icon display configuration.</p>
     */
    inline void SetIconDisplayOption(ConditionalFormattingIconDisplayOption&& value) { m_iconDisplayOptionHasBeenSet = true; m_iconDisplayOption = std::move(value); }

    /**
     * <p>Determines the icon display configuration.</p>
     */
    inline ConditionalFormattingIconDisplayConfiguration& WithIconDisplayOption(const ConditionalFormattingIconDisplayOption& value) { SetIconDisplayOption(value); return *this;}

    /**
     * <p>Determines the icon display configuration.</p>
     */
    inline ConditionalFormattingIconDisplayConfiguration& WithIconDisplayOption(ConditionalFormattingIconDisplayOption&& value) { SetIconDisplayOption(std::move(value)); return *this;}

  private:

    ConditionalFormattingIconDisplayOption m_iconDisplayOption;
    bool m_iconDisplayOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
   * <p>The display options for margins around the outside edge of
   * sheets.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/MarginStyle">AWS
   * API Reference</a></p>
   */
  class MarginStyle
  {
  public:
    AWS_QUICKSIGHT_API MarginStyle() = default;
    AWS_QUICKSIGHT_API MarginStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API MarginStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This Boolean value controls whether to display sheet margins.</p>
     */
    inline bool GetShow() const { return m_show; }
    inline bool ShowHasBeenSet() const { return m_showHasBeenSet; }
    inline void SetShow(bool value) { m_showHasBeenSet = true; m_show = value; }
    inline MarginStyle& WithShow(bool value) { SetShow(value); return *this;}
    ///@}
  private:

    bool m_show{false};
    bool m_showHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

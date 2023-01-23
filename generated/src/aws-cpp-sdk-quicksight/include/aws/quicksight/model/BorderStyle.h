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
   * <p>The display options for tile borders for visuals.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BorderStyle">AWS
   * API Reference</a></p>
   */
  class BorderStyle
  {
  public:
    AWS_QUICKSIGHT_API BorderStyle();
    AWS_QUICKSIGHT_API BorderStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BorderStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The option to enable display of borders for visuals.</p>
     */
    inline bool GetShow() const{ return m_show; }

    /**
     * <p>The option to enable display of borders for visuals.</p>
     */
    inline bool ShowHasBeenSet() const { return m_showHasBeenSet; }

    /**
     * <p>The option to enable display of borders for visuals.</p>
     */
    inline void SetShow(bool value) { m_showHasBeenSet = true; m_show = value; }

    /**
     * <p>The option to enable display of borders for visuals.</p>
     */
    inline BorderStyle& WithShow(bool value) { SetShow(value); return *this;}

  private:

    bool m_show;
    bool m_showHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

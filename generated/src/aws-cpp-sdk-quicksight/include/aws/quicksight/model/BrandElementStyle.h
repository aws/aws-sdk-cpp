/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/NavbarStyle.h>
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
   * <p>The element style.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BrandElementStyle">AWS
   * API Reference</a></p>
   */
  class BrandElementStyle
  {
  public:
    AWS_QUICKSIGHT_API BrandElementStyle() = default;
    AWS_QUICKSIGHT_API BrandElementStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BrandElementStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The navigation bar style.</p>
     */
    inline const NavbarStyle& GetNavbarStyle() const { return m_navbarStyle; }
    inline bool NavbarStyleHasBeenSet() const { return m_navbarStyleHasBeenSet; }
    template<typename NavbarStyleT = NavbarStyle>
    void SetNavbarStyle(NavbarStyleT&& value) { m_navbarStyleHasBeenSet = true; m_navbarStyle = std::forward<NavbarStyleT>(value); }
    template<typename NavbarStyleT = NavbarStyle>
    BrandElementStyle& WithNavbarStyle(NavbarStyleT&& value) { SetNavbarStyle(std::forward<NavbarStyleT>(value)); return *this;}
    ///@}
  private:

    NavbarStyle m_navbarStyle;
    bool m_navbarStyleHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

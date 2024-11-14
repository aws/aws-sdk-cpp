/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Palette.h>
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
   * <p>The navigation bar style.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NavbarStyle">AWS
   * API Reference</a></p>
   */
  class NavbarStyle
  {
  public:
    AWS_QUICKSIGHT_API NavbarStyle();
    AWS_QUICKSIGHT_API NavbarStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NavbarStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The global navigation bar style.</p>
     */
    inline const Palette& GetGlobalNavbar() const{ return m_globalNavbar; }
    inline bool GlobalNavbarHasBeenSet() const { return m_globalNavbarHasBeenSet; }
    inline void SetGlobalNavbar(const Palette& value) { m_globalNavbarHasBeenSet = true; m_globalNavbar = value; }
    inline void SetGlobalNavbar(Palette&& value) { m_globalNavbarHasBeenSet = true; m_globalNavbar = std::move(value); }
    inline NavbarStyle& WithGlobalNavbar(const Palette& value) { SetGlobalNavbar(value); return *this;}
    inline NavbarStyle& WithGlobalNavbar(Palette&& value) { SetGlobalNavbar(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contextual navigation bar style.</p>
     */
    inline const Palette& GetContextualNavbar() const{ return m_contextualNavbar; }
    inline bool ContextualNavbarHasBeenSet() const { return m_contextualNavbarHasBeenSet; }
    inline void SetContextualNavbar(const Palette& value) { m_contextualNavbarHasBeenSet = true; m_contextualNavbar = value; }
    inline void SetContextualNavbar(Palette&& value) { m_contextualNavbarHasBeenSet = true; m_contextualNavbar = std::move(value); }
    inline NavbarStyle& WithContextualNavbar(const Palette& value) { SetContextualNavbar(value); return *this;}
    inline NavbarStyle& WithContextualNavbar(Palette&& value) { SetContextualNavbar(std::move(value)); return *this;}
    ///@}
  private:

    Palette m_globalNavbar;
    bool m_globalNavbarHasBeenSet = false;

    Palette m_contextualNavbar;
    bool m_contextualNavbarHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

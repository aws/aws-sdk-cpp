/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
   * <p>An alias for a theme.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ThemeAlias">AWS
   * API Reference</a></p>
   */
  class ThemeAlias
  {
  public:
    AWS_QUICKSIGHT_API ThemeAlias();
    AWS_QUICKSIGHT_API ThemeAlias(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ThemeAlias& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the theme alias.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ThemeAlias& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ThemeAlias& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ThemeAlias& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the theme alias.</p>
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }
    inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
    inline void SetAliasName(const Aws::String& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }
    inline void SetAliasName(Aws::String&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::move(value); }
    inline void SetAliasName(const char* value) { m_aliasNameHasBeenSet = true; m_aliasName.assign(value); }
    inline ThemeAlias& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}
    inline ThemeAlias& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}
    inline ThemeAlias& WithAliasName(const char* value) { SetAliasName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the theme alias.</p>
     */
    inline long long GetThemeVersionNumber() const{ return m_themeVersionNumber; }
    inline bool ThemeVersionNumberHasBeenSet() const { return m_themeVersionNumberHasBeenSet; }
    inline void SetThemeVersionNumber(long long value) { m_themeVersionNumberHasBeenSet = true; m_themeVersionNumber = value; }
    inline ThemeAlias& WithThemeVersionNumber(long long value) { SetThemeVersionNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_aliasName;
    bool m_aliasNameHasBeenSet = false;

    long long m_themeVersionNumber;
    bool m_themeVersionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

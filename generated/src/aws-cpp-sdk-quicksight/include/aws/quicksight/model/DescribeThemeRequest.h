﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace QuickSight
{
namespace Model
{

  /**
   */
  class DescribeThemeRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API DescribeThemeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTheme"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

    AWS_QUICKSIGHT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the theme that you're
     * describing.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline DescribeThemeRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline DescribeThemeRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline DescribeThemeRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the theme.</p>
     */
    inline const Aws::String& GetThemeId() const{ return m_themeId; }
    inline bool ThemeIdHasBeenSet() const { return m_themeIdHasBeenSet; }
    inline void SetThemeId(const Aws::String& value) { m_themeIdHasBeenSet = true; m_themeId = value; }
    inline void SetThemeId(Aws::String&& value) { m_themeIdHasBeenSet = true; m_themeId = std::move(value); }
    inline void SetThemeId(const char* value) { m_themeIdHasBeenSet = true; m_themeId.assign(value); }
    inline DescribeThemeRequest& WithThemeId(const Aws::String& value) { SetThemeId(value); return *this;}
    inline DescribeThemeRequest& WithThemeId(Aws::String&& value) { SetThemeId(std::move(value)); return *this;}
    inline DescribeThemeRequest& WithThemeId(const char* value) { SetThemeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number for the version to describe. If a
     * <code>VersionNumber</code> parameter value isn't provided, the latest version of
     * the theme is described.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline DescribeThemeRequest& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias of the theme that you want to describe. If you name a specific
     * alias, you describe the version that the alias points to. You can specify the
     * latest version of the theme by providing the keyword <code>$LATEST</code> in the
     * <code>AliasName</code> parameter. The keyword <code>$PUBLISHED</code> doesn't
     * apply to themes.</p>
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }
    inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
    inline void SetAliasName(const Aws::String& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }
    inline void SetAliasName(Aws::String&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::move(value); }
    inline void SetAliasName(const char* value) { m_aliasNameHasBeenSet = true; m_aliasName.assign(value); }
    inline DescribeThemeRequest& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}
    inline DescribeThemeRequest& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}
    inline DescribeThemeRequest& WithAliasName(const char* value) { SetAliasName(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_themeId;
    bool m_themeIdHasBeenSet = false;

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet = false;

    Aws::String m_aliasName;
    bool m_aliasNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

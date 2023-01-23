/**
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
namespace QuickSight
{
namespace Model
{

  /**
   */
  class DescribeThemeAliasRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API DescribeThemeAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeThemeAlias"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account that contains the theme alias that
     * you're describing.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme alias that
     * you're describing.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme alias that
     * you're describing.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme alias that
     * you're describing.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme alias that
     * you're describing.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme alias that
     * you're describing.</p>
     */
    inline DescribeThemeAliasRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme alias that
     * you're describing.</p>
     */
    inline DescribeThemeAliasRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme alias that
     * you're describing.</p>
     */
    inline DescribeThemeAliasRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID for the theme.</p>
     */
    inline const Aws::String& GetThemeId() const{ return m_themeId; }

    /**
     * <p>The ID for the theme.</p>
     */
    inline bool ThemeIdHasBeenSet() const { return m_themeIdHasBeenSet; }

    /**
     * <p>The ID for the theme.</p>
     */
    inline void SetThemeId(const Aws::String& value) { m_themeIdHasBeenSet = true; m_themeId = value; }

    /**
     * <p>The ID for the theme.</p>
     */
    inline void SetThemeId(Aws::String&& value) { m_themeIdHasBeenSet = true; m_themeId = std::move(value); }

    /**
     * <p>The ID for the theme.</p>
     */
    inline void SetThemeId(const char* value) { m_themeIdHasBeenSet = true; m_themeId.assign(value); }

    /**
     * <p>The ID for the theme.</p>
     */
    inline DescribeThemeAliasRequest& WithThemeId(const Aws::String& value) { SetThemeId(value); return *this;}

    /**
     * <p>The ID for the theme.</p>
     */
    inline DescribeThemeAliasRequest& WithThemeId(Aws::String&& value) { SetThemeId(std::move(value)); return *this;}

    /**
     * <p>The ID for the theme.</p>
     */
    inline DescribeThemeAliasRequest& WithThemeId(const char* value) { SetThemeId(value); return *this;}


    /**
     * <p>The name of the theme alias that you want to describe.</p>
     */
    inline const Aws::String& GetAliasName() const{ return m_aliasName; }

    /**
     * <p>The name of the theme alias that you want to describe.</p>
     */
    inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }

    /**
     * <p>The name of the theme alias that you want to describe.</p>
     */
    inline void SetAliasName(const Aws::String& value) { m_aliasNameHasBeenSet = true; m_aliasName = value; }

    /**
     * <p>The name of the theme alias that you want to describe.</p>
     */
    inline void SetAliasName(Aws::String&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::move(value); }

    /**
     * <p>The name of the theme alias that you want to describe.</p>
     */
    inline void SetAliasName(const char* value) { m_aliasNameHasBeenSet = true; m_aliasName.assign(value); }

    /**
     * <p>The name of the theme alias that you want to describe.</p>
     */
    inline DescribeThemeAliasRequest& WithAliasName(const Aws::String& value) { SetAliasName(value); return *this;}

    /**
     * <p>The name of the theme alias that you want to describe.</p>
     */
    inline DescribeThemeAliasRequest& WithAliasName(Aws::String&& value) { SetAliasName(std::move(value)); return *this;}

    /**
     * <p>The name of the theme alias that you want to describe.</p>
     */
    inline DescribeThemeAliasRequest& WithAliasName(const char* value) { SetAliasName(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_themeId;
    bool m_themeIdHasBeenSet = false;

    Aws::String m_aliasName;
    bool m_aliasNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

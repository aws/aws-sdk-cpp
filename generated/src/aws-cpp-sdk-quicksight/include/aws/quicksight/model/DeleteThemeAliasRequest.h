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
namespace QuickSight
{
namespace Model
{

  /**
   */
  class DeleteThemeAliasRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API DeleteThemeAliasRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteThemeAlias"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the theme alias to
     * delete.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    DeleteThemeAliasRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the theme that the specified alias is for.</p>
     */
    inline const Aws::String& GetThemeId() const { return m_themeId; }
    inline bool ThemeIdHasBeenSet() const { return m_themeIdHasBeenSet; }
    template<typename ThemeIdT = Aws::String>
    void SetThemeId(ThemeIdT&& value) { m_themeIdHasBeenSet = true; m_themeId = std::forward<ThemeIdT>(value); }
    template<typename ThemeIdT = Aws::String>
    DeleteThemeAliasRequest& WithThemeId(ThemeIdT&& value) { SetThemeId(std::forward<ThemeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name for the theme alias to delete.</p>
     */
    inline const Aws::String& GetAliasName() const { return m_aliasName; }
    inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
    template<typename AliasNameT = Aws::String>
    void SetAliasName(AliasNameT&& value) { m_aliasNameHasBeenSet = true; m_aliasName = std::forward<AliasNameT>(value); }
    template<typename AliasNameT = Aws::String>
    DeleteThemeAliasRequest& WithAliasName(AliasNameT&& value) { SetAliasName(std::forward<AliasNameT>(value)); return *this;}
    ///@}
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

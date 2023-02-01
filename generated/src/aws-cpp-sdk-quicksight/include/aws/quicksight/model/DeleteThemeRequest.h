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
  class DeleteThemeRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API DeleteThemeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTheme"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

    AWS_QUICKSIGHT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the Amazon Web Services account that contains the theme that you're
     * deleting.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme that you're
     * deleting.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme that you're
     * deleting.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme that you're
     * deleting.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme that you're
     * deleting.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme that you're
     * deleting.</p>
     */
    inline DeleteThemeRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme that you're
     * deleting.</p>
     */
    inline DeleteThemeRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the theme that you're
     * deleting.</p>
     */
    inline DeleteThemeRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>An ID for the theme that you want to delete.</p>
     */
    inline const Aws::String& GetThemeId() const{ return m_themeId; }

    /**
     * <p>An ID for the theme that you want to delete.</p>
     */
    inline bool ThemeIdHasBeenSet() const { return m_themeIdHasBeenSet; }

    /**
     * <p>An ID for the theme that you want to delete.</p>
     */
    inline void SetThemeId(const Aws::String& value) { m_themeIdHasBeenSet = true; m_themeId = value; }

    /**
     * <p>An ID for the theme that you want to delete.</p>
     */
    inline void SetThemeId(Aws::String&& value) { m_themeIdHasBeenSet = true; m_themeId = std::move(value); }

    /**
     * <p>An ID for the theme that you want to delete.</p>
     */
    inline void SetThemeId(const char* value) { m_themeIdHasBeenSet = true; m_themeId.assign(value); }

    /**
     * <p>An ID for the theme that you want to delete.</p>
     */
    inline DeleteThemeRequest& WithThemeId(const Aws::String& value) { SetThemeId(value); return *this;}

    /**
     * <p>An ID for the theme that you want to delete.</p>
     */
    inline DeleteThemeRequest& WithThemeId(Aws::String&& value) { SetThemeId(std::move(value)); return *this;}

    /**
     * <p>An ID for the theme that you want to delete.</p>
     */
    inline DeleteThemeRequest& WithThemeId(const char* value) { SetThemeId(value); return *this;}


    /**
     * <p>The version of the theme that you want to delete. </p> <p> <b>Note:</b> If
     * you don't provide a version number, you're using this call to
     * <code>DeleteTheme</code> to delete all versions of the theme.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }

    /**
     * <p>The version of the theme that you want to delete. </p> <p> <b>Note:</b> If
     * you don't provide a version number, you're using this call to
     * <code>DeleteTheme</code> to delete all versions of the theme.</p>
     */
    inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }

    /**
     * <p>The version of the theme that you want to delete. </p> <p> <b>Note:</b> If
     * you don't provide a version number, you're using this call to
     * <code>DeleteTheme</code> to delete all versions of the theme.</p>
     */
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }

    /**
     * <p>The version of the theme that you want to delete. </p> <p> <b>Note:</b> If
     * you don't provide a version number, you're using this call to
     * <code>DeleteTheme</code> to delete all versions of the theme.</p>
     */
    inline DeleteThemeRequest& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_themeId;
    bool m_themeIdHasBeenSet = false;

    long long m_versionNumber;
    bool m_versionNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws

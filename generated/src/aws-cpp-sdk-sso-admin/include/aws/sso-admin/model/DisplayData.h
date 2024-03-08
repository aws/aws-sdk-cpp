/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>A structure that describes how the portal represents an application
   * provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/DisplayData">AWS
   * API Reference</a></p>
   */
  class DisplayData
  {
  public:
    AWS_SSOADMIN_API DisplayData();
    AWS_SSOADMIN_API DisplayData(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API DisplayData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The description of the application provider that appears in the portal.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the application provider that appears in the portal.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the application provider that appears in the portal.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the application provider that appears in the portal.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the application provider that appears in the portal.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the application provider that appears in the portal.</p>
     */
    inline DisplayData& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the application provider that appears in the portal.</p>
     */
    inline DisplayData& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the application provider that appears in the portal.</p>
     */
    inline DisplayData& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the application provider that appears in the portal.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the application provider that appears in the portal.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name of the application provider that appears in the portal.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name of the application provider that appears in the portal.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name of the application provider that appears in the portal.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name of the application provider that appears in the portal.</p>
     */
    inline DisplayData& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the application provider that appears in the portal.</p>
     */
    inline DisplayData& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the application provider that appears in the portal.</p>
     */
    inline DisplayData& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>A URL that points to an icon that represents the application provider.</p>
     */
    inline const Aws::String& GetIconUrl() const{ return m_iconUrl; }

    /**
     * <p>A URL that points to an icon that represents the application provider.</p>
     */
    inline bool IconUrlHasBeenSet() const { return m_iconUrlHasBeenSet; }

    /**
     * <p>A URL that points to an icon that represents the application provider.</p>
     */
    inline void SetIconUrl(const Aws::String& value) { m_iconUrlHasBeenSet = true; m_iconUrl = value; }

    /**
     * <p>A URL that points to an icon that represents the application provider.</p>
     */
    inline void SetIconUrl(Aws::String&& value) { m_iconUrlHasBeenSet = true; m_iconUrl = std::move(value); }

    /**
     * <p>A URL that points to an icon that represents the application provider.</p>
     */
    inline void SetIconUrl(const char* value) { m_iconUrlHasBeenSet = true; m_iconUrl.assign(value); }

    /**
     * <p>A URL that points to an icon that represents the application provider.</p>
     */
    inline DisplayData& WithIconUrl(const Aws::String& value) { SetIconUrl(value); return *this;}

    /**
     * <p>A URL that points to an icon that represents the application provider.</p>
     */
    inline DisplayData& WithIconUrl(Aws::String&& value) { SetIconUrl(std::move(value)); return *this;}

    /**
     * <p>A URL that points to an icon that represents the application provider.</p>
     */
    inline DisplayData& WithIconUrl(const char* value) { SetIconUrl(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_iconUrl;
    bool m_iconUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws

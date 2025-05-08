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
    AWS_SSOADMIN_API DisplayData() = default;
    AWS_SSOADMIN_API DisplayData(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API DisplayData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the application provider that appears in the portal.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    DisplayData& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URL that points to an icon that represents the application provider.</p>
     */
    inline const Aws::String& GetIconUrl() const { return m_iconUrl; }
    inline bool IconUrlHasBeenSet() const { return m_iconUrlHasBeenSet; }
    template<typename IconUrlT = Aws::String>
    void SetIconUrl(IconUrlT&& value) { m_iconUrlHasBeenSet = true; m_iconUrl = std::forward<IconUrlT>(value); }
    template<typename IconUrlT = Aws::String>
    DisplayData& WithIconUrl(IconUrlT&& value) { SetIconUrl(std::forward<IconUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the application provider that appears in the portal.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DisplayData& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_iconUrl;
    bool m_iconUrlHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws

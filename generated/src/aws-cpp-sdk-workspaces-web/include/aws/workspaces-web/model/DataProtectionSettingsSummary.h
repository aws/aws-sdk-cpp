/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   * <p>The summary of the data protection settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/DataProtectionSettingsSummary">AWS
   * API Reference</a></p>
   */
  class DataProtectionSettingsSummary
  {
  public:
    AWS_WORKSPACESWEB_API DataProtectionSettingsSummary() = default;
    AWS_WORKSPACESWEB_API DataProtectionSettingsSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API DataProtectionSettingsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the data protection settings.</p>
     */
    inline const Aws::String& GetDataProtectionSettingsArn() const { return m_dataProtectionSettingsArn; }
    inline bool DataProtectionSettingsArnHasBeenSet() const { return m_dataProtectionSettingsArnHasBeenSet; }
    template<typename DataProtectionSettingsArnT = Aws::String>
    void SetDataProtectionSettingsArn(DataProtectionSettingsArnT&& value) { m_dataProtectionSettingsArnHasBeenSet = true; m_dataProtectionSettingsArn = std::forward<DataProtectionSettingsArnT>(value); }
    template<typename DataProtectionSettingsArnT = Aws::String>
    DataProtectionSettingsSummary& WithDataProtectionSettingsArn(DataProtectionSettingsArnT&& value) { SetDataProtectionSettingsArn(std::forward<DataProtectionSettingsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the data protection settings.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    DataProtectionSettingsSummary& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the data protection settings.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DataProtectionSettingsSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date timestamp of the data protection settings.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    DataProtectionSettingsSummary& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataProtectionSettingsArn;
    bool m_dataProtectionSettingsArnHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws

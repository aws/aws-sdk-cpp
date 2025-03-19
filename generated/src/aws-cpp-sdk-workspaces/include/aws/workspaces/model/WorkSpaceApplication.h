/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/workspaces/model/WorkSpaceApplicationLicenseType.h>
#include <aws/workspaces/model/WorkSpaceApplicationState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/Compute.h>
#include <aws/workspaces/model/OperatingSystemName.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the WorkSpace application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/WorkSpaceApplication">AWS
   * API Reference</a></p>
   */
  class WorkSpaceApplication
  {
  public:
    AWS_WORKSPACES_API WorkSpaceApplication() = default;
    AWS_WORKSPACES_API WorkSpaceApplication(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkSpaceApplication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    WorkSpaceApplication& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the application is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    template<typename CreatedT = Aws::Utils::DateTime>
    void SetCreated(CreatedT&& value) { m_createdHasBeenSet = true; m_created = std::forward<CreatedT>(value); }
    template<typename CreatedT = Aws::Utils::DateTime>
    WorkSpaceApplication& WithCreated(CreatedT&& value) { SetCreated(std::forward<CreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the WorkSpace application.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    WorkSpaceApplication& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license availability for the applications.</p>
     */
    inline WorkSpaceApplicationLicenseType GetLicenseType() const { return m_licenseType; }
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }
    inline void SetLicenseType(WorkSpaceApplicationLicenseType value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }
    inline WorkSpaceApplication& WithLicenseType(WorkSpaceApplicationLicenseType value) { SetLicenseType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the WorkSpace application.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    WorkSpaceApplication& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The owner of the WorkSpace application.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    WorkSpaceApplication& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of WorkSpace application.</p>
     */
    inline WorkSpaceApplicationState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(WorkSpaceApplicationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline WorkSpaceApplication& WithState(WorkSpaceApplicationState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported compute types of the WorkSpace application.</p>
     */
    inline const Aws::Vector<Compute>& GetSupportedComputeTypeNames() const { return m_supportedComputeTypeNames; }
    inline bool SupportedComputeTypeNamesHasBeenSet() const { return m_supportedComputeTypeNamesHasBeenSet; }
    template<typename SupportedComputeTypeNamesT = Aws::Vector<Compute>>
    void SetSupportedComputeTypeNames(SupportedComputeTypeNamesT&& value) { m_supportedComputeTypeNamesHasBeenSet = true; m_supportedComputeTypeNames = std::forward<SupportedComputeTypeNamesT>(value); }
    template<typename SupportedComputeTypeNamesT = Aws::Vector<Compute>>
    WorkSpaceApplication& WithSupportedComputeTypeNames(SupportedComputeTypeNamesT&& value) { SetSupportedComputeTypeNames(std::forward<SupportedComputeTypeNamesT>(value)); return *this;}
    inline WorkSpaceApplication& AddSupportedComputeTypeNames(Compute value) { m_supportedComputeTypeNamesHasBeenSet = true; m_supportedComputeTypeNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported operating systems of the WorkSpace application.</p>
     */
    inline const Aws::Vector<OperatingSystemName>& GetSupportedOperatingSystemNames() const { return m_supportedOperatingSystemNames; }
    inline bool SupportedOperatingSystemNamesHasBeenSet() const { return m_supportedOperatingSystemNamesHasBeenSet; }
    template<typename SupportedOperatingSystemNamesT = Aws::Vector<OperatingSystemName>>
    void SetSupportedOperatingSystemNames(SupportedOperatingSystemNamesT&& value) { m_supportedOperatingSystemNamesHasBeenSet = true; m_supportedOperatingSystemNames = std::forward<SupportedOperatingSystemNamesT>(value); }
    template<typename SupportedOperatingSystemNamesT = Aws::Vector<OperatingSystemName>>
    WorkSpaceApplication& WithSupportedOperatingSystemNames(SupportedOperatingSystemNamesT&& value) { SetSupportedOperatingSystemNames(std::forward<SupportedOperatingSystemNamesT>(value)); return *this;}
    inline WorkSpaceApplication& AddSupportedOperatingSystemNames(OperatingSystemName value) { m_supportedOperatingSystemNamesHasBeenSet = true; m_supportedOperatingSystemNames.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::Utils::DateTime m_created{};
    bool m_createdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    WorkSpaceApplicationLicenseType m_licenseType{WorkSpaceApplicationLicenseType::NOT_SET};
    bool m_licenseTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    WorkSpaceApplicationState m_state{WorkSpaceApplicationState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Vector<Compute> m_supportedComputeTypeNames;
    bool m_supportedComputeTypeNamesHasBeenSet = false;

    Aws::Vector<OperatingSystemName> m_supportedOperatingSystemNames;
    bool m_supportedOperatingSystemNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws

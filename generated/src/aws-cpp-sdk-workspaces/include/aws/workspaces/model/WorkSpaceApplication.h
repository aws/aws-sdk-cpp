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
    AWS_WORKSPACES_API WorkSpaceApplication();
    AWS_WORKSPACES_API WorkSpaceApplication(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API WorkSpaceApplication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The identifier of the application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The identifier of the application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The identifier of the application.</p>
     */
    inline WorkSpaceApplication& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the application.</p>
     */
    inline WorkSpaceApplication& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the application.</p>
     */
    inline WorkSpaceApplication& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The time the application is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>The time the application is created.</p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>The time the application is created.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>The time the application is created.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * <p>The time the application is created.</p>
     */
    inline WorkSpaceApplication& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>The time the application is created.</p>
     */
    inline WorkSpaceApplication& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>The description of the WorkSpace application.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the WorkSpace application.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the WorkSpace application.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the WorkSpace application.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the WorkSpace application.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the WorkSpace application.</p>
     */
    inline WorkSpaceApplication& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the WorkSpace application.</p>
     */
    inline WorkSpaceApplication& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the WorkSpace application.</p>
     */
    inline WorkSpaceApplication& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The license availability for the applications.</p>
     */
    inline const WorkSpaceApplicationLicenseType& GetLicenseType() const{ return m_licenseType; }

    /**
     * <p>The license availability for the applications.</p>
     */
    inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }

    /**
     * <p>The license availability for the applications.</p>
     */
    inline void SetLicenseType(const WorkSpaceApplicationLicenseType& value) { m_licenseTypeHasBeenSet = true; m_licenseType = value; }

    /**
     * <p>The license availability for the applications.</p>
     */
    inline void SetLicenseType(WorkSpaceApplicationLicenseType&& value) { m_licenseTypeHasBeenSet = true; m_licenseType = std::move(value); }

    /**
     * <p>The license availability for the applications.</p>
     */
    inline WorkSpaceApplication& WithLicenseType(const WorkSpaceApplicationLicenseType& value) { SetLicenseType(value); return *this;}

    /**
     * <p>The license availability for the applications.</p>
     */
    inline WorkSpaceApplication& WithLicenseType(WorkSpaceApplicationLicenseType&& value) { SetLicenseType(std::move(value)); return *this;}


    /**
     * <p>The name of the WorkSpace application.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the WorkSpace application.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the WorkSpace application.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the WorkSpace application.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the WorkSpace application.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the WorkSpace application.</p>
     */
    inline WorkSpaceApplication& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the WorkSpace application.</p>
     */
    inline WorkSpaceApplication& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the WorkSpace application.</p>
     */
    inline WorkSpaceApplication& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The owner of the WorkSpace application.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The owner of the WorkSpace application.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The owner of the WorkSpace application.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The owner of the WorkSpace application.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The owner of the WorkSpace application.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The owner of the WorkSpace application.</p>
     */
    inline WorkSpaceApplication& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The owner of the WorkSpace application.</p>
     */
    inline WorkSpaceApplication& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The owner of the WorkSpace application.</p>
     */
    inline WorkSpaceApplication& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>The status of WorkSpace application.</p>
     */
    inline const WorkSpaceApplicationState& GetState() const{ return m_state; }

    /**
     * <p>The status of WorkSpace application.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The status of WorkSpace application.</p>
     */
    inline void SetState(const WorkSpaceApplicationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The status of WorkSpace application.</p>
     */
    inline void SetState(WorkSpaceApplicationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The status of WorkSpace application.</p>
     */
    inline WorkSpaceApplication& WithState(const WorkSpaceApplicationState& value) { SetState(value); return *this;}

    /**
     * <p>The status of WorkSpace application.</p>
     */
    inline WorkSpaceApplication& WithState(WorkSpaceApplicationState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The supported compute types of the WorkSpace application.</p>
     */
    inline const Aws::Vector<Compute>& GetSupportedComputeTypeNames() const{ return m_supportedComputeTypeNames; }

    /**
     * <p>The supported compute types of the WorkSpace application.</p>
     */
    inline bool SupportedComputeTypeNamesHasBeenSet() const { return m_supportedComputeTypeNamesHasBeenSet; }

    /**
     * <p>The supported compute types of the WorkSpace application.</p>
     */
    inline void SetSupportedComputeTypeNames(const Aws::Vector<Compute>& value) { m_supportedComputeTypeNamesHasBeenSet = true; m_supportedComputeTypeNames = value; }

    /**
     * <p>The supported compute types of the WorkSpace application.</p>
     */
    inline void SetSupportedComputeTypeNames(Aws::Vector<Compute>&& value) { m_supportedComputeTypeNamesHasBeenSet = true; m_supportedComputeTypeNames = std::move(value); }

    /**
     * <p>The supported compute types of the WorkSpace application.</p>
     */
    inline WorkSpaceApplication& WithSupportedComputeTypeNames(const Aws::Vector<Compute>& value) { SetSupportedComputeTypeNames(value); return *this;}

    /**
     * <p>The supported compute types of the WorkSpace application.</p>
     */
    inline WorkSpaceApplication& WithSupportedComputeTypeNames(Aws::Vector<Compute>&& value) { SetSupportedComputeTypeNames(std::move(value)); return *this;}

    /**
     * <p>The supported compute types of the WorkSpace application.</p>
     */
    inline WorkSpaceApplication& AddSupportedComputeTypeNames(const Compute& value) { m_supportedComputeTypeNamesHasBeenSet = true; m_supportedComputeTypeNames.push_back(value); return *this; }

    /**
     * <p>The supported compute types of the WorkSpace application.</p>
     */
    inline WorkSpaceApplication& AddSupportedComputeTypeNames(Compute&& value) { m_supportedComputeTypeNamesHasBeenSet = true; m_supportedComputeTypeNames.push_back(std::move(value)); return *this; }


    /**
     * <p>The supported operating systems of the WorkSpace application.</p>
     */
    inline const Aws::Vector<OperatingSystemName>& GetSupportedOperatingSystemNames() const{ return m_supportedOperatingSystemNames; }

    /**
     * <p>The supported operating systems of the WorkSpace application.</p>
     */
    inline bool SupportedOperatingSystemNamesHasBeenSet() const { return m_supportedOperatingSystemNamesHasBeenSet; }

    /**
     * <p>The supported operating systems of the WorkSpace application.</p>
     */
    inline void SetSupportedOperatingSystemNames(const Aws::Vector<OperatingSystemName>& value) { m_supportedOperatingSystemNamesHasBeenSet = true; m_supportedOperatingSystemNames = value; }

    /**
     * <p>The supported operating systems of the WorkSpace application.</p>
     */
    inline void SetSupportedOperatingSystemNames(Aws::Vector<OperatingSystemName>&& value) { m_supportedOperatingSystemNamesHasBeenSet = true; m_supportedOperatingSystemNames = std::move(value); }

    /**
     * <p>The supported operating systems of the WorkSpace application.</p>
     */
    inline WorkSpaceApplication& WithSupportedOperatingSystemNames(const Aws::Vector<OperatingSystemName>& value) { SetSupportedOperatingSystemNames(value); return *this;}

    /**
     * <p>The supported operating systems of the WorkSpace application.</p>
     */
    inline WorkSpaceApplication& WithSupportedOperatingSystemNames(Aws::Vector<OperatingSystemName>&& value) { SetSupportedOperatingSystemNames(std::move(value)); return *this;}

    /**
     * <p>The supported operating systems of the WorkSpace application.</p>
     */
    inline WorkSpaceApplication& AddSupportedOperatingSystemNames(const OperatingSystemName& value) { m_supportedOperatingSystemNamesHasBeenSet = true; m_supportedOperatingSystemNames.push_back(value); return *this; }

    /**
     * <p>The supported operating systems of the WorkSpace application.</p>
     */
    inline WorkSpaceApplication& AddSupportedOperatingSystemNames(OperatingSystemName&& value) { m_supportedOperatingSystemNamesHasBeenSet = true; m_supportedOperatingSystemNames.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    WorkSpaceApplicationLicenseType m_licenseType;
    bool m_licenseTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    WorkSpaceApplicationState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<Compute> m_supportedComputeTypeNames;
    bool m_supportedComputeTypeNamesHasBeenSet = false;

    Aws::Vector<OperatingSystemName> m_supportedOperatingSystemNames;
    bool m_supportedOperatingSystemNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws

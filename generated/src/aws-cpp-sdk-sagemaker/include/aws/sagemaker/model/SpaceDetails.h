/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/SpaceStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/SpaceSettingsSummary.h>
#include <aws/sagemaker/model/SpaceSharingSettingsSummary.h>
#include <aws/sagemaker/model/OwnershipSettingsSummary.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The space's details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SpaceDetails">AWS
   * API Reference</a></p>
   */
  class SpaceDetails
  {
  public:
    AWS_SAGEMAKER_API SpaceDetails();
    AWS_SAGEMAKER_API SpaceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SpaceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the associated domain.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the associated domain.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The ID of the associated domain.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The ID of the associated domain.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The ID of the associated domain.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The ID of the associated domain.</p>
     */
    inline SpaceDetails& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the associated domain.</p>
     */
    inline SpaceDetails& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the associated domain.</p>
     */
    inline SpaceDetails& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }

    /**
     * <p>The name of the space.</p>
     */
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const Aws::String& value) { m_spaceNameHasBeenSet = true; m_spaceName = value; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(Aws::String&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::move(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const char* value) { m_spaceNameHasBeenSet = true; m_spaceName.assign(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline SpaceDetails& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline SpaceDetails& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline SpaceDetails& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}


    /**
     * <p>The status.</p>
     */
    inline const SpaceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(const SpaceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(SpaceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status.</p>
     */
    inline SpaceDetails& WithStatus(const SpaceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status.</p>
     */
    inline SpaceDetails& WithStatus(SpaceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The creation time.</p>
     */
    inline SpaceDetails& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time.</p>
     */
    inline SpaceDetails& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The last modified time.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The last modified time.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The last modified time.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The last modified time.</p>
     */
    inline SpaceDetails& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The last modified time.</p>
     */
    inline SpaceDetails& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>Specifies summary information about the space settings.</p>
     */
    inline const SpaceSettingsSummary& GetSpaceSettingsSummary() const{ return m_spaceSettingsSummary; }

    /**
     * <p>Specifies summary information about the space settings.</p>
     */
    inline bool SpaceSettingsSummaryHasBeenSet() const { return m_spaceSettingsSummaryHasBeenSet; }

    /**
     * <p>Specifies summary information about the space settings.</p>
     */
    inline void SetSpaceSettingsSummary(const SpaceSettingsSummary& value) { m_spaceSettingsSummaryHasBeenSet = true; m_spaceSettingsSummary = value; }

    /**
     * <p>Specifies summary information about the space settings.</p>
     */
    inline void SetSpaceSettingsSummary(SpaceSettingsSummary&& value) { m_spaceSettingsSummaryHasBeenSet = true; m_spaceSettingsSummary = std::move(value); }

    /**
     * <p>Specifies summary information about the space settings.</p>
     */
    inline SpaceDetails& WithSpaceSettingsSummary(const SpaceSettingsSummary& value) { SetSpaceSettingsSummary(value); return *this;}

    /**
     * <p>Specifies summary information about the space settings.</p>
     */
    inline SpaceDetails& WithSpaceSettingsSummary(SpaceSettingsSummary&& value) { SetSpaceSettingsSummary(std::move(value)); return *this;}


    /**
     * <p>Specifies summary information about the space sharing settings.</p>
     */
    inline const SpaceSharingSettingsSummary& GetSpaceSharingSettingsSummary() const{ return m_spaceSharingSettingsSummary; }

    /**
     * <p>Specifies summary information about the space sharing settings.</p>
     */
    inline bool SpaceSharingSettingsSummaryHasBeenSet() const { return m_spaceSharingSettingsSummaryHasBeenSet; }

    /**
     * <p>Specifies summary information about the space sharing settings.</p>
     */
    inline void SetSpaceSharingSettingsSummary(const SpaceSharingSettingsSummary& value) { m_spaceSharingSettingsSummaryHasBeenSet = true; m_spaceSharingSettingsSummary = value; }

    /**
     * <p>Specifies summary information about the space sharing settings.</p>
     */
    inline void SetSpaceSharingSettingsSummary(SpaceSharingSettingsSummary&& value) { m_spaceSharingSettingsSummaryHasBeenSet = true; m_spaceSharingSettingsSummary = std::move(value); }

    /**
     * <p>Specifies summary information about the space sharing settings.</p>
     */
    inline SpaceDetails& WithSpaceSharingSettingsSummary(const SpaceSharingSettingsSummary& value) { SetSpaceSharingSettingsSummary(value); return *this;}

    /**
     * <p>Specifies summary information about the space sharing settings.</p>
     */
    inline SpaceDetails& WithSpaceSharingSettingsSummary(SpaceSharingSettingsSummary&& value) { SetSpaceSharingSettingsSummary(std::move(value)); return *this;}


    /**
     * <p>Specifies summary information about the ownership settings.</p>
     */
    inline const OwnershipSettingsSummary& GetOwnershipSettingsSummary() const{ return m_ownershipSettingsSummary; }

    /**
     * <p>Specifies summary information about the ownership settings.</p>
     */
    inline bool OwnershipSettingsSummaryHasBeenSet() const { return m_ownershipSettingsSummaryHasBeenSet; }

    /**
     * <p>Specifies summary information about the ownership settings.</p>
     */
    inline void SetOwnershipSettingsSummary(const OwnershipSettingsSummary& value) { m_ownershipSettingsSummaryHasBeenSet = true; m_ownershipSettingsSummary = value; }

    /**
     * <p>Specifies summary information about the ownership settings.</p>
     */
    inline void SetOwnershipSettingsSummary(OwnershipSettingsSummary&& value) { m_ownershipSettingsSummaryHasBeenSet = true; m_ownershipSettingsSummary = std::move(value); }

    /**
     * <p>Specifies summary information about the ownership settings.</p>
     */
    inline SpaceDetails& WithOwnershipSettingsSummary(const OwnershipSettingsSummary& value) { SetOwnershipSettingsSummary(value); return *this;}

    /**
     * <p>Specifies summary information about the ownership settings.</p>
     */
    inline SpaceDetails& WithOwnershipSettingsSummary(OwnershipSettingsSummary&& value) { SetOwnershipSettingsSummary(std::move(value)); return *this;}


    /**
     * <p>The name of the space that appears in the Studio UI.</p>
     */
    inline const Aws::String& GetSpaceDisplayName() const{ return m_spaceDisplayName; }

    /**
     * <p>The name of the space that appears in the Studio UI.</p>
     */
    inline bool SpaceDisplayNameHasBeenSet() const { return m_spaceDisplayNameHasBeenSet; }

    /**
     * <p>The name of the space that appears in the Studio UI.</p>
     */
    inline void SetSpaceDisplayName(const Aws::String& value) { m_spaceDisplayNameHasBeenSet = true; m_spaceDisplayName = value; }

    /**
     * <p>The name of the space that appears in the Studio UI.</p>
     */
    inline void SetSpaceDisplayName(Aws::String&& value) { m_spaceDisplayNameHasBeenSet = true; m_spaceDisplayName = std::move(value); }

    /**
     * <p>The name of the space that appears in the Studio UI.</p>
     */
    inline void SetSpaceDisplayName(const char* value) { m_spaceDisplayNameHasBeenSet = true; m_spaceDisplayName.assign(value); }

    /**
     * <p>The name of the space that appears in the Studio UI.</p>
     */
    inline SpaceDetails& WithSpaceDisplayName(const Aws::String& value) { SetSpaceDisplayName(value); return *this;}

    /**
     * <p>The name of the space that appears in the Studio UI.</p>
     */
    inline SpaceDetails& WithSpaceDisplayName(Aws::String&& value) { SetSpaceDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the space that appears in the Studio UI.</p>
     */
    inline SpaceDetails& WithSpaceDisplayName(const char* value) { SetSpaceDisplayName(value); return *this;}

  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    SpaceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    SpaceSettingsSummary m_spaceSettingsSummary;
    bool m_spaceSettingsSummaryHasBeenSet = false;

    SpaceSharingSettingsSummary m_spaceSharingSettingsSummary;
    bool m_spaceSharingSettingsSummaryHasBeenSet = false;

    OwnershipSettingsSummary m_ownershipSettingsSummary;
    bool m_ownershipSettingsSummaryHasBeenSet = false;

    Aws::String m_spaceDisplayName;
    bool m_spaceDisplayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

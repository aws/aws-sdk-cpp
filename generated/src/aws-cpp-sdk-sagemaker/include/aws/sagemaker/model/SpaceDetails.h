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
    AWS_SAGEMAKER_API SpaceDetails() = default;
    AWS_SAGEMAKER_API SpaceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SpaceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the associated domain.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    SpaceDetails& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const { return m_spaceName; }
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }
    template<typename SpaceNameT = Aws::String>
    void SetSpaceName(SpaceNameT&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::forward<SpaceNameT>(value); }
    template<typename SpaceNameT = Aws::String>
    SpaceDetails& WithSpaceName(SpaceNameT&& value) { SetSpaceName(std::forward<SpaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline SpaceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SpaceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SpaceDetails& WithStatus(SpaceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    SpaceDetails& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    SpaceDetails& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies summary information about the space settings.</p>
     */
    inline const SpaceSettingsSummary& GetSpaceSettingsSummary() const { return m_spaceSettingsSummary; }
    inline bool SpaceSettingsSummaryHasBeenSet() const { return m_spaceSettingsSummaryHasBeenSet; }
    template<typename SpaceSettingsSummaryT = SpaceSettingsSummary>
    void SetSpaceSettingsSummary(SpaceSettingsSummaryT&& value) { m_spaceSettingsSummaryHasBeenSet = true; m_spaceSettingsSummary = std::forward<SpaceSettingsSummaryT>(value); }
    template<typename SpaceSettingsSummaryT = SpaceSettingsSummary>
    SpaceDetails& WithSpaceSettingsSummary(SpaceSettingsSummaryT&& value) { SetSpaceSettingsSummary(std::forward<SpaceSettingsSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies summary information about the space sharing settings.</p>
     */
    inline const SpaceSharingSettingsSummary& GetSpaceSharingSettingsSummary() const { return m_spaceSharingSettingsSummary; }
    inline bool SpaceSharingSettingsSummaryHasBeenSet() const { return m_spaceSharingSettingsSummaryHasBeenSet; }
    template<typename SpaceSharingSettingsSummaryT = SpaceSharingSettingsSummary>
    void SetSpaceSharingSettingsSummary(SpaceSharingSettingsSummaryT&& value) { m_spaceSharingSettingsSummaryHasBeenSet = true; m_spaceSharingSettingsSummary = std::forward<SpaceSharingSettingsSummaryT>(value); }
    template<typename SpaceSharingSettingsSummaryT = SpaceSharingSettingsSummary>
    SpaceDetails& WithSpaceSharingSettingsSummary(SpaceSharingSettingsSummaryT&& value) { SetSpaceSharingSettingsSummary(std::forward<SpaceSharingSettingsSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies summary information about the ownership settings.</p>
     */
    inline const OwnershipSettingsSummary& GetOwnershipSettingsSummary() const { return m_ownershipSettingsSummary; }
    inline bool OwnershipSettingsSummaryHasBeenSet() const { return m_ownershipSettingsSummaryHasBeenSet; }
    template<typename OwnershipSettingsSummaryT = OwnershipSettingsSummary>
    void SetOwnershipSettingsSummary(OwnershipSettingsSummaryT&& value) { m_ownershipSettingsSummaryHasBeenSet = true; m_ownershipSettingsSummary = std::forward<OwnershipSettingsSummaryT>(value); }
    template<typename OwnershipSettingsSummaryT = OwnershipSettingsSummary>
    SpaceDetails& WithOwnershipSettingsSummary(OwnershipSettingsSummaryT&& value) { SetOwnershipSettingsSummary(std::forward<OwnershipSettingsSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the space that appears in the Studio UI.</p>
     */
    inline const Aws::String& GetSpaceDisplayName() const { return m_spaceDisplayName; }
    inline bool SpaceDisplayNameHasBeenSet() const { return m_spaceDisplayNameHasBeenSet; }
    template<typename SpaceDisplayNameT = Aws::String>
    void SetSpaceDisplayName(SpaceDisplayNameT&& value) { m_spaceDisplayNameHasBeenSet = true; m_spaceDisplayName = std::forward<SpaceDisplayNameT>(value); }
    template<typename SpaceDisplayNameT = Aws::String>
    SpaceDetails& WithSpaceDisplayName(SpaceDisplayNameT&& value) { SetSpaceDisplayName(std::forward<SpaceDisplayNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    SpaceStatus m_status{SpaceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
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

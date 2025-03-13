/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/worklink/model/FleetStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace WorkLink
{
namespace Model
{

  /**
   * <p>The summary of the fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/FleetSummary">AWS
   * API Reference</a></p>
   */
  class FleetSummary
  {
  public:
    AWS_WORKLINK_API FleetSummary() = default;
    AWS_WORKLINK_API FleetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKLINK_API FleetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKLINK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline const Aws::String& GetFleetArn() const { return m_fleetArn; }
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }
    template<typename FleetArnT = Aws::String>
    void SetFleetArn(FleetArnT&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::forward<FleetArnT>(value); }
    template<typename FleetArnT = Aws::String>
    FleetSummary& WithFleetArn(FleetArnT&& value) { SetFleetArn(std::forward<FleetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the fleet was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    FleetSummary& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the fleet was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    FleetSummary& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fleet.</p>
     */
    inline const Aws::String& GetFleetName() const { return m_fleetName; }
    inline bool FleetNameHasBeenSet() const { return m_fleetNameHasBeenSet; }
    template<typename FleetNameT = Aws::String>
    void SetFleetName(FleetNameT&& value) { m_fleetNameHasBeenSet = true; m_fleetName = std::forward<FleetNameT>(value); }
    template<typename FleetNameT = Aws::String>
    FleetSummary& WithFleetName(FleetNameT&& value) { SetFleetName(std::forward<FleetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the fleet to display.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    FleetSummary& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier used by users to sign into the Amazon WorkLink app.</p>
     */
    inline const Aws::String& GetCompanyCode() const { return m_companyCode; }
    inline bool CompanyCodeHasBeenSet() const { return m_companyCodeHasBeenSet; }
    template<typename CompanyCodeT = Aws::String>
    void SetCompanyCode(CompanyCodeT&& value) { m_companyCodeHasBeenSet = true; m_companyCode = std::forward<CompanyCodeT>(value); }
    template<typename CompanyCodeT = Aws::String>
    FleetSummary& WithCompanyCode(CompanyCodeT&& value) { SetCompanyCode(std::forward<CompanyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the fleet.</p>
     */
    inline FleetStatus GetFleetStatus() const { return m_fleetStatus; }
    inline bool FleetStatusHasBeenSet() const { return m_fleetStatusHasBeenSet; }
    inline void SetFleetStatus(FleetStatus value) { m_fleetStatusHasBeenSet = true; m_fleetStatus = value; }
    inline FleetSummary& WithFleetStatus(FleetStatus value) { SetFleetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags attached to the resource. A tag is a key-value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    FleetSummary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    FleetSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_fleetName;
    bool m_fleetNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_companyCode;
    bool m_companyCodeHasBeenSet = false;

    FleetStatus m_fleetStatus{FleetStatus::NOT_SET};
    bool m_fleetStatusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws

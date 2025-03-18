/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class CreateSnapshotScheduleRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API CreateSnapshotScheduleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSnapshotSchedule"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The definition of the snapshot schedule. The definition is made up of
     * schedule expressions, for example "cron(30 12 *)" or "rate(12 hours)". </p>
     */
    inline const Aws::Vector<Aws::String>& GetScheduleDefinitions() const { return m_scheduleDefinitions; }
    inline bool ScheduleDefinitionsHasBeenSet() const { return m_scheduleDefinitionsHasBeenSet; }
    template<typename ScheduleDefinitionsT = Aws::Vector<Aws::String>>
    void SetScheduleDefinitions(ScheduleDefinitionsT&& value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions = std::forward<ScheduleDefinitionsT>(value); }
    template<typename ScheduleDefinitionsT = Aws::Vector<Aws::String>>
    CreateSnapshotScheduleRequest& WithScheduleDefinitions(ScheduleDefinitionsT&& value) { SetScheduleDefinitions(std::forward<ScheduleDefinitionsT>(value)); return *this;}
    template<typename ScheduleDefinitionsT = Aws::String>
    CreateSnapshotScheduleRequest& AddScheduleDefinitions(ScheduleDefinitionsT&& value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions.emplace_back(std::forward<ScheduleDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique identifier for a snapshot schedule. Only alphanumeric characters are
     * allowed for the identifier.</p>
     */
    inline const Aws::String& GetScheduleIdentifier() const { return m_scheduleIdentifier; }
    inline bool ScheduleIdentifierHasBeenSet() const { return m_scheduleIdentifierHasBeenSet; }
    template<typename ScheduleIdentifierT = Aws::String>
    void SetScheduleIdentifier(ScheduleIdentifierT&& value) { m_scheduleIdentifierHasBeenSet = true; m_scheduleIdentifier = std::forward<ScheduleIdentifierT>(value); }
    template<typename ScheduleIdentifierT = Aws::String>
    CreateSnapshotScheduleRequest& WithScheduleIdentifier(ScheduleIdentifierT&& value) { SetScheduleIdentifier(std::forward<ScheduleIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the snapshot schedule.</p>
     */
    inline const Aws::String& GetScheduleDescription() const { return m_scheduleDescription; }
    inline bool ScheduleDescriptionHasBeenSet() const { return m_scheduleDescriptionHasBeenSet; }
    template<typename ScheduleDescriptionT = Aws::String>
    void SetScheduleDescription(ScheduleDescriptionT&& value) { m_scheduleDescriptionHasBeenSet = true; m_scheduleDescription = std::forward<ScheduleDescriptionT>(value); }
    template<typename ScheduleDescriptionT = Aws::String>
    CreateSnapshotScheduleRequest& WithScheduleDescription(ScheduleDescriptionT&& value) { SetScheduleDescription(std::forward<ScheduleDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional set of tags you can use to search for the schedule.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateSnapshotScheduleRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateSnapshotScheduleRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateSnapshotScheduleRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline int GetNextInvocations() const { return m_nextInvocations; }
    inline bool NextInvocationsHasBeenSet() const { return m_nextInvocationsHasBeenSet; }
    inline void SetNextInvocations(int value) { m_nextInvocationsHasBeenSet = true; m_nextInvocations = value; }
    inline CreateSnapshotScheduleRequest& WithNextInvocations(int value) { SetNextInvocations(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_scheduleDefinitions;
    bool m_scheduleDefinitionsHasBeenSet = false;

    Aws::String m_scheduleIdentifier;
    bool m_scheduleIdentifierHasBeenSet = false;

    Aws::String m_scheduleDescription;
    bool m_scheduleDescriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    int m_nextInvocations{0};
    bool m_nextInvocationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

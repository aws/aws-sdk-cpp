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
    AWS_REDSHIFT_API CreateSnapshotScheduleRequest();

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
    inline const Aws::Vector<Aws::String>& GetScheduleDefinitions() const{ return m_scheduleDefinitions; }
    inline bool ScheduleDefinitionsHasBeenSet() const { return m_scheduleDefinitionsHasBeenSet; }
    inline void SetScheduleDefinitions(const Aws::Vector<Aws::String>& value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions = value; }
    inline void SetScheduleDefinitions(Aws::Vector<Aws::String>&& value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions = std::move(value); }
    inline CreateSnapshotScheduleRequest& WithScheduleDefinitions(const Aws::Vector<Aws::String>& value) { SetScheduleDefinitions(value); return *this;}
    inline CreateSnapshotScheduleRequest& WithScheduleDefinitions(Aws::Vector<Aws::String>&& value) { SetScheduleDefinitions(std::move(value)); return *this;}
    inline CreateSnapshotScheduleRequest& AddScheduleDefinitions(const Aws::String& value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions.push_back(value); return *this; }
    inline CreateSnapshotScheduleRequest& AddScheduleDefinitions(Aws::String&& value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions.push_back(std::move(value)); return *this; }
    inline CreateSnapshotScheduleRequest& AddScheduleDefinitions(const char* value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique identifier for a snapshot schedule. Only alphanumeric characters are
     * allowed for the identifier.</p>
     */
    inline const Aws::String& GetScheduleIdentifier() const{ return m_scheduleIdentifier; }
    inline bool ScheduleIdentifierHasBeenSet() const { return m_scheduleIdentifierHasBeenSet; }
    inline void SetScheduleIdentifier(const Aws::String& value) { m_scheduleIdentifierHasBeenSet = true; m_scheduleIdentifier = value; }
    inline void SetScheduleIdentifier(Aws::String&& value) { m_scheduleIdentifierHasBeenSet = true; m_scheduleIdentifier = std::move(value); }
    inline void SetScheduleIdentifier(const char* value) { m_scheduleIdentifierHasBeenSet = true; m_scheduleIdentifier.assign(value); }
    inline CreateSnapshotScheduleRequest& WithScheduleIdentifier(const Aws::String& value) { SetScheduleIdentifier(value); return *this;}
    inline CreateSnapshotScheduleRequest& WithScheduleIdentifier(Aws::String&& value) { SetScheduleIdentifier(std::move(value)); return *this;}
    inline CreateSnapshotScheduleRequest& WithScheduleIdentifier(const char* value) { SetScheduleIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the snapshot schedule.</p>
     */
    inline const Aws::String& GetScheduleDescription() const{ return m_scheduleDescription; }
    inline bool ScheduleDescriptionHasBeenSet() const { return m_scheduleDescriptionHasBeenSet; }
    inline void SetScheduleDescription(const Aws::String& value) { m_scheduleDescriptionHasBeenSet = true; m_scheduleDescription = value; }
    inline void SetScheduleDescription(Aws::String&& value) { m_scheduleDescriptionHasBeenSet = true; m_scheduleDescription = std::move(value); }
    inline void SetScheduleDescription(const char* value) { m_scheduleDescriptionHasBeenSet = true; m_scheduleDescription.assign(value); }
    inline CreateSnapshotScheduleRequest& WithScheduleDescription(const Aws::String& value) { SetScheduleDescription(value); return *this;}
    inline CreateSnapshotScheduleRequest& WithScheduleDescription(Aws::String&& value) { SetScheduleDescription(std::move(value)); return *this;}
    inline CreateSnapshotScheduleRequest& WithScheduleDescription(const char* value) { SetScheduleDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional set of tags you can use to search for the schedule.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateSnapshotScheduleRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateSnapshotScheduleRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateSnapshotScheduleRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateSnapshotScheduleRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateSnapshotScheduleRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline int GetNextInvocations() const{ return m_nextInvocations; }
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

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    int m_nextInvocations;
    bool m_nextInvocationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

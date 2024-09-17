/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class ModifySnapshotScheduleRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API ModifySnapshotScheduleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifySnapshotSchedule"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>A unique alphanumeric identifier of the schedule to modify.</p>
     */
    inline const Aws::String& GetScheduleIdentifier() const{ return m_scheduleIdentifier; }
    inline bool ScheduleIdentifierHasBeenSet() const { return m_scheduleIdentifierHasBeenSet; }
    inline void SetScheduleIdentifier(const Aws::String& value) { m_scheduleIdentifierHasBeenSet = true; m_scheduleIdentifier = value; }
    inline void SetScheduleIdentifier(Aws::String&& value) { m_scheduleIdentifierHasBeenSet = true; m_scheduleIdentifier = std::move(value); }
    inline void SetScheduleIdentifier(const char* value) { m_scheduleIdentifierHasBeenSet = true; m_scheduleIdentifier.assign(value); }
    inline ModifySnapshotScheduleRequest& WithScheduleIdentifier(const Aws::String& value) { SetScheduleIdentifier(value); return *this;}
    inline ModifySnapshotScheduleRequest& WithScheduleIdentifier(Aws::String&& value) { SetScheduleIdentifier(std::move(value)); return *this;}
    inline ModifySnapshotScheduleRequest& WithScheduleIdentifier(const char* value) { SetScheduleIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An updated list of schedule definitions. A schedule definition is made up of
     * schedule expressions, for example, "cron(30 12 *)" or "rate(12 hours)".</p>
     */
    inline const Aws::Vector<Aws::String>& GetScheduleDefinitions() const{ return m_scheduleDefinitions; }
    inline bool ScheduleDefinitionsHasBeenSet() const { return m_scheduleDefinitionsHasBeenSet; }
    inline void SetScheduleDefinitions(const Aws::Vector<Aws::String>& value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions = value; }
    inline void SetScheduleDefinitions(Aws::Vector<Aws::String>&& value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions = std::move(value); }
    inline ModifySnapshotScheduleRequest& WithScheduleDefinitions(const Aws::Vector<Aws::String>& value) { SetScheduleDefinitions(value); return *this;}
    inline ModifySnapshotScheduleRequest& WithScheduleDefinitions(Aws::Vector<Aws::String>&& value) { SetScheduleDefinitions(std::move(value)); return *this;}
    inline ModifySnapshotScheduleRequest& AddScheduleDefinitions(const Aws::String& value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions.push_back(value); return *this; }
    inline ModifySnapshotScheduleRequest& AddScheduleDefinitions(Aws::String&& value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions.push_back(std::move(value)); return *this; }
    inline ModifySnapshotScheduleRequest& AddScheduleDefinitions(const char* value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_scheduleIdentifier;
    bool m_scheduleIdentifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_scheduleDefinitions;
    bool m_scheduleDefinitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

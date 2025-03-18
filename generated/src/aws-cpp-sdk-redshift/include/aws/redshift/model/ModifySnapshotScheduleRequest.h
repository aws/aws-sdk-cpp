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
    AWS_REDSHIFT_API ModifySnapshotScheduleRequest() = default;

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
    inline const Aws::String& GetScheduleIdentifier() const { return m_scheduleIdentifier; }
    inline bool ScheduleIdentifierHasBeenSet() const { return m_scheduleIdentifierHasBeenSet; }
    template<typename ScheduleIdentifierT = Aws::String>
    void SetScheduleIdentifier(ScheduleIdentifierT&& value) { m_scheduleIdentifierHasBeenSet = true; m_scheduleIdentifier = std::forward<ScheduleIdentifierT>(value); }
    template<typename ScheduleIdentifierT = Aws::String>
    ModifySnapshotScheduleRequest& WithScheduleIdentifier(ScheduleIdentifierT&& value) { SetScheduleIdentifier(std::forward<ScheduleIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An updated list of schedule definitions. A schedule definition is made up of
     * schedule expressions, for example, "cron(30 12 *)" or "rate(12 hours)".</p>
     */
    inline const Aws::Vector<Aws::String>& GetScheduleDefinitions() const { return m_scheduleDefinitions; }
    inline bool ScheduleDefinitionsHasBeenSet() const { return m_scheduleDefinitionsHasBeenSet; }
    template<typename ScheduleDefinitionsT = Aws::Vector<Aws::String>>
    void SetScheduleDefinitions(ScheduleDefinitionsT&& value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions = std::forward<ScheduleDefinitionsT>(value); }
    template<typename ScheduleDefinitionsT = Aws::Vector<Aws::String>>
    ModifySnapshotScheduleRequest& WithScheduleDefinitions(ScheduleDefinitionsT&& value) { SetScheduleDefinitions(std::forward<ScheduleDefinitionsT>(value)); return *this;}
    template<typename ScheduleDefinitionsT = Aws::String>
    ModifySnapshotScheduleRequest& AddScheduleDefinitions(ScheduleDefinitionsT&& value) { m_scheduleDefinitionsHasBeenSet = true; m_scheduleDefinitions.emplace_back(std::forward<ScheduleDefinitionsT>(value)); return *this; }
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

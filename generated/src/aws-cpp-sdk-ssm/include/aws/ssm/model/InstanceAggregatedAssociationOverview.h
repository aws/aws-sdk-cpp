/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Status information about the aggregated associations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InstanceAggregatedAssociationOverview">AWS
   * API Reference</a></p>
   */
  class InstanceAggregatedAssociationOverview
  {
  public:
    AWS_SSM_API InstanceAggregatedAssociationOverview();
    AWS_SSM_API InstanceAggregatedAssociationOverview(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InstanceAggregatedAssociationOverview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Detailed status information about the aggregated associations.</p>
     */
    inline const Aws::String& GetDetailedStatus() const{ return m_detailedStatus; }

    /**
     * <p>Detailed status information about the aggregated associations.</p>
     */
    inline bool DetailedStatusHasBeenSet() const { return m_detailedStatusHasBeenSet; }

    /**
     * <p>Detailed status information about the aggregated associations.</p>
     */
    inline void SetDetailedStatus(const Aws::String& value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = value; }

    /**
     * <p>Detailed status information about the aggregated associations.</p>
     */
    inline void SetDetailedStatus(Aws::String&& value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = std::move(value); }

    /**
     * <p>Detailed status information about the aggregated associations.</p>
     */
    inline void SetDetailedStatus(const char* value) { m_detailedStatusHasBeenSet = true; m_detailedStatus.assign(value); }

    /**
     * <p>Detailed status information about the aggregated associations.</p>
     */
    inline InstanceAggregatedAssociationOverview& WithDetailedStatus(const Aws::String& value) { SetDetailedStatus(value); return *this;}

    /**
     * <p>Detailed status information about the aggregated associations.</p>
     */
    inline InstanceAggregatedAssociationOverview& WithDetailedStatus(Aws::String&& value) { SetDetailedStatus(std::move(value)); return *this;}

    /**
     * <p>Detailed status information about the aggregated associations.</p>
     */
    inline InstanceAggregatedAssociationOverview& WithDetailedStatus(const char* value) { SetDetailedStatus(value); return *this;}


    /**
     * <p>The number of associations for the managed node(s).</p>
     */
    inline const Aws::Map<Aws::String, int>& GetInstanceAssociationStatusAggregatedCount() const{ return m_instanceAssociationStatusAggregatedCount; }

    /**
     * <p>The number of associations for the managed node(s).</p>
     */
    inline bool InstanceAssociationStatusAggregatedCountHasBeenSet() const { return m_instanceAssociationStatusAggregatedCountHasBeenSet; }

    /**
     * <p>The number of associations for the managed node(s).</p>
     */
    inline void SetInstanceAssociationStatusAggregatedCount(const Aws::Map<Aws::String, int>& value) { m_instanceAssociationStatusAggregatedCountHasBeenSet = true; m_instanceAssociationStatusAggregatedCount = value; }

    /**
     * <p>The number of associations for the managed node(s).</p>
     */
    inline void SetInstanceAssociationStatusAggregatedCount(Aws::Map<Aws::String, int>&& value) { m_instanceAssociationStatusAggregatedCountHasBeenSet = true; m_instanceAssociationStatusAggregatedCount = std::move(value); }

    /**
     * <p>The number of associations for the managed node(s).</p>
     */
    inline InstanceAggregatedAssociationOverview& WithInstanceAssociationStatusAggregatedCount(const Aws::Map<Aws::String, int>& value) { SetInstanceAssociationStatusAggregatedCount(value); return *this;}

    /**
     * <p>The number of associations for the managed node(s).</p>
     */
    inline InstanceAggregatedAssociationOverview& WithInstanceAssociationStatusAggregatedCount(Aws::Map<Aws::String, int>&& value) { SetInstanceAssociationStatusAggregatedCount(std::move(value)); return *this;}

    /**
     * <p>The number of associations for the managed node(s).</p>
     */
    inline InstanceAggregatedAssociationOverview& AddInstanceAssociationStatusAggregatedCount(const Aws::String& key, int value) { m_instanceAssociationStatusAggregatedCountHasBeenSet = true; m_instanceAssociationStatusAggregatedCount.emplace(key, value); return *this; }

    /**
     * <p>The number of associations for the managed node(s).</p>
     */
    inline InstanceAggregatedAssociationOverview& AddInstanceAssociationStatusAggregatedCount(Aws::String&& key, int value) { m_instanceAssociationStatusAggregatedCountHasBeenSet = true; m_instanceAssociationStatusAggregatedCount.emplace(std::move(key), value); return *this; }

    /**
     * <p>The number of associations for the managed node(s).</p>
     */
    inline InstanceAggregatedAssociationOverview& AddInstanceAssociationStatusAggregatedCount(const char* key, int value) { m_instanceAssociationStatusAggregatedCountHasBeenSet = true; m_instanceAssociationStatusAggregatedCount.emplace(key, value); return *this; }

  private:

    Aws::String m_detailedStatus;
    bool m_detailedStatusHasBeenSet = false;

    Aws::Map<Aws::String, int> m_instanceAssociationStatusAggregatedCount;
    bool m_instanceAssociationStatusAggregatedCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

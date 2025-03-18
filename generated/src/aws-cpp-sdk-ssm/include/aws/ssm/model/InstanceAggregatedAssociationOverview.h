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
    AWS_SSM_API InstanceAggregatedAssociationOverview() = default;
    AWS_SSM_API InstanceAggregatedAssociationOverview(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InstanceAggregatedAssociationOverview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Detailed status information about the aggregated associations.</p>
     */
    inline const Aws::String& GetDetailedStatus() const { return m_detailedStatus; }
    inline bool DetailedStatusHasBeenSet() const { return m_detailedStatusHasBeenSet; }
    template<typename DetailedStatusT = Aws::String>
    void SetDetailedStatus(DetailedStatusT&& value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = std::forward<DetailedStatusT>(value); }
    template<typename DetailedStatusT = Aws::String>
    InstanceAggregatedAssociationOverview& WithDetailedStatus(DetailedStatusT&& value) { SetDetailedStatus(std::forward<DetailedStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of associations for the managed nodes.</p>
     */
    inline const Aws::Map<Aws::String, int>& GetInstanceAssociationStatusAggregatedCount() const { return m_instanceAssociationStatusAggregatedCount; }
    inline bool InstanceAssociationStatusAggregatedCountHasBeenSet() const { return m_instanceAssociationStatusAggregatedCountHasBeenSet; }
    template<typename InstanceAssociationStatusAggregatedCountT = Aws::Map<Aws::String, int>>
    void SetInstanceAssociationStatusAggregatedCount(InstanceAssociationStatusAggregatedCountT&& value) { m_instanceAssociationStatusAggregatedCountHasBeenSet = true; m_instanceAssociationStatusAggregatedCount = std::forward<InstanceAssociationStatusAggregatedCountT>(value); }
    template<typename InstanceAssociationStatusAggregatedCountT = Aws::Map<Aws::String, int>>
    InstanceAggregatedAssociationOverview& WithInstanceAssociationStatusAggregatedCount(InstanceAssociationStatusAggregatedCountT&& value) { SetInstanceAssociationStatusAggregatedCount(std::forward<InstanceAssociationStatusAggregatedCountT>(value)); return *this;}
    inline InstanceAggregatedAssociationOverview& AddInstanceAssociationStatusAggregatedCount(Aws::String key, int value) {
      m_instanceAssociationStatusAggregatedCountHasBeenSet = true; m_instanceAssociationStatusAggregatedCount.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_detailedStatus;
    bool m_detailedStatusHasBeenSet = false;

    Aws::Map<Aws::String, int> m_instanceAssociationStatusAggregatedCount;
    bool m_instanceAssociationStatusAggregatedCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

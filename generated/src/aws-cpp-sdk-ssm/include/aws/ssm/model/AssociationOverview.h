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
   * <p>Information about the association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AssociationOverview">AWS
   * API Reference</a></p>
   */
  class AssociationOverview
  {
  public:
    AWS_SSM_API AssociationOverview() = default;
    AWS_SSM_API AssociationOverview(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AssociationOverview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the association. Status can be: Pending, Success, or
     * Failed.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AssociationOverview& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed status of the association.</p>
     */
    inline const Aws::String& GetDetailedStatus() const { return m_detailedStatus; }
    inline bool DetailedStatusHasBeenSet() const { return m_detailedStatusHasBeenSet; }
    template<typename DetailedStatusT = Aws::String>
    void SetDetailedStatus(DetailedStatusT&& value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = std::forward<DetailedStatusT>(value); }
    template<typename DetailedStatusT = Aws::String>
    AssociationOverview& WithDetailedStatus(DetailedStatusT&& value) { SetDetailedStatus(std::forward<DetailedStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the number of targets for the association status. For example, if you
     * created an association with two managed nodes, and one of them was successful,
     * this would return the count of managed nodes by status.</p>
     */
    inline const Aws::Map<Aws::String, int>& GetAssociationStatusAggregatedCount() const { return m_associationStatusAggregatedCount; }
    inline bool AssociationStatusAggregatedCountHasBeenSet() const { return m_associationStatusAggregatedCountHasBeenSet; }
    template<typename AssociationStatusAggregatedCountT = Aws::Map<Aws::String, int>>
    void SetAssociationStatusAggregatedCount(AssociationStatusAggregatedCountT&& value) { m_associationStatusAggregatedCountHasBeenSet = true; m_associationStatusAggregatedCount = std::forward<AssociationStatusAggregatedCountT>(value); }
    template<typename AssociationStatusAggregatedCountT = Aws::Map<Aws::String, int>>
    AssociationOverview& WithAssociationStatusAggregatedCount(AssociationStatusAggregatedCountT&& value) { SetAssociationStatusAggregatedCount(std::forward<AssociationStatusAggregatedCountT>(value)); return *this;}
    inline AssociationOverview& AddAssociationStatusAggregatedCount(Aws::String key, int value) {
      m_associationStatusAggregatedCountHasBeenSet = true; m_associationStatusAggregatedCount.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_detailedStatus;
    bool m_detailedStatusHasBeenSet = false;

    Aws::Map<Aws::String, int> m_associationStatusAggregatedCount;
    bool m_associationStatusAggregatedCountHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws

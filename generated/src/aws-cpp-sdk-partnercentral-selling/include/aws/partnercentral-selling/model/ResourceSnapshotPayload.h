/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/OpportunitySummaryView.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p> Represents the payload of a resource snapshot. This structure is designed to
   * accommodate different types of resource snapshots, currently supporting
   * opportunity summaries. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ResourceSnapshotPayload">AWS
   * API Reference</a></p>
   */
  class ResourceSnapshotPayload
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ResourceSnapshotPayload() = default;
    AWS_PARTNERCENTRALSELLING_API ResourceSnapshotPayload(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API ResourceSnapshotPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> An object that contains an <code>opportunity</code>'s subset of fields. </p>
     */
    inline const OpportunitySummaryView& GetOpportunitySummary() const { return m_opportunitySummary; }
    inline bool OpportunitySummaryHasBeenSet() const { return m_opportunitySummaryHasBeenSet; }
    template<typename OpportunitySummaryT = OpportunitySummaryView>
    void SetOpportunitySummary(OpportunitySummaryT&& value) { m_opportunitySummaryHasBeenSet = true; m_opportunitySummary = std::forward<OpportunitySummaryT>(value); }
    template<typename OpportunitySummaryT = OpportunitySummaryView>
    ResourceSnapshotPayload& WithOpportunitySummary(OpportunitySummaryT&& value) { SetOpportunitySummary(std::forward<OpportunitySummaryT>(value)); return *this;}
    ///@}
  private:

    OpportunitySummaryView m_opportunitySummary;
    bool m_opportunitySummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws

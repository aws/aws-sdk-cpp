/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/ResourceSnapshotJobStatus.h>
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
   * <p> An object that contains a <code>Resource Snapshot Job</code>'s subset of
   * fields. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ResourceSnapshotJobSummary">AWS
   * API Reference</a></p>
   */
  class ResourceSnapshotJobSummary
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ResourceSnapshotJobSummary() = default;
    AWS_PARTNERCENTRALSELLING_API ResourceSnapshotJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API ResourceSnapshotJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier for the resource snapshot job within the AWS Partner
     * Central system. This ID is used for direct references to the job within the
     * service. </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ResourceSnapshotJobSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for the resource snapshot job. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ResourceSnapshotJobSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Engagement.</p>
     */
    inline const Aws::String& GetEngagementId() const { return m_engagementId; }
    inline bool EngagementIdHasBeenSet() const { return m_engagementIdHasBeenSet; }
    template<typename EngagementIdT = Aws::String>
    void SetEngagementId(EngagementIdT&& value) { m_engagementIdHasBeenSet = true; m_engagementId = std::forward<EngagementIdT>(value); }
    template<typename EngagementIdT = Aws::String>
    ResourceSnapshotJobSummary& WithEngagementId(EngagementIdT&& value) { SetEngagementId(std::forward<EngagementIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the snapshot job.</p> <p>Valid values:</p> <ul> <li>
     * <p> STOPPED: The job is not currently running. </p> </li> <li> <p> RUNNING: The
     * job is actively executing. </p> </li> </ul>
     */
    inline ResourceSnapshotJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ResourceSnapshotJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ResourceSnapshotJobSummary& WithStatus(ResourceSnapshotJobStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_engagementId;
    bool m_engagementIdHasBeenSet = false;

    ResourceSnapshotJobStatus m_status{ResourceSnapshotJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws

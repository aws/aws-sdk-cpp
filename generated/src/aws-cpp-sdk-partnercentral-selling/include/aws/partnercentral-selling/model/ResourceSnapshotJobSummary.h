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
    AWS_PARTNERCENTRALSELLING_API ResourceSnapshotJobSummary();
    AWS_PARTNERCENTRALSELLING_API ResourceSnapshotJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API ResourceSnapshotJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for the resource snapshot job. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ResourceSnapshotJobSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ResourceSnapshotJobSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ResourceSnapshotJobSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Engagement.</p>
     */
    inline const Aws::String& GetEngagementId() const{ return m_engagementId; }
    inline bool EngagementIdHasBeenSet() const { return m_engagementIdHasBeenSet; }
    inline void SetEngagementId(const Aws::String& value) { m_engagementIdHasBeenSet = true; m_engagementId = value; }
    inline void SetEngagementId(Aws::String&& value) { m_engagementIdHasBeenSet = true; m_engagementId = std::move(value); }
    inline void SetEngagementId(const char* value) { m_engagementIdHasBeenSet = true; m_engagementId.assign(value); }
    inline ResourceSnapshotJobSummary& WithEngagementId(const Aws::String& value) { SetEngagementId(value); return *this;}
    inline ResourceSnapshotJobSummary& WithEngagementId(Aws::String&& value) { SetEngagementId(std::move(value)); return *this;}
    inline ResourceSnapshotJobSummary& WithEngagementId(const char* value) { SetEngagementId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the resource snapshot job within the AWS Partner
     * Central system. This ID is used for direct references to the job within the
     * service. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ResourceSnapshotJobSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ResourceSnapshotJobSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ResourceSnapshotJobSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the snapshot job.</p> <p>Valid values:</p> <ul> <li>
     * <p> STOPPED: The job is not currently running. </p> </li> <li> <p> RUNNING: The
     * job is actively executing. </p> </li> </ul>
     */
    inline const ResourceSnapshotJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ResourceSnapshotJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ResourceSnapshotJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ResourceSnapshotJobSummary& WithStatus(const ResourceSnapshotJobStatus& value) { SetStatus(value); return *this;}
    inline ResourceSnapshotJobSummary& WithStatus(ResourceSnapshotJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_engagementId;
    bool m_engagementIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ResourceSnapshotJobStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws

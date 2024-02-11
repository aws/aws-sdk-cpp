/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   */
  class UpgradeProfileVersionRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API UpgradeProfileVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpgradeProfileVersion"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadIdHasBeenSet = true; m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadIdHasBeenSet = true; m_workloadId.assign(value); }

    
    inline UpgradeProfileVersionRequest& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline UpgradeProfileVersionRequest& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline UpgradeProfileVersionRequest& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    /**
     * <p>The profile ARN.</p>
     */
    inline const Aws::String& GetProfileArn() const{ return m_profileArn; }

    /**
     * <p>The profile ARN.</p>
     */
    inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }

    /**
     * <p>The profile ARN.</p>
     */
    inline void SetProfileArn(const Aws::String& value) { m_profileArnHasBeenSet = true; m_profileArn = value; }

    /**
     * <p>The profile ARN.</p>
     */
    inline void SetProfileArn(Aws::String&& value) { m_profileArnHasBeenSet = true; m_profileArn = std::move(value); }

    /**
     * <p>The profile ARN.</p>
     */
    inline void SetProfileArn(const char* value) { m_profileArnHasBeenSet = true; m_profileArn.assign(value); }

    /**
     * <p>The profile ARN.</p>
     */
    inline UpgradeProfileVersionRequest& WithProfileArn(const Aws::String& value) { SetProfileArn(value); return *this;}

    /**
     * <p>The profile ARN.</p>
     */
    inline UpgradeProfileVersionRequest& WithProfileArn(Aws::String&& value) { SetProfileArn(std::move(value)); return *this;}

    /**
     * <p>The profile ARN.</p>
     */
    inline UpgradeProfileVersionRequest& WithProfileArn(const char* value) { SetProfileArn(value); return *this;}


    
    inline const Aws::String& GetMilestoneName() const{ return m_milestoneName; }

    
    inline bool MilestoneNameHasBeenSet() const { return m_milestoneNameHasBeenSet; }

    
    inline void SetMilestoneName(const Aws::String& value) { m_milestoneNameHasBeenSet = true; m_milestoneName = value; }

    
    inline void SetMilestoneName(Aws::String&& value) { m_milestoneNameHasBeenSet = true; m_milestoneName = std::move(value); }

    
    inline void SetMilestoneName(const char* value) { m_milestoneNameHasBeenSet = true; m_milestoneName.assign(value); }

    
    inline UpgradeProfileVersionRequest& WithMilestoneName(const Aws::String& value) { SetMilestoneName(value); return *this;}

    
    inline UpgradeProfileVersionRequest& WithMilestoneName(Aws::String&& value) { SetMilestoneName(std::move(value)); return *this;}

    
    inline UpgradeProfileVersionRequest& WithMilestoneName(const char* value) { SetMilestoneName(value); return *this;}


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline UpgradeProfileVersionRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline UpgradeProfileVersionRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline UpgradeProfileVersionRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::String m_profileArn;
    bool m_profileArnHasBeenSet = false;

    Aws::String m_milestoneName;
    bool m_milestoneNameHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws

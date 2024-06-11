/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/FeatureGroupStatus.h>
#include <aws/sagemaker/model/OfflineStoreStatus.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The name, ARN, <code>CreationTime</code>, <code>FeatureGroup</code> values,
   * <code>LastUpdatedTime</code> and <code>EnableOnlineStorage</code> status of a
   * <code>FeatureGroup</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/FeatureGroupSummary">AWS
   * API Reference</a></p>
   */
  class FeatureGroupSummary
  {
  public:
    AWS_SAGEMAKER_API FeatureGroupSummary();
    AWS_SAGEMAKER_API FeatureGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API FeatureGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of <code>FeatureGroup</code>.</p>
     */
    inline const Aws::String& GetFeatureGroupName() const{ return m_featureGroupName; }
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }
    inline void SetFeatureGroupName(const Aws::String& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = value; }
    inline void SetFeatureGroupName(Aws::String&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::move(value); }
    inline void SetFeatureGroupName(const char* value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName.assign(value); }
    inline FeatureGroupSummary& WithFeatureGroupName(const Aws::String& value) { SetFeatureGroupName(value); return *this;}
    inline FeatureGroupSummary& WithFeatureGroupName(Aws::String&& value) { SetFeatureGroupName(std::move(value)); return *this;}
    inline FeatureGroupSummary& WithFeatureGroupName(const char* value) { SetFeatureGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for the <code>FeatureGroup</code>.</p>
     */
    inline const Aws::String& GetFeatureGroupArn() const{ return m_featureGroupArn; }
    inline bool FeatureGroupArnHasBeenSet() const { return m_featureGroupArnHasBeenSet; }
    inline void SetFeatureGroupArn(const Aws::String& value) { m_featureGroupArnHasBeenSet = true; m_featureGroupArn = value; }
    inline void SetFeatureGroupArn(Aws::String&& value) { m_featureGroupArnHasBeenSet = true; m_featureGroupArn = std::move(value); }
    inline void SetFeatureGroupArn(const char* value) { m_featureGroupArnHasBeenSet = true; m_featureGroupArn.assign(value); }
    inline FeatureGroupSummary& WithFeatureGroupArn(const Aws::String& value) { SetFeatureGroupArn(value); return *this;}
    inline FeatureGroupSummary& WithFeatureGroupArn(Aws::String&& value) { SetFeatureGroupArn(std::move(value)); return *this;}
    inline FeatureGroupSummary& WithFeatureGroupArn(const char* value) { SetFeatureGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp indicating the time of creation time of the
     * <code>FeatureGroup</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline FeatureGroupSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline FeatureGroupSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a FeatureGroup. The status can be any of the following:
     * <code>Creating</code>, <code>Created</code>, <code>CreateFail</code>,
     * <code>Deleting</code> or <code>DetailFail</code>. </p>
     */
    inline const FeatureGroupStatus& GetFeatureGroupStatus() const{ return m_featureGroupStatus; }
    inline bool FeatureGroupStatusHasBeenSet() const { return m_featureGroupStatusHasBeenSet; }
    inline void SetFeatureGroupStatus(const FeatureGroupStatus& value) { m_featureGroupStatusHasBeenSet = true; m_featureGroupStatus = value; }
    inline void SetFeatureGroupStatus(FeatureGroupStatus&& value) { m_featureGroupStatusHasBeenSet = true; m_featureGroupStatus = std::move(value); }
    inline FeatureGroupSummary& WithFeatureGroupStatus(const FeatureGroupStatus& value) { SetFeatureGroupStatus(value); return *this;}
    inline FeatureGroupSummary& WithFeatureGroupStatus(FeatureGroupStatus&& value) { SetFeatureGroupStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Notifies you if replicating data into the <code>OfflineStore</code> has
     * failed. Returns either: <code>Active</code> or <code>Blocked</code>.</p>
     */
    inline const OfflineStoreStatus& GetOfflineStoreStatus() const{ return m_offlineStoreStatus; }
    inline bool OfflineStoreStatusHasBeenSet() const { return m_offlineStoreStatusHasBeenSet; }
    inline void SetOfflineStoreStatus(const OfflineStoreStatus& value) { m_offlineStoreStatusHasBeenSet = true; m_offlineStoreStatus = value; }
    inline void SetOfflineStoreStatus(OfflineStoreStatus&& value) { m_offlineStoreStatusHasBeenSet = true; m_offlineStoreStatus = std::move(value); }
    inline FeatureGroupSummary& WithOfflineStoreStatus(const OfflineStoreStatus& value) { SetOfflineStoreStatus(value); return *this;}
    inline FeatureGroupSummary& WithOfflineStoreStatus(OfflineStoreStatus&& value) { SetOfflineStoreStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet = false;

    Aws::String m_featureGroupArn;
    bool m_featureGroupArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    FeatureGroupStatus m_featureGroupStatus;
    bool m_featureGroupStatusHasBeenSet = false;

    OfflineStoreStatus m_offlineStoreStatus;
    bool m_offlineStoreStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

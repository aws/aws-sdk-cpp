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
    AWS_SAGEMAKER_API FeatureGroupSummary() = default;
    AWS_SAGEMAKER_API FeatureGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API FeatureGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of <code>FeatureGroup</code>.</p>
     */
    inline const Aws::String& GetFeatureGroupName() const { return m_featureGroupName; }
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }
    template<typename FeatureGroupNameT = Aws::String>
    void SetFeatureGroupName(FeatureGroupNameT&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::forward<FeatureGroupNameT>(value); }
    template<typename FeatureGroupNameT = Aws::String>
    FeatureGroupSummary& WithFeatureGroupName(FeatureGroupNameT&& value) { SetFeatureGroupName(std::forward<FeatureGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for the <code>FeatureGroup</code>.</p>
     */
    inline const Aws::String& GetFeatureGroupArn() const { return m_featureGroupArn; }
    inline bool FeatureGroupArnHasBeenSet() const { return m_featureGroupArnHasBeenSet; }
    template<typename FeatureGroupArnT = Aws::String>
    void SetFeatureGroupArn(FeatureGroupArnT&& value) { m_featureGroupArnHasBeenSet = true; m_featureGroupArn = std::forward<FeatureGroupArnT>(value); }
    template<typename FeatureGroupArnT = Aws::String>
    FeatureGroupSummary& WithFeatureGroupArn(FeatureGroupArnT&& value) { SetFeatureGroupArn(std::forward<FeatureGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp indicating the time of creation time of the
     * <code>FeatureGroup</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    FeatureGroupSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a FeatureGroup. The status can be any of the following:
     * <code>Creating</code>, <code>Created</code>, <code>CreateFail</code>,
     * <code>Deleting</code> or <code>DetailFail</code>. </p>
     */
    inline FeatureGroupStatus GetFeatureGroupStatus() const { return m_featureGroupStatus; }
    inline bool FeatureGroupStatusHasBeenSet() const { return m_featureGroupStatusHasBeenSet; }
    inline void SetFeatureGroupStatus(FeatureGroupStatus value) { m_featureGroupStatusHasBeenSet = true; m_featureGroupStatus = value; }
    inline FeatureGroupSummary& WithFeatureGroupStatus(FeatureGroupStatus value) { SetFeatureGroupStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Notifies you if replicating data into the <code>OfflineStore</code> has
     * failed. Returns either: <code>Active</code> or <code>Blocked</code>.</p>
     */
    inline const OfflineStoreStatus& GetOfflineStoreStatus() const { return m_offlineStoreStatus; }
    inline bool OfflineStoreStatusHasBeenSet() const { return m_offlineStoreStatusHasBeenSet; }
    template<typename OfflineStoreStatusT = OfflineStoreStatus>
    void SetOfflineStoreStatus(OfflineStoreStatusT&& value) { m_offlineStoreStatusHasBeenSet = true; m_offlineStoreStatus = std::forward<OfflineStoreStatusT>(value); }
    template<typename OfflineStoreStatusT = OfflineStoreStatus>
    FeatureGroupSummary& WithOfflineStoreStatus(OfflineStoreStatusT&& value) { SetOfflineStoreStatus(std::forward<OfflineStoreStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet = false;

    Aws::String m_featureGroupArn;
    bool m_featureGroupArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    FeatureGroupStatus m_featureGroupStatus{FeatureGroupStatus::NOT_SET};
    bool m_featureGroupStatusHasBeenSet = false;

    OfflineStoreStatus m_offlineStoreStatus;
    bool m_offlineStoreStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

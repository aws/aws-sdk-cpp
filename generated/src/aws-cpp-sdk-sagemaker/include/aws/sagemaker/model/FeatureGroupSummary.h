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
   * <p>The name, Arn, <code>CreationTime</code>, <code>FeatureGroup</code> values,
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


    /**
     * <p>The name of <code>FeatureGroup</code>.</p>
     */
    inline const Aws::String& GetFeatureGroupName() const{ return m_featureGroupName; }

    /**
     * <p>The name of <code>FeatureGroup</code>.</p>
     */
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }

    /**
     * <p>The name of <code>FeatureGroup</code>.</p>
     */
    inline void SetFeatureGroupName(const Aws::String& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = value; }

    /**
     * <p>The name of <code>FeatureGroup</code>.</p>
     */
    inline void SetFeatureGroupName(Aws::String&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::move(value); }

    /**
     * <p>The name of <code>FeatureGroup</code>.</p>
     */
    inline void SetFeatureGroupName(const char* value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName.assign(value); }

    /**
     * <p>The name of <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroupSummary& WithFeatureGroupName(const Aws::String& value) { SetFeatureGroupName(value); return *this;}

    /**
     * <p>The name of <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroupSummary& WithFeatureGroupName(Aws::String&& value) { SetFeatureGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroupSummary& WithFeatureGroupName(const char* value) { SetFeatureGroupName(value); return *this;}


    /**
     * <p>Unique identifier for the <code>FeatureGroup</code>.</p>
     */
    inline const Aws::String& GetFeatureGroupArn() const{ return m_featureGroupArn; }

    /**
     * <p>Unique identifier for the <code>FeatureGroup</code>.</p>
     */
    inline bool FeatureGroupArnHasBeenSet() const { return m_featureGroupArnHasBeenSet; }

    /**
     * <p>Unique identifier for the <code>FeatureGroup</code>.</p>
     */
    inline void SetFeatureGroupArn(const Aws::String& value) { m_featureGroupArnHasBeenSet = true; m_featureGroupArn = value; }

    /**
     * <p>Unique identifier for the <code>FeatureGroup</code>.</p>
     */
    inline void SetFeatureGroupArn(Aws::String&& value) { m_featureGroupArnHasBeenSet = true; m_featureGroupArn = std::move(value); }

    /**
     * <p>Unique identifier for the <code>FeatureGroup</code>.</p>
     */
    inline void SetFeatureGroupArn(const char* value) { m_featureGroupArnHasBeenSet = true; m_featureGroupArn.assign(value); }

    /**
     * <p>Unique identifier for the <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroupSummary& WithFeatureGroupArn(const Aws::String& value) { SetFeatureGroupArn(value); return *this;}

    /**
     * <p>Unique identifier for the <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroupSummary& WithFeatureGroupArn(Aws::String&& value) { SetFeatureGroupArn(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for the <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroupSummary& WithFeatureGroupArn(const char* value) { SetFeatureGroupArn(value); return *this;}


    /**
     * <p>A timestamp indicating the time of creation time of the
     * <code>FeatureGroup</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp indicating the time of creation time of the
     * <code>FeatureGroup</code>.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A timestamp indicating the time of creation time of the
     * <code>FeatureGroup</code>.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A timestamp indicating the time of creation time of the
     * <code>FeatureGroup</code>.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A timestamp indicating the time of creation time of the
     * <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroupSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp indicating the time of creation time of the
     * <code>FeatureGroup</code>.</p>
     */
    inline FeatureGroupSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The status of a FeatureGroup. The status can be any of the following:
     * <code>Creating</code>, <code>Created</code>, <code>CreateFail</code>,
     * <code>Deleting</code> or <code>DetailFail</code>. </p>
     */
    inline const FeatureGroupStatus& GetFeatureGroupStatus() const{ return m_featureGroupStatus; }

    /**
     * <p>The status of a FeatureGroup. The status can be any of the following:
     * <code>Creating</code>, <code>Created</code>, <code>CreateFail</code>,
     * <code>Deleting</code> or <code>DetailFail</code>. </p>
     */
    inline bool FeatureGroupStatusHasBeenSet() const { return m_featureGroupStatusHasBeenSet; }

    /**
     * <p>The status of a FeatureGroup. The status can be any of the following:
     * <code>Creating</code>, <code>Created</code>, <code>CreateFail</code>,
     * <code>Deleting</code> or <code>DetailFail</code>. </p>
     */
    inline void SetFeatureGroupStatus(const FeatureGroupStatus& value) { m_featureGroupStatusHasBeenSet = true; m_featureGroupStatus = value; }

    /**
     * <p>The status of a FeatureGroup. The status can be any of the following:
     * <code>Creating</code>, <code>Created</code>, <code>CreateFail</code>,
     * <code>Deleting</code> or <code>DetailFail</code>. </p>
     */
    inline void SetFeatureGroupStatus(FeatureGroupStatus&& value) { m_featureGroupStatusHasBeenSet = true; m_featureGroupStatus = std::move(value); }

    /**
     * <p>The status of a FeatureGroup. The status can be any of the following:
     * <code>Creating</code>, <code>Created</code>, <code>CreateFail</code>,
     * <code>Deleting</code> or <code>DetailFail</code>. </p>
     */
    inline FeatureGroupSummary& WithFeatureGroupStatus(const FeatureGroupStatus& value) { SetFeatureGroupStatus(value); return *this;}

    /**
     * <p>The status of a FeatureGroup. The status can be any of the following:
     * <code>Creating</code>, <code>Created</code>, <code>CreateFail</code>,
     * <code>Deleting</code> or <code>DetailFail</code>. </p>
     */
    inline FeatureGroupSummary& WithFeatureGroupStatus(FeatureGroupStatus&& value) { SetFeatureGroupStatus(std::move(value)); return *this;}


    /**
     * <p>Notifies you if replicating data into the <code>OfflineStore</code> has
     * failed. Returns either: <code>Active</code> or <code>Blocked</code>.</p>
     */
    inline const OfflineStoreStatus& GetOfflineStoreStatus() const{ return m_offlineStoreStatus; }

    /**
     * <p>Notifies you if replicating data into the <code>OfflineStore</code> has
     * failed. Returns either: <code>Active</code> or <code>Blocked</code>.</p>
     */
    inline bool OfflineStoreStatusHasBeenSet() const { return m_offlineStoreStatusHasBeenSet; }

    /**
     * <p>Notifies you if replicating data into the <code>OfflineStore</code> has
     * failed. Returns either: <code>Active</code> or <code>Blocked</code>.</p>
     */
    inline void SetOfflineStoreStatus(const OfflineStoreStatus& value) { m_offlineStoreStatusHasBeenSet = true; m_offlineStoreStatus = value; }

    /**
     * <p>Notifies you if replicating data into the <code>OfflineStore</code> has
     * failed. Returns either: <code>Active</code> or <code>Blocked</code>.</p>
     */
    inline void SetOfflineStoreStatus(OfflineStoreStatus&& value) { m_offlineStoreStatusHasBeenSet = true; m_offlineStoreStatus = std::move(value); }

    /**
     * <p>Notifies you if replicating data into the <code>OfflineStore</code> has
     * failed. Returns either: <code>Active</code> or <code>Blocked</code>.</p>
     */
    inline FeatureGroupSummary& WithOfflineStoreStatus(const OfflineStoreStatus& value) { SetOfflineStoreStatus(value); return *this;}

    /**
     * <p>Notifies you if replicating data into the <code>OfflineStore</code> has
     * failed. Returns either: <code>Active</code> or <code>Blocked</code>.</p>
     */
    inline FeatureGroupSummary& WithOfflineStoreStatus(OfflineStoreStatus&& value) { SetOfflineStoreStatus(std::move(value)); return *this;}

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

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/OnlineStoreConfigUpdate.h>
#include <aws/sagemaker/model/ThroughputConfigUpdate.h>
#include <aws/sagemaker/model/FeatureDefinition.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateFeatureGroupRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateFeatureGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFeatureGroup"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name or Amazon Resource Name (ARN) of the feature group that you're
     * updating.</p>
     */
    inline const Aws::String& GetFeatureGroupName() const{ return m_featureGroupName; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the feature group that you're
     * updating.</p>
     */
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the feature group that you're
     * updating.</p>
     */
    inline void SetFeatureGroupName(const Aws::String& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the feature group that you're
     * updating.</p>
     */
    inline void SetFeatureGroupName(Aws::String&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the feature group that you're
     * updating.</p>
     */
    inline void SetFeatureGroupName(const char* value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the feature group that you're
     * updating.</p>
     */
    inline UpdateFeatureGroupRequest& WithFeatureGroupName(const Aws::String& value) { SetFeatureGroupName(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the feature group that you're
     * updating.</p>
     */
    inline UpdateFeatureGroupRequest& WithFeatureGroupName(Aws::String&& value) { SetFeatureGroupName(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the feature group that you're
     * updating.</p>
     */
    inline UpdateFeatureGroupRequest& WithFeatureGroupName(const char* value) { SetFeatureGroupName(value); return *this;}


    /**
     * <p>Updates the feature group. Updating a feature group is an asynchronous
     * operation. When you get an HTTP 200 response, you've made a valid request. It
     * takes some time after you've made a valid request for Feature Store to update
     * the feature group.</p>
     */
    inline const Aws::Vector<FeatureDefinition>& GetFeatureAdditions() const{ return m_featureAdditions; }

    /**
     * <p>Updates the feature group. Updating a feature group is an asynchronous
     * operation. When you get an HTTP 200 response, you've made a valid request. It
     * takes some time after you've made a valid request for Feature Store to update
     * the feature group.</p>
     */
    inline bool FeatureAdditionsHasBeenSet() const { return m_featureAdditionsHasBeenSet; }

    /**
     * <p>Updates the feature group. Updating a feature group is an asynchronous
     * operation. When you get an HTTP 200 response, you've made a valid request. It
     * takes some time after you've made a valid request for Feature Store to update
     * the feature group.</p>
     */
    inline void SetFeatureAdditions(const Aws::Vector<FeatureDefinition>& value) { m_featureAdditionsHasBeenSet = true; m_featureAdditions = value; }

    /**
     * <p>Updates the feature group. Updating a feature group is an asynchronous
     * operation. When you get an HTTP 200 response, you've made a valid request. It
     * takes some time after you've made a valid request for Feature Store to update
     * the feature group.</p>
     */
    inline void SetFeatureAdditions(Aws::Vector<FeatureDefinition>&& value) { m_featureAdditionsHasBeenSet = true; m_featureAdditions = std::move(value); }

    /**
     * <p>Updates the feature group. Updating a feature group is an asynchronous
     * operation. When you get an HTTP 200 response, you've made a valid request. It
     * takes some time after you've made a valid request for Feature Store to update
     * the feature group.</p>
     */
    inline UpdateFeatureGroupRequest& WithFeatureAdditions(const Aws::Vector<FeatureDefinition>& value) { SetFeatureAdditions(value); return *this;}

    /**
     * <p>Updates the feature group. Updating a feature group is an asynchronous
     * operation. When you get an HTTP 200 response, you've made a valid request. It
     * takes some time after you've made a valid request for Feature Store to update
     * the feature group.</p>
     */
    inline UpdateFeatureGroupRequest& WithFeatureAdditions(Aws::Vector<FeatureDefinition>&& value) { SetFeatureAdditions(std::move(value)); return *this;}

    /**
     * <p>Updates the feature group. Updating a feature group is an asynchronous
     * operation. When you get an HTTP 200 response, you've made a valid request. It
     * takes some time after you've made a valid request for Feature Store to update
     * the feature group.</p>
     */
    inline UpdateFeatureGroupRequest& AddFeatureAdditions(const FeatureDefinition& value) { m_featureAdditionsHasBeenSet = true; m_featureAdditions.push_back(value); return *this; }

    /**
     * <p>Updates the feature group. Updating a feature group is an asynchronous
     * operation. When you get an HTTP 200 response, you've made a valid request. It
     * takes some time after you've made a valid request for Feature Store to update
     * the feature group.</p>
     */
    inline UpdateFeatureGroupRequest& AddFeatureAdditions(FeatureDefinition&& value) { m_featureAdditionsHasBeenSet = true; m_featureAdditions.push_back(std::move(value)); return *this; }


    /**
     * <p>Updates the feature group online store configuration.</p>
     */
    inline const OnlineStoreConfigUpdate& GetOnlineStoreConfig() const{ return m_onlineStoreConfig; }

    /**
     * <p>Updates the feature group online store configuration.</p>
     */
    inline bool OnlineStoreConfigHasBeenSet() const { return m_onlineStoreConfigHasBeenSet; }

    /**
     * <p>Updates the feature group online store configuration.</p>
     */
    inline void SetOnlineStoreConfig(const OnlineStoreConfigUpdate& value) { m_onlineStoreConfigHasBeenSet = true; m_onlineStoreConfig = value; }

    /**
     * <p>Updates the feature group online store configuration.</p>
     */
    inline void SetOnlineStoreConfig(OnlineStoreConfigUpdate&& value) { m_onlineStoreConfigHasBeenSet = true; m_onlineStoreConfig = std::move(value); }

    /**
     * <p>Updates the feature group online store configuration.</p>
     */
    inline UpdateFeatureGroupRequest& WithOnlineStoreConfig(const OnlineStoreConfigUpdate& value) { SetOnlineStoreConfig(value); return *this;}

    /**
     * <p>Updates the feature group online store configuration.</p>
     */
    inline UpdateFeatureGroupRequest& WithOnlineStoreConfig(OnlineStoreConfigUpdate&& value) { SetOnlineStoreConfig(std::move(value)); return *this;}


    
    inline const ThroughputConfigUpdate& GetThroughputConfig() const{ return m_throughputConfig; }

    
    inline bool ThroughputConfigHasBeenSet() const { return m_throughputConfigHasBeenSet; }

    
    inline void SetThroughputConfig(const ThroughputConfigUpdate& value) { m_throughputConfigHasBeenSet = true; m_throughputConfig = value; }

    
    inline void SetThroughputConfig(ThroughputConfigUpdate&& value) { m_throughputConfigHasBeenSet = true; m_throughputConfig = std::move(value); }

    
    inline UpdateFeatureGroupRequest& WithThroughputConfig(const ThroughputConfigUpdate& value) { SetThroughputConfig(value); return *this;}

    
    inline UpdateFeatureGroupRequest& WithThroughputConfig(ThroughputConfigUpdate&& value) { SetThroughputConfig(std::move(value)); return *this;}

  private:

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet = false;

    Aws::Vector<FeatureDefinition> m_featureAdditions;
    bool m_featureAdditionsHasBeenSet = false;

    OnlineStoreConfigUpdate m_onlineStoreConfig;
    bool m_onlineStoreConfigHasBeenSet = false;

    ThroughputConfigUpdate m_throughputConfig;
    bool m_throughputConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

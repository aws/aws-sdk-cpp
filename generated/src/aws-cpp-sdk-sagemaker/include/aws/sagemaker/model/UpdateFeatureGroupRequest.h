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
    AWS_SAGEMAKER_API UpdateFeatureGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFeatureGroup"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the feature group that you're
     * updating.</p>
     */
    inline const Aws::String& GetFeatureGroupName() const { return m_featureGroupName; }
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }
    template<typename FeatureGroupNameT = Aws::String>
    void SetFeatureGroupName(FeatureGroupNameT&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::forward<FeatureGroupNameT>(value); }
    template<typename FeatureGroupNameT = Aws::String>
    UpdateFeatureGroupRequest& WithFeatureGroupName(FeatureGroupNameT&& value) { SetFeatureGroupName(std::forward<FeatureGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the feature group. Updating a feature group is an asynchronous
     * operation. When you get an HTTP 200 response, you've made a valid request. It
     * takes some time after you've made a valid request for Feature Store to update
     * the feature group.</p>
     */
    inline const Aws::Vector<FeatureDefinition>& GetFeatureAdditions() const { return m_featureAdditions; }
    inline bool FeatureAdditionsHasBeenSet() const { return m_featureAdditionsHasBeenSet; }
    template<typename FeatureAdditionsT = Aws::Vector<FeatureDefinition>>
    void SetFeatureAdditions(FeatureAdditionsT&& value) { m_featureAdditionsHasBeenSet = true; m_featureAdditions = std::forward<FeatureAdditionsT>(value); }
    template<typename FeatureAdditionsT = Aws::Vector<FeatureDefinition>>
    UpdateFeatureGroupRequest& WithFeatureAdditions(FeatureAdditionsT&& value) { SetFeatureAdditions(std::forward<FeatureAdditionsT>(value)); return *this;}
    template<typename FeatureAdditionsT = FeatureDefinition>
    UpdateFeatureGroupRequest& AddFeatureAdditions(FeatureAdditionsT&& value) { m_featureAdditionsHasBeenSet = true; m_featureAdditions.emplace_back(std::forward<FeatureAdditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Updates the feature group online store configuration.</p>
     */
    inline const OnlineStoreConfigUpdate& GetOnlineStoreConfig() const { return m_onlineStoreConfig; }
    inline bool OnlineStoreConfigHasBeenSet() const { return m_onlineStoreConfigHasBeenSet; }
    template<typename OnlineStoreConfigT = OnlineStoreConfigUpdate>
    void SetOnlineStoreConfig(OnlineStoreConfigT&& value) { m_onlineStoreConfigHasBeenSet = true; m_onlineStoreConfig = std::forward<OnlineStoreConfigT>(value); }
    template<typename OnlineStoreConfigT = OnlineStoreConfigUpdate>
    UpdateFeatureGroupRequest& WithOnlineStoreConfig(OnlineStoreConfigT&& value) { SetOnlineStoreConfig(std::forward<OnlineStoreConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ThroughputConfigUpdate& GetThroughputConfig() const { return m_throughputConfig; }
    inline bool ThroughputConfigHasBeenSet() const { return m_throughputConfigHasBeenSet; }
    template<typename ThroughputConfigT = ThroughputConfigUpdate>
    void SetThroughputConfig(ThroughputConfigT&& value) { m_throughputConfigHasBeenSet = true; m_throughputConfig = std::forward<ThroughputConfigT>(value); }
    template<typename ThroughputConfigT = ThroughputConfigUpdate>
    UpdateFeatureGroupRequest& WithThroughputConfig(ThroughputConfigT&& value) { SetThroughputConfig(std::forward<ThroughputConfigT>(value)); return *this;}
    ///@}
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

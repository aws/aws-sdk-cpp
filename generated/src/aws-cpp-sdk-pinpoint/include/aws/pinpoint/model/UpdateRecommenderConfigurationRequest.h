/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/UpdateRecommenderConfiguration.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class UpdateRecommenderConfigurationRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API UpdateRecommenderConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRecommenderConfiguration"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the recommender model configuration. This
     * identifier is displayed as the <b>Recommender ID</b> on the Amazon Pinpoint
     * console.</p>
     */
    inline const Aws::String& GetRecommenderId() const{ return m_recommenderId; }

    /**
     * <p>The unique identifier for the recommender model configuration. This
     * identifier is displayed as the <b>Recommender ID</b> on the Amazon Pinpoint
     * console.</p>
     */
    inline bool RecommenderIdHasBeenSet() const { return m_recommenderIdHasBeenSet; }

    /**
     * <p>The unique identifier for the recommender model configuration. This
     * identifier is displayed as the <b>Recommender ID</b> on the Amazon Pinpoint
     * console.</p>
     */
    inline void SetRecommenderId(const Aws::String& value) { m_recommenderIdHasBeenSet = true; m_recommenderId = value; }

    /**
     * <p>The unique identifier for the recommender model configuration. This
     * identifier is displayed as the <b>Recommender ID</b> on the Amazon Pinpoint
     * console.</p>
     */
    inline void SetRecommenderId(Aws::String&& value) { m_recommenderIdHasBeenSet = true; m_recommenderId = std::move(value); }

    /**
     * <p>The unique identifier for the recommender model configuration. This
     * identifier is displayed as the <b>Recommender ID</b> on the Amazon Pinpoint
     * console.</p>
     */
    inline void SetRecommenderId(const char* value) { m_recommenderIdHasBeenSet = true; m_recommenderId.assign(value); }

    /**
     * <p>The unique identifier for the recommender model configuration. This
     * identifier is displayed as the <b>Recommender ID</b> on the Amazon Pinpoint
     * console.</p>
     */
    inline UpdateRecommenderConfigurationRequest& WithRecommenderId(const Aws::String& value) { SetRecommenderId(value); return *this;}

    /**
     * <p>The unique identifier for the recommender model configuration. This
     * identifier is displayed as the <b>Recommender ID</b> on the Amazon Pinpoint
     * console.</p>
     */
    inline UpdateRecommenderConfigurationRequest& WithRecommenderId(Aws::String&& value) { SetRecommenderId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the recommender model configuration. This
     * identifier is displayed as the <b>Recommender ID</b> on the Amazon Pinpoint
     * console.</p>
     */
    inline UpdateRecommenderConfigurationRequest& WithRecommenderId(const char* value) { SetRecommenderId(value); return *this;}


    
    inline const UpdateRecommenderConfiguration& GetUpdateRecommenderConfiguration() const{ return m_updateRecommenderConfiguration; }

    
    inline bool UpdateRecommenderConfigurationHasBeenSet() const { return m_updateRecommenderConfigurationHasBeenSet; }

    
    inline void SetUpdateRecommenderConfiguration(const UpdateRecommenderConfiguration& value) { m_updateRecommenderConfigurationHasBeenSet = true; m_updateRecommenderConfiguration = value; }

    
    inline void SetUpdateRecommenderConfiguration(UpdateRecommenderConfiguration&& value) { m_updateRecommenderConfigurationHasBeenSet = true; m_updateRecommenderConfiguration = std::move(value); }

    
    inline UpdateRecommenderConfigurationRequest& WithUpdateRecommenderConfiguration(const UpdateRecommenderConfiguration& value) { SetUpdateRecommenderConfiguration(value); return *this;}

    
    inline UpdateRecommenderConfigurationRequest& WithUpdateRecommenderConfiguration(UpdateRecommenderConfiguration&& value) { SetUpdateRecommenderConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_recommenderId;
    bool m_recommenderIdHasBeenSet = false;

    UpdateRecommenderConfiguration m_updateRecommenderConfiguration;
    bool m_updateRecommenderConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

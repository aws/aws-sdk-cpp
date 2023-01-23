/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class GetRecommenderConfigurationRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API GetRecommenderConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRecommenderConfiguration"; }

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
    inline GetRecommenderConfigurationRequest& WithRecommenderId(const Aws::String& value) { SetRecommenderId(value); return *this;}

    /**
     * <p>The unique identifier for the recommender model configuration. This
     * identifier is displayed as the <b>Recommender ID</b> on the Amazon Pinpoint
     * console.</p>
     */
    inline GetRecommenderConfigurationRequest& WithRecommenderId(Aws::String&& value) { SetRecommenderId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the recommender model configuration. This
     * identifier is displayed as the <b>Recommender ID</b> on the Amazon Pinpoint
     * console.</p>
     */
    inline GetRecommenderConfigurationRequest& WithRecommenderId(const char* value) { SetRecommenderId(value); return *this;}

  private:

    Aws::String m_recommenderId;
    bool m_recommenderIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws

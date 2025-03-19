/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/RecommenderConfig.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class UpdateRecommenderRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API UpdateRecommenderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRecommender"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the recommender to modify.</p>
     */
    inline const Aws::String& GetRecommenderArn() const { return m_recommenderArn; }
    inline bool RecommenderArnHasBeenSet() const { return m_recommenderArnHasBeenSet; }
    template<typename RecommenderArnT = Aws::String>
    void SetRecommenderArn(RecommenderArnT&& value) { m_recommenderArnHasBeenSet = true; m_recommenderArn = std::forward<RecommenderArnT>(value); }
    template<typename RecommenderArnT = Aws::String>
    UpdateRecommenderRequest& WithRecommenderArn(RecommenderArnT&& value) { SetRecommenderArn(std::forward<RecommenderArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details of the recommender.</p>
     */
    inline const RecommenderConfig& GetRecommenderConfig() const { return m_recommenderConfig; }
    inline bool RecommenderConfigHasBeenSet() const { return m_recommenderConfigHasBeenSet; }
    template<typename RecommenderConfigT = RecommenderConfig>
    void SetRecommenderConfig(RecommenderConfigT&& value) { m_recommenderConfigHasBeenSet = true; m_recommenderConfig = std::forward<RecommenderConfigT>(value); }
    template<typename RecommenderConfigT = RecommenderConfig>
    UpdateRecommenderRequest& WithRecommenderConfig(RecommenderConfigT&& value) { SetRecommenderConfig(std::forward<RecommenderConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recommenderArn;
    bool m_recommenderArnHasBeenSet = false;

    RecommenderConfig m_recommenderConfig;
    bool m_recommenderConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws

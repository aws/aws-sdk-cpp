/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class DeleteRecommenderRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API DeleteRecommenderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRecommender"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the recommender to delete.</p>
     */
    inline const Aws::String& GetRecommenderArn() const { return m_recommenderArn; }
    inline bool RecommenderArnHasBeenSet() const { return m_recommenderArnHasBeenSet; }
    template<typename RecommenderArnT = Aws::String>
    void SetRecommenderArn(RecommenderArnT&& value) { m_recommenderArnHasBeenSet = true; m_recommenderArn = std::forward<RecommenderArnT>(value); }
    template<typename RecommenderArnT = Aws::String>
    DeleteRecommenderRequest& WithRecommenderArn(RecommenderArnT&& value) { SetRecommenderArn(std::forward<RecommenderArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recommenderArn;
    bool m_recommenderArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws

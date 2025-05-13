/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class DeleteRecommendationTemplateRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API DeleteRecommendationTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRecommendationTemplate"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    DeleteRecommendationTemplateRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for a recommendation template.</p>
     */
    inline const Aws::String& GetRecommendationTemplateArn() const { return m_recommendationTemplateArn; }
    inline bool RecommendationTemplateArnHasBeenSet() const { return m_recommendationTemplateArnHasBeenSet; }
    template<typename RecommendationTemplateArnT = Aws::String>
    void SetRecommendationTemplateArn(RecommendationTemplateArnT&& value) { m_recommendationTemplateArnHasBeenSet = true; m_recommendationTemplateArn = std::forward<RecommendationTemplateArnT>(value); }
    template<typename RecommendationTemplateArnT = Aws::String>
    DeleteRecommendationTemplateRequest& WithRecommendationTemplateArn(RecommendationTemplateArnT&& value) { SetRecommendationTemplateArn(std::forward<RecommendationTemplateArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_recommendationTemplateArn;
    bool m_recommendationTemplateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws

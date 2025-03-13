/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/RecommendedActionUpdate.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class ModifyDBRecommendationRequest : public RDSRequest
  {
  public:
    AWS_RDS_API ModifyDBRecommendationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBRecommendation"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the recommendation to update.</p>
     */
    inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    template<typename RecommendationIdT = Aws::String>
    void SetRecommendationId(RecommendationIdT&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::forward<RecommendationIdT>(value); }
    template<typename RecommendationIdT = Aws::String>
    ModifyDBRecommendationRequest& WithRecommendationId(RecommendationIdT&& value) { SetRecommendationId(std::forward<RecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The language of the modified recommendation.</p>
     */
    inline const Aws::String& GetLocale() const { return m_locale; }
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
    template<typename LocaleT = Aws::String>
    void SetLocale(LocaleT&& value) { m_localeHasBeenSet = true; m_locale = std::forward<LocaleT>(value); }
    template<typename LocaleT = Aws::String>
    ModifyDBRecommendationRequest& WithLocale(LocaleT&& value) { SetLocale(std::forward<LocaleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommendation status to update.</p> <p>Valid values:</p> <ul> <li>
     * <p>active</p> </li> <li> <p>dismissed</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ModifyDBRecommendationRequest& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of recommended action status to update. You can update multiple
     * recommended actions at one time.</p>
     */
    inline const Aws::Vector<RecommendedActionUpdate>& GetRecommendedActionUpdates() const { return m_recommendedActionUpdates; }
    inline bool RecommendedActionUpdatesHasBeenSet() const { return m_recommendedActionUpdatesHasBeenSet; }
    template<typename RecommendedActionUpdatesT = Aws::Vector<RecommendedActionUpdate>>
    void SetRecommendedActionUpdates(RecommendedActionUpdatesT&& value) { m_recommendedActionUpdatesHasBeenSet = true; m_recommendedActionUpdates = std::forward<RecommendedActionUpdatesT>(value); }
    template<typename RecommendedActionUpdatesT = Aws::Vector<RecommendedActionUpdate>>
    ModifyDBRecommendationRequest& WithRecommendedActionUpdates(RecommendedActionUpdatesT&& value) { SetRecommendedActionUpdates(std::forward<RecommendedActionUpdatesT>(value)); return *this;}
    template<typename RecommendedActionUpdatesT = RecommendedActionUpdate>
    ModifyDBRecommendationRequest& AddRecommendedActionUpdates(RecommendedActionUpdatesT&& value) { m_recommendedActionUpdatesHasBeenSet = true; m_recommendedActionUpdates.emplace_back(std::forward<RecommendedActionUpdatesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    Aws::String m_locale;
    bool m_localeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<RecommendedActionUpdate> m_recommendedActionUpdates;
    bool m_recommendedActionUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws

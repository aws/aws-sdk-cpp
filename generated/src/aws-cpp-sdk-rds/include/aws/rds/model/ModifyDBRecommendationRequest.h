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
    AWS_RDS_API ModifyDBRecommendationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBRecommendation"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the recommendation to update.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }

    /**
     * <p>The identifier of the recommendation to update.</p>
     */
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }

    /**
     * <p>The identifier of the recommendation to update.</p>
     */
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }

    /**
     * <p>The identifier of the recommendation to update.</p>
     */
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }

    /**
     * <p>The identifier of the recommendation to update.</p>
     */
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }

    /**
     * <p>The identifier of the recommendation to update.</p>
     */
    inline ModifyDBRecommendationRequest& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}

    /**
     * <p>The identifier of the recommendation to update.</p>
     */
    inline ModifyDBRecommendationRequest& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the recommendation to update.</p>
     */
    inline ModifyDBRecommendationRequest& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}


    /**
     * <p>The language of the modified recommendation.</p>
     */
    inline const Aws::String& GetLocale() const{ return m_locale; }

    /**
     * <p>The language of the modified recommendation.</p>
     */
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }

    /**
     * <p>The language of the modified recommendation.</p>
     */
    inline void SetLocale(const Aws::String& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p>The language of the modified recommendation.</p>
     */
    inline void SetLocale(Aws::String&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

    /**
     * <p>The language of the modified recommendation.</p>
     */
    inline void SetLocale(const char* value) { m_localeHasBeenSet = true; m_locale.assign(value); }

    /**
     * <p>The language of the modified recommendation.</p>
     */
    inline ModifyDBRecommendationRequest& WithLocale(const Aws::String& value) { SetLocale(value); return *this;}

    /**
     * <p>The language of the modified recommendation.</p>
     */
    inline ModifyDBRecommendationRequest& WithLocale(Aws::String&& value) { SetLocale(std::move(value)); return *this;}

    /**
     * <p>The language of the modified recommendation.</p>
     */
    inline ModifyDBRecommendationRequest& WithLocale(const char* value) { SetLocale(value); return *this;}


    /**
     * <p>The recommendation status to update.</p> <p>Valid values:</p> <ul> <li>
     * <p>active</p> </li> <li> <p>dismissed</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The recommendation status to update.</p> <p>Valid values:</p> <ul> <li>
     * <p>active</p> </li> <li> <p>dismissed</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The recommendation status to update.</p> <p>Valid values:</p> <ul> <li>
     * <p>active</p> </li> <li> <p>dismissed</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The recommendation status to update.</p> <p>Valid values:</p> <ul> <li>
     * <p>active</p> </li> <li> <p>dismissed</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The recommendation status to update.</p> <p>Valid values:</p> <ul> <li>
     * <p>active</p> </li> <li> <p>dismissed</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The recommendation status to update.</p> <p>Valid values:</p> <ul> <li>
     * <p>active</p> </li> <li> <p>dismissed</p> </li> </ul>
     */
    inline ModifyDBRecommendationRequest& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The recommendation status to update.</p> <p>Valid values:</p> <ul> <li>
     * <p>active</p> </li> <li> <p>dismissed</p> </li> </ul>
     */
    inline ModifyDBRecommendationRequest& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The recommendation status to update.</p> <p>Valid values:</p> <ul> <li>
     * <p>active</p> </li> <li> <p>dismissed</p> </li> </ul>
     */
    inline ModifyDBRecommendationRequest& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The list of recommended action status to update. You can update multiple
     * recommended actions at one time.</p>
     */
    inline const Aws::Vector<RecommendedActionUpdate>& GetRecommendedActionUpdates() const{ return m_recommendedActionUpdates; }

    /**
     * <p>The list of recommended action status to update. You can update multiple
     * recommended actions at one time.</p>
     */
    inline bool RecommendedActionUpdatesHasBeenSet() const { return m_recommendedActionUpdatesHasBeenSet; }

    /**
     * <p>The list of recommended action status to update. You can update multiple
     * recommended actions at one time.</p>
     */
    inline void SetRecommendedActionUpdates(const Aws::Vector<RecommendedActionUpdate>& value) { m_recommendedActionUpdatesHasBeenSet = true; m_recommendedActionUpdates = value; }

    /**
     * <p>The list of recommended action status to update. You can update multiple
     * recommended actions at one time.</p>
     */
    inline void SetRecommendedActionUpdates(Aws::Vector<RecommendedActionUpdate>&& value) { m_recommendedActionUpdatesHasBeenSet = true; m_recommendedActionUpdates = std::move(value); }

    /**
     * <p>The list of recommended action status to update. You can update multiple
     * recommended actions at one time.</p>
     */
    inline ModifyDBRecommendationRequest& WithRecommendedActionUpdates(const Aws::Vector<RecommendedActionUpdate>& value) { SetRecommendedActionUpdates(value); return *this;}

    /**
     * <p>The list of recommended action status to update. You can update multiple
     * recommended actions at one time.</p>
     */
    inline ModifyDBRecommendationRequest& WithRecommendedActionUpdates(Aws::Vector<RecommendedActionUpdate>&& value) { SetRecommendedActionUpdates(std::move(value)); return *this;}

    /**
     * <p>The list of recommended action status to update. You can update multiple
     * recommended actions at one time.</p>
     */
    inline ModifyDBRecommendationRequest& AddRecommendedActionUpdates(const RecommendedActionUpdate& value) { m_recommendedActionUpdatesHasBeenSet = true; m_recommendedActionUpdates.push_back(value); return *this; }

    /**
     * <p>The list of recommended action status to update. You can update multiple
     * recommended actions at one time.</p>
     */
    inline ModifyDBRecommendationRequest& AddRecommendedActionUpdates(RecommendedActionUpdate&& value) { m_recommendedActionUpdatesHasBeenSet = true; m_recommendedActionUpdates.push_back(std::move(value)); return *this; }

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

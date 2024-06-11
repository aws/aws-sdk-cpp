/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/RecommendationType.h>
#include <aws/sesv2/model/RecommendationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sesv2/model/RecommendationImpact.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>A recommendation generated for your account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/Recommendation">AWS
   * API Reference</a></p>
   */
  class Recommendation
  {
  public:
    AWS_SESV2_API Recommendation();
    AWS_SESV2_API Recommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Recommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource affected by the recommendation, with values like
     * <code>arn:aws:ses:us-east-1:123456789012:identity/example.com</code>.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline Recommendation& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline Recommendation& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline Recommendation& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommendation type, with values like <code>DKIM</code>,
     * <code>SPF</code>, <code>DMARC</code> or <code>BIMI</code>.</p>
     */
    inline const RecommendationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RecommendationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RecommendationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Recommendation& WithType(const RecommendationType& value) { SetType(value); return *this;}
    inline Recommendation& WithType(RecommendationType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommendation description / disambiguator - e.g. <code>DKIM1</code> and
     * <code>DKIM2</code> are different recommendations about your DKIM setup.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Recommendation& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Recommendation& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Recommendation& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommendation status, with values like <code>OPEN</code> or
     * <code>FIXED</code>.</p>
     */
    inline const RecommendationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const RecommendationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(RecommendationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Recommendation& WithStatus(const RecommendationStatus& value) { SetStatus(value); return *this;}
    inline Recommendation& WithStatus(RecommendationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first time this issue was encountered and the recommendation was
     * generated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline Recommendation& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline Recommendation& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the recommendation was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }
    inline Recommendation& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline Recommendation& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommendation impact, with values like <code>HIGH</code> or
     * <code>LOW</code>.</p>
     */
    inline const RecommendationImpact& GetImpact() const{ return m_impact; }
    inline bool ImpactHasBeenSet() const { return m_impactHasBeenSet; }
    inline void SetImpact(const RecommendationImpact& value) { m_impactHasBeenSet = true; m_impact = value; }
    inline void SetImpact(RecommendationImpact&& value) { m_impactHasBeenSet = true; m_impact = std::move(value); }
    inline Recommendation& WithImpact(const RecommendationImpact& value) { SetImpact(value); return *this;}
    inline Recommendation& WithImpact(RecommendationImpact&& value) { SetImpact(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    RecommendationType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    RecommendationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;

    RecommendationImpact m_impact;
    bool m_impactHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws

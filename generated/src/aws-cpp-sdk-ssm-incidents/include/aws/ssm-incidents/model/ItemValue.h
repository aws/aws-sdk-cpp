﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/PagerDutyIncidentDetail.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>Describes a related item.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ItemValue">AWS
   * API Reference</a></p>
   */
  class ItemValue
  {
  public:
    AWS_SSMINCIDENTS_API ItemValue();
    AWS_SSMINCIDENTS_API ItemValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API ItemValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the related item, if the related item is an
     * Amazon resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ItemValue& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ItemValue& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ItemValue& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric definition, if the related item is a metric in Amazon
     * CloudWatch.</p>
     */
    inline const Aws::String& GetMetricDefinition() const{ return m_metricDefinition; }
    inline bool MetricDefinitionHasBeenSet() const { return m_metricDefinitionHasBeenSet; }
    inline void SetMetricDefinition(const Aws::String& value) { m_metricDefinitionHasBeenSet = true; m_metricDefinition = value; }
    inline void SetMetricDefinition(Aws::String&& value) { m_metricDefinitionHasBeenSet = true; m_metricDefinition = std::move(value); }
    inline void SetMetricDefinition(const char* value) { m_metricDefinitionHasBeenSet = true; m_metricDefinition.assign(value); }
    inline ItemValue& WithMetricDefinition(const Aws::String& value) { SetMetricDefinition(value); return *this;}
    inline ItemValue& WithMetricDefinition(Aws::String&& value) { SetMetricDefinition(std::move(value)); return *this;}
    inline ItemValue& WithMetricDefinition(const char* value) { SetMetricDefinition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an incident that is associated with a PagerDuty incident.</p>
     */
    inline const PagerDutyIncidentDetail& GetPagerDutyIncidentDetail() const{ return m_pagerDutyIncidentDetail; }
    inline bool PagerDutyIncidentDetailHasBeenSet() const { return m_pagerDutyIncidentDetailHasBeenSet; }
    inline void SetPagerDutyIncidentDetail(const PagerDutyIncidentDetail& value) { m_pagerDutyIncidentDetailHasBeenSet = true; m_pagerDutyIncidentDetail = value; }
    inline void SetPagerDutyIncidentDetail(PagerDutyIncidentDetail&& value) { m_pagerDutyIncidentDetailHasBeenSet = true; m_pagerDutyIncidentDetail = std::move(value); }
    inline ItemValue& WithPagerDutyIncidentDetail(const PagerDutyIncidentDetail& value) { SetPagerDutyIncidentDetail(value); return *this;}
    inline ItemValue& WithPagerDutyIncidentDetail(PagerDutyIncidentDetail&& value) { SetPagerDutyIncidentDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL, if the related item is a non-Amazon Web Services resource.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline ItemValue& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline ItemValue& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline ItemValue& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_metricDefinition;
    bool m_metricDefinitionHasBeenSet = false;

    PagerDutyIncidentDetail m_pagerDutyIncidentDetail;
    bool m_pagerDutyIncidentDetailHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws

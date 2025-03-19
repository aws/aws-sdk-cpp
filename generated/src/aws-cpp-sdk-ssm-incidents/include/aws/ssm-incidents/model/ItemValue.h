/**
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
    AWS_SSMINCIDENTS_API ItemValue() = default;
    AWS_SSMINCIDENTS_API ItemValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API ItemValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the related item, if the related item is an
     * Amazon resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ItemValue& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric definition, if the related item is a metric in Amazon
     * CloudWatch.</p>
     */
    inline const Aws::String& GetMetricDefinition() const { return m_metricDefinition; }
    inline bool MetricDefinitionHasBeenSet() const { return m_metricDefinitionHasBeenSet; }
    template<typename MetricDefinitionT = Aws::String>
    void SetMetricDefinition(MetricDefinitionT&& value) { m_metricDefinitionHasBeenSet = true; m_metricDefinition = std::forward<MetricDefinitionT>(value); }
    template<typename MetricDefinitionT = Aws::String>
    ItemValue& WithMetricDefinition(MetricDefinitionT&& value) { SetMetricDefinition(std::forward<MetricDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about an incident that is associated with a PagerDuty incident.</p>
     */
    inline const PagerDutyIncidentDetail& GetPagerDutyIncidentDetail() const { return m_pagerDutyIncidentDetail; }
    inline bool PagerDutyIncidentDetailHasBeenSet() const { return m_pagerDutyIncidentDetailHasBeenSet; }
    template<typename PagerDutyIncidentDetailT = PagerDutyIncidentDetail>
    void SetPagerDutyIncidentDetail(PagerDutyIncidentDetailT&& value) { m_pagerDutyIncidentDetailHasBeenSet = true; m_pagerDutyIncidentDetail = std::forward<PagerDutyIncidentDetailT>(value); }
    template<typename PagerDutyIncidentDetailT = PagerDutyIncidentDetail>
    ItemValue& WithPagerDutyIncidentDetail(PagerDutyIncidentDetailT&& value) { SetPagerDutyIncidentDetail(std::forward<PagerDutyIncidentDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL, if the related item is a non-Amazon Web Services resource.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    ItemValue& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
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

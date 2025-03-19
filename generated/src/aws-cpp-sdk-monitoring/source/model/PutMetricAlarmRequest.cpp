/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/PutMetricAlarmRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

Aws::String PutMetricAlarmRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PutMetricAlarm&";
  if(m_alarmNameHasBeenSet)
  {
    ss << "AlarmName=" << StringUtils::URLEncode(m_alarmName.c_str()) << "&";
  }

  if(m_alarmDescriptionHasBeenSet)
  {
    ss << "AlarmDescription=" << StringUtils::URLEncode(m_alarmDescription.c_str()) << "&";
  }

  if(m_actionsEnabledHasBeenSet)
  {
    ss << "ActionsEnabled=" << std::boolalpha << m_actionsEnabled << "&";
  }

  if(m_oKActionsHasBeenSet)
  {
    if (m_oKActions.empty())
    {
      ss << "OKActions=&";
    }
    else
    {
      unsigned oKActionsCount = 1;
      for(auto& item : m_oKActions)
      {
        ss << "OKActions.member." << oKActionsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        oKActionsCount++;
      }
    }
  }

  if(m_alarmActionsHasBeenSet)
  {
    if (m_alarmActions.empty())
    {
      ss << "AlarmActions=&";
    }
    else
    {
      unsigned alarmActionsCount = 1;
      for(auto& item : m_alarmActions)
      {
        ss << "AlarmActions.member." << alarmActionsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        alarmActionsCount++;
      }
    }
  }

  if(m_insufficientDataActionsHasBeenSet)
  {
    if (m_insufficientDataActions.empty())
    {
      ss << "InsufficientDataActions=&";
    }
    else
    {
      unsigned insufficientDataActionsCount = 1;
      for(auto& item : m_insufficientDataActions)
      {
        ss << "InsufficientDataActions.member." << insufficientDataActionsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        insufficientDataActionsCount++;
      }
    }
  }

  if(m_metricNameHasBeenSet)
  {
    ss << "MetricName=" << StringUtils::URLEncode(m_metricName.c_str()) << "&";
  }

  if(m_namespaceHasBeenSet)
  {
    ss << "Namespace=" << StringUtils::URLEncode(m_namespace.c_str()) << "&";
  }

  if(m_statisticHasBeenSet)
  {
    ss << "Statistic=" << StringUtils::URLEncode(StatisticMapper::GetNameForStatistic(m_statistic)) << "&";
  }

  if(m_extendedStatisticHasBeenSet)
  {
    ss << "ExtendedStatistic=" << StringUtils::URLEncode(m_extendedStatistic.c_str()) << "&";
  }

  if(m_dimensionsHasBeenSet)
  {
    if (m_dimensions.empty())
    {
      ss << "Dimensions=&";
    }
    else
    {
      unsigned dimensionsCount = 1;
      for(auto& item : m_dimensions)
      {
        item.OutputToStream(ss, "Dimensions.member.", dimensionsCount, "");
        dimensionsCount++;
      }
    }
  }

  if(m_periodHasBeenSet)
  {
    ss << "Period=" << m_period << "&";
  }

  if(m_unitHasBeenSet)
  {
    ss << "Unit=" << StringUtils::URLEncode(StandardUnitMapper::GetNameForStandardUnit(m_unit)) << "&";
  }

  if(m_evaluationPeriodsHasBeenSet)
  {
    ss << "EvaluationPeriods=" << m_evaluationPeriods << "&";
  }

  if(m_datapointsToAlarmHasBeenSet)
  {
    ss << "DatapointsToAlarm=" << m_datapointsToAlarm << "&";
  }

  if(m_thresholdHasBeenSet)
  {
    ss << "Threshold=" << StringUtils::URLEncode(m_threshold) << "&";
  }

  if(m_comparisonOperatorHasBeenSet)
  {
    ss << "ComparisonOperator=" << StringUtils::URLEncode(ComparisonOperatorMapper::GetNameForComparisonOperator(m_comparisonOperator)) << "&";
  }

  if(m_treatMissingDataHasBeenSet)
  {
    ss << "TreatMissingData=" << StringUtils::URLEncode(m_treatMissingData.c_str()) << "&";
  }

  if(m_evaluateLowSampleCountPercentileHasBeenSet)
  {
    ss << "EvaluateLowSampleCountPercentile=" << StringUtils::URLEncode(m_evaluateLowSampleCountPercentile.c_str()) << "&";
  }

  if(m_metricsHasBeenSet)
  {
    if (m_metrics.empty())
    {
      ss << "Metrics=&";
    }
    else
    {
      unsigned metricsCount = 1;
      for(auto& item : m_metrics)
      {
        item.OutputToStream(ss, "Metrics.member.", metricsCount, "");
        metricsCount++;
      }
    }
  }

  if(m_tagsHasBeenSet)
  {
    if (m_tags.empty())
    {
      ss << "Tags=&";
    }
    else
    {
      unsigned tagsCount = 1;
      for(auto& item : m_tags)
      {
        item.OutputToStream(ss, "Tags.member.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  if(m_thresholdMetricIdHasBeenSet)
  {
    ss << "ThresholdMetricId=" << StringUtils::URLEncode(m_thresholdMetricId.c_str()) << "&";
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  PutMetricAlarmRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}

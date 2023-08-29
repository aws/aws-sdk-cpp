/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/MetricsDataSource.h>
#include <aws/sesv2/model/MessageInsightsDataSource.h>
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
   * <p>An object that contains details about the data source of the export job. It
   * can only contain one of <code>MetricsDataSource</code> or
   * <code>MessageInsightsDataSource</code> object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ExportDataSource">AWS
   * API Reference</a></p>
   */
  class ExportDataSource
  {
  public:
    AWS_SESV2_API ExportDataSource();
    AWS_SESV2_API ExportDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API ExportDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const MetricsDataSource& GetMetricsDataSource() const{ return m_metricsDataSource; }

    
    inline bool MetricsDataSourceHasBeenSet() const { return m_metricsDataSourceHasBeenSet; }

    
    inline void SetMetricsDataSource(const MetricsDataSource& value) { m_metricsDataSourceHasBeenSet = true; m_metricsDataSource = value; }

    
    inline void SetMetricsDataSource(MetricsDataSource&& value) { m_metricsDataSourceHasBeenSet = true; m_metricsDataSource = std::move(value); }

    
    inline ExportDataSource& WithMetricsDataSource(const MetricsDataSource& value) { SetMetricsDataSource(value); return *this;}

    
    inline ExportDataSource& WithMetricsDataSource(MetricsDataSource&& value) { SetMetricsDataSource(std::move(value)); return *this;}


    
    inline const MessageInsightsDataSource& GetMessageInsightsDataSource() const{ return m_messageInsightsDataSource; }

    
    inline bool MessageInsightsDataSourceHasBeenSet() const { return m_messageInsightsDataSourceHasBeenSet; }

    
    inline void SetMessageInsightsDataSource(const MessageInsightsDataSource& value) { m_messageInsightsDataSourceHasBeenSet = true; m_messageInsightsDataSource = value; }

    
    inline void SetMessageInsightsDataSource(MessageInsightsDataSource&& value) { m_messageInsightsDataSourceHasBeenSet = true; m_messageInsightsDataSource = std::move(value); }

    
    inline ExportDataSource& WithMessageInsightsDataSource(const MessageInsightsDataSource& value) { SetMessageInsightsDataSource(value); return *this;}

    
    inline ExportDataSource& WithMessageInsightsDataSource(MessageInsightsDataSource&& value) { SetMessageInsightsDataSource(std::move(value)); return *this;}

  private:

    MetricsDataSource m_metricsDataSource;
    bool m_metricsDataSourceHasBeenSet = false;

    MessageInsightsDataSource m_messageInsightsDataSource;
    bool m_messageInsightsDataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws

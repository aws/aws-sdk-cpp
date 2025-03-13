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
    AWS_SESV2_API ExportDataSource() = default;
    AWS_SESV2_API ExportDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API ExportDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const MetricsDataSource& GetMetricsDataSource() const { return m_metricsDataSource; }
    inline bool MetricsDataSourceHasBeenSet() const { return m_metricsDataSourceHasBeenSet; }
    template<typename MetricsDataSourceT = MetricsDataSource>
    void SetMetricsDataSource(MetricsDataSourceT&& value) { m_metricsDataSourceHasBeenSet = true; m_metricsDataSource = std::forward<MetricsDataSourceT>(value); }
    template<typename MetricsDataSourceT = MetricsDataSource>
    ExportDataSource& WithMetricsDataSource(MetricsDataSourceT&& value) { SetMetricsDataSource(std::forward<MetricsDataSourceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MessageInsightsDataSource& GetMessageInsightsDataSource() const { return m_messageInsightsDataSource; }
    inline bool MessageInsightsDataSourceHasBeenSet() const { return m_messageInsightsDataSourceHasBeenSet; }
    template<typename MessageInsightsDataSourceT = MessageInsightsDataSource>
    void SetMessageInsightsDataSource(MessageInsightsDataSourceT&& value) { m_messageInsightsDataSourceHasBeenSet = true; m_messageInsightsDataSource = std::forward<MessageInsightsDataSourceT>(value); }
    template<typename MessageInsightsDataSourceT = MessageInsightsDataSource>
    ExportDataSource& WithMessageInsightsDataSource(MessageInsightsDataSourceT&& value) { SetMessageInsightsDataSource(std::forward<MessageInsightsDataSourceT>(value)); return *this;}
    ///@}
  private:

    MetricsDataSource m_metricsDataSource;
    bool m_metricsDataSourceHasBeenSet = false;

    MessageInsightsDataSource m_messageInsightsDataSource;
    bool m_messageInsightsDataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws

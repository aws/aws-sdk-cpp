/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/model/ReportS3Configuration.h>
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
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p>Report configuration for a batch load task. This contains details about where
   * error reports are stored.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/ReportConfiguration">AWS
   * API Reference</a></p>
   */
  class ReportConfiguration
  {
  public:
    AWS_TIMESTREAMWRITE_API ReportConfiguration();
    AWS_TIMESTREAMWRITE_API ReportConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API ReportConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration of an S3 location to write error reports and events for a batch
     * load.</p>
     */
    inline const ReportS3Configuration& GetReportS3Configuration() const{ return m_reportS3Configuration; }

    /**
     * <p>Configuration of an S3 location to write error reports and events for a batch
     * load.</p>
     */
    inline bool ReportS3ConfigurationHasBeenSet() const { return m_reportS3ConfigurationHasBeenSet; }

    /**
     * <p>Configuration of an S3 location to write error reports and events for a batch
     * load.</p>
     */
    inline void SetReportS3Configuration(const ReportS3Configuration& value) { m_reportS3ConfigurationHasBeenSet = true; m_reportS3Configuration = value; }

    /**
     * <p>Configuration of an S3 location to write error reports and events for a batch
     * load.</p>
     */
    inline void SetReportS3Configuration(ReportS3Configuration&& value) { m_reportS3ConfigurationHasBeenSet = true; m_reportS3Configuration = std::move(value); }

    /**
     * <p>Configuration of an S3 location to write error reports and events for a batch
     * load.</p>
     */
    inline ReportConfiguration& WithReportS3Configuration(const ReportS3Configuration& value) { SetReportS3Configuration(value); return *this;}

    /**
     * <p>Configuration of an S3 location to write error reports and events for a batch
     * load.</p>
     */
    inline ReportConfiguration& WithReportS3Configuration(ReportS3Configuration&& value) { SetReportS3Configuration(std::move(value)); return *this;}

  private:

    ReportS3Configuration m_reportS3Configuration;
    bool m_reportS3ConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws

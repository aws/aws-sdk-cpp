/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/timestream-query/model/S3Configuration.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>Configuration required for error reporting.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ErrorReportConfiguration">AWS
   * API Reference</a></p>
   */
  class ErrorReportConfiguration
  {
  public:
    AWS_TIMESTREAMQUERY_API ErrorReportConfiguration();
    AWS_TIMESTREAMQUERY_API ErrorReportConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API ErrorReportConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 configuration for the error reports.</p>
     */
    inline const S3Configuration& GetS3Configuration() const{ return m_s3Configuration; }

    /**
     * <p>The S3 configuration for the error reports.</p>
     */
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }

    /**
     * <p>The S3 configuration for the error reports.</p>
     */
    inline void SetS3Configuration(const S3Configuration& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = value; }

    /**
     * <p>The S3 configuration for the error reports.</p>
     */
    inline void SetS3Configuration(S3Configuration&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::move(value); }

    /**
     * <p>The S3 configuration for the error reports.</p>
     */
    inline ErrorReportConfiguration& WithS3Configuration(const S3Configuration& value) { SetS3Configuration(value); return *this;}

    /**
     * <p>The S3 configuration for the error reports.</p>
     */
    inline ErrorReportConfiguration& WithS3Configuration(S3Configuration&& value) { SetS3Configuration(std::move(value)); return *this;}

  private:

    S3Configuration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/DataFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An object that contains details about the destination of the export
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ExportDestination">AWS
   * API Reference</a></p>
   */
  class ExportDestination
  {
  public:
    AWS_SESV2_API ExportDestination();
    AWS_SESV2_API ExportDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API ExportDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data format of the final export job file, can be one of the
     * following:</p> <ul> <li> <p> <code>CSV</code> - A comma-separated values
     * file.</p> </li> <li> <p> <code>JSON</code> - A Json file.</p> </li> </ul>
     */
    inline const DataFormat& GetDataFormat() const{ return m_dataFormat; }

    /**
     * <p>The data format of the final export job file, can be one of the
     * following:</p> <ul> <li> <p> <code>CSV</code> - A comma-separated values
     * file.</p> </li> <li> <p> <code>JSON</code> - A Json file.</p> </li> </ul>
     */
    inline bool DataFormatHasBeenSet() const { return m_dataFormatHasBeenSet; }

    /**
     * <p>The data format of the final export job file, can be one of the
     * following:</p> <ul> <li> <p> <code>CSV</code> - A comma-separated values
     * file.</p> </li> <li> <p> <code>JSON</code> - A Json file.</p> </li> </ul>
     */
    inline void SetDataFormat(const DataFormat& value) { m_dataFormatHasBeenSet = true; m_dataFormat = value; }

    /**
     * <p>The data format of the final export job file, can be one of the
     * following:</p> <ul> <li> <p> <code>CSV</code> - A comma-separated values
     * file.</p> </li> <li> <p> <code>JSON</code> - A Json file.</p> </li> </ul>
     */
    inline void SetDataFormat(DataFormat&& value) { m_dataFormatHasBeenSet = true; m_dataFormat = std::move(value); }

    /**
     * <p>The data format of the final export job file, can be one of the
     * following:</p> <ul> <li> <p> <code>CSV</code> - A comma-separated values
     * file.</p> </li> <li> <p> <code>JSON</code> - A Json file.</p> </li> </ul>
     */
    inline ExportDestination& WithDataFormat(const DataFormat& value) { SetDataFormat(value); return *this;}

    /**
     * <p>The data format of the final export job file, can be one of the
     * following:</p> <ul> <li> <p> <code>CSV</code> - A comma-separated values
     * file.</p> </li> <li> <p> <code>JSON</code> - A Json file.</p> </li> </ul>
     */
    inline ExportDestination& WithDataFormat(DataFormat&& value) { SetDataFormat(std::move(value)); return *this;}


    /**
     * <p>An Amazon S3 pre-signed URL that points to the generated export file.</p>
     */
    inline const Aws::String& GetS3Url() const{ return m_s3Url; }

    /**
     * <p>An Amazon S3 pre-signed URL that points to the generated export file.</p>
     */
    inline bool S3UrlHasBeenSet() const { return m_s3UrlHasBeenSet; }

    /**
     * <p>An Amazon S3 pre-signed URL that points to the generated export file.</p>
     */
    inline void SetS3Url(const Aws::String& value) { m_s3UrlHasBeenSet = true; m_s3Url = value; }

    /**
     * <p>An Amazon S3 pre-signed URL that points to the generated export file.</p>
     */
    inline void SetS3Url(Aws::String&& value) { m_s3UrlHasBeenSet = true; m_s3Url = std::move(value); }

    /**
     * <p>An Amazon S3 pre-signed URL that points to the generated export file.</p>
     */
    inline void SetS3Url(const char* value) { m_s3UrlHasBeenSet = true; m_s3Url.assign(value); }

    /**
     * <p>An Amazon S3 pre-signed URL that points to the generated export file.</p>
     */
    inline ExportDestination& WithS3Url(const Aws::String& value) { SetS3Url(value); return *this;}

    /**
     * <p>An Amazon S3 pre-signed URL that points to the generated export file.</p>
     */
    inline ExportDestination& WithS3Url(Aws::String&& value) { SetS3Url(std::move(value)); return *this;}

    /**
     * <p>An Amazon S3 pre-signed URL that points to the generated export file.</p>
     */
    inline ExportDestination& WithS3Url(const char* value) { SetS3Url(value); return *this;}

  private:

    DataFormat m_dataFormat;
    bool m_dataFormatHasBeenSet = false;

    Aws::String m_s3Url;
    bool m_s3UrlHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws

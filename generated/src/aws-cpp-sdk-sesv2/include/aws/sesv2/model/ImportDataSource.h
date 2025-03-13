/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/DataFormat.h>
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
   * <p>An object that contains details about the data source of the import
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ImportDataSource">AWS
   * API Reference</a></p>
   */
  class ImportDataSource
  {
  public:
    AWS_SESV2_API ImportDataSource() = default;
    AWS_SESV2_API ImportDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API ImportDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon S3 URL in the format
     * s3://<i>&lt;bucket_name&gt;</i>/<i>&lt;object&gt;</i>.</p>
     */
    inline const Aws::String& GetS3Url() const { return m_s3Url; }
    inline bool S3UrlHasBeenSet() const { return m_s3UrlHasBeenSet; }
    template<typename S3UrlT = Aws::String>
    void SetS3Url(S3UrlT&& value) { m_s3UrlHasBeenSet = true; m_s3Url = std::forward<S3UrlT>(value); }
    template<typename S3UrlT = Aws::String>
    ImportDataSource& WithS3Url(S3UrlT&& value) { SetS3Url(std::forward<S3UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data format of the import job's data source.</p>
     */
    inline DataFormat GetDataFormat() const { return m_dataFormat; }
    inline bool DataFormatHasBeenSet() const { return m_dataFormatHasBeenSet; }
    inline void SetDataFormat(DataFormat value) { m_dataFormatHasBeenSet = true; m_dataFormat = value; }
    inline ImportDataSource& WithDataFormat(DataFormat value) { SetDataFormat(value); return *this;}
    ///@}
  private:

    Aws::String m_s3Url;
    bool m_s3UrlHasBeenSet = false;

    DataFormat m_dataFormat{DataFormat::NOT_SET};
    bool m_dataFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws

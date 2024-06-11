﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Describes the data source that contains the data to upload to a dataset, or
   * the list of records to delete from Amazon Personalize.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DataSource">AWS
   * API Reference</a></p>
   */
  class DataSource
  {
  public:
    AWS_PERSONALIZE_API DataSource();
    AWS_PERSONALIZE_API DataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For dataset import jobs, the path to the Amazon S3 bucket where the data that
     * you want to upload to your dataset is stored. For data deletion jobs, the path
     * to the Amazon S3 bucket that stores the list of records to delete. </p> <p> For
     * example: </p> <p> <code>s3://bucket-name/folder-name/fileName.csv</code> </p>
     * <p>If your CSV files are in a folder in your Amazon S3 bucket and you want your
     * import job or data deletion job to consider multiple files, you can specify the
     * path to the folder. With a data deletion job, Amazon Personalize uses all files
     * in the folder and any sub folder. Use the following syntax with a <code>/</code>
     * after the folder name:</p> <p> <code>s3://bucket-name/folder-name/</code> </p>
     */
    inline const Aws::String& GetDataLocation() const{ return m_dataLocation; }
    inline bool DataLocationHasBeenSet() const { return m_dataLocationHasBeenSet; }
    inline void SetDataLocation(const Aws::String& value) { m_dataLocationHasBeenSet = true; m_dataLocation = value; }
    inline void SetDataLocation(Aws::String&& value) { m_dataLocationHasBeenSet = true; m_dataLocation = std::move(value); }
    inline void SetDataLocation(const char* value) { m_dataLocationHasBeenSet = true; m_dataLocation.assign(value); }
    inline DataSource& WithDataLocation(const Aws::String& value) { SetDataLocation(value); return *this;}
    inline DataSource& WithDataLocation(Aws::String&& value) { SetDataLocation(std::move(value)); return *this;}
    inline DataSource& WithDataLocation(const char* value) { SetDataLocation(value); return *this;}
    ///@}
  private:

    Aws::String m_dataLocation;
    bool m_dataLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws

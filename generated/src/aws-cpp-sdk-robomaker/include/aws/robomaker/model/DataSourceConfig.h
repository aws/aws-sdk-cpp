/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/DataSourceType.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about a data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DataSourceConfig">AWS
   * API Reference</a></p>
   */
  class DataSourceConfig
  {
  public:
    AWS_ROBOMAKER_API DataSourceConfig();
    AWS_ROBOMAKER_API DataSourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API DataSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data source.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data source.</p>
     */
    inline DataSourceConfig& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline DataSourceConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline DataSourceConfig& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The S3 bucket where the data files are located.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The S3 bucket where the data files are located.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p>The S3 bucket where the data files are located.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p>The S3 bucket where the data files are located.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p>The S3 bucket where the data files are located.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p>The S3 bucket where the data files are located.</p>
     */
    inline DataSourceConfig& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The S3 bucket where the data files are located.</p>
     */
    inline DataSourceConfig& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket where the data files are located.</p>
     */
    inline DataSourceConfig& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>The list of S3 keys identifying the data source files.</p>
     */
    inline const Aws::Vector<Aws::String>& GetS3Keys() const{ return m_s3Keys; }

    /**
     * <p>The list of S3 keys identifying the data source files.</p>
     */
    inline bool S3KeysHasBeenSet() const { return m_s3KeysHasBeenSet; }

    /**
     * <p>The list of S3 keys identifying the data source files.</p>
     */
    inline void SetS3Keys(const Aws::Vector<Aws::String>& value) { m_s3KeysHasBeenSet = true; m_s3Keys = value; }

    /**
     * <p>The list of S3 keys identifying the data source files.</p>
     */
    inline void SetS3Keys(Aws::Vector<Aws::String>&& value) { m_s3KeysHasBeenSet = true; m_s3Keys = std::move(value); }

    /**
     * <p>The list of S3 keys identifying the data source files.</p>
     */
    inline DataSourceConfig& WithS3Keys(const Aws::Vector<Aws::String>& value) { SetS3Keys(value); return *this;}

    /**
     * <p>The list of S3 keys identifying the data source files.</p>
     */
    inline DataSourceConfig& WithS3Keys(Aws::Vector<Aws::String>&& value) { SetS3Keys(std::move(value)); return *this;}

    /**
     * <p>The list of S3 keys identifying the data source files.</p>
     */
    inline DataSourceConfig& AddS3Keys(const Aws::String& value) { m_s3KeysHasBeenSet = true; m_s3Keys.push_back(value); return *this; }

    /**
     * <p>The list of S3 keys identifying the data source files.</p>
     */
    inline DataSourceConfig& AddS3Keys(Aws::String&& value) { m_s3KeysHasBeenSet = true; m_s3Keys.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of S3 keys identifying the data source files.</p>
     */
    inline DataSourceConfig& AddS3Keys(const char* value) { m_s3KeysHasBeenSet = true; m_s3Keys.push_back(value); return *this; }


    /**
     * <p>The data type for the data source that you're using for your container image
     * or simulation job. You can use this field to specify whether your data source is
     * an Archive, an Amazon S3 prefix, or a file.</p> <p>If you don't specify a field,
     * the default value is <code>File</code>.</p>
     */
    inline const DataSourceType& GetType() const{ return m_type; }

    /**
     * <p>The data type for the data source that you're using for your container image
     * or simulation job. You can use this field to specify whether your data source is
     * an Archive, an Amazon S3 prefix, or a file.</p> <p>If you don't specify a field,
     * the default value is <code>File</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The data type for the data source that you're using for your container image
     * or simulation job. You can use this field to specify whether your data source is
     * an Archive, an Amazon S3 prefix, or a file.</p> <p>If you don't specify a field,
     * the default value is <code>File</code>.</p>
     */
    inline void SetType(const DataSourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The data type for the data source that you're using for your container image
     * or simulation job. You can use this field to specify whether your data source is
     * an Archive, an Amazon S3 prefix, or a file.</p> <p>If you don't specify a field,
     * the default value is <code>File</code>.</p>
     */
    inline void SetType(DataSourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The data type for the data source that you're using for your container image
     * or simulation job. You can use this field to specify whether your data source is
     * an Archive, an Amazon S3 prefix, or a file.</p> <p>If you don't specify a field,
     * the default value is <code>File</code>.</p>
     */
    inline DataSourceConfig& WithType(const DataSourceType& value) { SetType(value); return *this;}

    /**
     * <p>The data type for the data source that you're using for your container image
     * or simulation job. You can use this field to specify whether your data source is
     * an Archive, an Amazon S3 prefix, or a file.</p> <p>If you don't specify a field,
     * the default value is <code>File</code>.</p>
     */
    inline DataSourceConfig& WithType(DataSourceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The location where your files are mounted in the container image.</p> <p>If
     * you've specified the <code>type</code> of the data source as an
     * <code>Archive</code>, you must provide an Amazon S3 object key to your archive.
     * The object key must point to either a <code>.zip</code> or <code>.tar.gz</code>
     * file.</p> <p>If you've specified the <code>type</code> of the data source as a
     * <code>Prefix</code>, you provide the Amazon S3 prefix that points to the files
     * that you are using for your data source.</p> <p>If you've specified the
     * <code>type</code> of the data source as a <code>File</code>, you provide the
     * Amazon S3 path to the file that you're using as your data source.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The location where your files are mounted in the container image.</p> <p>If
     * you've specified the <code>type</code> of the data source as an
     * <code>Archive</code>, you must provide an Amazon S3 object key to your archive.
     * The object key must point to either a <code>.zip</code> or <code>.tar.gz</code>
     * file.</p> <p>If you've specified the <code>type</code> of the data source as a
     * <code>Prefix</code>, you provide the Amazon S3 prefix that points to the files
     * that you are using for your data source.</p> <p>If you've specified the
     * <code>type</code> of the data source as a <code>File</code>, you provide the
     * Amazon S3 path to the file that you're using as your data source.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The location where your files are mounted in the container image.</p> <p>If
     * you've specified the <code>type</code> of the data source as an
     * <code>Archive</code>, you must provide an Amazon S3 object key to your archive.
     * The object key must point to either a <code>.zip</code> or <code>.tar.gz</code>
     * file.</p> <p>If you've specified the <code>type</code> of the data source as a
     * <code>Prefix</code>, you provide the Amazon S3 prefix that points to the files
     * that you are using for your data source.</p> <p>If you've specified the
     * <code>type</code> of the data source as a <code>File</code>, you provide the
     * Amazon S3 path to the file that you're using as your data source.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The location where your files are mounted in the container image.</p> <p>If
     * you've specified the <code>type</code> of the data source as an
     * <code>Archive</code>, you must provide an Amazon S3 object key to your archive.
     * The object key must point to either a <code>.zip</code> or <code>.tar.gz</code>
     * file.</p> <p>If you've specified the <code>type</code> of the data source as a
     * <code>Prefix</code>, you provide the Amazon S3 prefix that points to the files
     * that you are using for your data source.</p> <p>If you've specified the
     * <code>type</code> of the data source as a <code>File</code>, you provide the
     * Amazon S3 path to the file that you're using as your data source.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The location where your files are mounted in the container image.</p> <p>If
     * you've specified the <code>type</code> of the data source as an
     * <code>Archive</code>, you must provide an Amazon S3 object key to your archive.
     * The object key must point to either a <code>.zip</code> or <code>.tar.gz</code>
     * file.</p> <p>If you've specified the <code>type</code> of the data source as a
     * <code>Prefix</code>, you provide the Amazon S3 prefix that points to the files
     * that you are using for your data source.</p> <p>If you've specified the
     * <code>type</code> of the data source as a <code>File</code>, you provide the
     * Amazon S3 path to the file that you're using as your data source.</p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The location where your files are mounted in the container image.</p> <p>If
     * you've specified the <code>type</code> of the data source as an
     * <code>Archive</code>, you must provide an Amazon S3 object key to your archive.
     * The object key must point to either a <code>.zip</code> or <code>.tar.gz</code>
     * file.</p> <p>If you've specified the <code>type</code> of the data source as a
     * <code>Prefix</code>, you provide the Amazon S3 prefix that points to the files
     * that you are using for your data source.</p> <p>If you've specified the
     * <code>type</code> of the data source as a <code>File</code>, you provide the
     * Amazon S3 path to the file that you're using as your data source.</p>
     */
    inline DataSourceConfig& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The location where your files are mounted in the container image.</p> <p>If
     * you've specified the <code>type</code> of the data source as an
     * <code>Archive</code>, you must provide an Amazon S3 object key to your archive.
     * The object key must point to either a <code>.zip</code> or <code>.tar.gz</code>
     * file.</p> <p>If you've specified the <code>type</code> of the data source as a
     * <code>Prefix</code>, you provide the Amazon S3 prefix that points to the files
     * that you are using for your data source.</p> <p>If you've specified the
     * <code>type</code> of the data source as a <code>File</code>, you provide the
     * Amazon S3 path to the file that you're using as your data source.</p>
     */
    inline DataSourceConfig& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The location where your files are mounted in the container image.</p> <p>If
     * you've specified the <code>type</code> of the data source as an
     * <code>Archive</code>, you must provide an Amazon S3 object key to your archive.
     * The object key must point to either a <code>.zip</code> or <code>.tar.gz</code>
     * file.</p> <p>If you've specified the <code>type</code> of the data source as a
     * <code>Prefix</code>, you provide the Amazon S3 prefix that points to the files
     * that you are using for your data source.</p> <p>If you've specified the
     * <code>type</code> of the data source as a <code>File</code>, you provide the
     * Amazon S3 path to the file that you're using as your data source.</p>
     */
    inline DataSourceConfig& WithDestination(const char* value) { SetDestination(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::Vector<Aws::String> m_s3Keys;
    bool m_s3KeysHasBeenSet = false;

    DataSourceType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws

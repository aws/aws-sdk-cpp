/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/DataSourceType.h>
#include <aws/robomaker/model/S3KeyOutput.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DataSource">AWS
   * API Reference</a></p>
   */
  class DataSource
  {
  public:
    AWS_ROBOMAKER_API DataSource() = default;
    AWS_ROBOMAKER_API DataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data source.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataSource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket where the data files are located.</p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    DataSource& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of S3 keys identifying the data source files.</p>
     */
    inline const Aws::Vector<S3KeyOutput>& GetS3Keys() const { return m_s3Keys; }
    inline bool S3KeysHasBeenSet() const { return m_s3KeysHasBeenSet; }
    template<typename S3KeysT = Aws::Vector<S3KeyOutput>>
    void SetS3Keys(S3KeysT&& value) { m_s3KeysHasBeenSet = true; m_s3Keys = std::forward<S3KeysT>(value); }
    template<typename S3KeysT = Aws::Vector<S3KeyOutput>>
    DataSource& WithS3Keys(S3KeysT&& value) { SetS3Keys(std::forward<S3KeysT>(value)); return *this;}
    template<typename S3KeysT = S3KeyOutput>
    DataSource& AddS3Keys(S3KeysT&& value) { m_s3KeysHasBeenSet = true; m_s3Keys.emplace_back(std::forward<S3KeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data type for the data source that you're using for your container image
     * or simulation job. You can use this field to specify whether your data source is
     * an Archive, an Amazon S3 prefix, or a file.</p> <p>If you don't specify a field,
     * the default value is <code>File</code>.</p>
     */
    inline DataSourceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DataSourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DataSource& WithType(DataSourceType value) { SetType(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    DataSource& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    Aws::Vector<S3KeyOutput> m_s3Keys;
    bool m_s3KeysHasBeenSet = false;

    DataSourceType m_type{DataSourceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws

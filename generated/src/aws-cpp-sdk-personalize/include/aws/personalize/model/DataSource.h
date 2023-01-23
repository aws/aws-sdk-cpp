/**
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
   * <p>Describes the data source that contains the data to upload to a
   * dataset.</p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>The path to the Amazon S3 bucket where the data that you want to upload to
     * your dataset is stored. For example: </p> <p>
     * <code>s3://bucket-name/folder-name/</code> </p>
     */
    inline const Aws::String& GetDataLocation() const{ return m_dataLocation; }

    /**
     * <p>The path to the Amazon S3 bucket where the data that you want to upload to
     * your dataset is stored. For example: </p> <p>
     * <code>s3://bucket-name/folder-name/</code> </p>
     */
    inline bool DataLocationHasBeenSet() const { return m_dataLocationHasBeenSet; }

    /**
     * <p>The path to the Amazon S3 bucket where the data that you want to upload to
     * your dataset is stored. For example: </p> <p>
     * <code>s3://bucket-name/folder-name/</code> </p>
     */
    inline void SetDataLocation(const Aws::String& value) { m_dataLocationHasBeenSet = true; m_dataLocation = value; }

    /**
     * <p>The path to the Amazon S3 bucket where the data that you want to upload to
     * your dataset is stored. For example: </p> <p>
     * <code>s3://bucket-name/folder-name/</code> </p>
     */
    inline void SetDataLocation(Aws::String&& value) { m_dataLocationHasBeenSet = true; m_dataLocation = std::move(value); }

    /**
     * <p>The path to the Amazon S3 bucket where the data that you want to upload to
     * your dataset is stored. For example: </p> <p>
     * <code>s3://bucket-name/folder-name/</code> </p>
     */
    inline void SetDataLocation(const char* value) { m_dataLocationHasBeenSet = true; m_dataLocation.assign(value); }

    /**
     * <p>The path to the Amazon S3 bucket where the data that you want to upload to
     * your dataset is stored. For example: </p> <p>
     * <code>s3://bucket-name/folder-name/</code> </p>
     */
    inline DataSource& WithDataLocation(const Aws::String& value) { SetDataLocation(value); return *this;}

    /**
     * <p>The path to the Amazon S3 bucket where the data that you want to upload to
     * your dataset is stored. For example: </p> <p>
     * <code>s3://bucket-name/folder-name/</code> </p>
     */
    inline DataSource& WithDataLocation(Aws::String&& value) { SetDataLocation(std::move(value)); return *this;}

    /**
     * <p>The path to the Amazon S3 bucket where the data that you want to upload to
     * your dataset is stored. For example: </p> <p>
     * <code>s3://bucket-name/folder-name/</code> </p>
     */
    inline DataSource& WithDataLocation(const char* value) { SetDataLocation(value); return *this;}

  private:

    Aws::String m_dataLocation;
    bool m_dataLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AutoMLS3DataType.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Describes the Amazon S3 data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLS3DataSource">AWS
   * API Reference</a></p>
   */
  class AutoMLS3DataSource
  {
  public:
    AWS_SAGEMAKER_API AutoMLS3DataSource();
    AWS_SAGEMAKER_API AutoMLS3DataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLS3DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data type. </p> <ul> <li> <p>If you choose <code>S3Prefix</code>,
     * <code>S3Uri</code> identifies a key name prefix. SageMaker uses all objects that
     * match the specified key name prefix for model training.</p> <p>The
     * <code>S3Prefix</code> should have the following format:</p> <p>
     * <code>s3://DOC-EXAMPLE-BUCKET/DOC-EXAMPLE-FOLDER-OR-FILE</code> </p> </li> <li>
     * <p>If you choose <code>ManifestFile</code>, <code>S3Uri</code> identifies an
     * object that is a manifest file containing a list of object keys that you want
     * SageMaker to use for model training.</p> <p>A <code>ManifestFile</code> should
     * have the format shown below:</p> <p> <code>[ {"prefix":
     * "s3://DOC-EXAMPLE-BUCKET/DOC-EXAMPLE-FOLDER/DOC-EXAMPLE-PREFIX/"}, </code> </p>
     * <p> <code>"DOC-EXAMPLE-RELATIVE-PATH/DOC-EXAMPLE-FOLDER/DATA-1",</code> </p> <p>
     * <code>"DOC-EXAMPLE-RELATIVE-PATH/DOC-EXAMPLE-FOLDER/DATA-2",</code> </p> <p>
     * <code>... "DOC-EXAMPLE-RELATIVE-PATH/DOC-EXAMPLE-FOLDER/DATA-N" ]</code> </p>
     * </li> <li> <p>If you choose <code>AugmentedManifestFile</code>,
     * <code>S3Uri</code> identifies an object that is an augmented manifest file in
     * JSON lines format. This file contains the data you want to use for model
     * training. <code>AugmentedManifestFile</code> is available for V2 API jobs only
     * (for example, for jobs created by calling <code>CreateAutoMLJobV2</code>).</p>
     * <p>Here is a minimal, single-record example of an
     * <code>AugmentedManifestFile</code>:</p> <p> <code>{"source-ref":
     * "s3://DOC-EXAMPLE-BUCKET/DOC-EXAMPLE-FOLDER/cats/cat.jpg",</code> </p> <p>
     * <code>"label-metadata": {"class-name": "cat"</code> }</p> <p>For more
     * information on <code>AugmentedManifestFile</code>, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/augmented-manifest.html">Provide
     * Dataset Metadata to Training Jobs with an Augmented Manifest File</a>.</p> </li>
     * </ul>
     */
    inline const AutoMLS3DataType& GetS3DataType() const{ return m_s3DataType; }

    /**
     * <p>The data type. </p> <ul> <li> <p>If you choose <code>S3Prefix</code>,
     * <code>S3Uri</code> identifies a key name prefix. SageMaker uses all objects that
     * match the specified key name prefix for model training.</p> <p>The
     * <code>S3Prefix</code> should have the following format:</p> <p>
     * <code>s3://DOC-EXAMPLE-BUCKET/DOC-EXAMPLE-FOLDER-OR-FILE</code> </p> </li> <li>
     * <p>If you choose <code>ManifestFile</code>, <code>S3Uri</code> identifies an
     * object that is a manifest file containing a list of object keys that you want
     * SageMaker to use for model training.</p> <p>A <code>ManifestFile</code> should
     * have the format shown below:</p> <p> <code>[ {"prefix":
     * "s3://DOC-EXAMPLE-BUCKET/DOC-EXAMPLE-FOLDER/DOC-EXAMPLE-PREFIX/"}, </code> </p>
     * <p> <code>"DOC-EXAMPLE-RELATIVE-PATH/DOC-EXAMPLE-FOLDER/DATA-1",</code> </p> <p>
     * <code>"DOC-EXAMPLE-RELATIVE-PATH/DOC-EXAMPLE-FOLDER/DATA-2",</code> </p> <p>
     * <code>... "DOC-EXAMPLE-RELATIVE-PATH/DOC-EXAMPLE-FOLDER/DATA-N" ]</code> </p>
     * </li> <li> <p>If you choose <code>AugmentedManifestFile</code>,
     * <code>S3Uri</code> identifies an object that is an augmented manifest file in
     * JSON lines format. This file contains the data you want to use for model
     * training. <code>AugmentedManifestFile</code> is available for V2 API jobs only
     * (for example, for jobs created by calling <code>CreateAutoMLJobV2</code>).</p>
     * <p>Here is a minimal, single-record example of an
     * <code>AugmentedManifestFile</code>:</p> <p> <code>{"source-ref":
     * "s3://DOC-EXAMPLE-BUCKET/DOC-EXAMPLE-FOLDER/cats/cat.jpg",</code> </p> <p>
     * <code>"label-metadata": {"class-name": "cat"</code> }</p> <p>For more
     * information on <code>AugmentedManifestFile</code>, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/augmented-manifest.html">Provide
     * Dataset Metadata to Training Jobs with an Augmented Manifest File</a>.</p> </li>
     * </ul>
     */
    inline bool S3DataTypeHasBeenSet() const { return m_s3DataTypeHasBeenSet; }

    /**
     * <p>The data type. </p> <ul> <li> <p>If you choose <code>S3Prefix</code>,
     * <code>S3Uri</code> identifies a key name prefix. SageMaker uses all objects that
     * match the specified key name prefix for model training.</p> <p>The
     * <code>S3Prefix</code> should have the following format:</p> <p>
     * <code>s3://DOC-EXAMPLE-BUCKET/DOC-EXAMPLE-FOLDER-OR-FILE</code> </p> </li> <li>
     * <p>If you choose <code>ManifestFile</code>, <code>S3Uri</code> identifies an
     * object that is a manifest file containing a list of object keys that you want
     * SageMaker to use for model training.</p> <p>A <code>ManifestFile</code> should
     * have the format shown below:</p> <p> <code>[ {"prefix":
     * "s3://DOC-EXAMPLE-BUCKET/DOC-EXAMPLE-FOLDER/DOC-EXAMPLE-PREFIX/"}, </code> </p>
     * <p> <code>"DOC-EXAMPLE-RELATIVE-PATH/DOC-EXAMPLE-FOLDER/DATA-1",</code> </p> <p>
     * <code>"DOC-EXAMPLE-RELATIVE-PATH/DOC-EXAMPLE-FOLDER/DATA-2",</code> </p> <p>
     * <code>... "DOC-EXAMPLE-RELATIVE-PATH/DOC-EXAMPLE-FOLDER/DATA-N" ]</code> </p>
     * </li> <li> <p>If you choose <code>AugmentedManifestFile</code>,
     * <code>S3Uri</code> identifies an object that is an augmented manifest file in
     * JSON lines format. This file contains the data you want to use for model
     * training. <code>AugmentedManifestFile</code> is available for V2 API jobs only
     * (for example, for jobs created by calling <code>CreateAutoMLJobV2</code>).</p>
     * <p>Here is a minimal, single-record example of an
     * <code>AugmentedManifestFile</code>:</p> <p> <code>{"source-ref":
     * "s3://DOC-EXAMPLE-BUCKET/DOC-EXAMPLE-FOLDER/cats/cat.jpg",</code> </p> <p>
     * <code>"label-metadata": {"class-name": "cat"</code> }</p> <p>For more
     * information on <code>AugmentedManifestFile</code>, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/augmented-manifest.html">Provide
     * Dataset Metadata to Training Jobs with an Augmented Manifest File</a>.</p> </li>
     * </ul>
     */
    inline void SetS3DataType(const AutoMLS3DataType& value) { m_s3DataTypeHasBeenSet = true; m_s3DataType = value; }

    /**
     * <p>The data type. </p> <ul> <li> <p>If you choose <code>S3Prefix</code>,
     * <code>S3Uri</code> identifies a key name prefix. SageMaker uses all objects that
     * match the specified key name prefix for model training.</p> <p>The
     * <code>S3Prefix</code> should have the following format:</p> <p>
     * <code>s3://DOC-EXAMPLE-BUCKET/DOC-EXAMPLE-FOLDER-OR-FILE</code> </p> </li> <li>
     * <p>If you choose <code>ManifestFile</code>, <code>S3Uri</code> identifies an
     * object that is a manifest file containing a list of object keys that you want
     * SageMaker to use for model training.</p> <p>A <code>ManifestFile</code> should
     * have the format shown below:</p> <p> <code>[ {"prefix":
     * "s3://DOC-EXAMPLE-BUCKET/DOC-EXAMPLE-FOLDER/DOC-EXAMPLE-PREFIX/"}, </code> </p>
     * <p> <code>"DOC-EXAMPLE-RELATIVE-PATH/DOC-EXAMPLE-FOLDER/DATA-1",</code> </p> <p>
     * <code>"DOC-EXAMPLE-RELATIVE-PATH/DOC-EXAMPLE-FOLDER/DATA-2",</code> </p> <p>
     * <code>... "DOC-EXAMPLE-RELATIVE-PATH/DOC-EXAMPLE-FOLDER/DATA-N" ]</code> </p>
     * </li> <li> <p>If you choose <code>AugmentedManifestFile</code>,
     * <code>S3Uri</code> identifies an object that is an augmented manifest file in
     * JSON lines format. This file contains the data you want to use for model
     * training. <code>AugmentedManifestFile</code> is available for V2 API jobs only
     * (for example, for jobs created by calling <code>CreateAutoMLJobV2</code>).</p>
     * <p>Here is a minimal, single-record example of an
     * <code>AugmentedManifestFile</code>:</p> <p> <code>{"source-ref":
     * "s3://DOC-EXAMPLE-BUCKET/DOC-EXAMPLE-FOLDER/cats/cat.jpg",</code> </p> <p>
     * <code>"label-metadata": {"class-name": "cat"</code> }</p> <p>For more
     * information on <code>AugmentedManifestFile</code>, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/augmented-manifest.html">Provide
     * Dataset Metadata to Training Jobs with an Augmented Manifest File</a>.</p> </li>
     * </ul>
     */
    inline void SetS3DataType(AutoMLS3DataType&& value) { m_s3DataTypeHasBeenSet = true; m_s3DataType = std::move(value); }

    /**
     * <p>The data type. </p> <ul> <li> <p>If you choose <code>S3Prefix</code>,
     * <code>S3Uri</code> identifies a key name prefix. SageMaker uses all objects that
     * match the specified key name prefix for model training.</p> <p>The
     * <code>S3Prefix</code> should have the following format:</p> <p>
     * <code>s3://DOC-EXAMPLE-BUCKET/DOC-EXAMPLE-FOLDER-OR-FILE</code> </p> </li> <li>
     * <p>If you choose <code>ManifestFile</code>, <code>S3Uri</code> identifies an
     * object that is a manifest file containing a list of object keys that you want
     * SageMaker to use for model training.</p> <p>A <code>ManifestFile</code> should
     * have the format shown below:</p> <p> <code>[ {"prefix":
     * "s3://DOC-EXAMPLE-BUCKET/DOC-EXAMPLE-FOLDER/DOC-EXAMPLE-PREFIX/"}, </code> </p>
     * <p> <code>"DOC-EXAMPLE-RELATIVE-PATH/DOC-EXAMPLE-FOLDER/DATA-1",</code> </p> <p>
     * <code>"DOC-EXAMPLE-RELATIVE-PATH/DOC-EXAMPLE-FOLDER/DATA-2",</code> </p> <p>
     * <code>... "DOC-EXAMPLE-RELATIVE-PATH/DOC-EXAMPLE-FOLDER/DATA-N" ]</code> </p>
     * </li> <li> <p>If you choose <code>AugmentedManifestFile</code>,
     * <code>S3Uri</code> identifies an object that is an augmented manifest file in
     * JSON lines format. This file contains the data you want to use for model
     * training. <code>AugmentedManifestFile</code> is available for V2 API jobs only
     * (for example, for jobs created by calling <code>CreateAutoMLJobV2</code>).</p>
     * <p>Here is a minimal, single-record example of an
     * <code>AugmentedManifestFile</code>:</p> <p> <code>{"source-ref":
     * "s3://DOC-EXAMPLE-BUCKET/DOC-EXAMPLE-FOLDER/cats/cat.jpg",</code> </p> <p>
     * <code>"label-metadata": {"class-name": "cat"</code> }</p> <p>For more
     * information on <code>AugmentedManifestFile</code>, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/augmented-manifest.html">Provide
     * Dataset Metadata to Training Jobs with an Augmented Manifest File</a>.</p> </li>
     * </ul>
     */
    inline AutoMLS3DataSource& WithS3DataType(const AutoMLS3DataType& value) { SetS3DataType(value); return *this;}

    /**
     * <p>The data type. </p> <ul> <li> <p>If you choose <code>S3Prefix</code>,
     * <code>S3Uri</code> identifies a key name prefix. SageMaker uses all objects that
     * match the specified key name prefix for model training.</p> <p>The
     * <code>S3Prefix</code> should have the following format:</p> <p>
     * <code>s3://DOC-EXAMPLE-BUCKET/DOC-EXAMPLE-FOLDER-OR-FILE</code> </p> </li> <li>
     * <p>If you choose <code>ManifestFile</code>, <code>S3Uri</code> identifies an
     * object that is a manifest file containing a list of object keys that you want
     * SageMaker to use for model training.</p> <p>A <code>ManifestFile</code> should
     * have the format shown below:</p> <p> <code>[ {"prefix":
     * "s3://DOC-EXAMPLE-BUCKET/DOC-EXAMPLE-FOLDER/DOC-EXAMPLE-PREFIX/"}, </code> </p>
     * <p> <code>"DOC-EXAMPLE-RELATIVE-PATH/DOC-EXAMPLE-FOLDER/DATA-1",</code> </p> <p>
     * <code>"DOC-EXAMPLE-RELATIVE-PATH/DOC-EXAMPLE-FOLDER/DATA-2",</code> </p> <p>
     * <code>... "DOC-EXAMPLE-RELATIVE-PATH/DOC-EXAMPLE-FOLDER/DATA-N" ]</code> </p>
     * </li> <li> <p>If you choose <code>AugmentedManifestFile</code>,
     * <code>S3Uri</code> identifies an object that is an augmented manifest file in
     * JSON lines format. This file contains the data you want to use for model
     * training. <code>AugmentedManifestFile</code> is available for V2 API jobs only
     * (for example, for jobs created by calling <code>CreateAutoMLJobV2</code>).</p>
     * <p>Here is a minimal, single-record example of an
     * <code>AugmentedManifestFile</code>:</p> <p> <code>{"source-ref":
     * "s3://DOC-EXAMPLE-BUCKET/DOC-EXAMPLE-FOLDER/cats/cat.jpg",</code> </p> <p>
     * <code>"label-metadata": {"class-name": "cat"</code> }</p> <p>For more
     * information on <code>AugmentedManifestFile</code>, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/augmented-manifest.html">Provide
     * Dataset Metadata to Training Jobs with an Augmented Manifest File</a>.</p> </li>
     * </ul>
     */
    inline AutoMLS3DataSource& WithS3DataType(AutoMLS3DataType&& value) { SetS3DataType(std::move(value)); return *this;}


    /**
     * <p>The URL to the Amazon S3 data source. The Uri refers to the Amazon S3 prefix
     * or ManifestFile depending on the data type.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The URL to the Amazon S3 data source. The Uri refers to the Amazon S3 prefix
     * or ManifestFile depending on the data type.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The URL to the Amazon S3 data source. The Uri refers to the Amazon S3 prefix
     * or ManifestFile depending on the data type.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The URL to the Amazon S3 data source. The Uri refers to the Amazon S3 prefix
     * or ManifestFile depending on the data type.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The URL to the Amazon S3 data source. The Uri refers to the Amazon S3 prefix
     * or ManifestFile depending on the data type.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The URL to the Amazon S3 data source. The Uri refers to the Amazon S3 prefix
     * or ManifestFile depending on the data type.</p>
     */
    inline AutoMLS3DataSource& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The URL to the Amazon S3 data source. The Uri refers to the Amazon S3 prefix
     * or ManifestFile depending on the data type.</p>
     */
    inline AutoMLS3DataSource& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The URL to the Amazon S3 data source. The Uri refers to the Amazon S3 prefix
     * or ManifestFile depending on the data type.</p>
     */
    inline AutoMLS3DataSource& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}

  private:

    AutoMLS3DataType m_s3DataType;
    bool m_s3DataTypeHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

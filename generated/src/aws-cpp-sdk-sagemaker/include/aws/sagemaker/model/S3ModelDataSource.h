/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/S3ModelDataType.h>
#include <aws/sagemaker/model/ModelCompressionType.h>
#include <aws/sagemaker/model/ModelAccessConfig.h>
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
   * <p>Specifies the S3 location of ML model data to deploy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/S3ModelDataSource">AWS
   * API Reference</a></p>
   */
  class S3ModelDataSource
  {
  public:
    AWS_SAGEMAKER_API S3ModelDataSource();
    AWS_SAGEMAKER_API S3ModelDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API S3ModelDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the S3 path of ML model data to deploy.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>Specifies the S3 path of ML model data to deploy.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>Specifies the S3 path of ML model data to deploy.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>Specifies the S3 path of ML model data to deploy.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>Specifies the S3 path of ML model data to deploy.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>Specifies the S3 path of ML model data to deploy.</p>
     */
    inline S3ModelDataSource& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>Specifies the S3 path of ML model data to deploy.</p>
     */
    inline S3ModelDataSource& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>Specifies the S3 path of ML model data to deploy.</p>
     */
    inline S3ModelDataSource& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}


    /**
     * <p>Specifies the type of ML model data to deploy.</p> <p>If you choose
     * <code>S3Prefix</code>, <code>S3Uri</code> identifies a key name prefix.
     * SageMaker uses all objects that match the specified key name prefix as part of
     * the ML model data to deploy. A valid key name prefix identified by
     * <code>S3Uri</code> always ends with a forward slash (/).</p> <p>If you choose
     * <code>S3Object</code>, <code>S3Uri</code> identifies an object that is the ML
     * model data to deploy.</p>
     */
    inline const S3ModelDataType& GetS3DataType() const{ return m_s3DataType; }

    /**
     * <p>Specifies the type of ML model data to deploy.</p> <p>If you choose
     * <code>S3Prefix</code>, <code>S3Uri</code> identifies a key name prefix.
     * SageMaker uses all objects that match the specified key name prefix as part of
     * the ML model data to deploy. A valid key name prefix identified by
     * <code>S3Uri</code> always ends with a forward slash (/).</p> <p>If you choose
     * <code>S3Object</code>, <code>S3Uri</code> identifies an object that is the ML
     * model data to deploy.</p>
     */
    inline bool S3DataTypeHasBeenSet() const { return m_s3DataTypeHasBeenSet; }

    /**
     * <p>Specifies the type of ML model data to deploy.</p> <p>If you choose
     * <code>S3Prefix</code>, <code>S3Uri</code> identifies a key name prefix.
     * SageMaker uses all objects that match the specified key name prefix as part of
     * the ML model data to deploy. A valid key name prefix identified by
     * <code>S3Uri</code> always ends with a forward slash (/).</p> <p>If you choose
     * <code>S3Object</code>, <code>S3Uri</code> identifies an object that is the ML
     * model data to deploy.</p>
     */
    inline void SetS3DataType(const S3ModelDataType& value) { m_s3DataTypeHasBeenSet = true; m_s3DataType = value; }

    /**
     * <p>Specifies the type of ML model data to deploy.</p> <p>If you choose
     * <code>S3Prefix</code>, <code>S3Uri</code> identifies a key name prefix.
     * SageMaker uses all objects that match the specified key name prefix as part of
     * the ML model data to deploy. A valid key name prefix identified by
     * <code>S3Uri</code> always ends with a forward slash (/).</p> <p>If you choose
     * <code>S3Object</code>, <code>S3Uri</code> identifies an object that is the ML
     * model data to deploy.</p>
     */
    inline void SetS3DataType(S3ModelDataType&& value) { m_s3DataTypeHasBeenSet = true; m_s3DataType = std::move(value); }

    /**
     * <p>Specifies the type of ML model data to deploy.</p> <p>If you choose
     * <code>S3Prefix</code>, <code>S3Uri</code> identifies a key name prefix.
     * SageMaker uses all objects that match the specified key name prefix as part of
     * the ML model data to deploy. A valid key name prefix identified by
     * <code>S3Uri</code> always ends with a forward slash (/).</p> <p>If you choose
     * <code>S3Object</code>, <code>S3Uri</code> identifies an object that is the ML
     * model data to deploy.</p>
     */
    inline S3ModelDataSource& WithS3DataType(const S3ModelDataType& value) { SetS3DataType(value); return *this;}

    /**
     * <p>Specifies the type of ML model data to deploy.</p> <p>If you choose
     * <code>S3Prefix</code>, <code>S3Uri</code> identifies a key name prefix.
     * SageMaker uses all objects that match the specified key name prefix as part of
     * the ML model data to deploy. A valid key name prefix identified by
     * <code>S3Uri</code> always ends with a forward slash (/).</p> <p>If you choose
     * <code>S3Object</code>, <code>S3Uri</code> identifies an object that is the ML
     * model data to deploy.</p>
     */
    inline S3ModelDataSource& WithS3DataType(S3ModelDataType&& value) { SetS3DataType(std::move(value)); return *this;}


    /**
     * <p>Specifies how the ML model data is prepared.</p> <p>If you choose
     * <code>Gzip</code> and choose <code>S3Object</code> as the value of
     * <code>S3DataType</code>, <code>S3Uri</code> identifies an object that is a
     * gzip-compressed TAR archive. SageMaker will attempt to decompress and untar the
     * object during model deployment.</p> <p>If you choose <code>None</code> and
     * chooose <code>S3Object</code> as the value of <code>S3DataType</code>,
     * <code>S3Uri</code> identifies an object that represents an uncompressed ML model
     * to deploy.</p> <p>If you choose None and choose <code>S3Prefix</code> as the
     * value of <code>S3DataType</code>, <code>S3Uri</code> identifies a key name
     * prefix, under which all objects represents the uncompressed ML model to
     * deploy.</p> <p>If you choose None, then SageMaker will follow rules below when
     * creating model data files under /opt/ml/model directory for use by your
     * inference code:</p> <ul> <li> <p>If you choose <code>S3Object</code> as the
     * value of <code>S3DataType</code>, then SageMaker will split the key of the S3
     * object referenced by <code>S3Uri</code> by slash (/), and use the last part as
     * the filename of the file holding the content of the S3 object.</p> </li> <li>
     * <p>If you choose <code>S3Prefix</code> as the value of <code>S3DataType</code>,
     * then for each S3 object under the key name pefix referenced by
     * <code>S3Uri</code>, SageMaker will trim its key by the prefix, and use the
     * remainder as the path (relative to <code>/opt/ml/model</code>) of the file
     * holding the content of the S3 object. SageMaker will split the remainder by
     * slash (/), using intermediate parts as directory names and the last part as
     * filename of the file holding the content of the S3 object.</p> </li> <li> <p>Do
     * not use any of the following as file names or directory names:</p> <ul> <li>
     * <p>An empty or blank string</p> </li> <li> <p>A string which contains null
     * bytes</p> </li> <li> <p>A string longer than 255 bytes</p> </li> <li> <p>A
     * single dot (<code>.</code>)</p> </li> <li> <p>A double dot (<code>..</code>)</p>
     * </li> </ul> </li> <li> <p>Ambiguous file names will result in model deployment
     * failure. For example, if your uncompressed ML model consists of two S3 objects
     * <code>s3://mybucket/model/weights</code> and
     * <code>s3://mybucket/model/weights/part1</code> and you specify
     * <code>s3://mybucket/model/</code> as the value of <code>S3Uri</code> and
     * <code>S3Prefix</code> as the value of <code>S3DataType</code>, then it will
     * result in name clash between <code>/opt/ml/model/weights</code> (a regular file)
     * and <code>/opt/ml/model/weights/</code> (a directory).</p> </li> <li> <p>Do not
     * organize the model artifacts in <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-folders.html">S3
     * console using folders</a>. When you create a folder in S3 console, S3 creates a
     * 0-byte object with a key set to the folder name you provide. They key of the
     * 0-byte object ends with a slash (/) which violates SageMaker restrictions on
     * model artifact file names, leading to model deployment failure. </p> </li> </ul>
     */
    inline const ModelCompressionType& GetCompressionType() const{ return m_compressionType; }

    /**
     * <p>Specifies how the ML model data is prepared.</p> <p>If you choose
     * <code>Gzip</code> and choose <code>S3Object</code> as the value of
     * <code>S3DataType</code>, <code>S3Uri</code> identifies an object that is a
     * gzip-compressed TAR archive. SageMaker will attempt to decompress and untar the
     * object during model deployment.</p> <p>If you choose <code>None</code> and
     * chooose <code>S3Object</code> as the value of <code>S3DataType</code>,
     * <code>S3Uri</code> identifies an object that represents an uncompressed ML model
     * to deploy.</p> <p>If you choose None and choose <code>S3Prefix</code> as the
     * value of <code>S3DataType</code>, <code>S3Uri</code> identifies a key name
     * prefix, under which all objects represents the uncompressed ML model to
     * deploy.</p> <p>If you choose None, then SageMaker will follow rules below when
     * creating model data files under /opt/ml/model directory for use by your
     * inference code:</p> <ul> <li> <p>If you choose <code>S3Object</code> as the
     * value of <code>S3DataType</code>, then SageMaker will split the key of the S3
     * object referenced by <code>S3Uri</code> by slash (/), and use the last part as
     * the filename of the file holding the content of the S3 object.</p> </li> <li>
     * <p>If you choose <code>S3Prefix</code> as the value of <code>S3DataType</code>,
     * then for each S3 object under the key name pefix referenced by
     * <code>S3Uri</code>, SageMaker will trim its key by the prefix, and use the
     * remainder as the path (relative to <code>/opt/ml/model</code>) of the file
     * holding the content of the S3 object. SageMaker will split the remainder by
     * slash (/), using intermediate parts as directory names and the last part as
     * filename of the file holding the content of the S3 object.</p> </li> <li> <p>Do
     * not use any of the following as file names or directory names:</p> <ul> <li>
     * <p>An empty or blank string</p> </li> <li> <p>A string which contains null
     * bytes</p> </li> <li> <p>A string longer than 255 bytes</p> </li> <li> <p>A
     * single dot (<code>.</code>)</p> </li> <li> <p>A double dot (<code>..</code>)</p>
     * </li> </ul> </li> <li> <p>Ambiguous file names will result in model deployment
     * failure. For example, if your uncompressed ML model consists of two S3 objects
     * <code>s3://mybucket/model/weights</code> and
     * <code>s3://mybucket/model/weights/part1</code> and you specify
     * <code>s3://mybucket/model/</code> as the value of <code>S3Uri</code> and
     * <code>S3Prefix</code> as the value of <code>S3DataType</code>, then it will
     * result in name clash between <code>/opt/ml/model/weights</code> (a regular file)
     * and <code>/opt/ml/model/weights/</code> (a directory).</p> </li> <li> <p>Do not
     * organize the model artifacts in <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-folders.html">S3
     * console using folders</a>. When you create a folder in S3 console, S3 creates a
     * 0-byte object with a key set to the folder name you provide. They key of the
     * 0-byte object ends with a slash (/) which violates SageMaker restrictions on
     * model artifact file names, leading to model deployment failure. </p> </li> </ul>
     */
    inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }

    /**
     * <p>Specifies how the ML model data is prepared.</p> <p>If you choose
     * <code>Gzip</code> and choose <code>S3Object</code> as the value of
     * <code>S3DataType</code>, <code>S3Uri</code> identifies an object that is a
     * gzip-compressed TAR archive. SageMaker will attempt to decompress and untar the
     * object during model deployment.</p> <p>If you choose <code>None</code> and
     * chooose <code>S3Object</code> as the value of <code>S3DataType</code>,
     * <code>S3Uri</code> identifies an object that represents an uncompressed ML model
     * to deploy.</p> <p>If you choose None and choose <code>S3Prefix</code> as the
     * value of <code>S3DataType</code>, <code>S3Uri</code> identifies a key name
     * prefix, under which all objects represents the uncompressed ML model to
     * deploy.</p> <p>If you choose None, then SageMaker will follow rules below when
     * creating model data files under /opt/ml/model directory for use by your
     * inference code:</p> <ul> <li> <p>If you choose <code>S3Object</code> as the
     * value of <code>S3DataType</code>, then SageMaker will split the key of the S3
     * object referenced by <code>S3Uri</code> by slash (/), and use the last part as
     * the filename of the file holding the content of the S3 object.</p> </li> <li>
     * <p>If you choose <code>S3Prefix</code> as the value of <code>S3DataType</code>,
     * then for each S3 object under the key name pefix referenced by
     * <code>S3Uri</code>, SageMaker will trim its key by the prefix, and use the
     * remainder as the path (relative to <code>/opt/ml/model</code>) of the file
     * holding the content of the S3 object. SageMaker will split the remainder by
     * slash (/), using intermediate parts as directory names and the last part as
     * filename of the file holding the content of the S3 object.</p> </li> <li> <p>Do
     * not use any of the following as file names or directory names:</p> <ul> <li>
     * <p>An empty or blank string</p> </li> <li> <p>A string which contains null
     * bytes</p> </li> <li> <p>A string longer than 255 bytes</p> </li> <li> <p>A
     * single dot (<code>.</code>)</p> </li> <li> <p>A double dot (<code>..</code>)</p>
     * </li> </ul> </li> <li> <p>Ambiguous file names will result in model deployment
     * failure. For example, if your uncompressed ML model consists of two S3 objects
     * <code>s3://mybucket/model/weights</code> and
     * <code>s3://mybucket/model/weights/part1</code> and you specify
     * <code>s3://mybucket/model/</code> as the value of <code>S3Uri</code> and
     * <code>S3Prefix</code> as the value of <code>S3DataType</code>, then it will
     * result in name clash between <code>/opt/ml/model/weights</code> (a regular file)
     * and <code>/opt/ml/model/weights/</code> (a directory).</p> </li> <li> <p>Do not
     * organize the model artifacts in <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-folders.html">S3
     * console using folders</a>. When you create a folder in S3 console, S3 creates a
     * 0-byte object with a key set to the folder name you provide. They key of the
     * 0-byte object ends with a slash (/) which violates SageMaker restrictions on
     * model artifact file names, leading to model deployment failure. </p> </li> </ul>
     */
    inline void SetCompressionType(const ModelCompressionType& value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }

    /**
     * <p>Specifies how the ML model data is prepared.</p> <p>If you choose
     * <code>Gzip</code> and choose <code>S3Object</code> as the value of
     * <code>S3DataType</code>, <code>S3Uri</code> identifies an object that is a
     * gzip-compressed TAR archive. SageMaker will attempt to decompress and untar the
     * object during model deployment.</p> <p>If you choose <code>None</code> and
     * chooose <code>S3Object</code> as the value of <code>S3DataType</code>,
     * <code>S3Uri</code> identifies an object that represents an uncompressed ML model
     * to deploy.</p> <p>If you choose None and choose <code>S3Prefix</code> as the
     * value of <code>S3DataType</code>, <code>S3Uri</code> identifies a key name
     * prefix, under which all objects represents the uncompressed ML model to
     * deploy.</p> <p>If you choose None, then SageMaker will follow rules below when
     * creating model data files under /opt/ml/model directory for use by your
     * inference code:</p> <ul> <li> <p>If you choose <code>S3Object</code> as the
     * value of <code>S3DataType</code>, then SageMaker will split the key of the S3
     * object referenced by <code>S3Uri</code> by slash (/), and use the last part as
     * the filename of the file holding the content of the S3 object.</p> </li> <li>
     * <p>If you choose <code>S3Prefix</code> as the value of <code>S3DataType</code>,
     * then for each S3 object under the key name pefix referenced by
     * <code>S3Uri</code>, SageMaker will trim its key by the prefix, and use the
     * remainder as the path (relative to <code>/opt/ml/model</code>) of the file
     * holding the content of the S3 object. SageMaker will split the remainder by
     * slash (/), using intermediate parts as directory names and the last part as
     * filename of the file holding the content of the S3 object.</p> </li> <li> <p>Do
     * not use any of the following as file names or directory names:</p> <ul> <li>
     * <p>An empty or blank string</p> </li> <li> <p>A string which contains null
     * bytes</p> </li> <li> <p>A string longer than 255 bytes</p> </li> <li> <p>A
     * single dot (<code>.</code>)</p> </li> <li> <p>A double dot (<code>..</code>)</p>
     * </li> </ul> </li> <li> <p>Ambiguous file names will result in model deployment
     * failure. For example, if your uncompressed ML model consists of two S3 objects
     * <code>s3://mybucket/model/weights</code> and
     * <code>s3://mybucket/model/weights/part1</code> and you specify
     * <code>s3://mybucket/model/</code> as the value of <code>S3Uri</code> and
     * <code>S3Prefix</code> as the value of <code>S3DataType</code>, then it will
     * result in name clash between <code>/opt/ml/model/weights</code> (a regular file)
     * and <code>/opt/ml/model/weights/</code> (a directory).</p> </li> <li> <p>Do not
     * organize the model artifacts in <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-folders.html">S3
     * console using folders</a>. When you create a folder in S3 console, S3 creates a
     * 0-byte object with a key set to the folder name you provide. They key of the
     * 0-byte object ends with a slash (/) which violates SageMaker restrictions on
     * model artifact file names, leading to model deployment failure. </p> </li> </ul>
     */
    inline void SetCompressionType(ModelCompressionType&& value) { m_compressionTypeHasBeenSet = true; m_compressionType = std::move(value); }

    /**
     * <p>Specifies how the ML model data is prepared.</p> <p>If you choose
     * <code>Gzip</code> and choose <code>S3Object</code> as the value of
     * <code>S3DataType</code>, <code>S3Uri</code> identifies an object that is a
     * gzip-compressed TAR archive. SageMaker will attempt to decompress and untar the
     * object during model deployment.</p> <p>If you choose <code>None</code> and
     * chooose <code>S3Object</code> as the value of <code>S3DataType</code>,
     * <code>S3Uri</code> identifies an object that represents an uncompressed ML model
     * to deploy.</p> <p>If you choose None and choose <code>S3Prefix</code> as the
     * value of <code>S3DataType</code>, <code>S3Uri</code> identifies a key name
     * prefix, under which all objects represents the uncompressed ML model to
     * deploy.</p> <p>If you choose None, then SageMaker will follow rules below when
     * creating model data files under /opt/ml/model directory for use by your
     * inference code:</p> <ul> <li> <p>If you choose <code>S3Object</code> as the
     * value of <code>S3DataType</code>, then SageMaker will split the key of the S3
     * object referenced by <code>S3Uri</code> by slash (/), and use the last part as
     * the filename of the file holding the content of the S3 object.</p> </li> <li>
     * <p>If you choose <code>S3Prefix</code> as the value of <code>S3DataType</code>,
     * then for each S3 object under the key name pefix referenced by
     * <code>S3Uri</code>, SageMaker will trim its key by the prefix, and use the
     * remainder as the path (relative to <code>/opt/ml/model</code>) of the file
     * holding the content of the S3 object. SageMaker will split the remainder by
     * slash (/), using intermediate parts as directory names and the last part as
     * filename of the file holding the content of the S3 object.</p> </li> <li> <p>Do
     * not use any of the following as file names or directory names:</p> <ul> <li>
     * <p>An empty or blank string</p> </li> <li> <p>A string which contains null
     * bytes</p> </li> <li> <p>A string longer than 255 bytes</p> </li> <li> <p>A
     * single dot (<code>.</code>)</p> </li> <li> <p>A double dot (<code>..</code>)</p>
     * </li> </ul> </li> <li> <p>Ambiguous file names will result in model deployment
     * failure. For example, if your uncompressed ML model consists of two S3 objects
     * <code>s3://mybucket/model/weights</code> and
     * <code>s3://mybucket/model/weights/part1</code> and you specify
     * <code>s3://mybucket/model/</code> as the value of <code>S3Uri</code> and
     * <code>S3Prefix</code> as the value of <code>S3DataType</code>, then it will
     * result in name clash between <code>/opt/ml/model/weights</code> (a regular file)
     * and <code>/opt/ml/model/weights/</code> (a directory).</p> </li> <li> <p>Do not
     * organize the model artifacts in <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-folders.html">S3
     * console using folders</a>. When you create a folder in S3 console, S3 creates a
     * 0-byte object with a key set to the folder name you provide. They key of the
     * 0-byte object ends with a slash (/) which violates SageMaker restrictions on
     * model artifact file names, leading to model deployment failure. </p> </li> </ul>
     */
    inline S3ModelDataSource& WithCompressionType(const ModelCompressionType& value) { SetCompressionType(value); return *this;}

    /**
     * <p>Specifies how the ML model data is prepared.</p> <p>If you choose
     * <code>Gzip</code> and choose <code>S3Object</code> as the value of
     * <code>S3DataType</code>, <code>S3Uri</code> identifies an object that is a
     * gzip-compressed TAR archive. SageMaker will attempt to decompress and untar the
     * object during model deployment.</p> <p>If you choose <code>None</code> and
     * chooose <code>S3Object</code> as the value of <code>S3DataType</code>,
     * <code>S3Uri</code> identifies an object that represents an uncompressed ML model
     * to deploy.</p> <p>If you choose None and choose <code>S3Prefix</code> as the
     * value of <code>S3DataType</code>, <code>S3Uri</code> identifies a key name
     * prefix, under which all objects represents the uncompressed ML model to
     * deploy.</p> <p>If you choose None, then SageMaker will follow rules below when
     * creating model data files under /opt/ml/model directory for use by your
     * inference code:</p> <ul> <li> <p>If you choose <code>S3Object</code> as the
     * value of <code>S3DataType</code>, then SageMaker will split the key of the S3
     * object referenced by <code>S3Uri</code> by slash (/), and use the last part as
     * the filename of the file holding the content of the S3 object.</p> </li> <li>
     * <p>If you choose <code>S3Prefix</code> as the value of <code>S3DataType</code>,
     * then for each S3 object under the key name pefix referenced by
     * <code>S3Uri</code>, SageMaker will trim its key by the prefix, and use the
     * remainder as the path (relative to <code>/opt/ml/model</code>) of the file
     * holding the content of the S3 object. SageMaker will split the remainder by
     * slash (/), using intermediate parts as directory names and the last part as
     * filename of the file holding the content of the S3 object.</p> </li> <li> <p>Do
     * not use any of the following as file names or directory names:</p> <ul> <li>
     * <p>An empty or blank string</p> </li> <li> <p>A string which contains null
     * bytes</p> </li> <li> <p>A string longer than 255 bytes</p> </li> <li> <p>A
     * single dot (<code>.</code>)</p> </li> <li> <p>A double dot (<code>..</code>)</p>
     * </li> </ul> </li> <li> <p>Ambiguous file names will result in model deployment
     * failure. For example, if your uncompressed ML model consists of two S3 objects
     * <code>s3://mybucket/model/weights</code> and
     * <code>s3://mybucket/model/weights/part1</code> and you specify
     * <code>s3://mybucket/model/</code> as the value of <code>S3Uri</code> and
     * <code>S3Prefix</code> as the value of <code>S3DataType</code>, then it will
     * result in name clash between <code>/opt/ml/model/weights</code> (a regular file)
     * and <code>/opt/ml/model/weights/</code> (a directory).</p> </li> <li> <p>Do not
     * organize the model artifacts in <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-folders.html">S3
     * console using folders</a>. When you create a folder in S3 console, S3 creates a
     * 0-byte object with a key set to the folder name you provide. They key of the
     * 0-byte object ends with a slash (/) which violates SageMaker restrictions on
     * model artifact file names, leading to model deployment failure. </p> </li> </ul>
     */
    inline S3ModelDataSource& WithCompressionType(ModelCompressionType&& value) { SetCompressionType(std::move(value)); return *this;}


    /**
     * <p>Specifies the access configuration file for the ML model. You can explicitly
     * accept the model end-user license agreement (EULA) within the
     * <code>ModelAccessConfig</code>. You are responsible for reviewing and complying
     * with any applicable license terms and making sure they are acceptable for your
     * use case before downloading or using a model.</p>
     */
    inline const ModelAccessConfig& GetModelAccessConfig() const{ return m_modelAccessConfig; }

    /**
     * <p>Specifies the access configuration file for the ML model. You can explicitly
     * accept the model end-user license agreement (EULA) within the
     * <code>ModelAccessConfig</code>. You are responsible for reviewing and complying
     * with any applicable license terms and making sure they are acceptable for your
     * use case before downloading or using a model.</p>
     */
    inline bool ModelAccessConfigHasBeenSet() const { return m_modelAccessConfigHasBeenSet; }

    /**
     * <p>Specifies the access configuration file for the ML model. You can explicitly
     * accept the model end-user license agreement (EULA) within the
     * <code>ModelAccessConfig</code>. You are responsible for reviewing and complying
     * with any applicable license terms and making sure they are acceptable for your
     * use case before downloading or using a model.</p>
     */
    inline void SetModelAccessConfig(const ModelAccessConfig& value) { m_modelAccessConfigHasBeenSet = true; m_modelAccessConfig = value; }

    /**
     * <p>Specifies the access configuration file for the ML model. You can explicitly
     * accept the model end-user license agreement (EULA) within the
     * <code>ModelAccessConfig</code>. You are responsible for reviewing and complying
     * with any applicable license terms and making sure they are acceptable for your
     * use case before downloading or using a model.</p>
     */
    inline void SetModelAccessConfig(ModelAccessConfig&& value) { m_modelAccessConfigHasBeenSet = true; m_modelAccessConfig = std::move(value); }

    /**
     * <p>Specifies the access configuration file for the ML model. You can explicitly
     * accept the model end-user license agreement (EULA) within the
     * <code>ModelAccessConfig</code>. You are responsible for reviewing and complying
     * with any applicable license terms and making sure they are acceptable for your
     * use case before downloading or using a model.</p>
     */
    inline S3ModelDataSource& WithModelAccessConfig(const ModelAccessConfig& value) { SetModelAccessConfig(value); return *this;}

    /**
     * <p>Specifies the access configuration file for the ML model. You can explicitly
     * accept the model end-user license agreement (EULA) within the
     * <code>ModelAccessConfig</code>. You are responsible for reviewing and complying
     * with any applicable license terms and making sure they are acceptable for your
     * use case before downloading or using a model.</p>
     */
    inline S3ModelDataSource& WithModelAccessConfig(ModelAccessConfig&& value) { SetModelAccessConfig(std::move(value)); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    S3ModelDataType m_s3DataType;
    bool m_s3DataTypeHasBeenSet = false;

    ModelCompressionType m_compressionType;
    bool m_compressionTypeHasBeenSet = false;

    ModelAccessConfig m_modelAccessConfig;
    bool m_modelAccessConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws

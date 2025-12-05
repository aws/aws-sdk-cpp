/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MWAAServerless {
namespace Model {

/**
 * <p>Specifies the Amazon S3 location of a workflow definition file. This
 * structure contains the bucket name, object key, and optional version ID for the
 * workflow definition. Amazon Managed Workflows for Apache Airflow Serverless
 * takes a snapshot of the definition file at the time of workflow creation or
 * update, ensuring that the workflow behavior remains consistent even if the
 * source file is modified. The definition must be a valid YAML file that uses
 * supported Amazon Web Services operators and Amazon Managed Workflows for Apache
 * Airflow Serverless syntax.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/DefinitionS3Location">AWS
 * API Reference</a></p>
 */
class DefinitionS3Location {
 public:
  AWS_MWAASERVERLESS_API DefinitionS3Location() = default;
  AWS_MWAASERVERLESS_API DefinitionS3Location(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API DefinitionS3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the Amazon S3 bucket that contains the workflow definition
   * file.</p>
   */
  inline const Aws::String& GetBucket() const { return m_bucket; }
  inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
  template <typename BucketT = Aws::String>
  void SetBucket(BucketT&& value) {
    m_bucketHasBeenSet = true;
    m_bucket = std::forward<BucketT>(value);
  }
  template <typename BucketT = Aws::String>
  DefinitionS3Location& WithBucket(BucketT&& value) {
    SetBucket(std::forward<BucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key (name) of the workflow definition file within the S3 bucket.</p>
   */
  inline const Aws::String& GetObjectKey() const { return m_objectKey; }
  inline bool ObjectKeyHasBeenSet() const { return m_objectKeyHasBeenSet; }
  template <typename ObjectKeyT = Aws::String>
  void SetObjectKey(ObjectKeyT&& value) {
    m_objectKeyHasBeenSet = true;
    m_objectKey = std::forward<ObjectKeyT>(value);
  }
  template <typename ObjectKeyT = Aws::String>
  DefinitionS3Location& WithObjectKey(ObjectKeyT&& value) {
    SetObjectKey(std::forward<ObjectKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional. The version ID of the workflow definition file in Amazon S3. If not
   * specified, the latest version is used.</p>
   */
  inline const Aws::String& GetVersionId() const { return m_versionId; }
  inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
  template <typename VersionIdT = Aws::String>
  void SetVersionId(VersionIdT&& value) {
    m_versionIdHasBeenSet = true;
    m_versionId = std::forward<VersionIdT>(value);
  }
  template <typename VersionIdT = Aws::String>
  DefinitionS3Location& WithVersionId(VersionIdT&& value) {
    SetVersionId(std::forward<VersionIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucket;

  Aws::String m_objectKey;

  Aws::String m_versionId;
  bool m_bucketHasBeenSet = false;
  bool m_objectKeyHasBeenSet = false;
  bool m_versionIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws

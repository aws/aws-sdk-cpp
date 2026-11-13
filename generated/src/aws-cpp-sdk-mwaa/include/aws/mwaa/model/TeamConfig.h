/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa/MWAA_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MWAA {
namespace Model {

/**
 * <p>Describes the configuration for a single team in Apache Airflow multi-team
 * support on your Amazon MWAA environment. A team configuration defines the Amazon
 * S3 location of the DAG code for the team. The team name that maps to this
 * configuration must match the display name of an Amazon Web Services IAM Identity
 * Center group associated with your environment. For more information, refer to <a
 * href="https://docs.aws.amazon.com/mwaa/latest/userguide/multi-team-environments.html">Apache
 * Airflow multi-team environments</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-2020-07-01/TeamConfig">AWS API
 * Reference</a></p>
 */
class TeamConfig {
 public:
  AWS_MWAA_API TeamConfig() = default;
  AWS_MWAA_API TeamConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAA_API TeamConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket where the team's DAG
   * code and supporting files are stored. For example,
   * <code>arn:aws:s3:::my-airflow-bucket-unique-name</code>. For more information,
   * refer to <a
   * href="https://docs.aws.amazon.com/mwaa/latest/userguide/mwaa-s3-bucket.html">Create
   * an Amazon S3 bucket for Amazon MWAA</a>.</p>
   */
  inline const Aws::String& GetSourceBucketArn() const { return m_sourceBucketArn; }
  inline bool SourceBucketArnHasBeenSet() const { return m_sourceBucketArnHasBeenSet; }
  template <typename SourceBucketArnT = Aws::String>
  void SetSourceBucketArn(SourceBucketArnT&& value) {
    m_sourceBucketArnHasBeenSet = true;
    m_sourceBucketArn = std::forward<SourceBucketArnT>(value);
  }
  template <typename SourceBucketArnT = Aws::String>
  TeamConfig& WithSourceBucketArn(SourceBucketArnT&& value) {
    SetSourceBucketArn(std::forward<SourceBucketArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The relative path to the DAGs folder for the team in the team's Amazon S3
   * bucket. For example, <code>dags/team-a</code>. For more information, refer to <a
   * href="https://docs.aws.amazon.com/mwaa/latest/userguide/configuring-dag-folder.html">Adding
   * or updating DAGs</a>.</p> <p>DAG folders can't overlap. A team folder can't be
   * inside the global folder or another team's folder, and the global folder can't
   * be inside a team folder. Amazon Managed Workflows for Apache Airflow (Amazon
   * MWAA) compares folder paths as Amazon S3 prefixes, so the trailing slash
   * matters:</p> <ul> <li> <p> <code>s3://amzn-s3-demo-bucket/dags/</code> and
   * <code>s3://amzn-s3-demo-bucket/dags/team-a/</code> overlap, because the first
   * path is a prefix of the second.</p> </li> <li> <p>
   * <code>s3://amzn-s3-demo-bucket/dags/</code> and
   * <code>s3://amzn-s3-demo-bucket/dags-team-a/</code> don't overlap.</p> </li> <li>
   * <p> <code>s3://amzn-s3-demo-bucket/teams/team-a/</code> and
   * <code>s3://amzn-s3-demo-bucket/teams/team-b/</code> don't overlap.</p> </li>
   * </ul>
   */
  inline const Aws::String& GetDagS3Path() const { return m_dagS3Path; }
  inline bool DagS3PathHasBeenSet() const { return m_dagS3PathHasBeenSet; }
  template <typename DagS3PathT = Aws::String>
  void SetDagS3Path(DagS3PathT&& value) {
    m_dagS3PathHasBeenSet = true;
    m_dagS3Path = std::forward<DagS3PathT>(value);
  }
  template <typename DagS3PathT = Aws::String>
  TeamConfig& WithDagS3Path(DagS3PathT&& value) {
    SetDagS3Path(std::forward<DagS3PathT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceBucketArn;

  Aws::String m_dagS3Path;
  bool m_sourceBucketArnHasBeenSet = false;
  bool m_dagS3PathHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAA
}  // namespace Aws

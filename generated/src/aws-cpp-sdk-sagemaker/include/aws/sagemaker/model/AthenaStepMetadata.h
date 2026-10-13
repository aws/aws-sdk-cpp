/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>The query execution identifier and the result output location for the Amazon
 * Athena query that an Athena step runs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AthenaStepMetadata">AWS
 * API Reference</a></p>
 */
class AthenaStepMetadata {
 public:
  AWS_SAGEMAKER_API AthenaStepMetadata() = default;
  AWS_SAGEMAKER_API AthenaStepMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AthenaStepMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the Amazon Athena query execution that was run by
   * this step execution.</p>
   */
  inline const Aws::String& GetQueryExecutionId() const { return m_queryExecutionId; }
  inline bool QueryExecutionIdHasBeenSet() const { return m_queryExecutionIdHasBeenSet; }
  template <typename QueryExecutionIdT = Aws::String>
  void SetQueryExecutionId(QueryExecutionIdT&& value) {
    m_queryExecutionIdHasBeenSet = true;
    m_queryExecutionId = std::forward<QueryExecutionIdT>(value);
  }
  template <typename QueryExecutionIdT = Aws::String>
  AthenaStepMetadata& WithQueryExecutionId(QueryExecutionIdT&& value) {
    SetQueryExecutionId(std::forward<QueryExecutionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 location of the Amazon Athena query results. This is the
   * effective output location reported by <code>GetQueryExecution</code> for the
   * query. This value can be absent when the query uses Athena managed query
   * results.</p>
   */
  inline const Aws::String& GetS3OutputLocation() const { return m_s3OutputLocation; }
  inline bool S3OutputLocationHasBeenSet() const { return m_s3OutputLocationHasBeenSet; }
  template <typename S3OutputLocationT = Aws::String>
  void SetS3OutputLocation(S3OutputLocationT&& value) {
    m_s3OutputLocationHasBeenSet = true;
    m_s3OutputLocation = std::forward<S3OutputLocationT>(value);
  }
  template <typename S3OutputLocationT = Aws::String>
  AthenaStepMetadata& WithS3OutputLocation(S3OutputLocationT&& value) {
    SetS3OutputLocation(std::forward<S3OutputLocationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_queryExecutionId;

  Aws::String m_s3OutputLocation;
  bool m_queryExecutionIdHasBeenSet = false;
  bool m_s3OutputLocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws

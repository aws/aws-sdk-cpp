/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace S3Tables {
namespace Model {

/**
 * <p>Contains information about the source of a replicated table.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/ReplicationInformation">AWS
 * API Reference</a></p>
 */
class ReplicationInformation {
 public:
  AWS_S3TABLES_API ReplicationInformation() = default;
  AWS_S3TABLES_API ReplicationInformation(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API ReplicationInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the source table from which this table is
   * replicated.</p>
   */
  inline const Aws::String& GetSourceTableARN() const { return m_sourceTableARN; }
  inline bool SourceTableARNHasBeenSet() const { return m_sourceTableARNHasBeenSet; }
  template <typename SourceTableARNT = Aws::String>
  void SetSourceTableARN(SourceTableARNT&& value) {
    m_sourceTableARNHasBeenSet = true;
    m_sourceTableARN = std::forward<SourceTableARNT>(value);
  }
  template <typename SourceTableARNT = Aws::String>
  ReplicationInformation& WithSourceTableARN(SourceTableARNT&& value) {
    SetSourceTableARN(std::forward<SourceTableARNT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceTableARN;
  bool m_sourceTableARNHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws

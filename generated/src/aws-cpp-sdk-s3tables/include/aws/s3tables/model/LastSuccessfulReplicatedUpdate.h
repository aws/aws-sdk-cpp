/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
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
 * <p>Contains information about the most recent successful replication update to a
 * destination.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/LastSuccessfulReplicatedUpdate">AWS
 * API Reference</a></p>
 */
class LastSuccessfulReplicatedUpdate {
 public:
  AWS_S3TABLES_API LastSuccessfulReplicatedUpdate() = default;
  AWS_S3TABLES_API LastSuccessfulReplicatedUpdate(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API LastSuccessfulReplicatedUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The S3 location of the metadata that was successfully replicated.</p>
   */
  inline const Aws::String& GetMetadataLocation() const { return m_metadataLocation; }
  inline bool MetadataLocationHasBeenSet() const { return m_metadataLocationHasBeenSet; }
  template <typename MetadataLocationT = Aws::String>
  void SetMetadataLocation(MetadataLocationT&& value) {
    m_metadataLocationHasBeenSet = true;
    m_metadataLocation = std::forward<MetadataLocationT>(value);
  }
  template <typename MetadataLocationT = Aws::String>
  LastSuccessfulReplicatedUpdate& WithMetadataLocation(MetadataLocationT&& value) {
    SetMetadataLocation(std::forward<MetadataLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the replication update completed successfully.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  LastSuccessfulReplicatedUpdate& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_metadataLocation;
  bool m_metadataLocationHasBeenSet = false;

  Aws::Utils::DateTime m_timestamp{};
  bool m_timestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws

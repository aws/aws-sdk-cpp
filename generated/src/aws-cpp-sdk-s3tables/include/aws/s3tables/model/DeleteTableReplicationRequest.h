/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3TablesRequest.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace S3Tables {
namespace Model {

/**
 */
class DeleteTableReplicationRequest : public S3TablesRequest {
 public:
  AWS_S3TABLES_API DeleteTableReplicationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteTableReplication"; }

  AWS_S3TABLES_API Aws::String SerializePayload() const override;

  AWS_S3TABLES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the table.</p>
   */
  inline const Aws::String& GetTableArn() const { return m_tableArn; }
  inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }
  template <typename TableArnT = Aws::String>
  void SetTableArn(TableArnT&& value) {
    m_tableArnHasBeenSet = true;
    m_tableArn = std::forward<TableArnT>(value);
  }
  template <typename TableArnT = Aws::String>
  DeleteTableReplicationRequest& WithTableArn(TableArnT&& value) {
    SetTableArn(std::forward<TableArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A version token from a previous GetTableReplication call. Use this token to
   * ensure you're deleting the expected version of the configuration.</p>
   */
  inline const Aws::String& GetVersionToken() const { return m_versionToken; }
  inline bool VersionTokenHasBeenSet() const { return m_versionTokenHasBeenSet; }
  template <typename VersionTokenT = Aws::String>
  void SetVersionToken(VersionTokenT&& value) {
    m_versionTokenHasBeenSet = true;
    m_versionToken = std::forward<VersionTokenT>(value);
  }
  template <typename VersionTokenT = Aws::String>
  DeleteTableReplicationRequest& WithVersionToken(VersionTokenT&& value) {
    SetVersionToken(std::forward<VersionTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tableArn;

  Aws::String m_versionToken;
  bool m_tableArnHasBeenSet = false;
  bool m_versionTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws

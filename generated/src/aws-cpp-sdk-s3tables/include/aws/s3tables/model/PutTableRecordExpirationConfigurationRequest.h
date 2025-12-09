/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3TablesRequest.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/TableRecordExpirationConfigurationValue.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace S3Tables {
namespace Model {

/**
 */
class PutTableRecordExpirationConfigurationRequest : public S3TablesRequest {
 public:
  AWS_S3TABLES_API PutTableRecordExpirationConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutTableRecordExpirationConfiguration"; }

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
  PutTableRecordExpirationConfigurationRequest& WithTableArn(TableArnT&& value) {
    SetTableArn(std::forward<TableArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The record expiration configuration to apply to the table, including the
   * status (<code>enabled</code> or <code>disabled</code>) and retention period in
   * days.</p>
   */
  inline const TableRecordExpirationConfigurationValue& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = TableRecordExpirationConfigurationValue>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = TableRecordExpirationConfigurationValue>
  PutTableRecordExpirationConfigurationRequest& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tableArn;

  TableRecordExpirationConfigurationValue m_value;
  bool m_tableArnHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws

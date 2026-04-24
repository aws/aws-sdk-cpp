/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/simpledbv2/SimpleDBv2Request.h>
#include <aws/simpledbv2/SimpleDBv2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SimpleDBv2 {
namespace Model {

/**
 */
class GetExportRequest : public SimpleDBv2Request {
 public:
  AWS_SIMPLEDBV2_API GetExportRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetExport"; }

  AWS_SIMPLEDBV2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Unique ARN identifier of the export.</p>
   */
  inline const Aws::String& GetExportArn() const { return m_exportArn; }
  inline bool ExportArnHasBeenSet() const { return m_exportArnHasBeenSet; }
  template <typename ExportArnT = Aws::String>
  void SetExportArn(ExportArnT&& value) {
    m_exportArnHasBeenSet = true;
    m_exportArn = std::forward<ExportArnT>(value);
  }
  template <typename ExportArnT = Aws::String>
  GetExportRequest& WithExportArn(ExportArnT&& value) {
    SetExportArn(std::forward<ExportArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_exportArn;
  bool m_exportArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace SimpleDBv2
}  // namespace Aws

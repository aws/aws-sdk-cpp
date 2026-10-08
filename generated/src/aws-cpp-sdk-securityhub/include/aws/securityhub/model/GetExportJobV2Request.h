/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SecurityHub {
namespace Model {

/**
 */
class GetExportJobV2Request : public SecurityHubRequest {
 public:
  AWS_SECURITYHUB_API GetExportJobV2Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetExportJobV2"; }

  AWS_SECURITYHUB_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the export job to retrieve. This is the value
   * returned by <code>StartExportJobV2</code>.</p>
   */
  inline const Aws::String& GetExportJobId() const { return m_exportJobId; }
  inline bool ExportJobIdHasBeenSet() const { return m_exportJobIdHasBeenSet; }
  template <typename ExportJobIdT = Aws::String>
  void SetExportJobId(ExportJobIdT&& value) {
    m_exportJobIdHasBeenSet = true;
    m_exportJobId = std::forward<ExportJobIdT>(value);
  }
  template <typename ExportJobIdT = Aws::String>
  GetExportJobV2Request& WithExportJobId(ExportJobIdT&& value) {
    SetExportJobId(std::forward<ExportJobIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_exportJobId;
  bool m_exportJobIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws

/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>

#include <utility>

namespace Aws {
namespace CloudWatch {
namespace Model {

/**
 */
class GetDatasetRequest : public CloudWatchRequest {
 public:
  AWS_CLOUDWATCH_API GetDatasetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetDataset"; }

  AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies the identifier of the dataset to retrieve. For the
   * <code>default</code> dataset, you can specify either <code>default</code> or the
   * full dataset Amazon Resource Name (ARN) in the format
   * <code>arn:aws:cloudwatch:<i>Region</i>:<i>account-id</i>:dataset/default</code>.</p>
   */
  inline const Aws::String& GetDatasetIdentifier() const { return m_datasetIdentifier; }
  inline bool DatasetIdentifierHasBeenSet() const { return m_datasetIdentifierHasBeenSet; }
  template <typename DatasetIdentifierT = Aws::String>
  void SetDatasetIdentifier(DatasetIdentifierT&& value) {
    m_datasetIdentifierHasBeenSet = true;
    m_datasetIdentifier = std::forward<DatasetIdentifierT>(value);
  }
  template <typename DatasetIdentifierT = Aws::String>
  GetDatasetRequest& WithDatasetIdentifier(DatasetIdentifierT&& value) {
    SetDatasetIdentifier(std::forward<DatasetIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_datasetIdentifier;
  bool m_datasetIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws

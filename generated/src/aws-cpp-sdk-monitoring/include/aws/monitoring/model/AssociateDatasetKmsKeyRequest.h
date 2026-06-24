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
class AssociateDatasetKmsKeyRequest : public CloudWatchRequest {
 public:
  AWS_CLOUDWATCH_API AssociateDatasetKmsKeyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AssociateDatasetKmsKey"; }

  AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies the identifier of the dataset that you want to associate the KMS
   * key with. For the <code>default</code> dataset, you can specify either
   * <code>default</code> or the full dataset Amazon Resource Name (ARN) in the
   * format
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
  AssociateDatasetKmsKeyRequest& WithDatasetIdentifier(DatasetIdentifierT&& value) {
    SetDatasetIdentifier(std::forward<DatasetIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the Amazon Resource Name (ARN) of the customer managed KMS key to
   * associate with the dataset. The key must be a symmetric encryption KMS key
   * (<code>SYMMETRIC_DEFAULT</code>) in the same Amazon Web Services Region as the
   * dataset.</p> <p>The ARN must be in the format
   * <code>arn:aws:kms:<i>Region</i>:<i>account-id</i>:key/<i>key-id</i> </code>. Key
   * IDs, aliases, and alias ARNs are not accepted.</p> <p>For more information about
   * KMS key ARNs, see <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">Key
   * ARN</a> in the <i>Amazon Web Services Key Management Service Developer
   * Guide</i>.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  AssociateDatasetKmsKeyRequest& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_datasetIdentifier;

  Aws::String m_kmsKeyArn;
  bool m_datasetIdentifierHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws

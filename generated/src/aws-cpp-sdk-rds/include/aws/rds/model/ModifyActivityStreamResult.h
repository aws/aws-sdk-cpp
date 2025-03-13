/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ActivityStreamStatus.h>
#include <aws/rds/model/ActivityStreamMode.h>
#include <aws/rds/model/ActivityStreamPolicyStatus.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  class ModifyActivityStreamResult
  {
  public:
    AWS_RDS_API ModifyActivityStreamResult() = default;
    AWS_RDS_API ModifyActivityStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API ModifyActivityStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of messages in the
     * database activity stream.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    ModifyActivityStreamResult& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Kinesis data stream to be used for the database
     * activity stream.</p>
     */
    inline const Aws::String& GetKinesisStreamName() const { return m_kinesisStreamName; }
    template<typename KinesisStreamNameT = Aws::String>
    void SetKinesisStreamName(KinesisStreamNameT&& value) { m_kinesisStreamNameHasBeenSet = true; m_kinesisStreamName = std::forward<KinesisStreamNameT>(value); }
    template<typename KinesisStreamNameT = Aws::String>
    ModifyActivityStreamResult& WithKinesisStreamName(KinesisStreamNameT&& value) { SetKinesisStreamName(std::forward<KinesisStreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the modification to the database activity stream.</p>
     */
    inline ActivityStreamStatus GetStatus() const { return m_status; }
    inline void SetStatus(ActivityStreamStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ModifyActivityStreamResult& WithStatus(ActivityStreamStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of the database activity stream.</p>
     */
    inline ActivityStreamMode GetMode() const { return m_mode; }
    inline void SetMode(ActivityStreamMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline ModifyActivityStreamResult& WithMode(ActivityStreamMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether engine-native audit fields are included in the database
     * activity stream.</p>
     */
    inline bool GetEngineNativeAuditFieldsIncluded() const { return m_engineNativeAuditFieldsIncluded; }
    inline void SetEngineNativeAuditFieldsIncluded(bool value) { m_engineNativeAuditFieldsIncludedHasBeenSet = true; m_engineNativeAuditFieldsIncluded = value; }
    inline ModifyActivityStreamResult& WithEngineNativeAuditFieldsIncluded(bool value) { SetEngineNativeAuditFieldsIncluded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the modification to the policy state of the database activity
     * stream.</p>
     */
    inline ActivityStreamPolicyStatus GetPolicyStatus() const { return m_policyStatus; }
    inline void SetPolicyStatus(ActivityStreamPolicyStatus value) { m_policyStatusHasBeenSet = true; m_policyStatus = value; }
    inline ModifyActivityStreamResult& WithPolicyStatus(ActivityStreamPolicyStatus value) { SetPolicyStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyActivityStreamResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_kinesisStreamName;
    bool m_kinesisStreamNameHasBeenSet = false;

    ActivityStreamStatus m_status{ActivityStreamStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ActivityStreamMode m_mode{ActivityStreamMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    bool m_engineNativeAuditFieldsIncluded{false};
    bool m_engineNativeAuditFieldsIncludedHasBeenSet = false;

    ActivityStreamPolicyStatus m_policyStatus{ActivityStreamPolicyStatus::NOT_SET};
    bool m_policyStatusHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws

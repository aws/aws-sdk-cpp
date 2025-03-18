/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ActivityStreamStatus.h>
#include <aws/rds/model/ActivityStreamMode.h>
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
  class StartActivityStreamResult
  {
  public:
    AWS_RDS_API StartActivityStreamResult() = default;
    AWS_RDS_API StartActivityStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API StartActivityStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of messages in the
     * database activity stream.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    StartActivityStreamResult& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
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
    StartActivityStreamResult& WithKinesisStreamName(KinesisStreamNameT&& value) { SetKinesisStreamName(std::forward<KinesisStreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the database activity stream.</p>
     */
    inline ActivityStreamStatus GetStatus() const { return m_status; }
    inline void SetStatus(ActivityStreamStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StartActivityStreamResult& WithStatus(ActivityStreamStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of the database activity stream.</p>
     */
    inline ActivityStreamMode GetMode() const { return m_mode; }
    inline void SetMode(ActivityStreamMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline StartActivityStreamResult& WithMode(ActivityStreamMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not the database activity stream will start as soon as
     * possible, regardless of the maintenance window for the database.</p>
     */
    inline bool GetApplyImmediately() const { return m_applyImmediately; }
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }
    inline StartActivityStreamResult& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether engine-native audit fields are included in the database
     * activity stream.</p>
     */
    inline bool GetEngineNativeAuditFieldsIncluded() const { return m_engineNativeAuditFieldsIncluded; }
    inline void SetEngineNativeAuditFieldsIncluded(bool value) { m_engineNativeAuditFieldsIncludedHasBeenSet = true; m_engineNativeAuditFieldsIncluded = value; }
    inline StartActivityStreamResult& WithEngineNativeAuditFieldsIncluded(bool value) { SetEngineNativeAuditFieldsIncluded(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    StartActivityStreamResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
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

    bool m_applyImmediately{false};
    bool m_applyImmediatelyHasBeenSet = false;

    bool m_engineNativeAuditFieldsIncluded{false};
    bool m_engineNativeAuditFieldsIncludedHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws

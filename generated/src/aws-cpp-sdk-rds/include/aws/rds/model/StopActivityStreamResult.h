/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ActivityStreamStatus.h>
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
  class StopActivityStreamResult
  {
  public:
    AWS_RDS_API StopActivityStreamResult() = default;
    AWS_RDS_API StopActivityStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API StopActivityStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier used for encrypting messages in
     * the database activity stream.</p> <p>The Amazon Web Services KMS key identifier
     * is the key ARN, key ID, alias ARN, or alias name for the KMS key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    StopActivityStreamResult& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Kinesis data stream used for the database activity
     * stream.</p>
     */
    inline const Aws::String& GetKinesisStreamName() const { return m_kinesisStreamName; }
    template<typename KinesisStreamNameT = Aws::String>
    void SetKinesisStreamName(KinesisStreamNameT&& value) { m_kinesisStreamNameHasBeenSet = true; m_kinesisStreamName = std::forward<KinesisStreamNameT>(value); }
    template<typename KinesisStreamNameT = Aws::String>
    StopActivityStreamResult& WithKinesisStreamName(KinesisStreamNameT&& value) { SetKinesisStreamName(std::forward<KinesisStreamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the database activity stream.</p>
     */
    inline ActivityStreamStatus GetStatus() const { return m_status; }
    inline void SetStatus(ActivityStreamStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StopActivityStreamResult& WithStatus(ActivityStreamStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    StopActivityStreamResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_kinesisStreamName;
    bool m_kinesisStreamNameHasBeenSet = false;

    ActivityStreamStatus m_status{ActivityStreamStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws

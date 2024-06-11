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
    AWS_RDS_API StopActivityStreamResult();
    AWS_RDS_API StopActivityStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API StopActivityStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier used for encrypting messages in
     * the database activity stream.</p> <p>The Amazon Web Services KMS key identifier
     * is the key ARN, key ID, alias ARN, or alias name for the KMS key.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }
    inline StopActivityStreamResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline StopActivityStreamResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline StopActivityStreamResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Kinesis data stream used for the database activity
     * stream.</p>
     */
    inline const Aws::String& GetKinesisStreamName() const{ return m_kinesisStreamName; }
    inline void SetKinesisStreamName(const Aws::String& value) { m_kinesisStreamName = value; }
    inline void SetKinesisStreamName(Aws::String&& value) { m_kinesisStreamName = std::move(value); }
    inline void SetKinesisStreamName(const char* value) { m_kinesisStreamName.assign(value); }
    inline StopActivityStreamResult& WithKinesisStreamName(const Aws::String& value) { SetKinesisStreamName(value); return *this;}
    inline StopActivityStreamResult& WithKinesisStreamName(Aws::String&& value) { SetKinesisStreamName(std::move(value)); return *this;}
    inline StopActivityStreamResult& WithKinesisStreamName(const char* value) { SetKinesisStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the database activity stream.</p>
     */
    inline const ActivityStreamStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ActivityStreamStatus& value) { m_status = value; }
    inline void SetStatus(ActivityStreamStatus&& value) { m_status = std::move(value); }
    inline StopActivityStreamResult& WithStatus(const ActivityStreamStatus& value) { SetStatus(value); return *this;}
    inline StopActivityStreamResult& WithStatus(ActivityStreamStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline StopActivityStreamResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline StopActivityStreamResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyId;

    Aws::String m_kinesisStreamName;

    ActivityStreamStatus m_status;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws

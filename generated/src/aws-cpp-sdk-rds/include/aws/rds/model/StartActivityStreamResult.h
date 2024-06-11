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
    AWS_RDS_API StartActivityStreamResult();
    AWS_RDS_API StartActivityStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API StartActivityStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of messages in the
     * database activity stream.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }
    inline StartActivityStreamResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline StartActivityStreamResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline StartActivityStreamResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Kinesis data stream to be used for the database
     * activity stream.</p>
     */
    inline const Aws::String& GetKinesisStreamName() const{ return m_kinesisStreamName; }
    inline void SetKinesisStreamName(const Aws::String& value) { m_kinesisStreamName = value; }
    inline void SetKinesisStreamName(Aws::String&& value) { m_kinesisStreamName = std::move(value); }
    inline void SetKinesisStreamName(const char* value) { m_kinesisStreamName.assign(value); }
    inline StartActivityStreamResult& WithKinesisStreamName(const Aws::String& value) { SetKinesisStreamName(value); return *this;}
    inline StartActivityStreamResult& WithKinesisStreamName(Aws::String&& value) { SetKinesisStreamName(std::move(value)); return *this;}
    inline StartActivityStreamResult& WithKinesisStreamName(const char* value) { SetKinesisStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the database activity stream.</p>
     */
    inline const ActivityStreamStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ActivityStreamStatus& value) { m_status = value; }
    inline void SetStatus(ActivityStreamStatus&& value) { m_status = std::move(value); }
    inline StartActivityStreamResult& WithStatus(const ActivityStreamStatus& value) { SetStatus(value); return *this;}
    inline StartActivityStreamResult& WithStatus(ActivityStreamStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of the database activity stream.</p>
     */
    inline const ActivityStreamMode& GetMode() const{ return m_mode; }
    inline void SetMode(const ActivityStreamMode& value) { m_mode = value; }
    inline void SetMode(ActivityStreamMode&& value) { m_mode = std::move(value); }
    inline StartActivityStreamResult& WithMode(const ActivityStreamMode& value) { SetMode(value); return *this;}
    inline StartActivityStreamResult& WithMode(ActivityStreamMode&& value) { SetMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not the database activity stream will start as soon as
     * possible, regardless of the maintenance window for the database.</p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }
    inline void SetApplyImmediately(bool value) { m_applyImmediately = value; }
    inline StartActivityStreamResult& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether engine-native audit fields are included in the database
     * activity stream.</p>
     */
    inline bool GetEngineNativeAuditFieldsIncluded() const{ return m_engineNativeAuditFieldsIncluded; }
    inline void SetEngineNativeAuditFieldsIncluded(bool value) { m_engineNativeAuditFieldsIncluded = value; }
    inline StartActivityStreamResult& WithEngineNativeAuditFieldsIncluded(bool value) { SetEngineNativeAuditFieldsIncluded(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline StartActivityStreamResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline StartActivityStreamResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyId;

    Aws::String m_kinesisStreamName;

    ActivityStreamStatus m_status;

    ActivityStreamMode m_mode;

    bool m_applyImmediately;

    bool m_engineNativeAuditFieldsIncluded;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws

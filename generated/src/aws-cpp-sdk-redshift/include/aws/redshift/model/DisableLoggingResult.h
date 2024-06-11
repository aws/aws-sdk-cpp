/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/redshift/model/LogDestinationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
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
namespace Redshift
{
namespace Model
{
  /**
   * <p>Describes the status of logging for a cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/LoggingStatus">AWS
   * API Reference</a></p>
   */
  class DisableLoggingResult
  {
  public:
    AWS_REDSHIFT_API DisableLoggingResult();
    AWS_REDSHIFT_API DisableLoggingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DisableLoggingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p> <code>true</code> if logging is on, <code>false</code> if logging is
     * off.</p>
     */
    inline bool GetLoggingEnabled() const{ return m_loggingEnabled; }
    inline void SetLoggingEnabled(bool value) { m_loggingEnabled = value; }
    inline DisableLoggingResult& WithLoggingEnabled(bool value) { SetLoggingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the S3 bucket where the log files are stored.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }
    inline void SetBucketName(const Aws::String& value) { m_bucketName = value; }
    inline void SetBucketName(Aws::String&& value) { m_bucketName = std::move(value); }
    inline void SetBucketName(const char* value) { m_bucketName.assign(value); }
    inline DisableLoggingResult& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}
    inline DisableLoggingResult& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}
    inline DisableLoggingResult& WithBucketName(const char* value) { SetBucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix applied to the log file names.</p>
     */
    inline const Aws::String& GetS3KeyPrefix() const{ return m_s3KeyPrefix; }
    inline void SetS3KeyPrefix(const Aws::String& value) { m_s3KeyPrefix = value; }
    inline void SetS3KeyPrefix(Aws::String&& value) { m_s3KeyPrefix = std::move(value); }
    inline void SetS3KeyPrefix(const char* value) { m_s3KeyPrefix.assign(value); }
    inline DisableLoggingResult& WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}
    inline DisableLoggingResult& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(std::move(value)); return *this;}
    inline DisableLoggingResult& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that logs were delivered.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulDeliveryTime() const{ return m_lastSuccessfulDeliveryTime; }
    inline void SetLastSuccessfulDeliveryTime(const Aws::Utils::DateTime& value) { m_lastSuccessfulDeliveryTime = value; }
    inline void SetLastSuccessfulDeliveryTime(Aws::Utils::DateTime&& value) { m_lastSuccessfulDeliveryTime = std::move(value); }
    inline DisableLoggingResult& WithLastSuccessfulDeliveryTime(const Aws::Utils::DateTime& value) { SetLastSuccessfulDeliveryTime(value); return *this;}
    inline DisableLoggingResult& WithLastSuccessfulDeliveryTime(Aws::Utils::DateTime&& value) { SetLastSuccessfulDeliveryTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time when logs failed to be delivered.</p>
     */
    inline const Aws::Utils::DateTime& GetLastFailureTime() const{ return m_lastFailureTime; }
    inline void SetLastFailureTime(const Aws::Utils::DateTime& value) { m_lastFailureTime = value; }
    inline void SetLastFailureTime(Aws::Utils::DateTime&& value) { m_lastFailureTime = std::move(value); }
    inline DisableLoggingResult& WithLastFailureTime(const Aws::Utils::DateTime& value) { SetLastFailureTime(value); return *this;}
    inline DisableLoggingResult& WithLastFailureTime(Aws::Utils::DateTime&& value) { SetLastFailureTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message indicating that logs failed to be delivered.</p>
     */
    inline const Aws::String& GetLastFailureMessage() const{ return m_lastFailureMessage; }
    inline void SetLastFailureMessage(const Aws::String& value) { m_lastFailureMessage = value; }
    inline void SetLastFailureMessage(Aws::String&& value) { m_lastFailureMessage = std::move(value); }
    inline void SetLastFailureMessage(const char* value) { m_lastFailureMessage.assign(value); }
    inline DisableLoggingResult& WithLastFailureMessage(const Aws::String& value) { SetLastFailureMessage(value); return *this;}
    inline DisableLoggingResult& WithLastFailureMessage(Aws::String&& value) { SetLastFailureMessage(std::move(value)); return *this;}
    inline DisableLoggingResult& WithLastFailureMessage(const char* value) { SetLastFailureMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log destination type. An enum with possible values of <code>s3</code> and
     * <code>cloudwatch</code>.</p>
     */
    inline const LogDestinationType& GetLogDestinationType() const{ return m_logDestinationType; }
    inline void SetLogDestinationType(const LogDestinationType& value) { m_logDestinationType = value; }
    inline void SetLogDestinationType(LogDestinationType&& value) { m_logDestinationType = std::move(value); }
    inline DisableLoggingResult& WithLogDestinationType(const LogDestinationType& value) { SetLogDestinationType(value); return *this;}
    inline DisableLoggingResult& WithLogDestinationType(LogDestinationType&& value) { SetLogDestinationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of exported log types. Possible values are
     * <code>connectionlog</code>, <code>useractivitylog</code>, and
     * <code>userlog</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogExports() const{ return m_logExports; }
    inline void SetLogExports(const Aws::Vector<Aws::String>& value) { m_logExports = value; }
    inline void SetLogExports(Aws::Vector<Aws::String>&& value) { m_logExports = std::move(value); }
    inline DisableLoggingResult& WithLogExports(const Aws::Vector<Aws::String>& value) { SetLogExports(value); return *this;}
    inline DisableLoggingResult& WithLogExports(Aws::Vector<Aws::String>&& value) { SetLogExports(std::move(value)); return *this;}
    inline DisableLoggingResult& AddLogExports(const Aws::String& value) { m_logExports.push_back(value); return *this; }
    inline DisableLoggingResult& AddLogExports(Aws::String&& value) { m_logExports.push_back(std::move(value)); return *this; }
    inline DisableLoggingResult& AddLogExports(const char* value) { m_logExports.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DisableLoggingResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DisableLoggingResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    bool m_loggingEnabled;

    Aws::String m_bucketName;

    Aws::String m_s3KeyPrefix;

    Aws::Utils::DateTime m_lastSuccessfulDeliveryTime;

    Aws::Utils::DateTime m_lastFailureTime;

    Aws::String m_lastFailureMessage;

    LogDestinationType m_logDestinationType;

    Aws::Vector<Aws::String> m_logExports;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

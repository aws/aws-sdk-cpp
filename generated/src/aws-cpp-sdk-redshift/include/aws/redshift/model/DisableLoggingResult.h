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
    AWS_REDSHIFT_API DisableLoggingResult() = default;
    AWS_REDSHIFT_API DisableLoggingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DisableLoggingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p> <code>true</code> if logging is on, <code>false</code> if logging is
     * off.</p>
     */
    inline bool GetLoggingEnabled() const { return m_loggingEnabled; }
    inline void SetLoggingEnabled(bool value) { m_loggingEnabledHasBeenSet = true; m_loggingEnabled = value; }
    inline DisableLoggingResult& WithLoggingEnabled(bool value) { SetLoggingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the S3 bucket where the log files are stored.</p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    DisableLoggingResult& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix applied to the log file names.</p>
     */
    inline const Aws::String& GetS3KeyPrefix() const { return m_s3KeyPrefix; }
    template<typename S3KeyPrefixT = Aws::String>
    void SetS3KeyPrefix(S3KeyPrefixT&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = std::forward<S3KeyPrefixT>(value); }
    template<typename S3KeyPrefixT = Aws::String>
    DisableLoggingResult& WithS3KeyPrefix(S3KeyPrefixT&& value) { SetS3KeyPrefix(std::forward<S3KeyPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that logs were delivered.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulDeliveryTime() const { return m_lastSuccessfulDeliveryTime; }
    template<typename LastSuccessfulDeliveryTimeT = Aws::Utils::DateTime>
    void SetLastSuccessfulDeliveryTime(LastSuccessfulDeliveryTimeT&& value) { m_lastSuccessfulDeliveryTimeHasBeenSet = true; m_lastSuccessfulDeliveryTime = std::forward<LastSuccessfulDeliveryTimeT>(value); }
    template<typename LastSuccessfulDeliveryTimeT = Aws::Utils::DateTime>
    DisableLoggingResult& WithLastSuccessfulDeliveryTime(LastSuccessfulDeliveryTimeT&& value) { SetLastSuccessfulDeliveryTime(std::forward<LastSuccessfulDeliveryTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time when logs failed to be delivered.</p>
     */
    inline const Aws::Utils::DateTime& GetLastFailureTime() const { return m_lastFailureTime; }
    template<typename LastFailureTimeT = Aws::Utils::DateTime>
    void SetLastFailureTime(LastFailureTimeT&& value) { m_lastFailureTimeHasBeenSet = true; m_lastFailureTime = std::forward<LastFailureTimeT>(value); }
    template<typename LastFailureTimeT = Aws::Utils::DateTime>
    DisableLoggingResult& WithLastFailureTime(LastFailureTimeT&& value) { SetLastFailureTime(std::forward<LastFailureTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message indicating that logs failed to be delivered.</p>
     */
    inline const Aws::String& GetLastFailureMessage() const { return m_lastFailureMessage; }
    template<typename LastFailureMessageT = Aws::String>
    void SetLastFailureMessage(LastFailureMessageT&& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = std::forward<LastFailureMessageT>(value); }
    template<typename LastFailureMessageT = Aws::String>
    DisableLoggingResult& WithLastFailureMessage(LastFailureMessageT&& value) { SetLastFailureMessage(std::forward<LastFailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log destination type. An enum with possible values of <code>s3</code> and
     * <code>cloudwatch</code>.</p>
     */
    inline LogDestinationType GetLogDestinationType() const { return m_logDestinationType; }
    inline void SetLogDestinationType(LogDestinationType value) { m_logDestinationTypeHasBeenSet = true; m_logDestinationType = value; }
    inline DisableLoggingResult& WithLogDestinationType(LogDestinationType value) { SetLogDestinationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of exported log types. Possible values are
     * <code>connectionlog</code>, <code>useractivitylog</code>, and
     * <code>userlog</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogExports() const { return m_logExports; }
    template<typename LogExportsT = Aws::Vector<Aws::String>>
    void SetLogExports(LogExportsT&& value) { m_logExportsHasBeenSet = true; m_logExports = std::forward<LogExportsT>(value); }
    template<typename LogExportsT = Aws::Vector<Aws::String>>
    DisableLoggingResult& WithLogExports(LogExportsT&& value) { SetLogExports(std::forward<LogExportsT>(value)); return *this;}
    template<typename LogExportsT = Aws::String>
    DisableLoggingResult& AddLogExports(LogExportsT&& value) { m_logExportsHasBeenSet = true; m_logExports.emplace_back(std::forward<LogExportsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DisableLoggingResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    bool m_loggingEnabled{false};
    bool m_loggingEnabledHasBeenSet = false;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulDeliveryTime{};
    bool m_lastSuccessfulDeliveryTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastFailureTime{};
    bool m_lastFailureTimeHasBeenSet = false;

    Aws::String m_lastFailureMessage;
    bool m_lastFailureMessageHasBeenSet = false;

    LogDestinationType m_logDestinationType{LogDestinationType::NOT_SET};
    bool m_logDestinationTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_logExports;
    bool m_logExportsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

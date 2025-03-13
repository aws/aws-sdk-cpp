/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/LoggingEnabled.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p>Container for logging status information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/BucketLoggingStatus">AWS
   * API Reference</a></p>
   */
  class BucketLoggingStatus
  {
  public:
    AWS_S3_API BucketLoggingStatus() = default;
    AWS_S3_API BucketLoggingStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API BucketLoggingStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    
    inline const LoggingEnabled& GetLoggingEnabled() const { return m_loggingEnabled; }
    inline bool LoggingEnabledHasBeenSet() const { return m_loggingEnabledHasBeenSet; }
    template<typename LoggingEnabledT = LoggingEnabled>
    void SetLoggingEnabled(LoggingEnabledT&& value) { m_loggingEnabledHasBeenSet = true; m_loggingEnabled = std::forward<LoggingEnabledT>(value); }
    template<typename LoggingEnabledT = LoggingEnabled>
    BucketLoggingStatus& WithLoggingEnabled(LoggingEnabledT&& value) { SetLoggingEnabled(std::forward<LoggingEnabledT>(value)); return *this;}
    ///@}
  private:

    LoggingEnabled m_loggingEnabled;
    bool m_loggingEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws

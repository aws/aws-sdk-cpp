/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>This data type is used as a response element to
   * <code>DescribeDBLogFiles</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeDBLogFilesDetails">AWS
   * API Reference</a></p>
   */
  class DescribeDBLogFilesDetails
  {
  public:
    AWS_RDS_API DescribeDBLogFilesDetails() = default;
    AWS_RDS_API DescribeDBLogFilesDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DescribeDBLogFilesDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the log file for the specified DB instance.</p>
     */
    inline const Aws::String& GetLogFileName() const { return m_logFileName; }
    inline bool LogFileNameHasBeenSet() const { return m_logFileNameHasBeenSet; }
    template<typename LogFileNameT = Aws::String>
    void SetLogFileName(LogFileNameT&& value) { m_logFileNameHasBeenSet = true; m_logFileName = std::forward<LogFileNameT>(value); }
    template<typename LogFileNameT = Aws::String>
    DescribeDBLogFilesDetails& WithLogFileName(LogFileNameT&& value) { SetLogFileName(std::forward<LogFileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A POSIX timestamp when the last log entry was written.</p>
     */
    inline long long GetLastWritten() const { return m_lastWritten; }
    inline bool LastWrittenHasBeenSet() const { return m_lastWrittenHasBeenSet; }
    inline void SetLastWritten(long long value) { m_lastWrittenHasBeenSet = true; m_lastWritten = value; }
    inline DescribeDBLogFilesDetails& WithLastWritten(long long value) { SetLastWritten(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of the log file for the specified DB instance.</p>
     */
    inline long long GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }
    inline DescribeDBLogFilesDetails& WithSize(long long value) { SetSize(value); return *this;}
    ///@}
  private:

    Aws::String m_logFileName;
    bool m_logFileNameHasBeenSet = false;

    long long m_lastWritten{0};
    bool m_lastWrittenHasBeenSet = false;

    long long m_size{0};
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws

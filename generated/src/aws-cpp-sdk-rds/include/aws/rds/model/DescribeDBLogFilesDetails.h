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
    AWS_RDS_API DescribeDBLogFilesDetails();
    AWS_RDS_API DescribeDBLogFilesDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API DescribeDBLogFilesDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the log file for the specified DB instance.</p>
     */
    inline const Aws::String& GetLogFileName() const{ return m_logFileName; }

    /**
     * <p>The name of the log file for the specified DB instance.</p>
     */
    inline bool LogFileNameHasBeenSet() const { return m_logFileNameHasBeenSet; }

    /**
     * <p>The name of the log file for the specified DB instance.</p>
     */
    inline void SetLogFileName(const Aws::String& value) { m_logFileNameHasBeenSet = true; m_logFileName = value; }

    /**
     * <p>The name of the log file for the specified DB instance.</p>
     */
    inline void SetLogFileName(Aws::String&& value) { m_logFileNameHasBeenSet = true; m_logFileName = std::move(value); }

    /**
     * <p>The name of the log file for the specified DB instance.</p>
     */
    inline void SetLogFileName(const char* value) { m_logFileNameHasBeenSet = true; m_logFileName.assign(value); }

    /**
     * <p>The name of the log file for the specified DB instance.</p>
     */
    inline DescribeDBLogFilesDetails& WithLogFileName(const Aws::String& value) { SetLogFileName(value); return *this;}

    /**
     * <p>The name of the log file for the specified DB instance.</p>
     */
    inline DescribeDBLogFilesDetails& WithLogFileName(Aws::String&& value) { SetLogFileName(std::move(value)); return *this;}

    /**
     * <p>The name of the log file for the specified DB instance.</p>
     */
    inline DescribeDBLogFilesDetails& WithLogFileName(const char* value) { SetLogFileName(value); return *this;}


    /**
     * <p>A POSIX timestamp when the last log entry was written.</p>
     */
    inline long long GetLastWritten() const{ return m_lastWritten; }

    /**
     * <p>A POSIX timestamp when the last log entry was written.</p>
     */
    inline bool LastWrittenHasBeenSet() const { return m_lastWrittenHasBeenSet; }

    /**
     * <p>A POSIX timestamp when the last log entry was written.</p>
     */
    inline void SetLastWritten(long long value) { m_lastWrittenHasBeenSet = true; m_lastWritten = value; }

    /**
     * <p>A POSIX timestamp when the last log entry was written.</p>
     */
    inline DescribeDBLogFilesDetails& WithLastWritten(long long value) { SetLastWritten(value); return *this;}


    /**
     * <p>The size, in bytes, of the log file for the specified DB instance.</p>
     */
    inline long long GetSize() const{ return m_size; }

    /**
     * <p>The size, in bytes, of the log file for the specified DB instance.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The size, in bytes, of the log file for the specified DB instance.</p>
     */
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The size, in bytes, of the log file for the specified DB instance.</p>
     */
    inline DescribeDBLogFilesDetails& WithSize(long long value) { SetSize(value); return *this;}

  private:

    Aws::String m_logFileName;
    bool m_logFileNameHasBeenSet = false;

    long long m_lastWritten;
    bool m_lastWrittenHasBeenSet = false;

    long long m_size;
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws

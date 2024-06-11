/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/JobReportFormat.h>
#include <aws/s3control/model/JobReportScope.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p>Contains the configuration parameters for a job-completion
   * report.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/JobReport">AWS
   * API Reference</a></p>
   */
  class JobReport
  {
  public:
    AWS_S3CONTROL_API JobReport();
    AWS_S3CONTROL_API JobReport(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API JobReport& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the bucket where specified job-completion
     * report will be stored.</p>  <p> <b>Directory buckets</b> - Directory
     * buckets aren't supported as a location for Batch Operations to store job
     * completion reports.</p> 
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }
    inline JobReport& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}
    inline JobReport& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}
    inline JobReport& WithBucket(const char* value) { SetBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of the specified job-completion report.</p>
     */
    inline const JobReportFormat& GetFormat() const{ return m_format; }
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
    inline void SetFormat(const JobReportFormat& value) { m_formatHasBeenSet = true; m_format = value; }
    inline void SetFormat(JobReportFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }
    inline JobReport& WithFormat(const JobReportFormat& value) { SetFormat(value); return *this;}
    inline JobReport& WithFormat(JobReportFormat&& value) { SetFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the specified job will generate a job-completion
     * report.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline JobReport& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional prefix to describe where in the specified bucket the
     * job-completion report will be stored. Amazon S3 stores the job-completion report
     * at <code>&lt;prefix&gt;/job-&lt;job-id&gt;/report.json</code>.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }
    inline JobReport& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}
    inline JobReport& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}
    inline JobReport& WithPrefix(const char* value) { SetPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the job-completion report will include details of all tasks
     * or only failed tasks.</p>
     */
    inline const JobReportScope& GetReportScope() const{ return m_reportScope; }
    inline bool ReportScopeHasBeenSet() const { return m_reportScopeHasBeenSet; }
    inline void SetReportScope(const JobReportScope& value) { m_reportScopeHasBeenSet = true; m_reportScope = value; }
    inline void SetReportScope(JobReportScope&& value) { m_reportScopeHasBeenSet = true; m_reportScope = std::move(value); }
    inline JobReport& WithReportScope(const JobReportScope& value) { SetReportScope(value); return *this;}
    inline JobReport& WithReportScope(JobReportScope&& value) { SetReportScope(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    JobReportFormat m_format;
    bool m_formatHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    JobReportScope m_reportScope;
    bool m_reportScopeHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws

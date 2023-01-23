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


    /**
     * <p>The Amazon Resource Name (ARN) for the bucket where specified job-completion
     * report will be stored.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The Amazon Resource Name (ARN) for the bucket where specified job-completion
     * report will be stored.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the bucket where specified job-completion
     * report will be stored.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the bucket where specified job-completion
     * report will be stored.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the bucket where specified job-completion
     * report will be stored.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the bucket where specified job-completion
     * report will be stored.</p>
     */
    inline JobReport& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the bucket where specified job-completion
     * report will be stored.</p>
     */
    inline JobReport& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the bucket where specified job-completion
     * report will be stored.</p>
     */
    inline JobReport& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The format of the specified job-completion report.</p>
     */
    inline const JobReportFormat& GetFormat() const{ return m_format; }

    /**
     * <p>The format of the specified job-completion report.</p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>The format of the specified job-completion report.</p>
     */
    inline void SetFormat(const JobReportFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>The format of the specified job-completion report.</p>
     */
    inline void SetFormat(JobReportFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>The format of the specified job-completion report.</p>
     */
    inline JobReport& WithFormat(const JobReportFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>The format of the specified job-completion report.</p>
     */
    inline JobReport& WithFormat(JobReportFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the specified job will generate a job-completion
     * report.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether the specified job will generate a job-completion
     * report.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether the specified job will generate a job-completion
     * report.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether the specified job will generate a job-completion
     * report.</p>
     */
    inline JobReport& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>An optional prefix to describe where in the specified bucket the
     * job-completion report will be stored. Amazon S3 stores the job-completion report
     * at <code>&lt;prefix&gt;/job-&lt;job-id&gt;/report.json</code>.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>An optional prefix to describe where in the specified bucket the
     * job-completion report will be stored. Amazon S3 stores the job-completion report
     * at <code>&lt;prefix&gt;/job-&lt;job-id&gt;/report.json</code>.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>An optional prefix to describe where in the specified bucket the
     * job-completion report will be stored. Amazon S3 stores the job-completion report
     * at <code>&lt;prefix&gt;/job-&lt;job-id&gt;/report.json</code>.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>An optional prefix to describe where in the specified bucket the
     * job-completion report will be stored. Amazon S3 stores the job-completion report
     * at <code>&lt;prefix&gt;/job-&lt;job-id&gt;/report.json</code>.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>An optional prefix to describe where in the specified bucket the
     * job-completion report will be stored. Amazon S3 stores the job-completion report
     * at <code>&lt;prefix&gt;/job-&lt;job-id&gt;/report.json</code>.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>An optional prefix to describe where in the specified bucket the
     * job-completion report will be stored. Amazon S3 stores the job-completion report
     * at <code>&lt;prefix&gt;/job-&lt;job-id&gt;/report.json</code>.</p>
     */
    inline JobReport& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>An optional prefix to describe where in the specified bucket the
     * job-completion report will be stored. Amazon S3 stores the job-completion report
     * at <code>&lt;prefix&gt;/job-&lt;job-id&gt;/report.json</code>.</p>
     */
    inline JobReport& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>An optional prefix to describe where in the specified bucket the
     * job-completion report will be stored. Amazon S3 stores the job-completion report
     * at <code>&lt;prefix&gt;/job-&lt;job-id&gt;/report.json</code>.</p>
     */
    inline JobReport& WithPrefix(const char* value) { SetPrefix(value); return *this;}


    /**
     * <p>Indicates whether the job-completion report will include details of all tasks
     * or only failed tasks.</p>
     */
    inline const JobReportScope& GetReportScope() const{ return m_reportScope; }

    /**
     * <p>Indicates whether the job-completion report will include details of all tasks
     * or only failed tasks.</p>
     */
    inline bool ReportScopeHasBeenSet() const { return m_reportScopeHasBeenSet; }

    /**
     * <p>Indicates whether the job-completion report will include details of all tasks
     * or only failed tasks.</p>
     */
    inline void SetReportScope(const JobReportScope& value) { m_reportScopeHasBeenSet = true; m_reportScope = value; }

    /**
     * <p>Indicates whether the job-completion report will include details of all tasks
     * or only failed tasks.</p>
     */
    inline void SetReportScope(JobReportScope&& value) { m_reportScopeHasBeenSet = true; m_reportScope = std::move(value); }

    /**
     * <p>Indicates whether the job-completion report will include details of all tasks
     * or only failed tasks.</p>
     */
    inline JobReport& WithReportScope(const JobReportScope& value) { SetReportScope(value); return *this;}

    /**
     * <p>Indicates whether the job-completion report will include details of all tasks
     * or only failed tasks.</p>
     */
    inline JobReport& WithReportScope(JobReportScope&& value) { SetReportScope(std::move(value)); return *this;}

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

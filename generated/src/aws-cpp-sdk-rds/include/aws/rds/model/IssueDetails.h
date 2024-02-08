/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/rds/model/PerformanceIssueDetails.h>
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
   * <p>The details of an issue with your DB instances, DB clusters, and DB parameter
   * groups.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/IssueDetails">AWS
   * API Reference</a></p>
   */
  class IssueDetails
  {
  public:
    AWS_RDS_API IssueDetails();
    AWS_RDS_API IssueDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API IssueDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A detailed description of the issue when the recommendation category is
     * <code>performance</code>.</p>
     */
    inline const PerformanceIssueDetails& GetPerformanceIssueDetails() const{ return m_performanceIssueDetails; }

    /**
     * <p>A detailed description of the issue when the recommendation category is
     * <code>performance</code>.</p>
     */
    inline bool PerformanceIssueDetailsHasBeenSet() const { return m_performanceIssueDetailsHasBeenSet; }

    /**
     * <p>A detailed description of the issue when the recommendation category is
     * <code>performance</code>.</p>
     */
    inline void SetPerformanceIssueDetails(const PerformanceIssueDetails& value) { m_performanceIssueDetailsHasBeenSet = true; m_performanceIssueDetails = value; }

    /**
     * <p>A detailed description of the issue when the recommendation category is
     * <code>performance</code>.</p>
     */
    inline void SetPerformanceIssueDetails(PerformanceIssueDetails&& value) { m_performanceIssueDetailsHasBeenSet = true; m_performanceIssueDetails = std::move(value); }

    /**
     * <p>A detailed description of the issue when the recommendation category is
     * <code>performance</code>.</p>
     */
    inline IssueDetails& WithPerformanceIssueDetails(const PerformanceIssueDetails& value) { SetPerformanceIssueDetails(value); return *this;}

    /**
     * <p>A detailed description of the issue when the recommendation category is
     * <code>performance</code>.</p>
     */
    inline IssueDetails& WithPerformanceIssueDetails(PerformanceIssueDetails&& value) { SetPerformanceIssueDetails(std::move(value)); return *this;}

  private:

    PerformanceIssueDetails m_performanceIssueDetails;
    bool m_performanceIssueDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws

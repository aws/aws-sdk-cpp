/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ReferenceDetails.h>
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
   * <p>The reference (threshold) for a metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/MetricReference">AWS
   * API Reference</a></p>
   */
  class MetricReference
  {
  public:
    AWS_RDS_API MetricReference();
    AWS_RDS_API MetricReference(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API MetricReference& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the metric reference.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the metric reference.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the metric reference.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the metric reference.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the metric reference.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the metric reference.</p>
     */
    inline MetricReference& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the metric reference.</p>
     */
    inline MetricReference& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the metric reference.</p>
     */
    inline MetricReference& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The details of a performance issue.</p>
     */
    inline const ReferenceDetails& GetReferenceDetails() const{ return m_referenceDetails; }

    /**
     * <p>The details of a performance issue.</p>
     */
    inline bool ReferenceDetailsHasBeenSet() const { return m_referenceDetailsHasBeenSet; }

    /**
     * <p>The details of a performance issue.</p>
     */
    inline void SetReferenceDetails(const ReferenceDetails& value) { m_referenceDetailsHasBeenSet = true; m_referenceDetails = value; }

    /**
     * <p>The details of a performance issue.</p>
     */
    inline void SetReferenceDetails(ReferenceDetails&& value) { m_referenceDetailsHasBeenSet = true; m_referenceDetails = std::move(value); }

    /**
     * <p>The details of a performance issue.</p>
     */
    inline MetricReference& WithReferenceDetails(const ReferenceDetails& value) { SetReferenceDetails(value); return *this;}

    /**
     * <p>The details of a performance issue.</p>
     */
    inline MetricReference& WithReferenceDetails(ReferenceDetails&& value) { SetReferenceDetails(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ReferenceDetails m_referenceDetails;
    bool m_referenceDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws

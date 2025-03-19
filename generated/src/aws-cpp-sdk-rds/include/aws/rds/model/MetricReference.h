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
    AWS_RDS_API MetricReference() = default;
    AWS_RDS_API MetricReference(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API MetricReference& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the metric reference.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MetricReference& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of a performance issue.</p>
     */
    inline const ReferenceDetails& GetReferenceDetails() const { return m_referenceDetails; }
    inline bool ReferenceDetailsHasBeenSet() const { return m_referenceDetailsHasBeenSet; }
    template<typename ReferenceDetailsT = ReferenceDetails>
    void SetReferenceDetails(ReferenceDetailsT&& value) { m_referenceDetailsHasBeenSet = true; m_referenceDetails = std::forward<ReferenceDetailsT>(value); }
    template<typename ReferenceDetailsT = ReferenceDetails>
    MetricReference& WithReferenceDetails(ReferenceDetailsT&& value) { SetReferenceDetails(std::forward<ReferenceDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ReferenceDetails m_referenceDetails;
    bool m_referenceDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws

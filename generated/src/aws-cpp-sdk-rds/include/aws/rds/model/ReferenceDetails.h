/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/rds/model/ScalarReferenceDetails.h>
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
   * <p>The reference details of a metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ReferenceDetails">AWS
   * API Reference</a></p>
   */
  class ReferenceDetails
  {
  public:
    AWS_RDS_API ReferenceDetails() = default;
    AWS_RDS_API ReferenceDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API ReferenceDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The metric reference details when the reference is a scalar.</p>
     */
    inline const ScalarReferenceDetails& GetScalarReferenceDetails() const { return m_scalarReferenceDetails; }
    inline bool ScalarReferenceDetailsHasBeenSet() const { return m_scalarReferenceDetailsHasBeenSet; }
    template<typename ScalarReferenceDetailsT = ScalarReferenceDetails>
    void SetScalarReferenceDetails(ScalarReferenceDetailsT&& value) { m_scalarReferenceDetailsHasBeenSet = true; m_scalarReferenceDetails = std::forward<ScalarReferenceDetailsT>(value); }
    template<typename ScalarReferenceDetailsT = ScalarReferenceDetails>
    ReferenceDetails& WithScalarReferenceDetails(ScalarReferenceDetailsT&& value) { SetScalarReferenceDetails(std::forward<ScalarReferenceDetailsT>(value)); return *this;}
    ///@}
  private:

    ScalarReferenceDetails m_scalarReferenceDetails;
    bool m_scalarReferenceDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws

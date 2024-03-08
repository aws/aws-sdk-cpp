/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

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
   * <p>The metric reference details when the reference is a scalar.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ScalarReferenceDetails">AWS
   * API Reference</a></p>
   */
  class ScalarReferenceDetails
  {
  public:
    AWS_RDS_API ScalarReferenceDetails();
    AWS_RDS_API ScalarReferenceDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API ScalarReferenceDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The value of a scalar reference.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value of a scalar reference.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of a scalar reference.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of a scalar reference.</p>
     */
    inline ScalarReferenceDetails& WithValue(double value) { SetValue(value); return *this;}

  private:

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws

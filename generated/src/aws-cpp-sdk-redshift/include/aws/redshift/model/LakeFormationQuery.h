/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/redshift/model/ServiceAuthorization.h>
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
namespace Redshift
{
namespace Model
{

  /**
   * <p>The Lake Formation scope.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/LakeFormationQuery">AWS
   * API Reference</a></p>
   */
  class LakeFormationQuery
  {
  public:
    AWS_REDSHIFT_API LakeFormationQuery() = default;
    AWS_REDSHIFT_API LakeFormationQuery(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API LakeFormationQuery& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Determines whether the query scope is enabled or disabled.</p>
     */
    inline ServiceAuthorization GetAuthorization() const { return m_authorization; }
    inline bool AuthorizationHasBeenSet() const { return m_authorizationHasBeenSet; }
    inline void SetAuthorization(ServiceAuthorization value) { m_authorizationHasBeenSet = true; m_authorization = value; }
    inline LakeFormationQuery& WithAuthorization(ServiceAuthorization value) { SetAuthorization(value); return *this;}
    ///@}
  private:

    ServiceAuthorization m_authorization{ServiceAuthorization::NOT_SET};
    bool m_authorizationHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

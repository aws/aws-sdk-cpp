/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/LakeFormationScopeUnion.h>
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
   * <p>A list of service integrations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ServiceIntegrationsUnion">AWS
   * API Reference</a></p>
   */
  class ServiceIntegrationsUnion
  {
  public:
    AWS_REDSHIFT_API ServiceIntegrationsUnion();
    AWS_REDSHIFT_API ServiceIntegrationsUnion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ServiceIntegrationsUnion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A list of scopes set up for Lake Formation integration.</p>
     */
    inline const Aws::Vector<LakeFormationScopeUnion>& GetLakeFormation() const{ return m_lakeFormation; }

    /**
     * <p>A list of scopes set up for Lake Formation integration.</p>
     */
    inline bool LakeFormationHasBeenSet() const { return m_lakeFormationHasBeenSet; }

    /**
     * <p>A list of scopes set up for Lake Formation integration.</p>
     */
    inline void SetLakeFormation(const Aws::Vector<LakeFormationScopeUnion>& value) { m_lakeFormationHasBeenSet = true; m_lakeFormation = value; }

    /**
     * <p>A list of scopes set up for Lake Formation integration.</p>
     */
    inline void SetLakeFormation(Aws::Vector<LakeFormationScopeUnion>&& value) { m_lakeFormationHasBeenSet = true; m_lakeFormation = std::move(value); }

    /**
     * <p>A list of scopes set up for Lake Formation integration.</p>
     */
    inline ServiceIntegrationsUnion& WithLakeFormation(const Aws::Vector<LakeFormationScopeUnion>& value) { SetLakeFormation(value); return *this;}

    /**
     * <p>A list of scopes set up for Lake Formation integration.</p>
     */
    inline ServiceIntegrationsUnion& WithLakeFormation(Aws::Vector<LakeFormationScopeUnion>&& value) { SetLakeFormation(std::move(value)); return *this;}

    /**
     * <p>A list of scopes set up for Lake Formation integration.</p>
     */
    inline ServiceIntegrationsUnion& AddLakeFormation(const LakeFormationScopeUnion& value) { m_lakeFormationHasBeenSet = true; m_lakeFormation.push_back(value); return *this; }

    /**
     * <p>A list of scopes set up for Lake Formation integration.</p>
     */
    inline ServiceIntegrationsUnion& AddLakeFormation(LakeFormationScopeUnion&& value) { m_lakeFormationHasBeenSet = true; m_lakeFormation.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<LakeFormationScopeUnion> m_lakeFormation;
    bool m_lakeFormationHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

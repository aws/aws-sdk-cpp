/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/LakeFormationScopeUnion.h>
#include <aws/redshift/model/S3AccessGrantsScopeUnion.h>
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


    ///@{
    /**
     * <p>A list of scopes set up for Lake Formation integration.</p>
     */
    inline const Aws::Vector<LakeFormationScopeUnion>& GetLakeFormation() const{ return m_lakeFormation; }
    inline bool LakeFormationHasBeenSet() const { return m_lakeFormationHasBeenSet; }
    inline void SetLakeFormation(const Aws::Vector<LakeFormationScopeUnion>& value) { m_lakeFormationHasBeenSet = true; m_lakeFormation = value; }
    inline void SetLakeFormation(Aws::Vector<LakeFormationScopeUnion>&& value) { m_lakeFormationHasBeenSet = true; m_lakeFormation = std::move(value); }
    inline ServiceIntegrationsUnion& WithLakeFormation(const Aws::Vector<LakeFormationScopeUnion>& value) { SetLakeFormation(value); return *this;}
    inline ServiceIntegrationsUnion& WithLakeFormation(Aws::Vector<LakeFormationScopeUnion>&& value) { SetLakeFormation(std::move(value)); return *this;}
    inline ServiceIntegrationsUnion& AddLakeFormation(const LakeFormationScopeUnion& value) { m_lakeFormationHasBeenSet = true; m_lakeFormation.push_back(value); return *this; }
    inline ServiceIntegrationsUnion& AddLakeFormation(LakeFormationScopeUnion&& value) { m_lakeFormationHasBeenSet = true; m_lakeFormation.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of scopes set up for S3 Access Grants integration.</p>
     */
    inline const Aws::Vector<S3AccessGrantsScopeUnion>& GetS3AccessGrants() const{ return m_s3AccessGrants; }
    inline bool S3AccessGrantsHasBeenSet() const { return m_s3AccessGrantsHasBeenSet; }
    inline void SetS3AccessGrants(const Aws::Vector<S3AccessGrantsScopeUnion>& value) { m_s3AccessGrantsHasBeenSet = true; m_s3AccessGrants = value; }
    inline void SetS3AccessGrants(Aws::Vector<S3AccessGrantsScopeUnion>&& value) { m_s3AccessGrantsHasBeenSet = true; m_s3AccessGrants = std::move(value); }
    inline ServiceIntegrationsUnion& WithS3AccessGrants(const Aws::Vector<S3AccessGrantsScopeUnion>& value) { SetS3AccessGrants(value); return *this;}
    inline ServiceIntegrationsUnion& WithS3AccessGrants(Aws::Vector<S3AccessGrantsScopeUnion>&& value) { SetS3AccessGrants(std::move(value)); return *this;}
    inline ServiceIntegrationsUnion& AddS3AccessGrants(const S3AccessGrantsScopeUnion& value) { m_s3AccessGrantsHasBeenSet = true; m_s3AccessGrants.push_back(value); return *this; }
    inline ServiceIntegrationsUnion& AddS3AccessGrants(S3AccessGrantsScopeUnion&& value) { m_s3AccessGrantsHasBeenSet = true; m_s3AccessGrants.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<LakeFormationScopeUnion> m_lakeFormation;
    bool m_lakeFormationHasBeenSet = false;

    Aws::Vector<S3AccessGrantsScopeUnion> m_s3AccessGrants;
    bool m_s3AccessGrantsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

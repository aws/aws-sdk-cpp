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
    AWS_REDSHIFT_API ServiceIntegrationsUnion() = default;
    AWS_REDSHIFT_API ServiceIntegrationsUnion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ServiceIntegrationsUnion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A list of scopes set up for Lake Formation integration.</p>
     */
    inline const Aws::Vector<LakeFormationScopeUnion>& GetLakeFormation() const { return m_lakeFormation; }
    inline bool LakeFormationHasBeenSet() const { return m_lakeFormationHasBeenSet; }
    template<typename LakeFormationT = Aws::Vector<LakeFormationScopeUnion>>
    void SetLakeFormation(LakeFormationT&& value) { m_lakeFormationHasBeenSet = true; m_lakeFormation = std::forward<LakeFormationT>(value); }
    template<typename LakeFormationT = Aws::Vector<LakeFormationScopeUnion>>
    ServiceIntegrationsUnion& WithLakeFormation(LakeFormationT&& value) { SetLakeFormation(std::forward<LakeFormationT>(value)); return *this;}
    template<typename LakeFormationT = LakeFormationScopeUnion>
    ServiceIntegrationsUnion& AddLakeFormation(LakeFormationT&& value) { m_lakeFormationHasBeenSet = true; m_lakeFormation.emplace_back(std::forward<LakeFormationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of scopes set up for S3 Access Grants integration.</p>
     */
    inline const Aws::Vector<S3AccessGrantsScopeUnion>& GetS3AccessGrants() const { return m_s3AccessGrants; }
    inline bool S3AccessGrantsHasBeenSet() const { return m_s3AccessGrantsHasBeenSet; }
    template<typename S3AccessGrantsT = Aws::Vector<S3AccessGrantsScopeUnion>>
    void SetS3AccessGrants(S3AccessGrantsT&& value) { m_s3AccessGrantsHasBeenSet = true; m_s3AccessGrants = std::forward<S3AccessGrantsT>(value); }
    template<typename S3AccessGrantsT = Aws::Vector<S3AccessGrantsScopeUnion>>
    ServiceIntegrationsUnion& WithS3AccessGrants(S3AccessGrantsT&& value) { SetS3AccessGrants(std::forward<S3AccessGrantsT>(value)); return *this;}
    template<typename S3AccessGrantsT = S3AccessGrantsScopeUnion>
    ServiceIntegrationsUnion& AddS3AccessGrants(S3AccessGrantsT&& value) { m_s3AccessGrantsHasBeenSet = true; m_s3AccessGrants.emplace_back(std::forward<S3AccessGrantsT>(value)); return *this; }
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

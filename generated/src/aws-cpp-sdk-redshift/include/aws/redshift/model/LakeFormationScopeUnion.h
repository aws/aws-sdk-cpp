/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/redshift/model/LakeFormationQuery.h>
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
   * <p>A list of scopes set up for Lake Formation integration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/LakeFormationScopeUnion">AWS
   * API Reference</a></p>
   */
  class LakeFormationScopeUnion
  {
  public:
    AWS_REDSHIFT_API LakeFormationScopeUnion() = default;
    AWS_REDSHIFT_API LakeFormationScopeUnion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API LakeFormationScopeUnion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Lake Formation scope.</p>
     */
    inline const LakeFormationQuery& GetLakeFormationQuery() const { return m_lakeFormationQuery; }
    inline bool LakeFormationQueryHasBeenSet() const { return m_lakeFormationQueryHasBeenSet; }
    template<typename LakeFormationQueryT = LakeFormationQuery>
    void SetLakeFormationQuery(LakeFormationQueryT&& value) { m_lakeFormationQueryHasBeenSet = true; m_lakeFormationQuery = std::forward<LakeFormationQueryT>(value); }
    template<typename LakeFormationQueryT = LakeFormationQuery>
    LakeFormationScopeUnion& WithLakeFormationQuery(LakeFormationQueryT&& value) { SetLakeFormationQuery(std::forward<LakeFormationQueryT>(value)); return *this;}
    ///@}
  private:

    LakeFormationQuery m_lakeFormationQuery;
    bool m_lakeFormationQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws

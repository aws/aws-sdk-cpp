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
    AWS_REDSHIFT_API LakeFormationScopeUnion();
    AWS_REDSHIFT_API LakeFormationScopeUnion(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API LakeFormationScopeUnion& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Lake Formation scope.</p>
     */
    inline const LakeFormationQuery& GetLakeFormationQuery() const{ return m_lakeFormationQuery; }

    /**
     * <p>The Lake Formation scope.</p>
     */
    inline bool LakeFormationQueryHasBeenSet() const { return m_lakeFormationQueryHasBeenSet; }

    /**
     * <p>The Lake Formation scope.</p>
     */
    inline void SetLakeFormationQuery(const LakeFormationQuery& value) { m_lakeFormationQueryHasBeenSet = true; m_lakeFormationQuery = value; }

    /**
     * <p>The Lake Formation scope.</p>
     */
    inline void SetLakeFormationQuery(LakeFormationQuery&& value) { m_lakeFormationQueryHasBeenSet = true; m_lakeFormationQuery = std::move(value); }

    /**
     * <p>The Lake Formation scope.</p>
     */
    inline LakeFormationScopeUnion& WithLakeFormationQuery(const LakeFormationQuery& value) { SetLakeFormationQuery(value); return *this;}

    /**
     * <p>The Lake Formation scope.</p>
     */
    inline LakeFormationScopeUnion& WithLakeFormationQuery(LakeFormationQuery&& value) { SetLakeFormationQuery(std::move(value)); return *this;}

  private:

    LakeFormationQuery m_lakeFormationQuery;
    bool m_lakeFormationQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
